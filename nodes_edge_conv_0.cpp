#include "nodes.h"

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul
 */
FUNC_PREFIX void node__mod_Mul( const fixed A[1][3][35], const fixed B[1][1][35], fixed C[1][3][35] )
{
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_Constant( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Equal
 * Name in ONNX file: /mod/Equal
 */
FUNC_PREFIX void node__mod_Equal( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] )
{
	/* Equal
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_Constant_1( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_2
 */
FUNC_PREFIX void node__mod_Mul_2( const fixed A[1][1][35], const fixed *B, fixed C[1][1][35] )
{
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Cast */
  #pragma HLS INLINE OFF
	fixed *X = (fixed*)input;
	fixed *Y = (fixed*)output;
	for( unsigned i=0; i<35; i++)
		Y[i]= (fixed)X[i];
}

/*
 * Operand:           Constant
 * Name in ONNX file: Constant_61
 */
FUNC_PREFIX void node_Constant_61( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/ReduceSum
 */
FUNC_PREFIX void node__mod_ReduceSum( const fixed x[1][1][35], const int32_t axes[1], fixed y[1][1] )
{
	/* ReduceSum */
	/* keepdims: 0 */
	/* axes: (	-1	) */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_Constant_2( const fixed output[1][1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Max
 * Name in ONNX file: /mod/Max
 */
FUNC_PREFIX void node__mod_Max( const fixed in_0[1][1], const fixed in_1[1][1], fixed output[1][1] )
{
	/* Max
	   Implemented with Elementwise_variadic template.
	 */
  #pragma HLS INLINE OFF
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
	/* BatchNormalization
	 * epsilon = 0.00000999999974737875
	 * momentum = 0.89999997615814208984
	 */
  #pragma HLS INLINE OFF

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
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Transpose
	 * perm = 0 2 1 
	 */
  #pragma HLS INLINE OFF
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
	/* MatMul */
  #pragma HLS INLINE OFF
	for (unsigned i0=0; i0<1; i0++)
	{
		for (unsigned i = 0; i < 35; i++)
		for (unsigned j = 0; j < 35; j++)
		{
			Y[i0][i][j] = 0;
			for (unsigned k = 0; k < 3; k++)
				Y[i0][i][j] += A[0][i][k] * B[0][k][j];
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant
 */
FUNC_PREFIX void node__mod_edge_convs_0_Constant( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.0/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_0_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] )
{
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_1( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.0/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_0_Pow( const fixed A[1][3][35], const fixed *B, fixed C[1][3][35] )
{
	/* Pow
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node_Constant_74( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           ReduceSum
 * Name in ONNX file: /mod/edge_convs.0/ReduceSum
 */
FUNC_PREFIX void node__mod_edge_convs_0_ReduceSum( const fixed x[1][3][35], const int32_t axes[1], fixed y[1][1][35] )
{
	/* ReduceSum */
	/* keepdims: 1 */
	/* axes: (	1	) */
  #pragma HLS INLINE OFF
	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<1; i1++) {
			for (unsigned i2 = 0; i2<35; i2++) {
				y[i0][i1][i2] = 0.0;
			}
		}
	}

	for (unsigned i0 = 0; i0<1; i0++) {
		for (unsigned i1 = 0; i1<3; i1++) {
			fixed s0 = 0;
			fixed s1 = 0;
			fixed s2 = 0;
			fixed s3 = 0;
			fixed s4 = 0;
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
	/* Neg
	   Implemented with Elementwise template.
	   alpha = 0.00000000000000000000
	   beta = 0.00000000000000000000
	*/
  #pragma HLS INLINE OFF
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
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Transpose
	 * perm = 0 2 1 
	 */
  #pragma HLS INLINE OFF
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
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_2( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.0/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_0_TopK( const fixed X[1][35][35], const int32_t K[1], fixed Values[1][35][17], int32_t Indices[1][35][17] )
{
	/* TopK with largest=1, sorted=1, other options not currently supported */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_3( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_4
 */
FUNC_PREFIX void node__mod_edge_convs_0_Constant_4( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_5
 */
FUNC_PREFIX void node__mod_edge_convs_0_Constant_5( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_6
 */
FUNC_PREFIX void node__mod_edge_convs_0_Constant_6( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.0/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_0_Slice( const int32_t data[1][35][17], const int32_t starts[1], const int32_t ends[1], const int32_t axes[1], const int32_t steps[1], int32_t output[1][35][16] )
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_7( const int32_t output[1][1][1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.0/Add
 */
FUNC_PREFIX void node__mod_edge_convs_0_Add( const int32_t A[1][35][16], const int32_t B[1][1][1], int32_t C[1][35][16] )
{
	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_8( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape( const int32_t data[1][35][16], const int32_t shape[1], int32_t reshaped[560] )
{
	/*Reshape*/
  #pragma HLS INLINE OFF
	int32_t *data_ptr = (int32_t*)data;
	int32_t *reshaped_ptr = (int32_t*)reshaped;
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
	/* Transpose
	 * perm = 0 2 1 
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_9( const int32_t output[2] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_1( const fixed data[1][35][4], const int32_t shape[2], fixed reshaped[35][4] )
{
	/*Reshape*/
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Gather( const fixed X[35][4], const int32_t indices[560], fixed Y[560][4] )
{
	/* Gather
	   axis = 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_10( const int32_t output[4] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.0/Reshape_2
 */
FUNC_PREFIX void node__mod_edge_convs_0_Reshape_2( const fixed data[560][4], const int32_t shape[4], fixed reshaped[1][35][16][4] )
{
	/*Reshape*/
  #pragma HLS INLINE OFF
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
	/* Transpose
	 * perm = 0 3 1 2 
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_0_Constant_11( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Unsqueeze
 * Name in ONNX file: /mod/edge_convs.0/Unsqueeze
 */
FUNC_PREFIX void node__mod_edge_convs_0_Unsqueeze( const fixed input[1][4][35], const int32_t axes_tensor[1], fixed output[1][4][35][1] )
{
	/* Unsqueeze */
  #pragma HLS INLINE OFF
	fixed *data = (fixed*)input;
	fixed *expanded= (fixed*)output;
	for( uint32_t i=0; i<140; i++ )
		expanded[i] = data[i];

}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.0/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_0_Expand( const fixed input[1][4][35][1], const int32_t shape[4], fixed output[1][4][35][16] )
{
	/* Expand */
  #pragma HLS INLINE OFF
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
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Concat */
  #pragma HLS INLINE OFF
	int32_t outputOffset;
	outputOffset = 0;
	for (int32_t i = 0, j = 0; i < 2240; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 2240) {
			outputOffset += (2240);
			j = 0;
		}
	}
	outputOffset = 2240;
	for (int32_t i = 0, j = 0; i < 2240; i++) {
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
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1 
	 * group: 1
	 * kernel_shape: 1 1 
	 * pads: 0 0 0 0 
	 * strides: 1 1 
	 */
    #pragma HLS INLINE OFF

    for (uint32_t b = 0; b < 1; b++) {
        for (uint32_t m = 0; m < 64; m++) {
            fixed bias_val = bias[m];
            for (int32_t o0 = 0, i0 = 0; o0 < 35; o0++, i0++) {
                for (int32_t o1 = 0, i1 = 0; o1 < 16; o1++, i1++) {
                    fixed acc0 = 0;
                    fixed acc1 = 0;
                    fixed acc2 = 0;
                    fixed acc3 = 0;
                    for (int32_t c = 0; c < 8; c += 4) {
                        int ii0 = i0;
                        int ii1 = i1;

                        if (ii0 >= 0 && ii0 < 35 && ii1 >= 0 && ii1 < 16) {
                            acc0 += x[b][c+0][ii0][ii1] * w[m][c+0][0][0];
                            acc1 += x[b][c+1][ii0][ii1] * w[m][c+1][0][0];
                            acc2 += x[b][c+2][ii0][ii1] * w[m][c+2][0][0];
                            acc3 += x[b][c+3][ii0][ii1] * w[m][c+3][0][0];

                        }
                    }
                    y[b][m][o0][o1] = bias_val + acc0 + acc1 + acc2 + acc3;
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
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<35840; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.1/Conv
 */
FUNC_PREFIX void node__mod_edge_convs_0_convs_1_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] )
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1 
	 * group: 1
	 * kernel_shape: 1 1 
	 * pads: 0 0 0 0 
	 * strides: 1 1 
	 */
    #pragma HLS INLINE OFF
    for (uint32_t m = 0; m < 64; m++) {
        for (int32_t o0 = 0; o0 < 35; o0++) {
            for (int32_t o1 = 0; o1 < 16; o1++) {
                fixed acc = bias[m];
                for (int32_t c = 0; c < 64; c++) {
                    acc += x[0][c][o0][o1] * w[m][c][0][0];
                }
                y[0][m][o0][o1] = acc;
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
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<35840; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }
}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.0/convs.2/Conv
 */
FUNC_PREFIX void node__mod_edge_convs_0_convs_2_Conv( const fixed x[1][64][35][16], const fixed w[64][64][1][1], const fixed bias[64], fixed y[1][64][35][16] )
{
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 1 
	 * group: 1
	 * kernel_shape: 1 1 
	 * pads: 0 0 0 0 
	 * strides: 1 1 
	 */
  #pragma HLS INLINE OFF
	for( uint32_t b=0; b<1; b++ ) {
	for( uint32_t m=0; m<64; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
		for( int32_t o1=0, i1=0; o1<16; o1++, i1+=1) {
			y[b][m][o0][o1] = bias[m];
			for( int32_t c=0; c<64; c++ ) {
			for( uint32_t k0=0; k0<1; k0++ ) {
			for( uint32_t k1=0; k1<1; k1++ ) {
				int ii0 = i0+k0 * 1;
				if( ii0<0) continue;
				if( ii0>=35) continue;
				int ii1 = i1+k1 * 1;
				if( ii1<0) continue;
				if( ii1>=16) continue;
				y[b][m][o0][o1] += x[b][c][ii0][ii1] * w[m][c][k0][k1];
			} /* k */
			} /* k */
			} /* c */
		} /* o */
		} /* o */
	} /* m */
	} /* b */
}

/*
 * Operand:           Relu
 * Name in ONNX file: /mod/edge_convs.0/acts.2/Relu
 */
FUNC_PREFIX void node__mod_edge_convs_0_acts_2_Relu( const fixed X[1][64][35][16], fixed Y[1][64][35][16] )
{
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<35840; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.0/Constant_15
 */
FUNC_PREFIX void node__mod_edge_convs_0_Constant_15( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           ReduceMean
 * Name in ONNX file: /mod/edge_convs.0/ReduceMean
 */
FUNC_PREFIX void node__mod_edge_convs_0_ReduceMean( const fixed x[1][64][35][16], const int32_t axes[1], fixed y[1][64][35] )
{
	/* ReduceMean */
	/* keepdims: 0 */
	/* axes: (	-1	) */
  #pragma HLS INLINE OFF
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
	/* Conv
	 *
	 * auto_pad: NOTSET
	 * dilations: 1 
	 * group: 1
	 * kernel_shape: 1 
	 * pads: 0 0 
	 * strides: 1 
	 */
  #pragma HLS INLINE OFF
	for( uint32_t b=0; b<1; b++ ) {
	for( uint32_t m=0; m<64; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
			y[b][m][o0] = bias[m];
			for( int32_t c=0; c<4; c++ ) {
			for( uint32_t k0=0; k0<1; k0++ ) {
				int ii0 = i0+k0 * 1;
				if( ii0<0) continue;
				if( ii0>=35) continue;
				y[b][m][o0] += x[b][c][ii0] * w[m][c][k0];
			} /* k */
			} /* c */
		} /* o */
	} /* m */
	} /* b */
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.0/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_0_Add_1( const fixed A[1][64][35], const fixed B[1][64][35], fixed C[1][64][35] )
{
	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/*Relu*/
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<2240; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_4
 */
FUNC_PREFIX void node__mod_Mul_4( const fixed A[1][64][35], const fixed B[1][1][35], fixed C[1][64][35] )
{
	/* Mul
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
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
	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<64; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}