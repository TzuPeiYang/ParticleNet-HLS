#pragma once
#include <ap_fixed.h>

using fixed = ap_fixed<40,24>;

#define MAX(X,Y) ( X > Y ? X : Y)
#define MIN(X,Y) ( X < Y ? X : Y)
#define CLIP(X,L) ( MAX(MIN(X,L), -L) )

#if __STDC_VERSION__ < 199901L
#define FUNC_PREFIX
#else
#define FUNC_PREFIX static inline
#endif

/* edge conv 0 */
void node__mod_Mul( const fixed A[1][3][35], const fixed B[1][1][35], fixed C[1][3][35] );
void node__mod_Mul_1( const fixed A[1][4][35], const fixed B[1][1][35], fixed C[1][4][35] );
void node__mod_Constant( const fixed *output );
void node__mod_Equal( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] );
void node__mod_Constant_1( const fixed *output );
void node__mod_Mul_2( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] );
void node__mod_Cast_1( const fixed input[1][1][35], fixed output[1][1][35] );
void node_Constant_61( const int32_t output[1] );
void node__mod_ReduceSum( const fixed x[1][1][35], const int32_t axes[1], fixed y[1][1] );
void node__mod_Constant_2( const fixed output[1][1] );
void node__mod_Max( const fixed in_0[1][1], const fixed in_1[1][1], fixed output[1][1] );
void node__mod_bn_fts_BatchNormalization( const fixed X[1][4][35], const fixed scale[4], const fixed bias[4], const fixed mean[4], const fixed var[4], fixed output[1][4][35] );
void node__mod_Mul_3( const fixed A[1][4][35], const fixed B[1][1][35], fixed C[1][4][35] );
void node__mod_Add( const fixed A[1][3][35], const fixed B[1][1][35], fixed C[1][3][35] );
void node__mod_edge_convs_0_Transpose( const fixed input[1][3][35], fixed output[1][35][3] );
void node__mod_edge_convs_0_MatMul( const fixed A[1][35][3], const fixed B[1][3][35], fixed Y[1][35][35] );
void node__mod_edge_convs_0_Constant( const fixed *output );
void node__mod_edge_convs_0_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] );
void node__mod_edge_convs_0_Constant_1( const fixed *output );
void node__mod_edge_convs_0_Pow( const fixed A[1][3][35], const fixed *B, fixed C[1][3][35] );
void node_Constant_74( const int32_t output[1] );
void node__mod_edge_convs_0_ReduceSum( const fixed x[1][3][35], const int32_t axes[1], fixed y[1][1][35] );
void node__mod_edge_convs_0_Neg( const fixed X[1][1][35], fixed Y[1][1][35] );
void node__mod_edge_convs_0_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] );
void node__mod_edge_convs_0_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] );
void node__mod_edge_convs_0_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] );
void node__mod_edge_convs_0_Constant_2( const int32_t output[1] );
void node__mod_edge_convs_0_TopK( const fixed X[1][35][35], const int32_t K[1], fixed Values[1][35][17], int32_t Indices[1][35][17] );
void node__mod_edge_convs_0_Constant_3( const int32_t output[1] );
void node__mod_edge_convs_0_Constant_4( const int32_t output[1] );
void node__mod_edge_convs_0_Constant_5( const int32_t output[1] );
void node__mod_edge_convs_0_Constant_6( const int32_t output[1] );
void node__mod_edge_convs_0_Slice( const int32_t data[1][35][17], const int32_t starts[1], const int32_t ends[1], const int32_t axes[1], const int32_t steps[1], int32_t output[1][35][16] );
void node__mod_edge_convs_0_Constant_7( const int32_t output[1][1][1] );
void node__mod_edge_convs_0_Add( const int32_t A[1][35][16], const int32_t B[1][1][1], int32_t C[1][35][16] );
void node__mod_edge_convs_0_Constant_8( const int32_t output[1] );
void node__mod_edge_convs_0_Reshape( const int32_t data[1][35][16], const int32_t shape[1], int32_t reshaped[560] );
void node__mod_edge_convs_0_Transpose_2( const fixed input[1][4][35], fixed output[1][35][4] );
void node__mod_edge_convs_0_Constant_9( const int32_t output[2] );
void node__mod_edge_convs_0_Reshape_1( const fixed data[1][35][4], const int32_t shape[2], fixed reshaped[35][4] );
void node__mod_edge_convs_0_Gather( const fixed X[35][4], const int32_t indices[560], fixed Y[560][4] );
void node__mod_edge_convs_0_Constant_10( const int32_t output[4] );
void node__mod_edge_convs_0_Reshape_2( const fixed data[560][4], const int32_t shape[4], fixed reshaped[1][35][16][4] );
void node__mod_edge_convs_0_Transpose_3( const fixed input[1][35][16][4], fixed output[1][4][35][16] );
void node__mod_edge_convs_0_Constant_11( const int32_t output[1] );
void node__mod_edge_convs_0_Unsqueeze( const fixed input[1][4][35], const int32_t axes_tensor[1], fixed output[1][4][35][1] );
void node__mod_edge_convs_0_Expand( const fixed input[1][4][35][1], const int32_t shape[4], fixed output[1][4][35][16] );
void node__mod_edge_convs_0_Sub_2( const fixed A[1][4][35][16], const fixed B[1][4][35][16], fixed C[1][4][35][16] );
void node__mod_edge_convs_0_Concat( const fixed input_0[1][4][35][16], const fixed input_1[1][4][35][16], fixed output[1][8][35][16] );
void node__mod_edge_convs_0_convs_0_Conv( const fixed x[1][8][35][16], const fixed w[64][8][1][1], const fixed bias[64], fixed y[1][64][35][16] );
void node__mod_edge_convs_0_acts_0_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] );
void node__mod_edge_convs_0_convs_1_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] );
void node__mod_edge_convs_0_acts_1_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] );
void node__mod_edge_convs_0_convs_2_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] );
void node__mod_edge_convs_0_acts_2_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] );
void node__mod_edge_convs_0_Constant_15( const int32_t output[1] );
void node__mod_edge_convs_0_ReduceMean( const fixed x[1][64][35][16], const int32_t axes[1], fixed y[1][64][35] );
void node__mod_edge_convs_0_sc_Conv( const fixed x[1][4][35], const fixed w[64][4][1], const fixed bias[64], fixed y[1][64][35] );
void node__mod_edge_convs_0_Add_1( const fixed A[1][64][35], const fixed B[1][64][35], fixed C[1][64][35] );
void node__mod_edge_convs_0_sc_act_Relu( const fixed X[1][64][35], fixed Y[1][64][35] );
void node__mod_Mul_4( const fixed A[1][64][35], const fixed B[1][1][35], fixed C[1][64][35] );
void node__mod_Add_1( const fixed A[1][64][35], const fixed B[1][1][35], fixed C[1][64][35] );

