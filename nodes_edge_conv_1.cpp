#include "nodes.h"

/*
 * Operand:           Transpose
 * Name in ONNX file: /mod/edge_convs.1/Transpose
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose( const fixed input[1][64][35], fixed output[1][35][64] )
{
	/* Transpose
	 * perm = 0 2 1 
	 */
  #pragma HLS INLINE OFF
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
	/* MatMul */
  #pragma HLS INLINE OFF
	for (unsigned i0=0; i0<1; i0++)
	{
		for (unsigned i = 0; i < 35; i++)
		for (unsigned j = 0; j < 35; j++)
		{
			Y[i0][i][j] = 0;
			for (unsigned k = 0; k < 64; k++)
				Y[i0][i][j] += A[0][i][k] * B[0][k][j];
		}
	}
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/edge_convs.1/Mul
 */
FUNC_PREFIX void node__mod_edge_convs_1_Mul( const fixed A[1][35][35], const fixed *B, fixed C[1][35][35] )
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
 * Name in ONNX file: /mod/edge_convs.1/Constant_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_1( const fixed *output )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Pow
 * Name in ONNX file: /mod/edge_convs.1/Pow
 */
FUNC_PREFIX void node__mod_edge_convs_1_Pow( const fixed A[1][64][35], const fixed *B, fixed C[1][64][35] )
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
FUNC_PREFIX void node__mod_edge_convs_1_ReduceSum( const fixed x[1][64][35], const int32_t axes[1], fixed y[1][1][35] )
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
 * Name in ONNX file: /mod/edge_convs.1/Transpose_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose_1( const fixed input[1][1][35], fixed output[1][35][1] )
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
 * Name in ONNX file: /mod/edge_convs.1/Sub_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Sub_1( const fixed A[1][35][35], const fixed B[1][35][1], fixed C[1][35][35] )
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
 * Name in ONNX file: /mod/edge_convs.1/Constant_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_2( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           TopK
 * Name in ONNX file: /mod/edge_convs.1/TopK
 */
FUNC_PREFIX void node__mod_edge_convs_1_TopK( const fixed X[1][35][35], const int32_t K[1], fixed Values[1][35][17], int32_t Indices[1][35][17] )
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
 * Name in ONNX file: /mod/edge_convs.1/Constant_3
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_3( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_4
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_4( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_5
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_5( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_6
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_6( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Slice
 * Name in ONNX file: /mod/edge_convs.1/Slice
 */
FUNC_PREFIX void node__mod_edge_convs_1_Slice( const int32_t data[1][35][17], const int32_t starts[1], const int32_t ends[1], const int32_t axes[1], const int32_t steps[1], int32_t output[1][35][16] )
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
FUNC_PREFIX void node__mod_edge_convs_1_Constant_7( const int32_t output[1][1][1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Add
 * Name in ONNX file: /mod/edge_convs.1/Add
 */
FUNC_PREFIX void node__mod_edge_convs_1_Add( const int32_t A[1][35][16], const int32_t B[1][1][1], int32_t C[1][35][16] )
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
 * Name in ONNX file: /mod/edge_convs.1/Constant_8
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_8( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape( const int32_t data[1][35][16], const int32_t shape[1], int32_t reshaped[560] )
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
 * Name in ONNX file: /mod/edge_convs.1/Transpose_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Transpose_2( const fixed input[1][64][35], fixed output[1][35][64] )
{
	/* Transpose
	 * perm = 0 2 1 
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_1_Constant_9( const int32_t output[2] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape_1( const fixed data[1][35][64], const int32_t shape[2], fixed reshaped[35][64] )
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
 * Operand:           Gather
 * Name in ONNX file: /mod/edge_convs.1/Gather
 */
FUNC_PREFIX void node__mod_edge_convs_1_Gather( const fixed X[35][64], const int32_t indices[560], fixed Y[560][64] )
{
	/* Gather
	   axis = 0
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_1_Constant_10( const int32_t output[4] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Reshape
 * Name in ONNX file: /mod/edge_convs.1/Reshape_2
 */
FUNC_PREFIX void node__mod_edge_convs_1_Reshape_2( const fixed data[560][64], const int32_t shape[4], fixed reshaped[1][35][16][64] )
{
	/*Reshape*/
  #pragma HLS INLINE OFF
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
	/* Transpose
	 * perm = 0 3 1 2 
	 */
  #pragma HLS INLINE OFF
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
FUNC_PREFIX void node__mod_edge_convs_1_Constant_11( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           Unsqueeze
 * Name in ONNX file: /mod/edge_convs.1/Unsqueeze
 */
FUNC_PREFIX void node__mod_edge_convs_1_Unsqueeze( const fixed input[1][64][35], const int32_t axes_tensor[1], fixed output[1][64][35][1] )
{
	/* Unsqueeze */
  #pragma HLS INLINE OFF
	fixed *data = (fixed*)input;
	fixed *expanded= (fixed*)output;
	for( uint32_t i=0; i<2240; i++ )
		expanded[i] = data[i];

}

/*
 * Operand:           Expand
 * Name in ONNX file: /mod/edge_convs.1/Expand
 */
FUNC_PREFIX void node__mod_edge_convs_1_Expand( const fixed input[1][64][35][1], const int32_t shape[4], fixed output[1][64][35][16] )
{
	/* Expand */
  #pragma HLS INLINE OFF
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
	/* Sub
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
	/* Concat */
  #pragma HLS INLINE OFF
	int32_t outputOffset;
	outputOffset = 0;
	for (int32_t i = 0, j = 0; i < 35840; i++) {
		*((fixed*)output + (outputOffset + i)) = *((fixed*)input_0 + i);
		if (++j == 35840) {
			outputOffset += (35840);
			j = 0;
		}
	}
	outputOffset = 35840;
	for (int32_t i = 0, j = 0; i < 35840; i++) {
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
	for( uint32_t m=0; m<128; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
		for( int32_t o1=0, i1=0; o1<16; o1++, i1+=1) {
			y[b][m][o0][o1] = bias[m];
			for( int32_t c=0; c<128; c++ ) {
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
 * Name in ONNX file: /mod/edge_convs.1/acts.0/Relu
 */
FUNC_PREFIX void node__mod_edge_convs_1_acts_0_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<71680; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/convs.1/Conv
 */
FUNC_PREFIX void node__mod_edge_convs_1_convs_1_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] )
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
	for( uint32_t m=0; m<128; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
		for( int32_t o1=0, i1=0; o1<16; o1++, i1+=1) {
			y[b][m][o0][o1] = bias[m];
			for( int32_t c=0; c<128; c++ ) {
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
 * Name in ONNX file: /mod/edge_convs.1/acts.1/Relu
 */
FUNC_PREFIX void node__mod_edge_convs_1_acts_1_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<71680; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Conv
 * Name in ONNX file: /mod/edge_convs.1/convs.2/Conv
 */
FUNC_PREFIX void node__mod_edge_convs_1_convs_2_Conv( const fixed x[1][128][35][16], const fixed w[128][128][1][1], const fixed bias[128], fixed y[1][128][35][16] )
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
	for( uint32_t m=0; m<128; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
		for( int32_t o1=0, i1=0; o1<16; o1++, i1+=1) {
			y[b][m][o0][o1] = bias[m];
			for( int32_t c=0; c<128; c++ ) {
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
 * Name in ONNX file: /mod/edge_convs.1/acts.2/Relu
 */
FUNC_PREFIX void node__mod_edge_convs_1_acts_2_Relu( const fixed X[1][128][35][16], fixed Y[1][128][35][16] )
{
	/*Relu*/
  #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<71680; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Constant
 * Name in ONNX file: /mod/edge_convs.1/Constant_15
 */
FUNC_PREFIX void node__mod_edge_convs_1_Constant_15( const int32_t output[1] )
{
	/* Constant */ #pragma HLS INLINE OFF
	/* The output is generated as a global tensor */
	(void)output;
}

/*
 * Operand:           ReduceMean
 * Name in ONNX file: /mod/edge_convs.1/ReduceMean
 */
FUNC_PREFIX void node__mod_edge_convs_1_ReduceMean( const fixed x[1][128][35][16], const int32_t axes[1], fixed y[1][128][35] )
{
	/* ReduceMean */
	/* keepdims: 0 */
	/* axes: (	-1	) */
  #pragma HLS INLINE OFF
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
	for( uint32_t m=0; m<128; m++) {
		for( int32_t o0=0, i0=0; o0<35; o0++, i0+=1) {
			y[b][m][o0] = bias[m];
			for( int32_t c=0; c<64; c++ ) {
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
 * Name in ONNX file: /mod/edge_convs.1/Add_1
 */
FUNC_PREFIX void node__mod_edge_convs_1_Add_1( const fixed A[1][128][35], const fixed B[1][128][35], fixed C[1][128][35] )
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
	/*Relu*/
    #pragma HLS INLINE OFF
	fixed *X_ptr = (fixed*)X;
	fixed *Y_ptr = (fixed*)Y;
	uint32_t i;
	for( i=0; i<4480; i++ ) {
    Y_ptr[i] = 0;
    if (X_ptr[i] > 0) {
      Y_ptr[i] = X_ptr[i];
    }
  }

}

/*
 * Operand:           Mul
 * Name in ONNX file: /mod/Mul_5
 */
FUNC_PREFIX void node__mod_Mul_5( const fixed A[1][128][35], const fixed B[1][1][35], fixed C[1][128][35] )
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
	/* Add
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
  #pragma HLS INLINE OFF
	for (unsigned i0=0; i0<1; i0++)
	for (unsigned i1=0; i1<128; i1++)
	for (unsigned i2=0; i2<35; i2++)
	{
		C[0][i1][i2] = A[0][i1][i2]+B[0][0][i2];;
	}
}