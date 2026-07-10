#include "weights/weights.h"

typedef ap_fixed<32,19> fixed;  /* accumulator: max=32767, 24 frac bits */
// (TODO: add creating command line here)
// (TODO: print creation date here )

// ONNX model:
// produced by pytorch, version 2.6.0
// ONNX IR version: 18
// Model documentation: 
/*

*/

#define MAX(X,Y) ( X > Y ? X : Y)
#define MIN(X,Y) ( X < Y ? X : Y)
#define CLIP(X,L) ( MAX(MIN(X,L), -L) )

#if __STDC_VERSION__ < 199901L
#define FUNC_PREFIX
#else
#define FUNC_PREFIX static inline
#endif

// moved to ../../hls/weights/tensor_fc_out_0_weight.cpp

static const ap_fixed<18,5> tensor_fc_out_0_bias[4] = 
{5.26303148269653320312f, -0.00697677489370107651f, -0.01401850022375583649f, 0.00305231986567378044f};
static const ap_fixed<18,5> tensor_mod_bn_fts_weight[4] = 
{0.78800481557846069336f, 1.66855263710021972656f, 1.64525485038757324219f, 1.54317665100097656250f};
static const ap_fixed<18,5> tensor_mod_bn_fts_bias[4] = 
{-0.73953855037689208984f, 0.01768168061971664429f, 0.07979720830917358398f, 0.04089630395174026489f};
static const ap_fixed<18,5> tensor_mod_bn_fts_running_mean[4] = 
{0.15127639472484588623f, -0.00010182819823967293f, -0.00007834918505977839f, 0.00008182097371900454f};
static const ap_fixed<18,5> tensor_mod_bn_fts_running_var[4] = 
{0.31553390622138977051f, 0.19122397899627685547f, 0.18912594020366668701f, 0.18888776004314422607f};
// moved to ../../hls/weights/tensor_mod_edge_convs_0_output_bn_weight.cpp

// moved to ../../hls/weights/tensor_mod_edge_convs_0_output_bn_bias.cpp

// moved to ../../hls/weights/tensor_mod_edge_convs_0_output_bn_running_mean.cpp

// moved to ../../hls/weights/tensor_mod_edge_convs_0_output_bn_running_var.cpp

// moved to ../../hls/weights/tensor_mod_fc_0_0_weight.cpp

// moved to ../../hls/weights/tensor_mod_fc_0_0_bias.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_169.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_170.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_172.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_173.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_175.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_176.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_178.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_179.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_181.cpp

// moved to ../../hls/weights/tensor_onnx__Conv_182.cpp

static const int64_t tensor__mod_edge_convs_0_Expand_static_shape[4] = 
{1, 4, 35, 8};
static const ap_fixed<17,4> tensor__mod_Constant_output_0 = 
0.00000000000000000000f;
static const ap_fixed<32,19> tensor__mod_Constant_1_output_0 = 
500.0f;
static const int64_t tensor_onnx__ReduceSum_55[1] = 
{-1};
static const ap_fixed<32,19> tensor__mod_Constant_2_output_0[1][1] = 
{
  {1.00000000000000000000f}
};
static const ap_fixed<17,4> tensor__mod_edge_convs_0_Constant_output_0 = 
-2.00000000000000000000f;
static const ap_fixed<17,4> tensor__mod_edge_convs_0_Constant_1_output_0 = 
2.00000000000000000000f;
static const int64_t tensor_onnx__ReduceSum_70[1] = 
{1};
static const int64_t tensor__mod_edge_convs_0_Constant_2_output_0[1] = 
{9};
static const int64_t tensor__mod_edge_convs_0_Constant_3_output_0[1] = 
{2};
static const int64_t tensor__mod_edge_convs_0_Constant_4_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_0_Constant_5_output_0[1] = 
{9223372036854775807};
static const int64_t tensor__mod_edge_convs_0_Constant_6_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_0_Constant_7_output_0[1][1][1] = 
{
  {
    {0}
  }
};
static const int64_t tensor__mod_edge_convs_0_Constant_8_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_0_Constant_9_output_0[2] = 
{-1, 4};
static const int64_t tensor__mod_edge_convs_0_Constant_10_output_0[4] = 
{1, 35, 8, 4};
static const int64_t tensor__mod_edge_convs_0_Constant_11_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_0_Constant_15_output_0[1] = 
{-1};