/* edge conv 1 */
void node__mod_edge_convs_1_Transpose( const fixed input[1][64][35], fixed output[1][35][64] );
void node__mod_edge_convs_1_MatMul( const fixed A[1][35][64], const fixed B[1][64][35], fixed Y[1][35][35] );
void node__mod_edge_convs_1_Constant( const fixed *output );
void node__mod_edge_convs_1_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] );
void node__mod_edge_convs_1_Constant_1( const fixed *output );
void node__mod_edge_convs_1_Pow( const fixed A[1][64][35], const fixed *B, fixed C[1][64][35] );
void node__mod_edge_convs_1_ReduceSum( const fixed x[1][64][35], const int32_t axes[1], fixed y[1][1][35] );
void node__mod_edge_convs_1_Neg( const fixed X[1][1][35], fixed Y[1][1][35] );
void node__mod_edge_convs_1_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] );
void node__mod_edge_convs_1_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] );
void node__mod_edge_convs_1_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] );
void node__mod_edge_convs_1_Constant_2( const int32_t output[1] );
void node__mod_edge_convs_1_TopK( const fixed X[1][35][35], const int32_t K[1], fixed Values[1][35][17], int32_t Indices[1][35][17] );
void node__mod_edge_convs_1_Constant_3( const int32_t output[1] );
void node__mod_edge_convs_1_Constant_4( const int32_t output[1] );
void node__mod_edge_convs_1_Constant_5( const int32_t output[1] );
void node__mod_edge_convs_1_Constant_6( const int32_t output[1] );
void node__mod_edge_convs_1_Slice( const int32_t data[1][35][17], const int32_t starts[1], const int32_t ends[1], const int32_t axes[1], const int32_t steps[1], int32_t output[1][35][16] );
void node__mod_edge_convs_1_Constant_7( const int32_t output[1][1][1] );
void node__mod_edge_convs_1_Add( const int32_t A[1][35][16], const int32_t B[1][1][1], int32_t C[1][35][16] );
void node__mod_edge_convs_1_Constant_8( const int32_t output[1] );
void node__mod_edge_convs_1_Reshape( const int32_t data[1][35][16], const int32_t shape[1], int32_t reshaped[560] );
void node__mod_edge_convs_1_Transpose_2( const fixed input[1][64][35], fixed output[1][35][64] );
void node__mod_edge_convs_1_Constant_9( const int32_t output[2] );
void node__mod_edge_convs_1_Reshape_1( const fixed data[1][35][64], const int32_t shape[2], fixed reshaped[35][64] );
void node__mod_edge_convs_1_Gather( const fixed X[35][64], const int32_t indices[560], fixed Y[560][64] );
void node__mod_edge_convs_1_Constant_10( const int32_t output[4] );
void node__mod_edge_convs_1_Reshape_2( const fixed data[560][64], const int32_t shape[4], fixed reshaped[1][35][16][64] );
void node__mod_edge_convs_1_Transpose_3( const fixed input[1][35][16][64], fixed output[1][64][35][16] );
void node__mod_edge_convs_1_Constant_11( const int32_t output[1] );
void node__mod_edge_convs_1_Unsqueeze( const fixed input[1][64][35], const int32_t axes_tensor[1], fixed output[1][64][35][1] );
void node__mod_edge_convs_1_Expand( const fixed input[1][64][35][1], const int32_t shape[4], fixed output[1][64][35][16] );
void node__mod_edge_convs_1_Sub_2( const fixed A[1][64][35][16], const fixed B[1][64][35][16], fixed C[1][64][35][16] );
void node__mod_edge_convs_1_Concat( const fixed input_0[1][64][35][16], const fixed input_1[1][64][35][16], fixed output[1][128][35][16] );
void node__mod_edge_convs_1_convs_0_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] );
void node__mod_edge_convs_1_acts_0_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] );
void node__mod_edge_convs_1_convs_1_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] );
void node__mod_edge_convs_1_acts_1_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] );
void node__mod_edge_convs_1_convs_2_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] );
void node__mod_edge_convs_1_acts_2_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] );
void node__mod_edge_convs_1_Constant_15( const int32_t output[1] );
void node__mod_edge_convs_1_ReduceMean( const fixed x[1][128][35][16], const int32_t axes[1], fixed y[1][128][35] );
void node__mod_edge_convs_1_sc_Conv( const fixed x[1][64][35], const fixed w[128][64][1], const fixed bias[128], fixed y[1][128][35] );
void node__mod_edge_convs_1_Add_1( const fixed A[1][128][35], const fixed B[1][128][35], fixed C[1][128][35] );
void node__mod_edge_convs_1_sc_act_Relu( const fixed X[1][128][35], fixed Y[1][128][35] );
void node__mod_Mul_5( const fixed A[1][128][35], const fixed B[1][1][35], fixed C[1][128][35] );
void node__mod_Add_2( const fixed A[1][128][35], const fixed B[1][1][35], fixed C[1][128][35] );

