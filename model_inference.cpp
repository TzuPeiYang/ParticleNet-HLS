// (TODO: add creating command line here)
// (TODO: print creation date here )

// ONNX model:
// produced by pytorch, version 2.6.0
// ONNX IR version: 18
// Model documentation: 
/*

*/

#include "weights/weights.h"

#define MAX(X,Y) ( X > Y ? X : Y)
#define MIN(X,Y) ( X < Y ? X : Y)
#define CLIP(X,L) ( MAX(MIN(X,L), -L) )

#if __STDC_VERSION__ < 199901L
#define FUNC_PREFIX
#else
#define FUNC_PREFIX static inline
#endif

// moved to weights_split/tensor_fc_out_0_weight.cpp
// moved to weights_split/tensor_fc_out_0_bias.cpp
// moved to weights_split/tensor_mod_bn_fts_weight.cpp
// moved to weights_split/tensor_mod_bn_fts_bias.cpp
// moved to weights_split/tensor_mod_bn_fts_running_mean.cpp
// moved to weights_split/tensor_mod_bn_fts_running_var.cpp
// moved to weights_split/tensor_mod_fc_0_0_weight.cpp
// moved to weights_split/tensor_mod_fc_0_0_bias.cpp
// moved to weights_split/tensor_onnx__Conv_389.cpp
// moved to weights_split/tensor_onnx__Conv_390.cpp
// moved to weights_split/tensor_onnx__Conv_392.cpp
// moved to weights_split/tensor_onnx__Conv_393.cpp
// moved to weights_split/tensor_onnx__Conv_395.cpp
// moved to weights_split/tensor_onnx__Conv_396.cpp
// moved to weights_split/tensor_onnx__Conv_398.cpp
// moved to weights_split/tensor_onnx__Conv_399.cpp
// moved to weights_split/tensor_onnx__Conv_401.cpp
// moved to weights_split/tensor_onnx__Conv_402.cpp
// moved to weights_split/tensor_onnx__Conv_404.cpp
// moved to weights_split/tensor_onnx__Conv_405.cpp
// moved to weights_split/tensor_onnx__Conv_407.cpp
// moved to weights_split/tensor_onnx__Conv_408.cpp
// moved to weights_split/tensor_onnx__Conv_410.cpp
// moved to weights_split/tensor_onnx__Conv_411.cpp
// moved to weights_split/tensor_onnx__Conv_413.cpp
// moved to weights_split/tensor_onnx__Conv_414.cpp
// moved to weights_split/tensor_onnx__Conv_416.cpp
// moved to weights_split/tensor_onnx__Conv_417.cpp
// moved to weights_split/tensor_onnx__Conv_419.cpp
// moved to weights_split/tensor_onnx__Conv_420.cpp
// moved to weights_split/tensor_onnx__Conv_422.cpp
// moved to weights_split/tensor_onnx__Conv_423.cpp
// moved to weights_split/tensor_onnx__Conv_425.cpp
// moved to weights_split/tensor_onnx__Conv_426.cpp
static const int64_t tensor__mod_edge_convs_0_Expand_static_shape[4] = 
{1, 4, 35, 16};
static const int64_t tensor__mod_edge_convs_1_Expand_static_shape[4] = 
{1, 64, 35, 16};
static const int64_t tensor__mod_edge_convs_2_Expand_static_shape[4] = 
{1, 128, 35, 16};
static const fixed tensor__mod_Constant_output_0 = 
0.00000000000000000000f;
static const fixed tensor__mod_Constant_1_output_0 = 
1000000000.00000000000000000000f;
static const int64_t tensor_onnx__ReduceSum_98[1] = 
{-1};
// moved to weights_split/tensor__mod_Constant_2_output_0.cpp
static const fixed tensor__mod_edge_convs_0_Constant_output_0 = 
-2.00000000000000000000f;
static const fixed tensor__mod_edge_convs_0_Constant_1_output_0 = 
2.00000000000000000000f;
static const int64_t tensor_onnx__ReduceSum_113[1] = 
{1};
static const int64_t tensor__mod_edge_convs_0_Constant_2_output_0[1] = 
{17};
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
{1, 35, 16, 4};
static const int64_t tensor__mod_edge_convs_0_Constant_11_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_0_Constant_15_output_0[1] = 
{-1};
static const fixed tensor__mod_edge_convs_1_Constant_output_0 = 
-2.00000000000000000000f;
static const fixed tensor__mod_edge_convs_1_Constant_1_output_0 = 
2.00000000000000000000f;
static const int64_t tensor__mod_edge_convs_1_Constant_2_output_0[1] = 
{17};
static const int64_t tensor__mod_edge_convs_1_Constant_3_output_0[1] = 
{2};
static const int64_t tensor__mod_edge_convs_1_Constant_4_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_1_Constant_5_output_0[1] = 
{9223372036854775807};
static const int64_t tensor__mod_edge_convs_1_Constant_6_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_1_Constant_7_output_0[1][1][1] = 
{
  {
    {0}
  }
};
static const int64_t tensor__mod_edge_convs_1_Constant_8_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_1_Constant_9_output_0[2] = 
{-1, 64};
static const int64_t tensor__mod_edge_convs_1_Constant_10_output_0[4] = 
{1, 35, 16, 64};
static const int64_t tensor__mod_edge_convs_1_Constant_11_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_1_Constant_15_output_0[1] = 
{-1};
static const fixed tensor__mod_edge_convs_2_Constant_output_0 = 
-2.00000000000000000000f;
static const fixed tensor__mod_edge_convs_2_Constant_1_output_0 = 
2.00000000000000000000f;
static const int64_t tensor__mod_edge_convs_2_Constant_2_output_0[1] = 
{17};
static const int64_t tensor__mod_edge_convs_2_Constant_3_output_0[1] = 
{2};
static const int64_t tensor__mod_edge_convs_2_Constant_4_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_2_Constant_5_output_0[1] = 
{9223372036854775807};
static const int64_t tensor__mod_edge_convs_2_Constant_6_output_0[1] = 
{1};
static const int64_t tensor__mod_edge_convs_2_Constant_7_output_0[1][1][1] = 
{
  {
    {0}
  }
};
static const int64_t tensor__mod_edge_convs_2_Constant_8_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_2_Constant_9_output_0[2] = 
{-1, 128};
static const int64_t tensor__mod_edge_convs_2_Constant_10_output_0[4] = 
{1, 35, 16, 128};
static const int64_t tensor__mod_edge_convs_2_Constant_11_output_0[1] = 
{-1};
static const int64_t tensor__mod_edge_convs_2_Constant_15_output_0[1] = 
{-1};

fixed tensor__mod_Mul_output_0[1][3][35];
fixed tensor__mod_edge_convs_0_Transpose_output_0[1][35][3];
fixed tensor__mod_edge_convs_0_Mul_output_0[1][35][35];
fixed tensor__mod_edge_convs_0_Transpose_1_output_0[1][35][1];
fixed tensor__mod_edge_convs_0_TopK_output_0[1][35][17];
int64_t tensor__mod_edge_convs_0_Slice_output_0[1][35][16];
int64_t tensor__mod_edge_convs_0_Reshape_output_0[560];
fixed tensor__mod_edge_convs_0_Reshape_2_output_0[1][35][16][4];
fixed tensor__mod_edge_convs_0_Unsqueeze_output_0[1][4][35][1];
fixed tensor__mod_edge_convs_0_Sub_2_output_0[1][4][35][16];
fixed tensor__mod_edge_convs_0_convs_0_Conv_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_convs_1_Conv_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_convs_2_Conv_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_ReduceMean_output_0[1][64][35];
fixed tensor__mod_edge_convs_0_sc_act_Relu_output_0[1][64][35];
fixed tensor__mod_Add_1_output_0[1][64][35];
fixed tensor__mod_edge_convs_1_ReduceSum_output_0[1][1][35];
fixed tensor__mod_edge_convs_1_Sub_1_output_0[1][35][35];
int64_t tensor__mod_edge_convs_1_Slice_output_0[1][35][16];
int64_t tensor__mod_edge_convs_1_Reshape_output_0[560];
fixed tensor__mod_edge_convs_1_Reshape_2_output_0[1][35][16][64];
fixed tensor__mod_edge_convs_1_Unsqueeze_output_0[1][64][35][1];
fixed tensor__mod_edge_convs_1_Sub_2_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_1_convs_0_Conv_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_convs_1_Conv_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_convs_2_Conv_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_ReduceMean_output_0[1][128][35];
fixed tensor__mod_edge_convs_1_sc_act_Relu_output_0[1][128][35];
fixed tensor__mod_Add_2_output_0[1][128][35];
fixed tensor__mod_edge_convs_2_ReduceSum_output_0[1][1][35];
fixed tensor__mod_edge_convs_2_Sub_1_output_0[1][35][35];
int64_t tensor__mod_edge_convs_2_Slice_output_0[1][35][16];
int64_t tensor__mod_edge_convs_2_Reshape_output_0[560];
fixed tensor__mod_edge_convs_2_Reshape_2_output_0[1][35][16][128];
fixed tensor__mod_edge_convs_2_Unsqueeze_output_0[1][128][35][1];
fixed tensor__mod_edge_convs_2_Sub_2_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_2_convs_0_Conv_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_convs_1_Conv_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_convs_2_Conv_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_ReduceMean_output_0[1][256][35];
fixed tensor__mod_edge_convs_2_sc_act_Relu_output_0[1][256][35];
fixed tensor__mod_Concat_output_0[1][448][35];
fixed tensor__mod_fusion_block_fusion_block_2_Relu_output_0[1][384][35];
fixed tensor__mod_ReduceSum_1_output_0[1][384];
fixed tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0[1][256];