ap_fixed<32,19> tensor__mod_Mul_output_0[1][3][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_Transpose_output_0[1][35][3];
ap_fixed<32,19> tensor__mod_edge_convs_0_Mul_output_0[1][35][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_Transpose_1_output_0[1][35][1];
ap_fixed<32,19> tensor__mod_edge_convs_0_TopK_output_0[1][35][9];
int64_t tensor__mod_edge_convs_0_Slice_output_0[1][35][8];
int64_t tensor__mod_edge_convs_0_Reshape_output_0[280];
ap_fixed<19,6> tensor__mod_edge_convs_0_Reshape_2_output_0[1][35][8][4];
ap_fixed<19,6> tensor__mod_edge_convs_0_Unsqueeze_output_0[1][4][35][1];
ap_fixed<20,7> tensor__mod_edge_convs_0_Sub_2_output_0[1][4][35][8];
ap_fixed<19,6> tensor__mod_edge_convs_0_convs_0_Conv_output_0[1][32][35][8];
ap_fixed<19,6> tensor__mod_edge_convs_0_convs_1_Conv_output_0[1][32][35][8];
ap_fixed<20,7> tensor__mod_edge_convs_0_convs_2_Conv_output_0[1][32][35][8];
ap_fixed<20,7> tensor__mod_edge_convs_0_ReduceMean_output_0[1][32][35];
ap_fixed<20,7> tensor__mod_edge_convs_0_sc_act_Relu_output_0[1][32][35];
ap_fixed<19,6> tensor__mod_Mul_4_output_0[1][32][35];
ap_fixed<19,6> tensor__mod_fusion_block_fusion_block_0_Conv_output_0[1][128][35];
ap_fixed<19,6> tensor__mod_Mul_5_output_0[1][128][35];
ap_fixed<20,7> tensor__mod_Div_output_0[1][128];
ap_fixed<17,4> tensor__mod_fc_fc_0_fc_0_1_Relu_output_0[1][32];




ap_fixed<17,4> tensor__mod_Mul_1_output_0[1][4][35];
ap_fixed<19,6> tensor__mod_Mul_3_output_0[1][4][35];
ap_fixed<20,7> tensor__mod_edge_convs_0_Add_1_output_0[1][32][35];
ap_fixed<19,6> tensor__mod_edge_convs_0_output_bn_BatchNormalization_output_0[1][32][35];
ap_fixed<19,6> tensor__mod_Concat_output_0[1][32][35];
ap_fixed<19,6> tensor__mod_fusion_block_fusion_block_2_Relu_output_0[1][128][35];
ap_fixed<20,7> tensor__mod_ReduceSum_1_output_0[1][128];
ap_fixed<18,5> tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0[1][32];

ap_fixed<17,4> tensor__mod_Equal_output_0[1][1][35];

ap_fixed<32,19> tensor__mod_Mul_2_output_0[1][1][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_MatMul_output_0[1][35][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_Pow_output_0[1][3][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_Neg_output_0[1][1][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_Sub_1_output_0[1][35][35];
int64_t tensor__mod_edge_convs_0_Add_output_0[1][35][8];
ap_fixed<19,6> tensor__mod_edge_convs_0_Transpose_2_output_0[1][35][4];
ap_fixed<19,6> tensor__mod_edge_convs_0_Gather_output_0[280][4];
ap_fixed<19,6> tensor__mod_edge_convs_0_Transpose_3_output_0[1][4][35][8];
ap_fixed<20,7> tensor__mod_edge_convs_0_Concat_output_0[1][8][35][8];
ap_fixed<18,5> tensor__mod_edge_convs_0_acts_0_Relu_output_0[1][32][35][8];
ap_fixed<19,6> tensor__mod_edge_convs_0_acts_1_Relu_output_0[1][32][35][8];
ap_fixed<20,7> tensor__mod_edge_convs_0_acts_2_Relu_output_0[1][32][35][8];
ap_fixed<19,6> tensor__mod_edge_convs_0_sc_Conv_output_0[1][32][35];

ap_fixed<32,19> tensor__mod_ReduceSum_output_0[1][1];
ap_fixed<19,6> tensor__mod_bn_fts_BatchNormalization_output_0[1][4][35];
int32_t tensor__mod_Add_output_0[1][3][35];
ap_fixed<32,19> tensor__mod_edge_convs_0_ReduceSum_output_0[1][1][35];
int64_t tensor__mod_edge_convs_0_TopK_output_1[1][35][9];
ap_fixed<19,6> tensor__mod_edge_convs_0_Reshape_1_output_0[35][4];
ap_fixed<19,6> tensor__mod_edge_convs_0_Expand_output_0[1][4][35][8];

ap_fixed<19,6> tensor__mod_Max_output_0[1][1];

ap_fixed<32,19> tensor__mod_edge_convs_0_Sub_output_0[1][35][35];




/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul
 */

/* ================================================================
 * TREE REDUCTION HELPERS (auto-generated by apply_tree_reduction.py)
 *
 * Each tree_sum_N() reduces N ap_fixed values in log2(N) adder stages.
 * Intermediate arrays use ARRAY_PARTITION complete so HLS keeps them
 * in flip-flop registers with zero memory access latency.
 * Non-power-of-2 sizes are zero-padded to the next power of 2.
 * ================================================================ */

/* Tree-reduction: sum 3 fixed values, depth=2 */
static inline fixed tree_sum_3(const fixed v[3]) {
#pragma HLS INLINE
    fixed _p[4];
#pragma HLS ARRAY_PARTITION variable=_p complete
    for (int _i=0;_i<3;_i++){
#pragma HLS UNROLL
        _p[_i]=v[_i];}
    for (int _i=3;_i<4;_i++){
#pragma HLS UNROLL
        _p[_i]=(fixed)0;}
    fixed _l0[2];
#pragma HLS ARRAY_PARTITION variable=_l0 complete
    for (int _i=0;_i<2;_i++){
#pragma HLS UNROLL
        _l0[_i]=_p[_i*2]+_p[_i*2+1];}
    return _l0[0]+_l0[1];
}

/* Tree-reduction: sum 4 fixed values, depth=2 */
static inline fixed tree_sum_4(const fixed v[4]) {
#pragma HLS INLINE
    fixed _l0[2];
#pragma HLS ARRAY_PARTITION variable=_l0 complete
    for (int _i=0;_i<2;_i++){
#pragma HLS UNROLL
        _l0[_i]=v[_i*2]+v[_i*2+1];}
    return _l0[0]+_l0[1];
}

/* Tree-reduction: sum 8 fixed values, depth=3 */
static inline fixed tree_sum_8(const fixed v[8]) {
#pragma HLS INLINE
    fixed _l0[4];
#pragma HLS ARRAY_PARTITION variable=_l0 complete
    fixed _l1[2];
#pragma HLS ARRAY_PARTITION variable=_l1 complete
    for (int _i=0;_i<4;_i++){
#pragma HLS UNROLL
        _l0[_i]=v[_i*2]+v[_i*2+1];}
    for (int _i=0;_i<2;_i++){
#pragma HLS UNROLL
        _l1[_i]=_l0[_i*2]+_l0[_i*2+1];}
    return _l1[0]+_l1[1];
}

/* Tree-reduction: sum 32 fixed values, depth=5 */
static inline fixed tree_sum_32(const fixed v[32]) {
#pragma HLS INLINE
    fixed _l0[16];
#pragma HLS ARRAY_PARTITION variable=_l0 complete
    fixed _l1[8];
#pragma HLS ARRAY_PARTITION variable=_l1 complete
    fixed _l2[4];
#pragma HLS ARRAY_PARTITION variable=_l2 complete
    fixed _l3[2];
#pragma HLS ARRAY_PARTITION variable=_l3 complete
    for (int _i=0;_i<16;_i++){
#pragma HLS UNROLL
        _l0[_i]=v[_i*2]+v[_i*2+1];}
    for (int _i=0;_i<8;_i++){
#pragma HLS UNROLL
        _l1[_i]=_l0[_i*2]+_l0[_i*2+1];}
    for (int _i=0;_i<4;_i++){
#pragma HLS UNROLL
        _l2[_i]=_l1[_i*2]+_l1[_i*2+1];}
    for (int _i=0;_i<2;_i++){
#pragma HLS UNROLL
        _l3[_i]=_l2[_i*2]+_l2[_i*2+1];}
    return _l3[0]+_l3[1];
}

/* Tree-reduction: sum 128 fixed values, depth=7 */
static inline fixed tree_sum_128(const fixed v[128]) {
#pragma HLS INLINE
    fixed a[64];
#pragma HLS ARRAY_PARTITION variable=a complete
    for (int i=0;i<64;i++){
#pragma HLS UNROLL
        a[i]=v[i*2]+v[i*2+1];}
    fixed b[32];
#pragma HLS ARRAY_PARTITION variable=b complete
    for (int i=0;i<32;i++){
#pragma HLS UNROLL
        b[i]=a[i*2]+a[i*2+1];}
    return tree_sum_32(b);
}

FUNC_PREFIX void node__mod_Mul( const ap_fixed<18,5> A[1][3][35], const ap_fixed<17,4> B[1][1][35], ap_fixed<32,19> C[1][3][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_1
 */
FUNC_PREFIX void node__mod_Mul_1( const ap_fixed<18,5> A[1][4][35], const ap_fixed<17,4> B[1][1][35], ap_fixed<17,4> C[1][4][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/Constant
 */


/*
 * Operand:           Equal
 * Name in ONNX file: /mod/Equal
 */
FUNC_PREFIX void node__mod_Equal( const ap_fixed<17,4> A[1][1][35], const ap_fixed<17,4> *B, ap_fixed<17,4> C[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Equal
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][0][i2] = A[0][0][i2]==*B;;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/Constant_1
 */


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_2
 */
FUNC_PREFIX void node__mod_Mul_2( const ap_fixed<17,4> A[1][1][35], const ap_fixed<32,19> *B, ap_fixed<32,19> C[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][0][i2] = A[0][0][i2]**B;;
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/ReduceSum
 */
FUNC_PREFIX void node__mod_ReduceSum( const ap_fixed<17,4> x[1][1][35], const int64_t axes[1], ap_fixed<32,19> y[1][1] )
{
#pragma HLS INLINE OFF

	/* ReduceSum over last axis (35). Tree reduce to break serial chain. */
	fixed buf[35];
#pragma HLS ARRAY_PARTITION variable=buf complete
	for (unsigned i2 = 0; i2<35; i2++) {
#pragma HLS UNROLL
		buf[i2] = x[0][0][i2];
	}
	fixed s = 0;
	for (unsigned i2 = 0; i2<35; i2++) {
#pragma HLS UNROLL
		s += buf[i2];
	}
	y[0][0] = s;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/Constant_2
 */


/*
 * Operand:           Max
 * Name in ONNX file: /mod/Max
 */
FUNC_PREFIX void node__mod_Max( const ap_fixed<32,19> in_0[1][1], const ap_fixed<32,19> in_1[1][1], ap_fixed<19,6> output[1][1] )
{
#pragma HLS INLINE OFF

	/* Max
	   Implemented with Elementwise_variadic template.
	 */
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<1; i1++) {
		output[i0][i1] = 
			MAX(in_0[0][0], 
			MAX(in_0[0][0], 
				in_1[0][0]));
	}
	}
}

/*
 * Operand:           BatchNormalization
 * Name in ONNX file: /mod/bn_fts/BatchNormalization
 */
FUNC_PREFIX void node__mod_bn_fts_BatchNormalization( const ap_fixed<17,4> X[1][4][35], const ap_fixed<18,5> scale[4], const ap_fixed<18,5> bias[4], const ap_fixed<18,5> mean[4], const ap_fixed<18,5> var[4], ap_fixed<19,6> output[1][4][35] )
{
#pragma HLS INLINE OFF

	/* BatchNormalization
	 * epsilon = 0.00000999999974737875
	 * momentum = 0.89999997615814208984
	 */

	for( int32_t c=0; c<4; c++ ) {
		/* Fold scale/var into one multiplier per channel (var is runtime,
		   but hoisting the divide out of the inner loop removes 34 divides). */
		ap_fixed<18,5> k = scale[c] / var[c];
		for( uint32_t i2=0; i2<35; i2++ ) {
		#pragma HLS PIPELINE II=1
			output[0][c][i2] = ( X[0][c][i2] - mean[c] ) * k + bias[c];
		}
	}
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_3
 */
FUNC_PREFIX void node__mod_Mul_3( const ap_fixed<19,6> A[1][4][35], const ap_fixed<17,4> B[1][1][35], ap_fixed<19,6> C[1][4][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/Add
 */
FUNC_PREFIX void node__mod_Add( const ap_fixed<32,19> A[1][3][35], const ap_fixed<32,19> B[1][1][35], int32_t C[1][3][35] )
{
#pragma HLS INLINE OFF

	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose( const int32_t input[1][3][35], ap_fixed<32,19> output[1][35][3] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i1=0; i1<3; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		output[0][i2][i1] = input[0][i1][i2];
	}
	}
}

/*
 * Operand:           MatMul
 * Name in ONNX file: /mod/edge_convs.0/MatMul
 */

FUNC_PREFIX void node__mod_edge_convs_0_MatMul( const ap_fixed<32,19> A[1][35][3], const int32_t B[1][3][35], ap_fixed<32,19> Y[1][35][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=A complete dim=3
#pragma HLS ARRAY_PARTITION variable=B complete dim=2
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=5 dim=3
#pragma HLS ARRAY_PARTITION variable=Y cyclic factor=5 dim=3

for (unsigned i = 0; i < 35; i++) {
for (unsigned j = 0; j < 35; j += 5) {
#pragma HLS PIPELINE II=1
    /* 5 output columns per cycle, each a length-3 dot product. */
    for (unsigned jj = 0; jj < 5; jj++) {
    #pragma HLS UNROLL
        fixed _buf_acc[3];
        #pragma HLS ARRAY_PARTITION variable=_buf_acc complete
        for (int _k=0; _k<3; _k++) {
        #pragma HLS UNROLL
            _buf_acc[_k] = A[0][i][_k] * B[0][_k][j+jj]; }
        Y[0][i][j+jj] = tree_sum_3(_buf_acc);
    }
}
}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.0/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_0_Mul( const ap_fixed<32,19> A[1][35][35], const ap_fixed<17,4> *B, ap_fixed<32,19> C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	#pragma HLS ARRAY_PARTITION variable=A complete dim=3
	#pragma HLS ARRAY_PARTITION variable=C complete dim=3

	for (unsigned i1=0; i1<35; i1++)
	{
	#pragma HLS PIPELINE II=1
		for (unsigned i2=0; i2<35; i2++)
		{
			#pragma HLS UNROLL
			C[0][i1][i2] = A[0][i1][i2]**B;
		}
	}
}

/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.0/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_0_Pow( const int32_t A[1][3][35], const ap_fixed<17,4> *B, ap_fixed<32,19> C[1][3][35] )
{
#pragma HLS INLINE OFF

	/* Pow
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	/* Exponent is the constant 2.0 -> replace floating-point powf() with a
	   fixed-point square. Removes the softfloat pow core entirely. */
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		fixed a = (fixed)A[0][i1][i2];
		C[0][i1][i2] = a * a;
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/edge_convs.0/ReduceSum
 */
FUNC_PREFIX void node__mod_edge_convs_0_ReduceSum( const ap_fixed<32,19> x[1][3][35], const int64_t axes[1], ap_fixed<32,19> y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* ReduceSum over axis 1 (size 3), keepdims. Sum the 3 channels per column
	   in parallel; pipeline across the 35 columns. */
	for (unsigned i2 = 0; i2<35; i2++) {
	#pragma HLS PIPELINE II=1
		y[0][0][i2] = x[0][0][i2] + x[0][1][i2] + x[0][2][i2];
	}
}

/*
 * Operand:           Neg
 * Name in ONNX file: /mod/edge_convs.0/Neg
 */
FUNC_PREFIX void node__mod_edge_convs_0_Neg( const ap_fixed<32,19> X[1][1][35], ap_fixed<32,19> Y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Neg
	   Implemented with Elementwise template.
	   alpha = 0.00000000000000000000
	   beta = 0.00000000000000000000
	*/
	for (unsigned i2=0; i2<35; i2++) {
	#pragma HLS PIPELINE II=1
		Y[0][0][i2] =  -X[0][0][i2];
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub( const ap_fixed<32,19> A[1][1][35], const ap_fixed<32,19> B[1][35][35], ap_fixed<32,19> C[1][35][35] )
{
	#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	#pragma HLS ARRAY_PARTITION variable=A complete dim=3
	#pragma HLS ARRAY_PARTITION variable=B complete dim=3
	#pragma HLS ARRAY_PARTITION variable=C complete dim=3

	for (unsigned i1=0; i1<35; i1++)
	{
	#pragma HLS PIPELINE II=1
		for (unsigned i2=0; i2<35; i2++)
		{
		#pragma HLS UNROLL
			C[0][i1][i2] = A[0][0][i2] - B[0][i1][i2];
		}
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_1( const ap_fixed<32,19> input[1][1][35], ap_fixed<32,19> output[1][35][1] )
{
#pragma HLS INLINE OFF

	/* Transpose perm = 0 2 1 */
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		output[0][i2][0] = input[0][0][i2];
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub_1( const ap_fixed<32,19> A[1][35][35], const ap_fixed<32,19> B[1][35][1], ap_fixed<32,19> C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	#pragma HLS ARRAY_PARTITION variable=A complete dim=2
	#pragma HLS ARRAY_PARTITION variable=B complete dim=2
	#pragma HLS ARRAY_PARTITION variable=C complete dim=2

	for (unsigned i2=0; i2<35; i2++) {
		#pragma HLS PIPELINE II=1
		for (unsigned i1=0; i1<35; i1++)
		{
		#pragma HLS UNROLL
			C[0][i1][i2] = A[0][i1][i2]-B[0][i1][0];
		}
	}
}


/*topk
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.0/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_0_TopK( const ap_fixed<32,19> X[1][35][35], const int64_t K[1], ap_fixed<32,19> Values[1][35][9], int64_t Indices[1][35][9] )
{
	#pragma HLS INLINE OFF
    for (int i1 = 0; i1 < 35; i1++) {
		#pragma HLS PIPELINE II=1                 // pipeline over rows

        ap_fixed<32,19> vreg[9];
        int64_t ireg[9];
		#pragma HLS ARRAY_PARTITION variable=vreg complete dim=1
		#pragma HLS ARRAY_PARTITION variable=ireg complete dim=1

        for (int d = 0; d < 9; d++) {
			#pragma HLS UNROLL
            vreg[d] = -1e10;
            ireg[d] = -1;
        }

        for (int k = 0; k < 35; k++) {
            ap_fixed<32,19> x = X[0][i1][k];

            // 1) compute all comparisons in parallel
            bool gt[9];
            for (int d = 0; d < 9; d++) {
				#pragma HLS UNROLL
				gt[d] = (x > vreg[d]);
			}

            // 2) insertion position = first true
            // 3) parallel compare-and-shift, no serial shift loop
            ap_fixed<32,19> nv[9];
            int64_t ni[9];
            for (int d = 0; d < 9; d++) {
				#pragma HLS UNROLL
                bool ins = gt[d] && (d == 0 || !gt[d-1]); // this slot gets x
                bool shft = gt[d] && !ins;                 // shifted from d-1
                if (ins) { 
					nv[d] = x;        
					ni[d] = k;        
				}
                else if (shft) { 
					nv[d] = vreg[d-1];ni[d] = ireg[d-1];
				}
                else { 
					nv[d] = vreg[d];  
					ni[d] = ireg[d];
				}
            }
			
            for (int d = 0; d < 9; d++) { 
				#pragma HLS UNROLL
				vreg[d] = nv[d]; 
				ireg[d] = ni[d]; 
			}
        }

        for (int d = 0; d < 9; d++) {
			#pragma HLS UNROLL
            Values[0][i1][d]  = vreg[d];
            Indices[0][i1][d] = ireg[d];
        }
    }
}

/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.0/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_0_Slice( const int64_t data[1][35][9], const int64_t starts[1], const int64_t ends[1], const int64_t axes[1], const int64_t steps[1], int64_t output[1][35][8] )
{
#pragma HLS INLINE OFF

	for (unsigned o1=0; o1<35; o1++) {
	#pragma HLS PIPELINE II=1
	for (unsigned o2=0; o2<8; o2++) {
	#pragma HLS UNROLL
		output[0][o1][o2] = data[0][o1][o2+1];
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_7
 */


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.0/Add
 */
FUNC_PREFIX void node__mod_edge_convs_0_Add( const int64_t A[1][35][8], const int64_t B[1][1][1], int64_t C[1][35][8] )
{
#pragma HLS INLINE OFF

	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<8; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_8
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape( const int64_t data[1][35][8], const int64_t shape[1], int64_t reshaped[280] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	int64_t *data_ptr = (int64_t*)data;
	int64_t *reshaped_ptr = (int64_t*)reshaped;
	uint32_t i;
	for( i=0; i<280; i++ ) {
	#pragma HLS PIPELINE II=1
		reshaped_ptr[i] = data_ptr[i];
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_2( const ap_fixed<19,6> input[1][4][35], ap_fixed<19,6> output[1][35][4] )
{
#pragma HLS INLINE OFF

	/* Transpose perm = 0 2 1 */
	for( uint32_t i1=0; i1<4; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		output[0][i2][i1] = input[0][i1][i2];
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_9
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_1( const ap_fixed<19,6> data[1][35][4], const int64_t shape[2], ap_fixed<19,6> reshaped[35][4] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	ap_fixed<19,6> *data_ptr = (ap_fixed<19,6>*)data;
	ap_fixed<19,6> *reshaped_ptr = (ap_fixed<19,6>*)reshaped;
	uint32_t i;
	for( i=0; i<140; i++ ) {
	#pragma HLS PIPELINE II=1
		reshaped_ptr[i] = data_ptr[i];
	}
}

/*
 * Operand:           Gather
 * Name in ONNX file: /mod/edge_convs.0/Gather
 */
FUNC_PREFIX void node__mod_edge_convs_0_Gather( const ap_fixed<19,6> X[35][4], const int64_t indices[280], ap_fixed<19,6> Y[280][4] )
{
#pragma HLS INLINE OFF

	/* Gather
	   axis = 0
	 */
#pragma HLS ARRAY_PARTITION variable=X complete dim=2
#pragma HLS ARRAY_PARTITION variable=Y complete dim=2
	for (unsigned i0=0; i0<280; i0++)
	{
	#pragma HLS PIPELINE II=1
		int32_t idx = indices[i0];
		idx = idx < 0 ? 35+idx : idx;
		for (unsigned i1=0; i1<4; i1++) {
		#pragma HLS UNROLL
			Y[i0][i1] = X[idx][i1];
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_10
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_2( const ap_fixed<19,6> data[280][4], const int64_t shape[4], ap_fixed<19,6> reshaped[1][35][8][4] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	ap_fixed<19,6> *data_ptr = (ap_fixed<19,6>*)data;
	ap_fixed<19,6> *reshaped_ptr = (ap_fixed<19,6>*)reshaped;
	uint32_t i;
	for( i=0; i<1120; i++ ) {
	#pragma HLS PIPELINE II=1
		reshaped_ptr[i] = data_ptr[i];
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_3
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_3( const ap_fixed<19,6> input[1][35][8][4], ap_fixed<19,6> output[1][4][35][8] )
{
#pragma HLS INLINE OFF

	/* Transpose perm = 0 3 1 2 */
	for( uint32_t i1=0; i1<35; i1++ ) {
	for( uint32_t i2=0; i2<8; i2++ ) {
	#pragma HLS PIPELINE II=1
	for( uint32_t i3=0; i3<4; i3++ ) {
	#pragma HLS UNROLL
		output[0][i3][i1][i2] = input[0][i1][i2][i3];
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_11
 */


/*
 * Operand:           Unsqueeze
 * Name in ONNX file: /mod/edge_convs.0/Unsqueeze
 */
FUNC_PREFIX void node__mod_edge_convs_0_Unsqueeze( const ap_fixed<19,6> input[1][4][35], const int64_t axes_tensor[1], ap_fixed<19,6> output[1][4][35][1] )
{
#pragma HLS INLINE OFF

	/* Unsqueeze */
	for (uint32_t i1 = 0; i1 < 4; i1++) {
		for (uint32_t i2 = 0; i2 < 35; i2++) {
		#pragma HLS PIPELINE II=1
			output[0][i1][i2][0] = input[0][i1][i2];
		}
	}
}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.0/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_0_Expand( const ap_fixed<19,6> input[1][4][35][1], const int64_t shape[4], ap_fixed<19,6> output[1][4][35][8] )
{
#pragma HLS INLINE OFF

	/* Expand */
	for( uint32_t o1=0; o1<4; o1++) {
	for( uint32_t o2=0; o2<35; o2++) {
	#pragma HLS PIPELINE II=1
	for( uint32_t o3=0; o3<8; o3++) {
	#pragma HLS UNROLL
		output[0][o1][o2][o3] = input[0][o1][o2][0];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub_2( const ap_fixed<19,6> A[1][4][35][8], const ap_fixed<19,6> B[1][4][35][8], ap_fixed<20,7> C[1][4][35][8] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
	for (unsigned i3=0; i3<8; i3++)
	{
	#pragma HLS UNROLL
		C[0][i1][i2][i3] = A[0][i1][i2][i3]-B[0][i1][i2][i3];;
	}
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/edge_convs.0/Concat
 */
FUNC_PREFIX void node__mod_edge_convs_0_Concat( const ap_fixed<19,6> input_0[1][4][35][8], const ap_fixed<20,7> input_1[1][4][35][8], ap_fixed<20,7> output[1][8][35][8] )
{
#pragma HLS INLINE OFF

	/* Concat along axis 1: copy both halves. */
	for (int64_t i1 = 0; i1 < 4; i1++) {
		for (int64_t i2 = 0; i2 < 35; i2++) {
		#pragma HLS PIPELINE II=1
			for (int64_t i3 = 0; i3 < 8; i3++) {
			#pragma HLS UNROLL
				output[0][i1 + 0][i2][i3] = input_0[0][i1][i2][i3];
				output[0][i1 + 4][i2][i3] = input_1[0][i1][i2][i3];
			}
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.0/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_0_Conv( const ap_fixed<20,7> x[1][8][35][8], const ap_fixed<18,5> w[32][8][1][1], const ap_fixed<18,5> bias[32], ap_fixed<19,6> y[1][32][35][8] )
{
	#pragma HLS INLINE OFF
	#pragma HLS ARRAY_PARTITION variable=x complete dim=2
	#pragma HLS ARRAY_PARTITION variable=x complete dim=4
	#pragma HLS ARRAY_PARTITION variable=w complete dim=1
	#pragma HLS ARRAY_PARTITION variable=w complete dim=2
	#pragma HLS ARRAY_PARTITION variable=bias complete dim=1
	#pragma HLS ARRAY_PARTITION variable=y complete dim=2
	#pragma HLS ARRAY_PARTITION variable=y complete dim=4

	for (uint32_t h = 0; h < 35; h++) {
	#pragma HLS PIPELINE II=1
		/* 32 output channels x 8 spatial positions, all in parallel. */
		for (uint32_t m = 0; m < 32; m++) {
		#pragma HLS UNROLL
			for (uint32_t i = 0; i < 8; i++) {
			#pragma HLS UNROLL
				fixed _buf_acc[8];
				#pragma HLS ARRAY_PARTITION variable=_buf_acc complete
				for (int _c=0; _c<8; _c++) {
				#pragma HLS UNROLL
					_buf_acc[_c] = x[0][_c][h][i] * w[m][_c][0][0]; }
				y[0][m][h][i] = bias[m] + tree_sum_8(_buf_acc);
			}
		}
	}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.0/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_0_Relu( const ap_fixed<19,6> X[1][32][35][8], ap_fixed<18,5> Y[1][32][35][8] )
{
	#pragma HLS INLINE OFF

   	// Give parallel access to the unrolled dimensions
	#pragma HLS ARRAY_PARTITION variable=X complete dim=4
	#pragma HLS ARRAY_PARTITION variable=Y complete dim=4
	#pragma HLS ARRAY_PARTITION variable=X cyclic factor=4 dim=2
	#pragma HLS ARRAY_PARTITION variable=Y cyclic factor=4 dim=2

    for (uint32_t i1 = 0; i1 < 32; i1 += 4) {
        for (uint32_t i2 = 0; i2 < 35; i2++) {
        #pragma HLS PIPELINE II=1
            for (uint32_t ii = 0; ii < 4; ii++) {
            #pragma HLS UNROLL
                for (uint32_t i3 = 0; i3 < 8; i3++) {
                #pragma HLS UNROLL
                    ap_fixed<19,6> x = X[0][i1+ii][i2][i3];
                    Y[0][i1+ii][i2][i3] = (x > 0) ? (ap_fixed<18,5>)x : (ap_fixed<18,5>)0;
                }
            }
        }
    }
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.1/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_1_Conv( const ap_fixed<18,5> x[1][32][35][8], const ap_fixed<18,5> w[32][32][1][1], const ap_fixed<18,5> bias[32], ap_fixed<19,6> y[1][32][35][8] )
{
	#pragma HLS INLINE OFF

	#pragma HLS ARRAY_PARTITION variable=x complete dim=2
	#pragma HLS ARRAY_PARTITION variable=x complete dim=4
	#pragma HLS ARRAY_PARTITION variable=w cyclic factor=4 dim=1
	#pragma HLS ARRAY_PARTITION variable=w complete dim=2
	#pragma HLS ARRAY_PARTITION variable=bias cyclic factor=4 dim=1
	#pragma HLS ARRAY_PARTITION variable=y cyclic factor=4 dim=2
	#pragma HLS ARRAY_PARTITION variable=y complete dim=4

	for (uint32_t m = 0; m < 32; m += 4) {
		for (uint32_t h = 0; h < 35; h++) {
		#pragma HLS PIPELINE II=1
			/* 8 output channels x 8 spatial positions per cycle. */
			for (uint32_t mm = 0; mm < 4; mm++) {
			#pragma HLS UNROLL
				for (uint32_t i = 0; i < 8; i++) {
				#pragma HLS UNROLL
					fixed _buf_acc[32];
					#pragma HLS ARRAY_PARTITION variable=_buf_acc complete
					for (int _c=0; _c<32; _c++) {
					#pragma HLS UNROLL
						_buf_acc[_c] = x[0][_c][h][i] * w[m+mm][_c][0][0];
					}
					y[0][m+mm][h][i] = bias[m+mm] + tree_sum_32(_buf_acc);
				}
			}
		}
	}
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.1/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_1_Relu( const ap_fixed<19,6> X[1][32][35][8], ap_fixed<19,6> Y[1][32][35][8] )
{
	#pragma HLS INLINE OFF
	#pragma HLS ARRAY_PARTITION variable=X complete dim=4
	#pragma HLS ARRAY_PARTITION variable=Y complete dim=4
	#pragma HLS ARRAY_PARTITION variable=X cyclic factor=4 dim=2
	#pragma HLS ARRAY_PARTITION variable=Y cyclic factor=4 dim=2

    for (uint32_t i1 = 0; i1 < 32; i1++) {
        for (uint32_t i2 = 0; i2 < 35; i2++) {
			#pragma HLS PIPELINE II=1
            for (uint32_t i3 = 0; i3 < 8; i3++) {
				#pragma HLS UNROLL
                ap_fixed<19,6> x = X[0][i1][i2][i3];
                Y[0][i1][i2][i3] = (x > 0) ? x : (ap_fixed<19,6>)0;
            }
        }
    }
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.2/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_2_Conv( const ap_fixed<19,6> x[1][32][35][8], const ap_fixed<18,5> w[32][32][1][1], const ap_fixed<18,5> bias[32], ap_fixed<20,7> y[1][32][35][8] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x complete dim=2
#pragma HLS ARRAY_PARTITION variable=x complete dim=4
#pragma HLS ARRAY_PARTITION variable=w complete dim=2
#pragma HLS ARRAY_PARTITION variable=y complete dim=4

for (uint32_t m = 0; m < 32; m++) {
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1
    for (uint32_t i = 0; i < 8; i++) {
    #pragma HLS UNROLL
        fixed _buf_acc[32];
        #pragma HLS ARRAY_PARTITION variable=_buf_acc complete
        for (int _c=0; _c<32; _c++) {
        #pragma HLS UNROLL
            _buf_acc[_c] = x[0][_c][h][i] * w[m][_c][0][0]; }
        y[0][m][h][i] = bias[m] + tree_sum_32(_buf_acc);
    }
}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.2/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_2_Relu( const ap_fixed<20,7> X[1][32][35][8], ap_fixed<20,7> Y[1][32][35][8] )
{
	#pragma HLS INLINE OFF
	#pragma HLS ARRAY_PARTITION variable=X complete dim=4
	#pragma HLS ARRAY_PARTITION variable=Y complete dim=4
	#pragma HLS ARRAY_PARTITION variable=X cyclic factor=4 dim=2
	#pragma HLS ARRAY_PARTITION variable=Y cyclic factor=4 dim=2

    for (uint32_t i1 = 0; i1 < 32; i1++) {
        for (uint32_t i2 = 0; i2 < 35; i2++) {
			#pragma HLS PIPELINE II=1
            for (uint32_t i3 = 0; i3 < 8; i3++) {
				#pragma HLS UNROLL
                ap_fixed<19,6> x = X[0][i1][i2][i3];
                Y[0][i1][i2][i3] = (x > 0) ? (ap_fixed<20,7>)x : (ap_fixed<20,7>)0;
            }
        }
    }
}


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_15
 */


/*
 * Operand:           ReduceMean
 * Name in ONNX file: /mod/edge_convs.0/ReduceMean
 */
FUNC_PREFIX void node__mod_edge_convs_0_ReduceMean( const ap_fixed<20,7> x[1][32][35][8], const int64_t axes[1], ap_fixed<20,7> y[1][32][35] )
{
#pragma HLS INLINE OFF

	/* ReduceMean over last axis (8). Tree-sum the 8 elements, then divide by
	   8 (a constant power-of-two -> synthesizes as a shift, not a divider). */
#pragma HLS ARRAY_PARTITION variable=x complete dim=4
	for (unsigned i1 = 0; i1<32; i1++) {
		for (unsigned i2 = 0; i2<35; i2++) {
		#pragma HLS PIPELINE II=1
			fixed buf[8];
			#pragma HLS ARRAY_PARTITION variable=buf complete
			for (unsigned i3 = 0; i3<8; i3++) {
			#pragma HLS UNROLL
				buf[i3] = x[0][i1][i2][i3];
			}
			y[0][i1][i2] = tree_sum_8(buf) * (ap_fixed<20,7>)0.125;
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/sc/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_sc_Conv( const ap_fixed<19,6> x[1][4][35], const ap_fixed<18,5> w[32][4][1], const ap_fixed<18,5> bias[32], ap_fixed<19,6> y[1][32][35] )
{
	#pragma HLS INLINE OFF
	#pragma HLS ARRAY_PARTITION variable=x complete dim=2
	#pragma HLS ARRAY_PARTITION variable=w complete dim=1
	#pragma HLS ARRAY_PARTITION variable=w complete dim=2
	#pragma HLS ARRAY_PARTITION variable=bias complete dim=1
	#pragma HLS ARRAY_PARTITION variable=y complete dim=2

	for (uint32_t h = 0; h < 35; h++) {
	#pragma HLS PIPELINE II=1
		/* All 32 output channels computed in parallel, each a 4-wide MAC. */
		for (uint32_t m = 0; m < 32; m++) {
		#pragma HLS UNROLL
			fixed _buf_acc[4];
			#pragma HLS ARRAY_PARTITION variable=_buf_acc complete
			for (int _c=0; _c<4; _c++) {
			#pragma HLS UNROLL
				_buf_acc[_c] = x[0][_c][h] * w[m][_c][0];
			}
			y[0][m][h] = bias[m] + tree_sum_4(_buf_acc);
		}
	}
}


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.0/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Add_1( const ap_fixed<19,6> A[1][32][35], const ap_fixed<20,7> B[1][32][35], ap_fixed<20,7> C[1][32][35] )
{
#pragma HLS INLINE OFF

	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<32; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][i1][i2];;
	}
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/sc_act/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_sc_act_Relu( const ap_fixed<20,7> X[1][32][35], ap_fixed<20,7> Y[1][32][35] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i1=0; i1<32; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		ap_fixed<20,7> v = X[0][i1][i2];
		Y[0][i1][i2] = (v > 0) ? v : (ap_fixed<20,7>)0;
	}
	}
}


/*
 * Operand:           BatchNormalization
 * Name in ONNX file: /mod/edge_convs.0/output_bn/BatchNormalization
 */
FUNC_PREFIX void node__mod_edge_convs_0_output_bn_BatchNormalization( const ap_fixed<20,7> X[1][32][35], const ap_fixed<18,5> scale[32], const ap_fixed<18,5> bias[32], const ap_fixed<18,5> mean[32], const ap_fixed<18,5> var[32], ap_fixed<19,6> output[1][32][35] )
{
#pragma HLS INLINE OFF

	/* BatchNormalization
	 * epsilon = 0.00000999999974737875
	 * momentum = 0.89999997615814208984
	 */

	for( int32_t c=0; c<32; c++ ) {
		ap_fixed<18,5> k = scale[c] / var[c];   /* hoist divide out of inner loop */
		for( uint32_t i2=0; i2<35; i2++ ) {
		#pragma HLS PIPELINE II=1
			output[0][c][i2] = ( X[0][c][i2] - mean[c] ) * k + bias[c];
		}
	}
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_4
 */
FUNC_PREFIX void node__mod_Mul_4( const ap_fixed<19,6> A[1][32][35], const ap_fixed<17,4> B[1][1][35], ap_fixed<19,6> C[1][32][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i1=0; i1<32; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/Concat
 */
FUNC_PREFIX void node__mod_Concat( const ap_fixed<19,6> input_0[1][32][35], ap_fixed<19,6> output[1][32][35] )
{
#pragma HLS INLINE OFF

	/* Concat (single input -> straight copy) */
	for (int64_t i1 = 0; i1 < 32; i1++) {
		for (int64_t i2 = 0; i2 < 35; i2++) {
		#pragma HLS PIPELINE II=1
			output[0][i1][i2] = input_0[0][i1][i2];
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/fusion_block/fusion_block.0/Conv
 */

FUNC_PREFIX void node__mod_fusion_block_fusion_block_0_Conv( const ap_fixed<19,6> x[1][32][35], const ap_fixed<18,5> w[128][32][1], const ap_fixed<18,5> bias[128], ap_fixed<19,6> y[1][128][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x complete dim=2
#pragma HLS ARRAY_PARTITION variable=w complete dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=4 dim=1
#pragma HLS ARRAY_PARTITION variable=y cyclic factor=4 dim=2

for (uint32_t m = 0; m < 128; m += 4) {
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1
    /* 4 output channels per cycle, each a 32-wide MAC. */
    for (uint32_t mm = 0; mm < 4; mm++) {
    #pragma HLS UNROLL
        fixed _buf_acc[32];
        #pragma HLS ARRAY_PARTITION variable=_buf_acc complete
        for (int _c=0; _c<32; _c++) {
        #pragma HLS UNROLL
            _buf_acc[_c] = x[0][_c][h] * w[m+mm][_c][0]; }
        y[0][m+mm][h] = bias[m+mm] + tree_sum_32(_buf_acc);
    }
}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/fusion_block/fusion_block.2/Relu
 */

FUNC_PREFIX void node__mod_fusion_block_fusion_block_2_Relu( const ap_fixed<19,6> X[1][128][35], ap_fixed<19,6> Y[1][128][35] )
{
	#pragma HLS INLINE OFF


	/*Relu*/
	#pragma HLS ARRAY_PARTITION variable=X cyclic factor=4 dim=2
	#pragma HLS ARRAY_PARTITION variable=Y cyclic factor=4 dim=2

	/*Relu*/
	for( uint32_t i1=0; i1<128; i1++ ) {
		#pragma HLS PIPELINE II=1
		for( uint32_t i2=0; i2<35; i2++ ) {
			#pragma HLS UNROLL
			ap_fixed<19,6> v = X[0][i1][i2];
			Y[0][i1][i2] = (v > 0) ? v : (ap_fixed<19,6>)0;
		}
	}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_5
 */
FUNC_PREFIX void node__mod_Mul_5( const ap_fixed<19,6> A[1][128][35], const ap_fixed<17,4> B[1][1][35], ap_fixed<19,6> C[1][128][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	#pragma HLS ARRAY_PARTITION variable=A complete dim=3
	#pragma HLS ARRAY_PARTITION variable=B complete dim=3
	#pragma HLS ARRAY_PARTITION variable=C complete dim=3

	for (unsigned i1=0; i1<128; i1++)
	{
		#pragma HLS PIPELINE II=1
		for (unsigned i2=0; i2<35; i2++)
		{
			#pragma HLS UNROLL
			C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];
		}
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/ReduceSum_1
 */
FUNC_PREFIX void node__mod_ReduceSum_1( const ap_fixed<19,6> x[1][128][35], const int64_t axes[1], ap_fixed<20,7> y[1][128] )
{
#pragma HLS INLINE OFF

	/* ReduceSum over last axis (35). Partition the row and tree-reduce so the
	   35-way sum is not a serial chain; pipeline across the 128 channels. */
#pragma HLS ARRAY_PARTITION variable=x complete dim=3
	for (unsigned i1 = 0; i1<128; i1++) {
	#pragma HLS PIPELINE II=1
		fixed buf[35];
		#pragma HLS ARRAY_PARTITION variable=buf complete
		for (unsigned i2 = 0; i2<35; i2++) {
		#pragma HLS UNROLL
			buf[i2] = x[0][i1][i2];
		}
		fixed s = 0;
		for (unsigned i2 = 0; i2<35; i2++) {
		#pragma HLS UNROLL
			s += buf[i2];
		}
		y[0][i1] = s;
	}
}

/*
 * Operand:           Div
 * Name in ONNX file: /mod/Div
 */
FUNC_PREFIX void node__mod_Div( const ap_fixed<20,7> A[1][128], const ap_fixed<19,6> B[1][1], ap_fixed<20,7> C[1][128] )
{
#pragma HLS INLINE OFF

	/* Div
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	/* Div by a scalar broadcast across 128 lanes. Compute one reciprocal,
	   then multiply (removes 127 dividers). */
	ap_fixed<20,7> inv = (ap_fixed<20,7>)1 / B[0][0];
	for (unsigned i1=0; i1<128; i1++)
	{
	#pragma HLS PIPELINE II=1
		C[0][i1] = A[0][i1] * inv;
	}
}

/*
 * Operand:           Gemm
 * Name in ONNX file: /mod/fc/fc.0/fc.0.0/Gemm
 */

FUNC_PREFIX void node__mod_fc_fc_0_fc_0_0_Gemm( const ap_fixed<20,7> A[1][128], const ap_fixed<18,5> B[32][128], const ap_fixed<18,5> C[32], ap_fixed<18,5> Y[1][32] )
{
#pragma HLS INLINE OFF


#pragma HLS ARRAY_PARTITION variable=A complete dim=2
#pragma HLS ARRAY_PARTITION variable=B complete dim=2

for (uint32_t c = 0; c < 32; c++) {
#pragma HLS PIPELINE II=1
    fixed prod[128];
    #pragma HLS ARRAY_PARTITION variable=prod complete
    for (uint32_t i = 0; i < 128; i++) {
    #pragma HLS UNROLL
        prod[i] = A[0][i] * B[c][i];
    }
    Y[0][c] = C[c] + tree_sum_128(prod);
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/fc/fc.0/fc.0.1/Relu
 */

FUNC_PREFIX void node__mod_fc_fc_0_fc_0_1_Relu( const ap_fixed<18,5> X[1][32], ap_fixed<17,4> Y[1][32] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i1=0; i1<32; i1++ ) {
	#pragma HLS PIPELINE II=1
		ap_fixed<18,5> v = X[0][i1];
		Y[0][i1] = (v > 0) ? (ap_fixed<17,4>)v : (ap_fixed<17,4>)0;
	}
}


/*
 * Operand:           Gemm
 * Name in ONNX file: /fc_out/fc_out.0/Gemm
 */

FUNC_PREFIX void node__fc_out_fc_out_0_Gemm( const ap_fixed<17,4> A[1][32], const ap_fixed<18,5> B[4][32], const ap_fixed<18,5> C[4], ap_fixed<17,4> Y[1][4] )
{
#pragma HLS INLINE OFF


#pragma HLS ARRAY_PARTITION variable=A complete dim=2
#pragma HLS ARRAY_PARTITION variable=B complete dim=2

for (uint32_t c = 0; c < 4; c++) {
#pragma HLS PIPELINE II=1
    fixed prod[32];
    #pragma HLS ARRAY_PARTITION variable=prod complete
    for (uint32_t i = 0; i < 32; i++) {
    #pragma HLS UNROLL
        prod[i] = A[0][i] * B[c][i];
    }
    Y[0][c] = C[c] + tree_sum_32(prod);
}
}



void entry(const ap_fixed<18,5> tensor_pf_points[1][3][35], const ap_fixed<18,5> tensor_pf_features[1][4][35], const ap_fixed<17,4> tensor_pf_mask[1][1][35], ap_fixed<17,4> tensor_MSE[1][4]){
#pragma HLS INLINE OFF

	node__mod_Mul( tensor_pf_points, tensor_pf_mask, tensor__mod_Mul_output_0);
	node__mod_Mul_1( tensor_pf_features, tensor_pf_mask, tensor__mod_Mul_1_output_0);
	node__mod_Equal( tensor_pf_mask, &tensor__mod_Constant_output_0, tensor__mod_Equal_output_0);
	node__mod_Mul_2( tensor__mod_Equal_output_0, &tensor__mod_Constant_1_output_0, tensor__mod_Mul_2_output_0);
	node__mod_ReduceSum( tensor_pf_mask, tensor_onnx__ReduceSum_55, tensor__mod_ReduceSum_output_0);
	node__mod_Max( tensor__mod_ReduceSum_output_0, tensor__mod_Constant_2_output_0, tensor__mod_Max_output_0);
	node__mod_bn_fts_BatchNormalization( tensor__mod_Mul_1_output_0, tensor_mod_bn_fts_weight, tensor_mod_bn_fts_bias, tensor_mod_bn_fts_running_mean, tensor_mod_bn_fts_running_var, tensor__mod_bn_fts_BatchNormalization_output_0);
	node__mod_Mul_3( tensor__mod_bn_fts_BatchNormalization_output_0, tensor_pf_mask, tensor__mod_Mul_3_output_0);
	node__mod_Add( tensor__mod_Mul_output_0, tensor__mod_Mul_2_output_0, tensor__mod_Add_output_0);
	node__mod_edge_convs_0_Transpose( tensor__mod_Add_output_0, tensor__mod_edge_convs_0_Transpose_output_0);
	node__mod_edge_convs_0_MatMul( tensor__mod_edge_convs_0_Transpose_output_0, tensor__mod_Add_output_0, tensor__mod_edge_convs_0_MatMul_output_0);
	node__mod_edge_convs_0_Mul( tensor__mod_edge_convs_0_MatMul_output_0, &tensor__mod_edge_convs_0_Constant_output_0, tensor__mod_edge_convs_0_Mul_output_0);
	node__mod_edge_convs_0_Pow( tensor__mod_Add_output_0, &tensor__mod_edge_convs_0_Constant_1_output_0, tensor__mod_edge_convs_0_Pow_output_0);
	node__mod_edge_convs_0_ReduceSum( tensor__mod_edge_convs_0_Pow_output_0, tensor_onnx__ReduceSum_70, tensor__mod_edge_convs_0_ReduceSum_output_0);
	node__mod_edge_convs_0_Neg( tensor__mod_edge_convs_0_ReduceSum_output_0, tensor__mod_edge_convs_0_Neg_output_0);
	node__mod_edge_convs_0_Sub( tensor__mod_edge_convs_0_Neg_output_0, tensor__mod_edge_convs_0_Mul_output_0, tensor__mod_edge_convs_0_Sub_output_0);
	node__mod_edge_convs_0_Transpose_1( tensor__mod_edge_convs_0_ReduceSum_output_0, tensor__mod_edge_convs_0_Transpose_1_output_0);
	node__mod_edge_convs_0_Sub_1( tensor__mod_edge_convs_0_Sub_output_0, tensor__mod_edge_convs_0_Transpose_1_output_0, tensor__mod_edge_convs_0_Sub_1_output_0);
	node__mod_edge_convs_0_TopK( tensor__mod_edge_convs_0_Sub_1_output_0, tensor__mod_edge_convs_0_Constant_2_output_0, tensor__mod_edge_convs_0_TopK_output_0, tensor__mod_edge_convs_0_TopK_output_1);
	node__mod_edge_convs_0_Slice( tensor__mod_edge_convs_0_TopK_output_1, tensor__mod_edge_convs_0_Constant_4_output_0, tensor__mod_edge_convs_0_Constant_5_output_0, tensor__mod_edge_convs_0_Constant_3_output_0, tensor__mod_edge_convs_0_Constant_6_output_0, tensor__mod_edge_convs_0_Slice_output_0);
	node__mod_edge_convs_0_Add( tensor__mod_edge_convs_0_Slice_output_0, tensor__mod_edge_convs_0_Constant_7_output_0, tensor__mod_edge_convs_0_Add_output_0);
	node__mod_edge_convs_0_Reshape( tensor__mod_edge_convs_0_Add_output_0, tensor__mod_edge_convs_0_Constant_8_output_0, tensor__mod_edge_convs_0_Reshape_output_0);
	node__mod_edge_convs_0_Transpose_2( tensor__mod_Mul_3_output_0, tensor__mod_edge_convs_0_Transpose_2_output_0);
	node__mod_edge_convs_0_Reshape_1( tensor__mod_edge_convs_0_Transpose_2_output_0, tensor__mod_edge_convs_0_Constant_9_output_0, tensor__mod_edge_convs_0_Reshape_1_output_0);
	node__mod_edge_convs_0_Gather( tensor__mod_edge_convs_0_Reshape_1_output_0, tensor__mod_edge_convs_0_Reshape_output_0, tensor__mod_edge_convs_0_Gather_output_0);
	node__mod_edge_convs_0_Reshape_2( tensor__mod_edge_convs_0_Gather_output_0, tensor__mod_edge_convs_0_Constant_10_output_0, tensor__mod_edge_convs_0_Reshape_2_output_0);
	node__mod_edge_convs_0_Transpose_3( tensor__mod_edge_convs_0_Reshape_2_output_0, tensor__mod_edge_convs_0_Transpose_3_output_0);
	node__mod_edge_convs_0_Unsqueeze( tensor__mod_Mul_3_output_0, tensor__mod_edge_convs_0_Constant_11_output_0, tensor__mod_edge_convs_0_Unsqueeze_output_0);
	node__mod_edge_convs_0_Expand( tensor__mod_edge_convs_0_Unsqueeze_output_0, tensor__mod_edge_convs_0_Expand_static_shape, tensor__mod_edge_convs_0_Expand_output_0);
	node__mod_edge_convs_0_Sub_2( tensor__mod_edge_convs_0_Transpose_3_output_0, tensor__mod_edge_convs_0_Expand_output_0, tensor__mod_edge_convs_0_Sub_2_output_0);
	node__mod_edge_convs_0_Concat( tensor__mod_edge_convs_0_Expand_output_0, tensor__mod_edge_convs_0_Sub_2_output_0, tensor__mod_edge_convs_0_Concat_output_0);
	node__mod_edge_convs_0_convs_0_Conv( tensor__mod_edge_convs_0_Concat_output_0, tensor_onnx__Conv_169, tensor_onnx__Conv_170, tensor__mod_edge_convs_0_convs_0_Conv_output_0);
	node__mod_edge_convs_0_acts_0_Relu( tensor__mod_edge_convs_0_convs_0_Conv_output_0, tensor__mod_edge_convs_0_acts_0_Relu_output_0);
	node__mod_edge_convs_0_convs_1_Conv( tensor__mod_edge_convs_0_acts_0_Relu_output_0, tensor_onnx__Conv_172, tensor_onnx__Conv_173, tensor__mod_edge_convs_0_convs_1_Conv_output_0);
	node__mod_edge_convs_0_acts_1_Relu( tensor__mod_edge_convs_0_convs_1_Conv_output_0, tensor__mod_edge_convs_0_acts_1_Relu_output_0);
	node__mod_edge_convs_0_convs_2_Conv( tensor__mod_edge_convs_0_acts_1_Relu_output_0, tensor_onnx__Conv_175, tensor_onnx__Conv_176, tensor__mod_edge_convs_0_convs_2_Conv_output_0);
	node__mod_edge_convs_0_acts_2_Relu( tensor__mod_edge_convs_0_convs_2_Conv_output_0, tensor__mod_edge_convs_0_acts_2_Relu_output_0);
	node__mod_edge_convs_0_ReduceMean( tensor__mod_edge_convs_0_acts_2_Relu_output_0, tensor__mod_edge_convs_0_Constant_15_output_0, tensor__mod_edge_convs_0_ReduceMean_output_0);
	node__mod_edge_convs_0_sc_Conv( tensor__mod_Mul_3_output_0, tensor_onnx__Conv_178, tensor_onnx__Conv_179, tensor__mod_edge_convs_0_sc_Conv_output_0);
	node__mod_edge_convs_0_Add_1( tensor__mod_edge_convs_0_sc_Conv_output_0, tensor__mod_edge_convs_0_ReduceMean_output_0, tensor__mod_edge_convs_0_Add_1_output_0);
	node__mod_edge_convs_0_sc_act_Relu( tensor__mod_edge_convs_0_Add_1_output_0, tensor__mod_edge_convs_0_sc_act_Relu_output_0);
	node__mod_edge_convs_0_output_bn_BatchNormalization( tensor__mod_edge_convs_0_sc_act_Relu_output_0, tensor_mod_edge_convs_0_output_bn_weight, tensor_mod_edge_convs_0_output_bn_bias, tensor_mod_edge_convs_0_output_bn_running_mean, tensor_mod_edge_convs_0_output_bn_running_var, tensor__mod_edge_convs_0_output_bn_BatchNormalization_output_0);
	node__mod_Mul_4( tensor__mod_edge_convs_0_output_bn_BatchNormalization_output_0, tensor_pf_mask, tensor__mod_Mul_4_output_0);
	node__mod_Concat( tensor__mod_Mul_4_output_0, tensor__mod_Concat_output_0);
	node__mod_fusion_block_fusion_block_0_Conv( tensor__mod_Concat_output_0, tensor_onnx__Conv_181, tensor_onnx__Conv_182, tensor__mod_fusion_block_fusion_block_0_Conv_output_0);
	node__mod_fusion_block_fusion_block_2_Relu( tensor__mod_fusion_block_fusion_block_0_Conv_output_0, tensor__mod_fusion_block_fusion_block_2_Relu_output_0);
	node__mod_Mul_5( tensor__mod_fusion_block_fusion_block_2_Relu_output_0, tensor_pf_mask, tensor__mod_Mul_5_output_0);
	node__mod_ReduceSum_1( tensor__mod_Mul_5_output_0, tensor_onnx__ReduceSum_55, tensor__mod_ReduceSum_1_output_0);
	node__mod_Div( tensor__mod_ReduceSum_1_output_0, tensor__mod_Max_output_0, tensor__mod_Div_output_0);
	node__mod_fc_fc_0_fc_0_0_Gemm( tensor__mod_Div_output_0, tensor_mod_fc_0_0_weight, tensor_mod_fc_0_0_bias, tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0);
	node__mod_fc_fc_0_fc_0_1_Relu( tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0, tensor__mod_fc_fc_0_fc_0_1_Relu_output_0);
	node__fc_out_fc_out_0_Gemm( tensor__mod_fc_fc_0_fc_0_1_Relu_output_0, tensor_fc_out_0_weight, tensor_fc_out_0_bias, tensor_MSE);
}