/* edge conv 2 */
void node__mod_edge_convs_2_Transpose( const fixed input[1][128][35], fixed output[1][35][128] );
void node__mod_edge_convs_2_MatMul( const fixed A[1][35][128], const fixed B[1][128][35], fixed Y[1][35][35] );
void node__mod_edge_convs_2_Constant( const fixed *output );
void node__mod_edge_convs_2_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] );
void node__mod_edge_convs_2_Constant_1( const fixed *output );
void node__mod_edge_convs_2_Pow( const fixed A[1][128][35], const fixed *B, fixed C[1][128][35] );
void node__mod_edge_convs_2_ReduceSum( const fixed x[1][128][35], const int32_t axes[1], fixed y[1][1][35] );
void node__mod_edge_convs_2_Neg( const fixed X[1][1][35], fixed Y[1][1][35] );
void node__mod_edge_convs_2_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] );
void node__mod_edge_convs_2_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] );
void node__mod_edge_convs_2_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] );
void node__mod_edge_convs_2_Constant_2( const int32_t output[1] );
void node__mod_edge_convs_2_TopK( const fixed X[1][35][35], const int32_t K[1], fixed Values[1][35][17], int32_t Indices[1][35][17] );
void node__mod_edge_convs_2_Constant_3( const int32_t output[1] );
void node__mod_edge_convs_2_Constant_4( const int32_t output[1] );
void node__mod_edge_convs_2_Constant_5( const int32_t output[1] );
void node__mod_edge_convs_2_Constant_6( const int32_t output[1] );
void node__mod_edge_convs_2_Slice( const int32_t data[1][35][17], const int32_t starts[1], const int32_t ends[1], const int32_t axes[1], const int32_t steps[1], int32_t output[1][35][16] );
void node__mod_edge_convs_2_Constant_7( const int32_t output[1][1][1] );
void node__mod_edge_convs_2_Add( const int32_t A[1][35][16], const int32_t B[1][1][1], int32_t C[1][35][16] );
void node__mod_edge_convs_2_Constant_8( const int32_t output[1] );
void node__mod_edge_convs_2_Reshape( const int32_t data[1][35][16], const int32_t shape[1], int32_t reshaped[560] );
void node__mod_edge_convs_2_Transpose_2( const fixed input[1][128][35], fixed output[1][35][128] );
void node__mod_edge_convs_2_Constant_9( const int32_t output[2] );
void node__mod_edge_convs_2_Reshape_1( const fixed data[1][35][128], const int32_t shape[2], fixed reshaped[35][128] );
void node__mod_edge_convs_2_Gather( const fixed X[35][128], const int32_t indices[560], fixed Y[560][128] );
void node__mod_edge_convs_2_Constant_10( const int32_t output[4] );
void node__mod_edge_convs_2_Reshape_2( const fixed data[560][128], const int32_t shape[4], fixed reshaped[1][35][16][128] );
void node__mod_edge_convs_2_Transpose_3( const fixed input[1][35][16][128], fixed output[1][128][35][16] );
void node__mod_edge_convs_2_Constant_11( const int32_t output[1] );
void node__mod_edge_convs_2_Unsqueeze( const fixed input[1][128][35], const int32_t axes_tensor[1], fixed output[1][128][35][1] );
void node__mod_edge_convs_2_Expand( const fixed input[1][128][35][1], const int32_t shape[4], fixed output[1][128][35][16] );
void node__mod_edge_convs_2_Sub_2( const fixed A[1][128][35][16], const fixed B[1][128][35][16], fixed C[1][128][35][16] );
void node__mod_edge_convs_2_Concat( const fixed input_0[1][128][35][16], const fixed input_1[1][128][35][16], fixed output[1][256][35][16] );
void node__mod_edge_convs_2_convs_0_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] );
void node__mod_edge_convs_2_acts_0_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] );
void node__mod_edge_convs_2_convs_1_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] );
void node__mod_edge_convs_2_acts_1_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] );
void node__mod_edge_convs_2_convs_2_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] );
void node__mod_edge_convs_2_acts_2_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] );
void node__mod_edge_convs_2_Constant_15( const int32_t output[1] );
void node__mod_edge_convs_2_ReduceMean( const fixed x[1][256][35][16], const int32_t axes[1], fixed y[1][256][35] );
void node__mod_edge_convs_2_sc_Conv( const fixed x[1][128][35], const fixed w[256][128][1], const fixed bias[256], fixed y[1][256][35] );
void node__mod_edge_convs_2_Add_1( const fixed A[1][256][35], const fixed B[1][256][35], fixed C[1][256][35] );
void node__mod_edge_convs_2_sc_act_Relu( const fixed X[1][256][35], fixed Y[1][256][35] );
void node__mod_Mul_6( const fixed A[1][256][35], const fixed B[1][1][35], fixed C[1][256][35] );