fixed tensor__mod_Mul_1_output_0[1][4][35];
fixed tensor__mod_Mul_3_output_0[1][4][35];
fixed tensor__mod_edge_convs_0_Add_1_output_0[1][64][35];
fixed tensor__mod_Mul_4_output_0[1][64][35];
fixed tensor__mod_fusion_block_fusion_block_0_Conv_output_0[1][384][35];
fixed tensor__mod_Mul_7_output_0[1][384][35];
fixed tensor__mod_Div_output_0[1][384];
fixed tensor__mod_fc_fc_0_fc_0_1_Relu_output_0[1][256];




fixed tensor__mod_Equal_output_0[1][1][35];
fixed tensor__mod_Mul_2_output_0[1][1][35];
fixed tensor__mod_edge_convs_2_Transpose_output_0[1][35][128];
fixed tensor__mod_edge_convs_2_Mul_output_0[1][35][35];
fixed tensor__mod_edge_convs_2_Transpose_1_output_0[1][35][1];
fixed tensor__mod_edge_convs_2_TopK_output_0[1][35][17];
int64_t tensor__mod_edge_convs_2_Add_output_0[1][35][16];
fixed tensor__mod_edge_convs_2_Transpose_2_output_0[1][35][128];
fixed tensor__mod_edge_convs_2_Gather_output_0[560][128];
fixed tensor__mod_edge_convs_2_Transpose_3_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_2_Concat_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_acts_0_Relu_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_acts_1_Relu_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_acts_2_Relu_output_0[1][256][35][16];
fixed tensor__mod_edge_convs_2_sc_Conv_output_0[1][256][35];
fixed tensor__mod_Mul_6_output_0[1][256][35];




fixed tensor__mod_Cast_1_output_0[1][1][35];




fixed tensor__mod_ReduceSum_output_0[1][1];
fixed tensor__mod_bn_fts_BatchNormalization_output_0[1][4][35];
fixed tensor__mod_Add_output_0[1][3][35];
fixed tensor__mod_edge_convs_0_ReduceSum_output_0[1][1][35];
fixed tensor__mod_edge_convs_0_Sub_1_output_0[1][35][35];
int64_t tensor__mod_edge_convs_0_Add_output_0[1][35][16];
fixed tensor__mod_edge_convs_0_Transpose_2_output_0[1][35][4];
fixed tensor__mod_edge_convs_0_Gather_output_0[560][4];
fixed tensor__mod_edge_convs_0_Transpose_3_output_0[1][4][35][16];
fixed tensor__mod_edge_convs_0_Concat_output_0[1][8][35][16];
fixed tensor__mod_edge_convs_0_acts_0_Relu_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_acts_1_Relu_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_acts_2_Relu_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_0_sc_Conv_output_0[1][64][35];
fixed tensor__mod_edge_convs_1_Transpose_output_0[1][35][64];
fixed tensor__mod_edge_convs_1_Mul_output_0[1][35][35];
fixed tensor__mod_edge_convs_1_Transpose_1_output_0[1][35][1];
fixed tensor__mod_edge_convs_1_TopK_output_0[1][35][17];
int64_t tensor__mod_edge_convs_1_Add_output_0[1][35][16];
fixed tensor__mod_edge_convs_1_Transpose_2_output_0[1][35][64];
fixed tensor__mod_edge_convs_1_Gather_output_0[560][64];
fixed tensor__mod_edge_convs_1_Transpose_3_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_1_Concat_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_acts_0_Relu_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_acts_1_Relu_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_acts_2_Relu_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_1_sc_Conv_output_0[1][128][35];
fixed tensor__mod_Mul_5_output_0[1][128][35];




fixed tensor__mod_Max_output_0[1][1];




fixed tensor__mod_edge_convs_0_MatMul_output_0[1][35][35];
fixed tensor__mod_edge_convs_0_Pow_output_0[1][3][35];
fixed tensor__mod_edge_convs_0_Neg_output_0[1][1][35];
int64_t tensor__mod_edge_convs_0_TopK_output_1[1][35][17];
fixed tensor__mod_edge_convs_0_Reshape_1_output_0[35][4];
fixed tensor__mod_edge_convs_0_Expand_output_0[1][4][35][16];
fixed tensor__mod_edge_convs_1_MatMul_output_0[1][35][35];
fixed tensor__mod_edge_convs_1_Pow_output_0[1][64][35];
fixed tensor__mod_edge_convs_1_Neg_output_0[1][1][35];
int64_t tensor__mod_edge_convs_1_TopK_output_1[1][35][17];
fixed tensor__mod_edge_convs_1_Reshape_1_output_0[35][64];
fixed tensor__mod_edge_convs_1_Expand_output_0[1][64][35][16];
fixed tensor__mod_edge_convs_1_Add_1_output_0[1][128][35];
fixed tensor__mod_edge_convs_2_MatMul_output_0[1][35][35];
fixed tensor__mod_edge_convs_2_Pow_output_0[1][128][35];
fixed tensor__mod_edge_convs_2_Neg_output_0[1][1][35];
int64_t tensor__mod_edge_convs_2_TopK_output_1[1][35][17];
fixed tensor__mod_edge_convs_2_Reshape_1_output_0[35][128];
fixed tensor__mod_edge_convs_2_Expand_output_0[1][128][35][16];
fixed tensor__mod_edge_convs_2_Add_1_output_0[1][256][35];




fixed tensor__mod_edge_convs_0_Sub_output_0[1][35][35];
fixed tensor__mod_edge_convs_1_Sub_output_0[1][35][35];
fixed tensor__mod_edge_convs_2_Sub_output_0[1][35][35];




/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul
 */
