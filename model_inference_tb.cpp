// =============================================================================
// tb_calibration.cpp
// HLS Testbench — reads calibration.txt and drives the DUT with pf_points
// and pf_features.
//
// Data layout in calibration.txt (per sample):
//   SAMPLE <i>
//   PF_POINTS     3 lines × 35 float32 values  -> pf_points[i][ch][particle]
//   PF_FEATURES   4 lines × 35 float32 values  -> pf_features[i][ch][particle]
//   PF_MASK       1 line  × 35 float32 values  -> pf_mask[i][0][particle]
//
// Dimensions mirror the original .npz arrays:
//   pf_points   (500, 3, 35)   -- user requested view as (500,1,3,35)
//   pf_features (500, 4, 35)   -- user requested view as (500,1,4,35)
//   pf_mask     (500, 1, 35)
// =============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ap_fixed.h>

// ---- adjust these to match your actual HLS top-level header ----------------
void entry(const ap_fixed<18,5> tensor_pf_points[1][3][35], const ap_fixed<18,5> tensor_pf_features[1][4][35], const ap_fixed<17,4> tensor_pf_mask[1][1][35], ap_fixed<17,4> tensor_MSE[1][4]);

// ----------------------------------------------------------------------------

// Dimensions
static const int N_SAMPLES    = 2000;
static const int N_PT_CH      = 3;   // pf_points channels
static const int N_FEAT_CH    = 4;   // pf_features channels
static const int N_PARTICLES  = 35;


// Storage for one sample
struct Sample {
    ap_fixed<18,5> pf_points  [1][N_PT_CH  ][N_PARTICLES];
    ap_fixed<18,5> pf_features[1][N_FEAT_CH][N_PARTICLES];
    ap_fixed<17,4> pf_mask    [1][1        ][N_PARTICLES];
};

// ---------------------------------------------------------------------------
// Parse the text file produced by calibration.npz → calibration.txt
// Returns number of samples actually read.
// ---------------------------------------------------------------------------
static int load_calibration(const char* path, Sample samples[N_SAMPLES])
{
    std::ifstream fin(path);
    if (!fin.is_open()) {
        std::cerr << "[TB] ERROR: cannot open " << path << "\n";
        return -1;
    }

    int n_read = 0;
    std::string line;

    while (std::getline(fin, line)) {
        // Skip comments and blank lines
        if (line.empty() || line[0] == '#') continue;

        if (line.rfind("SAMPLE ", 0) == 0) {
            int idx = std::atoi(line.c_str() + 7);
            if (idx < 0 || idx >= N_SAMPLES) {
                std::cerr << "[TB] WARNING: sample index " << idx
                          << " out of range, skipping.\n";
                continue;
            }
            Sample& s = samples[idx];

            // --- PF_POINTS ---
            std::getline(fin, line); // "PF_POINTS"
            for (int c = 0; c < N_PT_CH; ++c) {
                std::getline(fin, line);
                std::istringstream ss(line);
                for (int p = 0; p < N_PARTICLES; ++p)
                    ss >> s.pf_points[0][c][p];
            }

            // --- PF_FEATURES ---
            std::getline(fin, line); // "PF_FEATURES"
            for (int c = 0; c < N_FEAT_CH; ++c) {
                std::getline(fin, line);
                std::istringstream ss(line);
                for (int p = 0; p < N_PARTICLES; ++p)
                    ss >> s.pf_features[0][c][p];
            }

            // --- PF_MASK ---
            std::getline(fin, line); // "PF_MASK"
            std::getline(fin, line);
            {
                std::istringstream ss(line);
                for (int p = 0; p < N_PARTICLES; ++p)
                    ss >> s.pf_mask[0][0][p];
            }

            ++n_read;
        }
    }

    fin.close();
    std::cout << "[TB] Loaded " << n_read << " samples from " << path << "\n";
    return n_read;
}


// ---------------------------------------------------------------------------
// Main testbench
// ---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
    const char* data_file = (argc > 1) ? argv[1] : "C:/Users/dewei/Documents/B-reco-vitis-hls-smaller-model/network_inference/calibration.txt";

    // Allocate sample storage (stack is fine for 500 samples at this size)
    static Sample samples[N_SAMPLES];

    int n = load_calibration(data_file, samples);
    if (n <= 0) return 1;


    std::ofstream outputFile("C:/Users/dewei/Documents/B-reco-vitis-hls-smaller-model/network_inference/result.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        // ----------------------------------------------------------------
        // Pack inputs into whatever array/stream type your DUT expects.
        // The example below uses plain arrays — adapt to hls::stream<> or
        // ap_fixed<> as required by your design.
        // ----------------------------------------------------------------

        ap_fixed<18,5> in_points  [1][N_PT_CH  ][N_PARTICLES];
        ap_fixed<18,5> in_features[1][N_FEAT_CH][N_PARTICLES];
        ap_fixed<17,4> in_mask    [1][1        ][N_PARTICLES];

        for (int c = 0; c < N_PT_CH;   ++c)
            for (int p = 0; p < N_PARTICLES; ++p)
                in_points[0][c][p] = samples[i].pf_points[0][c][p];

        for (int c = 0; c < N_FEAT_CH; ++c)
            for (int p = 0; p < N_PARTICLES; ++p)
                in_features[0][c][p] = samples[i].pf_features[0][c][p];

        for (int p = 0; p < N_PARTICLES; ++p)
            in_mask[0][0][p] = samples[i].pf_mask[0][0][p];

        // ----------------------------------------------------------------
        // DUT call — replace with your actual function signature
        // ----------------------------------------------------------------
        ap_fixed<17,4> tensor_MSE[1][4]; // placeholder output
        entry(in_points, in_features, in_mask, tensor_MSE);

        for (int i = 0; i < 4; i++) {
            outputFile << tensor_MSE[0][i].to_float() << " ";
        }
        outputFile << std::endl;
        // ----------------------------------------------------------------
        // Check result
        // ----------------------------------------------------------------
        
    }
    outputFile.close();
    return 0;
}