FUNC_PREFIX void node__mod_Mul( const fixed A[1][3][35], const fixed B[1][1][35], fixed C[1][3][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_1
 */
FUNC_PREFIX void node__mod_Mul_1( const fixed A[1][4][35], const fixed B[1][1][35], fixed C[1][4][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
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
FUNC_PREFIX void node__mod_Equal( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Equal
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<1; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
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
FUNC_PREFIX void node__mod_Mul_2( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<1; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][0][i2] = A[0][0][i2]**B;;
	}
}

/*
 * Operand:           Cast
 * Name in ONNX file: /mod/Cast_1
 */
FUNC_PREFIX void node__mod_Cast_1( const fixed input[1][1][35], fixed output[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Cast */
	fixed *X = (fixed*)input;
	fixed *Y = (fixed*)output;
	for( unsigned i=0; i<35; i++)
		Y[i]= (fixed)X[i];
}

/*
 * Operand:           Constant
 * Name in ONNX file: Constant_61
 */


/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/ReduceSum
 */
FUNC_PREFIX void node__mod_ReduceSum( const fixed x[1][1][35], const int64_t axes[1], fixed y[1][1] )
{
#pragma HLS INLINE OFF

	/* ReduceSum */
	/* keepdims: 0 */
	/* axes: (	-1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			y[i0][i1] = 0.0;
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1]+=x[i0][i1][i2];
			}
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/Constant_2
 */


/*
 * Operand:           Max
 * Name in ONNX file: /mod/Max
 */
FUNC_PREFIX void node__mod_Max( const fixed in_0[1][1], const fixed in_1[1][1], fixed output[1][1] )
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
FUNC_PREFIX void node__mod_bn_fts_BatchNormalization( const fixed X[1][4][35], const fixed scale[4], const fixed bias[4], const fixed mean[4], const fixed var[4], fixed output[1][4][35] )
{
#pragma HLS INLINE OFF

	/* BatchNormalization
	 * epsilon = 0.00000999999974737875
	 * momentum = 0.89999997615814208984
	 */

	for( int32_t b=0; b<1; b++ ) {
	for( int32_t c=0; c<4; c++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		fixed tmp_X = ( X[b][c][i2] - mean[c] ) / ( var[c] );
		output[b][c][i2] = tmp_X * scale[c] + bias[c];
	}
	}
	}
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_3
 */
FUNC_PREFIX void node__mod_Mul_3( const fixed A[1][4][35], const fixed B[1][1][35], fixed C[1][4][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/Add
 */
FUNC_PREFIX void node__mod_Add( const fixed A[1][3][35], const fixed B[1][1][35], fixed C[1][3][35] )
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
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose( const fixed input[1][3][35], fixed output[1][35][3] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<3; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           MatMul
 * Name in ONNX file: /mod/edge_convs.0/MatMul
 */

FUNC_PREFIX void node__mod_edge_convs_0_MatMul( const fixed A[1][35][3], const fixed B[1][3][35], fixed Y[1][35][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=A cyclic factor=3 dim=3
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=3 dim=2

for (unsigned b = 0; b < 1; b++) {
for (unsigned i = 0; i < 35; i++) {
for (unsigned j = 0; j < 35; j++) {

#pragma HLS PIPELINE II=1

    fixed acc = 0;

    for (unsigned k = 0; k < 3; k++) {
#pragma HLS UNROLL factor=3
        acc += A[0][i][k] * B[0][k][j];
    }

    Y[0][i][j] = acc;
}
}


	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant
 */


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.0/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_0_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]**B;;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_1
 */


/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.0/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_0_Pow( const fixed A[1][3][35], const fixed *B, fixed C[1][3][35] )
{
#pragma HLS INLINE OFF

	/* Pow
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<3; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = powf(A[0][i1][i2],*B);;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: Constant_74
 */


/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/edge_convs.0/ReduceSum
 */
FUNC_PREFIX void node__mod_edge_convs_0_ReduceSum( const fixed x[1][3][35], const int64_t axes[1], fixed y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* ReduceSum */
	/* keepdims: 1 */
	/* axes: (	1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<3; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][0][i2]+=x[i0][i1][i2];
			}
		}
	}
}

/*
 * Operand:           Neg
 * Name in ONNX file: /mod/edge_convs.0/Neg
 */
FUNC_PREFIX void node__mod_edge_convs_0_Neg( const fixed X[1][1][35], fixed Y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Neg
	   Implemented with Elementwise template.
	   alpha = 0.00000000000000000000
	   beta = 0.00000000000000000000
	*/
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<1; i1++) {
	for (unsigned i2=0; i2<35; i2++) {
		Y[i0][i1][i2] =  -X[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][0][i2]-B[0][i1][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<1; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]-B[0][i1][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_2
 */


/*
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.0/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_0_TopK( const fixed X[1][35][35], const int64_t K[1], fixed Values[1][35][17], int64_t Indices[1][35][17] )
{
#pragma HLS INLINE OFF

	/* TopK with largest=1, sorted=1, other options not currently supported */
	for (int i0 = 0; i0 < 1; i0++) {
		for (int i1 = 0; i1 < 35; i1++) {
			for (int k = 0; k < 17; k++) {
				Values[i0][i1][k] = -1e10;
				Indices[i0][i1][k] = -1;
			}
			for (int k = 0; k < 35; k++) {
				for (int d = 0; d < 17; d++) {
					if (X[i0][i1][k] > Values[i0][i1][d]) {
						for (int s = 16; s > d; s--) {
							Values[i0][i1][s] = Values[i0][i1][s - 1];
							Indices[i0][i1][s] = Indices[i0][i1][s - 1];
						}
						Values[i0][i1][d] = X[i0][i1][k];
						Indices[i0][i1][d] = k;
						break;
					}
				}
			}
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_3
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_4
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_5
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_6
 */


/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.0/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_0_Slice( const int64_t data[1][35][17], const int64_t starts[1], const int64_t ends[1], const int64_t axes[1], const int64_t steps[1], int64_t output[1][35][16] )
{
#pragma HLS INLINE OFF

	for (unsigned i0=0, o0=0; o0<1; i0+=1, o0++) {
	for (unsigned i1=0, o1=0; o1<35; i1+=1, o1++) {
	for (unsigned i2=1, o2=0; o2<16; i2+=1, o2++) {
		output[o0][o1][o2] = data[i0][i1][i2];
	}
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
FUNC_PREFIX void node__mod_edge_convs_0_Add( const int64_t A[1][35][16], const int64_t B[1][1][1], int64_t C[1][35][16] )
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
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<16; i2++)
	{
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
FUNC_PREFIX void node__mod_edge_convs_0_Reshape( const int64_t data[1][35][16], const int64_t shape[1], int64_t reshaped[560] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	int64_t *data_ptr = (int64_t*)data;
	int64_t *reshaped_ptr = (int64_t*)reshaped;
	uint32_t i;
	for( i=0; i<560; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_2( const fixed input[1][4][35], fixed output[1][35][4] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<4; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
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
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_1( const fixed data[1][35][4], const int64_t shape[2], fixed reshaped[35][4] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<140; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Gather
 * Name in ONNX file: /mod/edge_convs.0/Gather
 */
FUNC_PREFIX void node__mod_edge_convs_0_Gather( const fixed X[35][4], const int64_t indices[560], fixed Y[560][4] )
{
#pragma HLS INLINE OFF

	/* Gather
	   axis = 0
	 */
	for (unsigned i0=0; i0<560; i0++)
	for (unsigned i1=0; i1<4; i1++)
	{
		int32_t idx = indices[i0];
		idx = idx < 0 ? 35+idx : idx;
		Y[i0][i1] = X[idx][i1];
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
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_2( const fixed data[560][4], const int64_t shape[4], fixed reshaped[1][35][16][4] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<2240; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.0/Transpose_3
 */
FUNC_PREFIX void node__mod_edge_convs_0_Transpose_3( const fixed input[1][35][16][4], fixed output[1][4][35][16] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 3 1 2 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<35; i1++ ) {
	for( uint32_t i2=0; i2<16; i2++ ) {
	for( uint32_t i3=0; i3<4; i3++ ) {
		output[i0][i3][i1][i2] = input[i0][i1][i2][i3];
	}
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
FUNC_PREFIX void node__mod_edge_convs_0_Unsqueeze( const fixed input[1][4][35], const int64_t axes_tensor[1], fixed output[1][4][35][1] )
{
#pragma HLS INLINE OFF

	/* Unsqueeze */
	fixed *data = (fixed*)input;
	fixed *expanded= (fixed*)output;
	for( uint32_t i=0; i<140; i++ )
		expanded[i] = data[i];

}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.0/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_0_Expand( const fixed input[1][4][35][1], const int64_t shape[4], fixed output[1][4][35][16] )
{
#pragma HLS INLINE OFF

	/* Expand */
	for( uint32_t o0=0; o0<1; o0++) {
	for( uint32_t o1=0; o1<4; o1++) {
	for( uint32_t o2=0; o2<35; o2++) {
	for( uint32_t o3=0; o3<16; o3++) {
		output[o0][o1][o2][o3] = input[0][o1][o2][0];
	}
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.0/Sub_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Sub_2( const fixed A[1][4][35][16], const fixed B[1][4][35][16], fixed C[1][4][35][16] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<4; i1++)
	for (unsigned i2=0; i2<35; i2++)
	for (unsigned i3=0; i3<16; i3++)
	{
		C[0][i1][i2][i3] = A[0][i1][i2][i3]-B[0][i1][i2][i3];;
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/edge_convs.0/Concat
 */
FUNC_PREFIX void node__mod_edge_convs_0_Concat( const fixed input_0[1][4][35][16], const fixed input_1[1][4][35][16], fixed output[1][8][35][16] )
{
#pragma HLS INLINE OFF

	/* Concat */
	int64_t outputOffset;
	outputOffset = 0;
	for (int64_t i = 0, j = 0; i < 2240; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 2240) {
			outputOffset += (2240);
			j = 0;
		}
	}
	outputOffset = 2240;
	for (int64_t i = 0, j = 0; i < 2240; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_1 + i);
		if (++j == 2240) {
			outputOffset += (2240);
			j = 0;
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.0/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_0_Conv( const fixed x[1][8][35][16], const fixed w[64][8][1][1], const fixed bias[64], fixed y[1][64][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=8 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=8 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 64; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 8; c++) {
#pragma HLS UNROLL factor=8
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.0/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_0_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.1/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_1_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=64 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=64 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 64; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 64; c++) {
#pragma HLS UNROLL factor=64
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.1/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_1_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.2/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_convs_2_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=64 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=64 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 64; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 64; c++) {
#pragma HLS UNROLL factor=64
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.2/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_acts_2_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
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
FUNC_PREFIX void node__mod_edge_convs_0_ReduceMean( const fixed x[1][64][35][16], const int64_t axes[1], fixed y[1][64][35] )
{
#pragma HLS INLINE OFF

	/* ReduceMean */
	/* keepdims: 0 */
	/* axes: (	-1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<64; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<64; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				for (unsigned i3 = 0; i3<16; i3++) {
					y[i0][i1][i2]+=x[i0][i1][i2][i3];
				}
			}
		}
	}
	/* ReduceMean: Divide by the number of elements (reduced axes) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<64; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] /= 16;
			}
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/sc/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_0_sc_Conv( const fixed x[1][4][35], const fixed w[64][4][1], const fixed bias[64], fixed y[1][64][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=4 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=4 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 64; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 4; c++) {
#pragma HLS UNROLL factor=4
    acc += x[b][c][h] * w[m][c][0];
}

y[b][m][h] = acc;
}

}
}
}


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.0/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Add_1( const fixed A[1][64][35], const fixed B[1][64][35], fixed C[1][64][35] )
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
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][i1][i2];;
	}
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/sc_act/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_0_sc_act_Relu( const fixed X[1][64][35], fixed Y[1][64][35] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2] = 0;
		if (X[i0][i1][i2] > 0) {
			Y[i0][i1][i2] = X[i0][i1][i2];
		
	}
	}
	}

}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_4
 */
FUNC_PREFIX void node__mod_Mul_4( const fixed A[1][64][35], const fixed B[1][1][35], fixed C[1][64][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/Add_1
 */
FUNC_PREFIX void node__mod_Add_1( const fixed A[1][64][35], const fixed B[1][1][35], fixed C[1][64][35] )
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
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.1/Transpose
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose( const fixed input[1][64][35], fixed output[1][35][64] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           MatMul
 * Name in ONNX file: /mod/edge_convs.1/MatMul
 */

FUNC_PREFIX void node__mod_edge_convs_1_MatMul( const fixed A[1][35][64], const fixed B[1][64][35], fixed Y[1][35][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=A cyclic factor=16 dim=3
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=16 dim=2

for (unsigned b = 0; b < 1; b++) {
for (unsigned i = 0; i < 35; i++) {
for (unsigned j = 0; j < 35; j++) {

#pragma HLS PIPELINE II=1

    fixed acc = 0;

    for (unsigned k = 0; k < 64; k++) {
#pragma HLS UNROLL factor=16
        acc += A[0][i][k] * B[0][k][j];
    }

    Y[0][i][j] = acc;
}
}


	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant
 */


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.1/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_1_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]**B;;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_1
 */


/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.1/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_1_Pow( const fixed A[1][64][35], const fixed *B, fixed C[1][64][35] )
{
#pragma HLS INLINE OFF

	/* Pow
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = powf(A[0][i1][i2],*B);;
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/edge_convs.1/ReduceSum
 */
FUNC_PREFIX void node__mod_edge_convs_1_ReduceSum( const fixed x[1][64][35], const int64_t axes[1], fixed y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* ReduceSum */
	/* keepdims: 1 */
	/* axes: (	1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<64; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][0][i2]+=x[i0][i1][i2];
			}
		}
	}
}

/*
 * Operand:           Neg
 * Name in ONNX file: /mod/edge_convs.1/Neg
 */
FUNC_PREFIX void node__mod_edge_convs_1_Neg( const fixed X[1][1][35], fixed Y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Neg
	   Implemented with Elementwise template.
	   alpha = 0.00000000000000000000
	   beta = 0.00000000000000000000
	*/
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<1; i1++) {
	for (unsigned i2=0; i2<35; i2++) {
		Y[i0][i1][i2] =  -X[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.1/Sub
 */
FUNC_PREFIX void node__mod_edge_convs_1_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][0][i2]-B[0][i1][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.1/Transpose_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<1; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.1/Sub_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]-B[0][i1][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_2
 */


/*
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.1/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_1_TopK( const fixed X[1][35][35], const int64_t K[1], fixed Values[1][35][17], int64_t Indices[1][35][17] )
{
#pragma HLS INLINE OFF

	/* TopK with largest=1, sorted=1, other options not currently supported */
	for (int i0 = 0; i0 < 1; i0++) {
		for (int i1 = 0; i1 < 35; i1++) {
			for (int k = 0; k < 17; k++) {
				Values[i0][i1][k] = -1e10;
				Indices[i0][i1][k] = -1;
			}
			for (int k = 0; k < 35; k++) {
				for (int d = 0; d < 17; d++) {
					if (X[i0][i1][k] > Values[i0][i1][d]) {
						for (int s = 16; s > d; s--) {
							Values[i0][i1][s] = Values[i0][i1][s - 1];
							Indices[i0][i1][s] = Indices[i0][i1][s - 1];
						}
						Values[i0][i1][d] = X[i0][i1][k];
						Indices[i0][i1][d] = k;
						break;
					}
				}
			}
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_3
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_4
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_5
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_6
 */


/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.1/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_1_Slice( const int64_t data[1][35][17], const int64_t starts[1], const int64_t ends[1], const int64_t axes[1], const int64_t steps[1], int64_t output[1][35][16] )
{
#pragma HLS INLINE OFF

	for (unsigned i0=0, o0=0; o0<1; i0+=1, o0++) {
	for (unsigned i1=0, o1=0; o1<35; i1+=1, o1++) {
	for (unsigned i2=1, o2=0; o2<16; i2+=1, o2++) {
		output[o0][o1][o2] = data[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_7
 */


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.1/Add
 */
FUNC_PREFIX void node__mod_edge_convs_1_Add( const int64_t A[1][35][16], const int64_t B[1][1][1], int64_t C[1][35][16] )
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
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<16; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_8
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape( const int64_t data[1][35][16], const int64_t shape[1], int64_t reshaped[560] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	int64_t *data_ptr = (int64_t*)data;
	int64_t *reshaped_ptr = (int64_t*)reshaped;
	uint32_t i;
	for( i=0; i<560; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.1/Transpose_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose_2( const fixed input[1][64][35], fixed output[1][35][64] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<64; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_9
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape_1( const fixed data[1][35][64], const int64_t shape[2], fixed reshaped[35][64] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<2240; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Gather
 * Name in ONNX file: /mod/edge_convs.1/Gather
 */
FUNC_PREFIX void node__mod_edge_convs_1_Gather( const fixed X[35][64], const int64_t indices[560], fixed Y[560][64] )
{
#pragma HLS INLINE OFF

	/* Gather
	   axis = 0
	 */
	for (unsigned i0=0; i0<560; i0++)
	for (unsigned i1=0; i1<64; i1++)
	{
		int32_t idx = indices[i0];
		idx = idx < 0 ? 35+idx : idx;
		Y[i0][i1] = X[idx][i1];
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_10
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape_2( const fixed data[560][64], const int64_t shape[4], fixed reshaped[1][35][16][64] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<35840; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.1/Transpose_3
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose_3( const fixed input[1][35][16][64], fixed output[1][64][35][16] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 3 1 2 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<35; i1++ ) {
	for( uint32_t i2=0; i2<16; i2++ ) {
	for( uint32_t i3=0; i3<64; i3++ ) {
		output[i0][i3][i1][i2] = input[i0][i1][i2][i3];
	}
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_11
 */


/*
 * Operand:           Unsqueeze
 * Name in ONNX file: /mod/edge_convs.1/Unsqueeze
 */
FUNC_PREFIX void node__mod_edge_convs_1_Unsqueeze( const fixed input[1][64][35], const int64_t axes_tensor[1], fixed output[1][64][35][1] )
{
#pragma HLS INLINE OFF

	/* Unsqueeze */
	fixed *data = (fixed*)input;
	fixed *expanded= (fixed*)output;
	for( uint32_t i=0; i<2240; i++ )
		expanded[i] = data[i];

}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.1/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_1_Expand( const fixed input[1][64][35][1], const int64_t shape[4], fixed output[1][64][35][16] )
{
#pragma HLS INLINE OFF

	/* Expand */
	for( uint32_t o0=0; o0<1; o0++) {
	for( uint32_t o1=0; o1<64; o1++) {
	for( uint32_t o2=0; o2<35; o2++) {
	for( uint32_t o3=0; o3<16; o3++) {
		output[o0][o1][o2][o3] = input[0][o1][o2][0];
	}
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.1/Sub_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Sub_2( const fixed A[1][64][35][16], const fixed B[1][64][35][16], fixed C[1][64][35][16] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	for (unsigned i3=0; i3<16; i3++)
	{
		C[0][i1][i2][i3] = A[0][i1][i2][i3]-B[0][i1][i2][i3];;
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/edge_convs.1/Concat
 */
FUNC_PREFIX void node__mod_edge_convs_1_Concat( const fixed input_0[1][64][35][16], const fixed input_1[1][64][35][16], fixed output[1][128][35][16] )
{
#pragma HLS INLINE OFF

	/* Concat */
	int64_t outputOffset;
	outputOffset = 0;
	for (int64_t i = 0, j = 0; i < 35840; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 35840) {
			outputOffset += (35840);
			j = 0;
		}
	}
	outputOffset = 35840;
	for (int64_t i = 0, j = 0; i < 35840; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_1 + i);
		if (++j == 35840) {
			outputOffset += (35840);
			j = 0;
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/convs.0/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_1_convs_0_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=128 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=128 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 128; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 128; c++) {
#pragma HLS UNROLL factor=128
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.1/acts.0/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_1_acts_0_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/convs.1/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_1_convs_1_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=128 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=128 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 128; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 128; c++) {
#pragma HLS UNROLL factor=128
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.1/acts.1/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_1_acts_1_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/convs.2/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_1_convs_2_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=128 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=128 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 128; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 128; c++) {
#pragma HLS UNROLL factor=128
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.1/acts.2/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_1_acts_2_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_15
 */


/*
 * Operand:           ReduceMean
 * Name in ONNX file: /mod/edge_convs.1/ReduceMean
 */
FUNC_PREFIX void node__mod_edge_convs_1_ReduceMean( const fixed x[1][128][35][16], const int64_t axes[1], fixed y[1][128][35] )
{
#pragma HLS INLINE OFF

	/* ReduceMean */
	/* keepdims: 0 */
	/* axes: (	-1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<128; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<128; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				for (unsigned i3 = 0; i3<16; i3++) {
					y[i0][i1][i2]+=x[i0][i1][i2][i3];
				}
			}
		}
	}
	/* ReduceMean: Divide by the number of elements (reduced axes) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<128; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] /= 16;
			}
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/sc/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_1_sc_Conv( const fixed x[1][64][35], const fixed w[128][64][1], const fixed bias[128], fixed y[1][128][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=64 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=64 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 128; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 64; c++) {
#pragma HLS UNROLL factor=64
    acc += x[b][c][h] * w[m][c][0];
}

y[b][m][h] = acc;
}

}
}
}


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.1/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Add_1( const fixed A[1][128][35], const fixed B[1][128][35], fixed C[1][128][35] )
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
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][i1][i2];;
	}
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.1/sc_act/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_1_sc_act_Relu( const fixed X[1][128][35], fixed Y[1][128][35] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2] = 0;
		if (X[i0][i1][i2] > 0) {
			Y[i0][i1][i2] = X[i0][i1][i2];
		
	}
	}
	}

}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_5
 */
FUNC_PREFIX void node__mod_Mul_5( const fixed A[1][128][35], const fixed B[1][1][35], fixed C[1][128][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/Add_2
 */
FUNC_PREFIX void node__mod_Add_2( const fixed A[1][128][35], const fixed B[1][1][35], fixed C[1][128][35] )
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
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.2/Transpose
 */
FUNC_PREFIX void node__mod_edge_convs_2_Transpose( const fixed input[1][128][35], fixed output[1][35][128] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           MatMul
 * Name in ONNX file: /mod/edge_convs.2/MatMul
 */

FUNC_PREFIX void node__mod_edge_convs_2_MatMul( const fixed A[1][35][128], const fixed B[1][128][35], fixed Y[1][35][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=A cyclic factor=16 dim=3
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=16 dim=2

for (unsigned b = 0; b < 1; b++) {
for (unsigned i = 0; i < 35; i++) {
for (unsigned j = 0; j < 35; j++) {

#pragma HLS PIPELINE II=1

    fixed acc = 0;

    for (unsigned k = 0; k < 128; k++) {
#pragma HLS UNROLL factor=16
        acc += A[0][i][k] * B[0][k][j];
    }

    Y[0][i][j] = acc;
}
}


	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant
 */


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.2/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_2_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]**B;;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_1
 */


/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.2/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_2_Pow( const fixed A[1][128][35], const fixed *B, fixed C[1][128][35] )
{
#pragma HLS INLINE OFF

	/* Pow
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = powf(A[0][i1][i2],*B);;
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/edge_convs.2/ReduceSum
 */
FUNC_PREFIX void node__mod_edge_convs_2_ReduceSum( const fixed x[1][128][35], const int64_t axes[1], fixed y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* ReduceSum */
	/* keepdims: 1 */
	/* axes: (	1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<128; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][0][i2]+=x[i0][i1][i2];
			}
		}
	}
}

/*
 * Operand:           Neg
 * Name in ONNX file: /mod/edge_convs.2/Neg
 */
FUNC_PREFIX void node__mod_edge_convs_2_Neg( const fixed X[1][1][35], fixed Y[1][1][35] )
{
#pragma HLS INLINE OFF

	/* Neg
	   Implemented with Elementwise template.
	   alpha = 0.00000000000000000000
	   beta = 0.00000000000000000000
	*/
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<1; i1++) {
	for (unsigned i2=0; i2<35; i2++) {
		Y[i0][i1][i2] =  -X[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.2/Sub
 */
FUNC_PREFIX void node__mod_edge_convs_2_Sub( const fixed A[1][1][35], const fixed B[1][35][35], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][0][i2]-B[0][i1][i2];;
	}
}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.2/Transpose_1
 */
FUNC_PREFIX void node__mod_edge_convs_2_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<1; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.2/Sub_1
 */
FUNC_PREFIX void node__mod_edge_convs_2_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]-B[0][i1][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_2
 */


/*
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.2/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_2_TopK( const fixed X[1][35][35], const int64_t K[1], fixed Values[1][35][17], int64_t Indices[1][35][17] )
{
#pragma HLS INLINE OFF

	/* TopK with largest=1, sorted=1, other options not currently supported */
	for (int i0 = 0; i0 < 1; i0++) {
		for (int i1 = 0; i1 < 35; i1++) {
			for (int k = 0; k < 17; k++) {
				Values[i0][i1][k] = -1e10;
				Indices[i0][i1][k] = -1;
			}
			for (int k = 0; k < 35; k++) {
				for (int d = 0; d < 17; d++) {
					if (X[i0][i1][k] > Values[i0][i1][d]) {
						for (int s = 16; s > d; s--) {
							Values[i0][i1][s] = Values[i0][i1][s - 1];
							Indices[i0][i1][s] = Indices[i0][i1][s - 1];
						}
						Values[i0][i1][d] = X[i0][i1][k];
						Indices[i0][i1][d] = k;
						break;
					}
				}
			}
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_3
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_4
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_5
 */


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_6
 */


/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.2/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_2_Slice( const int64_t data[1][35][17], const int64_t starts[1], const int64_t ends[1], const int64_t axes[1], const int64_t steps[1], int64_t output[1][35][16] )
{
#pragma HLS INLINE OFF

	for (unsigned i0=0, o0=0; o0<1; i0+=1, o0++) {
	for (unsigned i1=0, o1=0; o1<35; i1+=1, o1++) {
	for (unsigned i2=1, o2=0; o2<16; i2+=1, o2++) {
		output[o0][o1][o2] = data[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_7
 */


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.2/Add
 */
FUNC_PREFIX void node__mod_edge_convs_2_Add( const int64_t A[1][35][16], const int64_t B[1][1][1], int64_t C[1][35][16] )
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
	for (unsigned i1=0; i1<35; i1++)
	for (unsigned i2=0; i2<16; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][0];;
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_8
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.2/Reshape
 */
FUNC_PREFIX void node__mod_edge_convs_2_Reshape( const int64_t data[1][35][16], const int64_t shape[1], int64_t reshaped[560] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	int64_t *data_ptr = (int64_t*)data;
	int64_t *reshaped_ptr = (int64_t*)reshaped;
	uint32_t i;
	for( i=0; i<560; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.2/Transpose_2
 */
FUNC_PREFIX void node__mod_edge_convs_2_Transpose_2( const fixed input[1][128][35], fixed output[1][35][128] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 2 1 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<128; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
		output[i0][i2][i1] = input[i0][i1][i2];
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_9
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.2/Reshape_1
 */
FUNC_PREFIX void node__mod_edge_convs_2_Reshape_1( const fixed data[1][35][128], const int64_t shape[2], fixed reshaped[35][128] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<4480; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Gather
 * Name in ONNX file: /mod/edge_convs.2/Gather
 */
FUNC_PREFIX void node__mod_edge_convs_2_Gather( const fixed X[35][128], const int64_t indices[560], fixed Y[560][128] )
{
#pragma HLS INLINE OFF

	/* Gather
	   axis = 0
	 */
	for (unsigned i0=0; i0<560; i0++)
	for (unsigned i1=0; i1<128; i1++)
	{
		int32_t idx = indices[i0];
		idx = idx < 0 ? 35+idx : idx;
		Y[i0][i1] = X[idx][i1];
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_10
 */


/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.2/Reshape_2
 */
FUNC_PREFIX void node__mod_edge_convs_2_Reshape_2( const fixed data[560][128], const int64_t shape[4], fixed reshaped[1][35][16][128] )
{
#pragma HLS INLINE OFF

	/*Reshape*/
	fixed *data_ptr = (fixed*)data;
	fixed *reshaped_ptr = (fixed*)reshaped;
	uint32_t i;
	for( i=0; i<71680; i++ )
		reshaped_ptr[i] = data_ptr[i];

}

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.2/Transpose_3
 */
FUNC_PREFIX void node__mod_edge_convs_2_Transpose_3( const fixed input[1][35][16][128], fixed output[1][128][35][16] )
{
#pragma HLS INLINE OFF

	/* Transpose
	 * perm = 0 3 1 2 
	 */
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<35; i1++ ) {
	for( uint32_t i2=0; i2<16; i2++ ) {
	for( uint32_t i3=0; i3<128; i3++ ) {
		output[i0][i3][i1][i2] = input[i0][i1][i2][i3];
	}
	}
	}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_11
 */


/*
 * Operand:           Unsqueeze
 * Name in ONNX file: /mod/edge_convs.2/Unsqueeze
 */
FUNC_PREFIX void node__mod_edge_convs_2_Unsqueeze( const fixed input[1][128][35], const int64_t axes_tensor[1], fixed output[1][128][35][1] )
{
#pragma HLS INLINE OFF

	/* Unsqueeze */
	fixed *data = (fixed*)input;
	fixed *expanded= (fixed*)output;
	for( uint32_t i=0; i<4480; i++ )
		expanded[i] = data[i];

}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.2/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_2_Expand( const fixed input[1][128][35][1], const int64_t shape[4], fixed output[1][128][35][16] )
{
#pragma HLS INLINE OFF

	/* Expand */
	for( uint32_t o0=0; o0<1; o0++) {
	for( uint32_t o1=0; o1<128; o1++) {
	for( uint32_t o2=0; o2<35; o2++) {
	for( uint32_t o3=0; o3<16; o3++) {
		output[o0][o1][o2][o3] = input[0][o1][o2][0];
	}
	}
	}
	}
}

/*
 * Operand:           Sub
 * Name in ONNX file: /mod/edge_convs.2/Sub_2
 */
FUNC_PREFIX void node__mod_edge_convs_2_Sub_2( const fixed A[1][128][35][16], const fixed B[1][128][35][16], fixed C[1][128][35][16] )
{
#pragma HLS INLINE OFF

	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	for (unsigned i3=0; i3<16; i3++)
	{
		C[0][i1][i2][i3] = A[0][i1][i2][i3]-B[0][i1][i2][i3];;
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/edge_convs.2/Concat
 */
FUNC_PREFIX void node__mod_edge_convs_2_Concat( const fixed input_0[1][128][35][16], const fixed input_1[1][128][35][16], fixed output[1][256][35][16] )
{
#pragma HLS INLINE OFF

	/* Concat */
	int64_t outputOffset;
	outputOffset = 0;
	for (int64_t i = 0, j = 0; i < 71680; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 71680) {
			outputOffset += (71680);
			j = 0;
		}
	}
	outputOffset = 71680;
	for (int64_t i = 0, j = 0; i < 71680; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_1 + i);
		if (++j == 71680) {
			outputOffset += (71680);
			j = 0;
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.2/convs.0/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_2_convs_0_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=256 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=256 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 256; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 256; c++) {
#pragma HLS UNROLL factor=256
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.2/acts.0/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_2_acts_0_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<256; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.2/convs.1/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_2_convs_1_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=256 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=256 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 256; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 256; c++) {
#pragma HLS UNROLL factor=256
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.2/acts.1/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_2_acts_1_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<256; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.2/convs.2/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_2_convs_2_Conv( const fixed x[1][256][35][16], const fixed w[256][256][1][1], const fixed bias[256], fixed y[1][256][35][16] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=256 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=256 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 256; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
for (uint32_t i = 0; i < 16; i++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 256; c++) {
#pragma HLS UNROLL factor=256
    acc += x[b][c][h][i] * w[m][c][0][0];
}

y[b][m][h][i] = acc;
}
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.2/acts.2/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_2_acts_2_Relu( const fixed X[1][256][35][16], fixed Y[1][256][35][16] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<256; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	for( uint32_t i3=0; i3<16; i3++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2][i3] = 0;
		if (X[i0][i1][i2][i3] > 0) {
			Y[i0][i1][i2][i3] = X[i0][i1][i2][i3];
		
	}
	}
	}
	}

}
}


/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.2/Constant_15
 */


/*
 * Operand:           ReduceMean
 * Name in ONNX file: /mod/edge_convs.2/ReduceMean
 */
FUNC_PREFIX void node__mod_edge_convs_2_ReduceMean( const fixed x[1][256][35][16], const int64_t axes[1], fixed y[1][256][35] )
{
#pragma HLS INLINE OFF

	/* ReduceMean */
	/* keepdims: 0 */
	/* axes: (	-1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<256; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<256; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				for (unsigned i3 = 0; i3<16; i3++) {
					y[i0][i1][i2]+=x[i0][i1][i2][i3];
				}
			}
		}
	}
	/* ReduceMean: Divide by the number of elements (reduced axes) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<256; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] /= 16;
			}
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.2/sc/Conv
 */

FUNC_PREFIX void node__mod_edge_convs_2_sc_Conv( const fixed x[1][128][35], const fixed w[256][128][1], const fixed bias[256], fixed y[1][256][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=128 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=128 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 256; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 128; c++) {
#pragma HLS UNROLL factor=128
    acc += x[b][c][h] * w[m][c][0];
}

y[b][m][h] = acc;
}

}
}
}


/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.2/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_2_Add_1( const fixed A[1][256][35], const fixed B[1][256][35], fixed C[1][256][35] )
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
	for (unsigned i1=0; i1<256; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][i1][i2];;
	}
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.2/sc_act/Relu
 */

FUNC_PREFIX void node__mod_edge_convs_2_sc_act_Relu( const fixed X[1][256][35], fixed Y[1][256][35] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<256; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2] = 0;
		if (X[i0][i1][i2] > 0) {
			Y[i0][i1][i2] = X[i0][i1][i2];
		
	}
	}
	}

}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_6
 */
FUNC_PREFIX void node__mod_Mul_6( const fixed A[1][256][35], const fixed B[1][1][35], fixed C[1][256][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<256; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           Concat
 * Name in ONNX file: /mod/Concat
 */
FUNC_PREFIX void node__mod_Concat( const fixed input_0[1][64][35], const fixed input_1[1][128][35], const fixed input_2[1][256][35], fixed output[1][448][35] )
{
#pragma HLS INLINE OFF

	/* Concat */
	int64_t outputOffset;
	outputOffset = 0;
	for (int64_t i = 0, j = 0; i < 2240; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 2240) {
			outputOffset += (13440);
			j = 0;
		}
	}
	outputOffset = 2240;
	for (int64_t i = 0, j = 0; i < 4480; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_1 + i);
		if (++j == 4480) {
			outputOffset += (11200);
			j = 0;
		}
	}
	outputOffset = 6720;
	for (int64_t i = 0, j = 0; i < 8960; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_2 + i);
		if (++j == 8960) {
			outputOffset += (6720);
			j = 0;
		}
	}
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/fusion_block/fusion_block.0/Conv
 */

FUNC_PREFIX void node__mod_fusion_block_fusion_block_0_Conv( const fixed x[1][448][35], const fixed w[384][448][1], const fixed bias[384], fixed y[1][384][35] )
{
#pragma HLS INLINE OFF

#pragma HLS ARRAY_PARTITION variable=x cyclic factor=448 dim=2
#pragma HLS ARRAY_PARTITION variable=w cyclic factor=448 dim=2

for (uint32_t b = 0; b < 1; b++) {
#pragma HLS loop_flatten
for (uint32_t m = 0; m < 384; m++) {
#pragma HLS loop_flatten
for (uint32_t h = 0; h < 35; h++) {
#pragma HLS PIPELINE II=1

fixed acc = bias[m];

for (uint32_t c = 0; c < 448; c++) {
#pragma HLS UNROLL factor=448
    acc += x[b][c][h] * w[m][c][0];
}

y[b][m][h] = acc;
}

}
}
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/fusion_block/fusion_block.2/Relu
 */

FUNC_PREFIX void node__mod_fusion_block_fusion_block_2_Relu( const fixed X[1][384][35], fixed Y[1][384][35] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<384; i1++ ) {
	for( uint32_t i2=0; i2<35; i2++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1][i2] = 0;
		if (X[i0][i1][i2] > 0) {
			Y[i0][i1][i2] = X[i0][i1][i2];
		
	}
	}
	}

}
}


/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_7
 */
FUNC_PREFIX void node__mod_Mul_7( const fixed A[1][384][35], const fixed B[1][1][35], fixed C[1][384][35] )
{
#pragma HLS INLINE OFF

	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<384; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]*B[0][0][i2];;
	}
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/ReduceSum_1
 */
FUNC_PREFIX void node__mod_ReduceSum_1( const fixed x[1][384][35], const int64_t axes[1], fixed y[1][384] )
{
#pragma HLS INLINE OFF

	/* ReduceSum */
	/* keepdims: 0 */
	/* axes: (	-1	) */
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<384; i1++) {
			y[i0][i1] = 0.0;
		}
	}
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<384; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1]+=x[i0][i1][i2];
			}
		}
	}
}

/*
 * Operand:           Div
 * Name in ONNX file: /mod/Div
 */
FUNC_PREFIX void node__mod_Div( const fixed A[1][384], const fixed B[1][1], fixed C[1][384] )
{
#pragma HLS INLINE OFF

	/* Div
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<384; i1++)
	{
		C[0][i1] = A[0][i1]/ B[0][0];;
	}
}

/*
 * Operand:           Gemm
 * Name in ONNX file: /mod/fc/fc.0/fc.0.0/Gemm
 */

FUNC_PREFIX void node__mod_fc_fc_0_fc_0_0_Gemm( const fixed A[1][384], const fixed B[256][384], const fixed C[256], fixed Y[1][256] )
{
#pragma HLS INLINE OFF


const int M = 1;
const int K = 384;
const int N = 256;

for (uint32_t r = 0; r < M; r++)
    for (uint32_t c = 0; c < N; c++) {

        fixed acc = C[c];

        for (uint32_t i = 0; i < K; i++) {
            #pragma HLS UNROLL factor=384
            acc += A[r][i] * B[c][i];
        }

        Y[r][c] = acc;
    }
}


/*
 * Operand:           Relu
 * Name in ONNX file: /mod/fc/fc.0/fc.0.1/Relu
 */

FUNC_PREFIX void node__mod_fc_fc_0_fc_0_1_Relu( const fixed X[1][256], fixed Y[1][256] )
{
#pragma HLS INLINE OFF


	/*Relu*/
	for( uint32_t i0=0; i0<1; i0++ ) {
	for( uint32_t i1=0; i1<256; i1++ ) {
	#pragma HLS PIPELINE II=1
		Y[i0][i1] = 0;
		if (X[i0][i1] > 0) {
			Y[i0][i1] = X[i0][i1];
		
	}
	}

}
}


/*
 * Operand:           Gemm
 * Name in ONNX file: /fc_out/fc_out.0/Gemm
 */

FUNC_PREFIX void node__fc_out_fc_out_0_Gemm( const fixed A[1][256], const fixed B[4][256], const fixed C[4], fixed Y[1][4] )
{
#pragma HLS INLINE OFF


const int M = 1;
const int K = 256;
const int N = 4;

for (uint32_t r = 0; r < M; r++)
    for (uint32_t c = 0; c < N; c++) {

        fixed acc = C[c];

        for (uint32_t i = 0; i < K; i++) {
            #pragma HLS UNROLL factor=256
            acc += A[r][i] * B[c][i];
        }

        Y[r][c] = acc;
    }
}



void entry(const fixed tensor_pf_points[1][3][35], const fixed tensor_pf_features[1][4][35], const fixed tensor_pf_mask[1][1][35], fixed tensor_MSE[1][4]){
#pragma HLS INLINE OFF

	node__mod_Mul( tensor_pf_points, tensor_pf_mask, tensor__mod_Mul_output_0);
	node__mod_Mul_1( tensor_pf_features, tensor_pf_mask, tensor__mod_Mul_1_output_0);
	node__mod_Equal( tensor_pf_mask, &tensor__mod_Constant_output_0, tensor__mod_Equal_output_0);
	node__mod_Mul_2( tensor__mod_Equal_output_0, &tensor__mod_Constant_1_output_0, tensor__mod_Mul_2_output_0);
	node__mod_Cast_1( tensor_pf_mask, tensor__mod_Cast_1_output_0);
	node__mod_ReduceSum( tensor__mod_Cast_1_output_0, tensor_onnx__ReduceSum_98, tensor__mod_ReduceSum_output_0);
	node__mod_Max( tensor__mod_ReduceSum_output_0, tensor__mod_Constant_2_output_0, tensor__mod_Max_output_0);
	node__mod_bn_fts_BatchNormalization( tensor__mod_Mul_1_output_0, tensor_mod_bn_fts_weight, tensor_mod_bn_fts_bias, tensor_mod_bn_fts_running_mean, tensor_mod_bn_fts_running_var, tensor__mod_bn_fts_BatchNormalization_output_0);
	node__mod_Mul_3( tensor__mod_bn_fts_BatchNormalization_output_0, tensor__mod_Cast_1_output_0, tensor__mod_Mul_3_output_0);
	node__mod_Add( tensor__mod_Mul_output_0, tensor__mod_Mul_2_output_0, tensor__mod_Add_output_0);
	node__mod_edge_convs_0_Transpose( tensor__mod_Add_output_0, tensor__mod_edge_convs_0_Transpose_output_0);
	node__mod_edge_convs_0_MatMul( tensor__mod_edge_convs_0_Transpose_output_0, tensor__mod_Add_output_0, tensor__mod_edge_convs_0_MatMul_output_0);
	node__mod_edge_convs_0_Mul( tensor__mod_edge_convs_0_MatMul_output_0, &tensor__mod_edge_convs_0_Constant_output_0, tensor__mod_edge_convs_0_Mul_output_0);
	node__mod_edge_convs_0_Pow( tensor__mod_Add_output_0, &tensor__mod_edge_convs_0_Constant_1_output_0, tensor__mod_edge_convs_0_Pow_output_0);
	node__mod_edge_convs_0_ReduceSum( tensor__mod_edge_convs_0_Pow_output_0, tensor_onnx__ReduceSum_113, tensor__mod_edge_convs_0_ReduceSum_output_0);
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
	node__mod_edge_convs_0_convs_0_Conv( tensor__mod_edge_convs_0_Concat_output_0, tensor_onnx__Conv_389, tensor_onnx__Conv_390, tensor__mod_edge_convs_0_convs_0_Conv_output_0);
	node__mod_edge_convs_0_acts_0_Relu( tensor__mod_edge_convs_0_convs_0_Conv_output_0, tensor__mod_edge_convs_0_acts_0_Relu_output_0);
	node__mod_edge_convs_0_convs_1_Conv( tensor__mod_edge_convs_0_acts_0_Relu_output_0, tensor_onnx__Conv_392, tensor_onnx__Conv_393, tensor__mod_edge_convs_0_convs_1_Conv_output_0);
	node__mod_edge_convs_0_acts_1_Relu( tensor__mod_edge_convs_0_convs_1_Conv_output_0, tensor__mod_edge_convs_0_acts_1_Relu_output_0);
	node__mod_edge_convs_0_convs_2_Conv( tensor__mod_edge_convs_0_acts_1_Relu_output_0, tensor_onnx__Conv_395, tensor_onnx__Conv_396, tensor__mod_edge_convs_0_convs_2_Conv_output_0);
	node__mod_edge_convs_0_acts_2_Relu( tensor__mod_edge_convs_0_convs_2_Conv_output_0, tensor__mod_edge_convs_0_acts_2_Relu_output_0);
	node__mod_edge_convs_0_ReduceMean( tensor__mod_edge_convs_0_acts_2_Relu_output_0, tensor__mod_edge_convs_0_Constant_15_output_0, tensor__mod_edge_convs_0_ReduceMean_output_0);
	node__mod_edge_convs_0_sc_Conv( tensor__mod_Mul_3_output_0, tensor_onnx__Conv_398, tensor_onnx__Conv_399, tensor__mod_edge_convs_0_sc_Conv_output_0);
	node__mod_edge_convs_0_Add_1( tensor__mod_edge_convs_0_sc_Conv_output_0, tensor__mod_edge_convs_0_ReduceMean_output_0, tensor__mod_edge_convs_0_Add_1_output_0);
	node__mod_edge_convs_0_sc_act_Relu( tensor__mod_edge_convs_0_Add_1_output_0, tensor__mod_edge_convs_0_sc_act_Relu_output_0);
	node__mod_Mul_4( tensor__mod_edge_convs_0_sc_act_Relu_output_0, tensor__mod_Cast_1_output_0, tensor__mod_Mul_4_output_0);
	node__mod_Add_1( tensor__mod_Mul_4_output_0, tensor__mod_Mul_2_output_0, tensor__mod_Add_1_output_0);
	node__mod_edge_convs_1_Transpose( tensor__mod_Add_1_output_0, tensor__mod_edge_convs_1_Transpose_output_0);
	node__mod_edge_convs_1_MatMul( tensor__mod_edge_convs_1_Transpose_output_0, tensor__mod_Add_1_output_0, tensor__mod_edge_convs_1_MatMul_output_0);
	node__mod_edge_convs_1_Mul( tensor__mod_edge_convs_1_MatMul_output_0, &tensor__mod_edge_convs_1_Constant_output_0, tensor__mod_edge_convs_1_Mul_output_0);
	node__mod_edge_convs_1_Pow( tensor__mod_Add_1_output_0, &tensor__mod_edge_convs_1_Constant_1_output_0, tensor__mod_edge_convs_1_Pow_output_0);
	node__mod_edge_convs_1_ReduceSum( tensor__mod_edge_convs_1_Pow_output_0, tensor_onnx__ReduceSum_113, tensor__mod_edge_convs_1_ReduceSum_output_0);
	node__mod_edge_convs_1_Neg( tensor__mod_edge_convs_1_ReduceSum_output_0, tensor__mod_edge_convs_1_Neg_output_0);
	node__mod_edge_convs_1_Sub( tensor__mod_edge_convs_1_Neg_output_0, tensor__mod_edge_convs_1_Mul_output_0, tensor__mod_edge_convs_1_Sub_output_0);
	node__mod_edge_convs_1_Transpose_1( tensor__mod_edge_convs_1_ReduceSum_output_0, tensor__mod_edge_convs_1_Transpose_1_output_0);
	node__mod_edge_convs_1_Sub_1( tensor__mod_edge_convs_1_Sub_output_0, tensor__mod_edge_convs_1_Transpose_1_output_0, tensor__mod_edge_convs_1_Sub_1_output_0);
	node__mod_edge_convs_1_TopK( tensor__mod_edge_convs_1_Sub_1_output_0, tensor__mod_edge_convs_1_Constant_2_output_0, tensor__mod_edge_convs_1_TopK_output_0, tensor__mod_edge_convs_1_TopK_output_1);
	node__mod_edge_convs_1_Slice( tensor__mod_edge_convs_1_TopK_output_1, tensor__mod_edge_convs_1_Constant_4_output_0, tensor__mod_edge_convs_1_Constant_5_output_0, tensor__mod_edge_convs_1_Constant_3_output_0, tensor__mod_edge_convs_1_Constant_6_output_0, tensor__mod_edge_convs_1_Slice_output_0);
	node__mod_edge_convs_1_Add( tensor__mod_edge_convs_1_Slice_output_0, tensor__mod_edge_convs_1_Constant_7_output_0, tensor__mod_edge_convs_1_Add_output_0);
	node__mod_edge_convs_1_Reshape( tensor__mod_edge_convs_1_Add_output_0, tensor__mod_edge_convs_1_Constant_8_output_0, tensor__mod_edge_convs_1_Reshape_output_0);
	node__mod_edge_convs_1_Transpose_2( tensor__mod_Mul_4_output_0, tensor__mod_edge_convs_1_Transpose_2_output_0);
	node__mod_edge_convs_1_Reshape_1( tensor__mod_edge_convs_1_Transpose_2_output_0, tensor__mod_edge_convs_1_Constant_9_output_0, tensor__mod_edge_convs_1_Reshape_1_output_0);
	node__mod_edge_convs_1_Gather( tensor__mod_edge_convs_1_Reshape_1_output_0, tensor__mod_edge_convs_1_Reshape_output_0, tensor__mod_edge_convs_1_Gather_output_0);
	node__mod_edge_convs_1_Reshape_2( tensor__mod_edge_convs_1_Gather_output_0, tensor__mod_edge_convs_1_Constant_10_output_0, tensor__mod_edge_convs_1_Reshape_2_output_0);
	node__mod_edge_convs_1_Transpose_3( tensor__mod_edge_convs_1_Reshape_2_output_0, tensor__mod_edge_convs_1_Transpose_3_output_0);
	node__mod_edge_convs_1_Unsqueeze( tensor__mod_Mul_4_output_0, tensor__mod_edge_convs_1_Constant_11_output_0, tensor__mod_edge_convs_1_Unsqueeze_output_0);
	node__mod_edge_convs_1_Expand( tensor__mod_edge_convs_1_Unsqueeze_output_0, tensor__mod_edge_convs_1_Expand_static_shape, tensor__mod_edge_convs_1_Expand_output_0);
	node__mod_edge_convs_1_Sub_2( tensor__mod_edge_convs_1_Transpose_3_output_0, tensor__mod_edge_convs_1_Expand_output_0, tensor__mod_edge_convs_1_Sub_2_output_0);
	node__mod_edge_convs_1_Concat( tensor__mod_edge_convs_1_Expand_output_0, tensor__mod_edge_convs_1_Sub_2_output_0, tensor__mod_edge_convs_1_Concat_output_0);
	node__mod_edge_convs_1_convs_0_Conv( tensor__mod_edge_convs_1_Concat_output_0, tensor_onnx__Conv_401, tensor_onnx__Conv_402, tensor__mod_edge_convs_1_convs_0_Conv_output_0);
	node__mod_edge_convs_1_acts_0_Relu( tensor__mod_edge_convs_1_convs_0_Conv_output_0, tensor__mod_edge_convs_1_acts_0_Relu_output_0);
	node__mod_edge_convs_1_convs_1_Conv( tensor__mod_edge_convs_1_acts_0_Relu_output_0, tensor_onnx__Conv_404, tensor_onnx__Conv_405, tensor__mod_edge_convs_1_convs_1_Conv_output_0);
	node__mod_edge_convs_1_acts_1_Relu( tensor__mod_edge_convs_1_convs_1_Conv_output_0, tensor__mod_edge_convs_1_acts_1_Relu_output_0);
	node__mod_edge_convs_1_convs_2_Conv( tensor__mod_edge_convs_1_acts_1_Relu_output_0, tensor_onnx__Conv_407, tensor_onnx__Conv_408, tensor__mod_edge_convs_1_convs_2_Conv_output_0);
	node__mod_edge_convs_1_acts_2_Relu( tensor__mod_edge_convs_1_convs_2_Conv_output_0, tensor__mod_edge_convs_1_acts_2_Relu_output_0);
	node__mod_edge_convs_1_ReduceMean( tensor__mod_edge_convs_1_acts_2_Relu_output_0, tensor__mod_edge_convs_1_Constant_15_output_0, tensor__mod_edge_convs_1_ReduceMean_output_0);
	node__mod_edge_convs_1_sc_Conv( tensor__mod_Mul_4_output_0, tensor_onnx__Conv_410, tensor_onnx__Conv_411, tensor__mod_edge_convs_1_sc_Conv_output_0);
	node__mod_edge_convs_1_Add_1( tensor__mod_edge_convs_1_sc_Conv_output_0, tensor__mod_edge_convs_1_ReduceMean_output_0, tensor__mod_edge_convs_1_Add_1_output_0);
	node__mod_edge_convs_1_sc_act_Relu( tensor__mod_edge_convs_1_Add_1_output_0, tensor__mod_edge_convs_1_sc_act_Relu_output_0);
	node__mod_Mul_5( tensor__mod_edge_convs_1_sc_act_Relu_output_0, tensor__mod_Cast_1_output_0, tensor__mod_Mul_5_output_0);
	node__mod_Add_2( tensor__mod_Mul_5_output_0, tensor__mod_Mul_2_output_0, tensor__mod_Add_2_output_0);
	node__mod_edge_convs_2_Transpose( tensor__mod_Add_2_output_0, tensor__mod_edge_convs_2_Transpose_output_0);
	node__mod_edge_convs_2_MatMul( tensor__mod_edge_convs_2_Transpose_output_0, tensor__mod_Add_2_output_0, tensor__mod_edge_convs_2_MatMul_output_0);
	node__mod_edge_convs_2_Mul( tensor__mod_edge_convs_2_MatMul_output_0, &tensor__mod_edge_convs_2_Constant_output_0, tensor__mod_edge_convs_2_Mul_output_0);
	node__mod_edge_convs_2_Pow( tensor__mod_Add_2_output_0, &tensor__mod_edge_convs_2_Constant_1_output_0, tensor__mod_edge_convs_2_Pow_output_0);
	node__mod_edge_convs_2_ReduceSum( tensor__mod_edge_convs_2_Pow_output_0, tensor_onnx__ReduceSum_113, tensor__mod_edge_convs_2_ReduceSum_output_0);
	node__mod_edge_convs_2_Neg( tensor__mod_edge_convs_2_ReduceSum_output_0, tensor__mod_edge_convs_2_Neg_output_0);
	node__mod_edge_convs_2_Sub( tensor__mod_edge_convs_2_Neg_output_0, tensor__mod_edge_convs_2_Mul_output_0, tensor__mod_edge_convs_2_Sub_output_0);
	node__mod_edge_convs_2_Transpose_1( tensor__mod_edge_convs_2_ReduceSum_output_0, tensor__mod_edge_convs_2_Transpose_1_output_0);
	node__mod_edge_convs_2_Sub_1( tensor__mod_edge_convs_2_Sub_output_0, tensor__mod_edge_convs_2_Transpose_1_output_0, tensor__mod_edge_convs_2_Sub_1_output_0);
	node__mod_edge_convs_2_TopK( tensor__mod_edge_convs_2_Sub_1_output_0, tensor__mod_edge_convs_2_Constant_2_output_0, tensor__mod_edge_convs_2_TopK_output_0, tensor__mod_edge_convs_2_TopK_output_1);
	node__mod_edge_convs_2_Slice( tensor__mod_edge_convs_2_TopK_output_1, tensor__mod_edge_convs_2_Constant_4_output_0, tensor__mod_edge_convs_2_Constant_5_output_0, tensor__mod_edge_convs_2_Constant_3_output_0, tensor__mod_edge_convs_2_Constant_6_output_0, tensor__mod_edge_convs_2_Slice_output_0);
	node__mod_edge_convs_2_Add( tensor__mod_edge_convs_2_Slice_output_0, tensor__mod_edge_convs_2_Constant_7_output_0, tensor__mod_edge_convs_2_Add_output_0);
	node__mod_edge_convs_2_Reshape( tensor__mod_edge_convs_2_Add_output_0, tensor__mod_edge_convs_2_Constant_8_output_0, tensor__mod_edge_convs_2_Reshape_output_0);
	node__mod_edge_convs_2_Transpose_2( tensor__mod_Mul_5_output_0, tensor__mod_edge_convs_2_Transpose_2_output_0);
	node__mod_edge_convs_2_Reshape_1( tensor__mod_edge_convs_2_Transpose_2_output_0, tensor__mod_edge_convs_2_Constant_9_output_0, tensor__mod_edge_convs_2_Reshape_1_output_0);
	node__mod_edge_convs_2_Gather( tensor__mod_edge_convs_2_Reshape_1_output_0, tensor__mod_edge_convs_2_Reshape_output_0, tensor__mod_edge_convs_2_Gather_output_0);
	node__mod_edge_convs_2_Reshape_2( tensor__mod_edge_convs_2_Gather_output_0, tensor__mod_edge_convs_2_Constant_10_output_0, tensor__mod_edge_convs_2_Reshape_2_output_0);
	node__mod_edge_convs_2_Transpose_3( tensor__mod_edge_convs_2_Reshape_2_output_0, tensor__mod_edge_convs_2_Transpose_3_output_0);
	node__mod_edge_convs_2_Unsqueeze( tensor__mod_Mul_5_output_0, tensor__mod_edge_convs_2_Constant_11_output_0, tensor__mod_edge_convs_2_Unsqueeze_output_0);
	node__mod_edge_convs_2_Expand( tensor__mod_edge_convs_2_Unsqueeze_output_0, tensor__mod_edge_convs_2_Expand_static_shape, tensor__mod_edge_convs_2_Expand_output_0);
	node__mod_edge_convs_2_Sub_2( tensor__mod_edge_convs_2_Transpose_3_output_0, tensor__mod_edge_convs_2_Expand_output_0, tensor__mod_edge_convs_2_Sub_2_output_0);
	node__mod_edge_convs_2_Concat( tensor__mod_edge_convs_2_Expand_output_0, tensor__mod_edge_convs_2_Sub_2_output_0, tensor__mod_edge_convs_2_Concat_output_0);
	node__mod_edge_convs_2_convs_0_Conv( tensor__mod_edge_convs_2_Concat_output_0, tensor_onnx__Conv_413, tensor_onnx__Conv_414, tensor__mod_edge_convs_2_convs_0_Conv_output_0);
	node__mod_edge_convs_2_acts_0_Relu( tensor__mod_edge_convs_2_convs_0_Conv_output_0, tensor__mod_edge_convs_2_acts_0_Relu_output_0);
	node__mod_edge_convs_2_convs_1_Conv( tensor__mod_edge_convs_2_acts_0_Relu_output_0, tensor_onnx__Conv_416, tensor_onnx__Conv_417, tensor__mod_edge_convs_2_convs_1_Conv_output_0);
	node__mod_edge_convs_2_acts_1_Relu( tensor__mod_edge_convs_2_convs_1_Conv_output_0, tensor__mod_edge_convs_2_acts_1_Relu_output_0);
	node__mod_edge_convs_2_convs_2_Conv( tensor__mod_edge_convs_2_acts_1_Relu_output_0, tensor_onnx__Conv_419, tensor_onnx__Conv_420, tensor__mod_edge_convs_2_convs_2_Conv_output_0);
	node__mod_edge_convs_2_acts_2_Relu( tensor__mod_edge_convs_2_convs_2_Conv_output_0, tensor__mod_edge_convs_2_acts_2_Relu_output_0);
	node__mod_edge_convs_2_ReduceMean( tensor__mod_edge_convs_2_acts_2_Relu_output_0, tensor__mod_edge_convs_2_Constant_15_output_0, tensor__mod_edge_convs_2_ReduceMean_output_0);
	node__mod_edge_convs_2_sc_Conv( tensor__mod_Mul_5_output_0, tensor_onnx__Conv_422, tensor_onnx__Conv_423, tensor__mod_edge_convs_2_sc_Conv_output_0);
	node__mod_edge_convs_2_Add_1( tensor__mod_edge_convs_2_sc_Conv_output_0, tensor__mod_edge_convs_2_ReduceMean_output_0, tensor__mod_edge_convs_2_Add_1_output_0);
	node__mod_edge_convs_2_sc_act_Relu( tensor__mod_edge_convs_2_Add_1_output_0, tensor__mod_edge_convs_2_sc_act_Relu_output_0);
	node__mod_Mul_6( tensor__mod_edge_convs_2_sc_act_Relu_output_0, tensor__mod_Cast_1_output_0, tensor__mod_Mul_6_output_0);
	node__mod_Concat( tensor__mod_Mul_4_output_0, tensor__mod_Mul_5_output_0, tensor__mod_Mul_6_output_0, tensor__mod_Concat_output_0);
	node__mod_fusion_block_fusion_block_0_Conv( tensor__mod_Concat_output_0, tensor_onnx__Conv_425, tensor_onnx__Conv_426, tensor__mod_fusion_block_fusion_block_0_Conv_output_0);
	node__mod_fusion_block_fusion_block_2_Relu( tensor__mod_fusion_block_fusion_block_0_Conv_output_0, tensor__mod_fusion_block_fusion_block_2_Relu_output_0);
	node__mod_Mul_7( tensor__mod_fusion_block_fusion_block_2_Relu_output_0, tensor__mod_Cast_1_output_0, tensor__mod_Mul_7_output_0);
	node__mod_ReduceSum_1( tensor__mod_Mul_7_output_0, tensor_onnx__ReduceSum_98, tensor__mod_ReduceSum_1_output_0);
	node__mod_Div( tensor__mod_ReduceSum_1_output_0, tensor__mod_Max_output_0, tensor__mod_Div_output_0);
	node__mod_fc_fc_0_fc_0_0_Gemm( tensor__mod_Div_output_0, tensor_mod_fc_0_0_weight, tensor_mod_fc_0_0_bias, tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0);
	node__mod_fc_fc_0_fc_0_1_Relu( tensor__mod_fc_fc_0_fc_0_0_Gemm_output_0, tensor__mod_fc_fc_0_fc_0_1_Relu_output_0);
	node__fc_out_fc_out_0_Gemm( tensor__mod_fc_fc_0_fc_0_1_Relu_output_0, tensor_fc_out_0_weight, tensor_fc_out_0_bias, tensor_MSE);
}
