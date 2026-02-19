/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 20:18:01 UTC. Any changes will be lost.
* 
* Model ID  22d4b737-9ff0-4754-8c93-1a29402e9de7
* 
* Memory    Size                      Efficiency
* Buffers   6240 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  37688 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-0
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [512]           float      dequeue
*    window_shape = [512]
*    stride = 160
*    buffer_multiplier = 1
* Hann smoothing                 [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [20]            float      dequeue
*    num_filters = 20
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
*    htk = True
*    librosa = False
* Clip                           [20]            float      dequeue
*    min = 0.000316227766016
*    max = 3.40282347E+38
* Logarithm                      [20]            float      dequeue
*    base = 0
* Sliding Window (data points)   [60,20]         float      dequeue
*    window_shape = [60,20]
*    stride = 660
*    buffer_multiplier = 1
* Input Layer                    [60,20]         float      dequeue
*    shape = [60,20]
* Convolution 1D                 [30,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,20,12]
* Batch Normalization            [30,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [30,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [30,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Convolution 1D                 [30,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [30,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [30,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [15,24]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,32]
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [15,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [15,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [32]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,4]
*    bias = float[4]
* Activation                     [4]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[4].
* 
* int IMAI_enqueue(const float *restrict data_in)
*    Description: Enqueue features. Returns SUCCESS (0) on success, else RET_NOMEM (-2) when low on memory.
*    Parameter data_in is Input of size float[1].
* 
* void IMAI_init(void)
*    Description: Initializes buffers to initial state. This function also works as a reset function.
* 
* 
* Disclaimer:
*   The generated code relies on the optimizations done by the C compiler.
*   For example many for-loops of length 1 must be removed by the optimizer.
*   This can only be done if the functions are inlined and simplified.
*   Check disassembly if unsure.
*   tl;dr Compile using gcc with -O3 or -Ofast
*/

/*
* Tensorflow Test Set
* 
* (ACC) Accuracy 90.769 %
* (F1S) F1 Score 90.671 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 977                0              302              668
* (FN) False Negative or Incorrect Negative Prediction               15                0                1              182
* (FP) False Positive or Incorrect Positive Prediction              182                2                1               13
* (TN) True Negative or Correct Negative Prediction                 971             2143             1841             1282
* (TPR) True Positive Rate or Sensitivity, Recall               98.49 %         100.00 %          99.67 %          78.59 %
* (TNR) True Negative Rate or Specificity, Selectivity          84.22 %          99.91 %          99.95 %          99.00 %
* (PPV) Positive Predictive Value or Precision                  84.30 %           0.00 %          99.67 %          98.09 %
* (NPV) Negative Predictive Value                               98.48 %         100.00 %          99.95 %          87.57 %
* (FNR) False Negative Rate or Miss Rate                         1.51 %         100.00 %           0.33 %          21.41 %
* (FPR) False Positive Rate or Fall-Out                         15.78 %           0.09 %           0.05 %           1.00 %
* (FDR) False Discovery Rate                                    15.70 %         100.00 %           0.33 %           1.91 %
* (FOR) False Omission Rate                                      1.52 %           0.00 %           0.05 %          12.43 %
* (F1S) F1 Score                                                90.84 %           0.00 %          99.67 %          87.26 %
*/

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[6240];
static int8_t _state[8392];

// Parameters
static const uint32_t _K4[] = {
    0x00000000, 0x381e87c4, 0x391e863b, 0x39b25423, 0x3a1e8019, 0x3a77a0f6, 0x3ab2449b, 0x3af29a52, 
    0x3b1e6790, 0x3b487014, 0x3b776514, 0x3b95a260, 0x3bb2068a, 0x3bd0ddef, 0x3bf2275e, 0x3c0af0c6, 
    0x3c1e058c, 0x3c325144, 0x3c47d325, 0x3c5e8a59, 0x3c767600, 0x3c87ca96, 0x3c94f373, 0x3ca2b513, 
    0x3cb10eef, 0x3cc00079, 0x3ccf891c, 0x3cdfa83e, 0x3cf05d41, 0x3d00d3bf, 0x3d09c324, 0x3d12fc79, 
    0x3d1c7f61, 0x3d264b7e, 0x3d306070, 0x3d3abdd2, 0x3d45633d, 0x3d505049, 0x3d5b8488, 0x3d66ff8d, 
    0x3d72c0e4, 0x3d7ec81a, 0x3d858a5c, 0x3d8bd322, 0x3d923e20, 0x3d98cb17, 0x3d9f79c6, 0x3da649eb, 
    0x3dad3b42, 0x3db44d87, 0x3dbb8073, 0x3dc2d3c0, 0x3dca4724, 0x3dd1da56, 0x3dd98d0a, 0x3de15ef5, 
    0x3de94fc9, 0x3df15f37, 0x3df98cef, 0x3e00ec51, 0x3e0520fd, 0x3e096453, 0x3e0db62a, 0x3e121654, 
    0x3e1684a9, 0x3e1b00fb, 0x3e1f8b1e, 0x3e2422e6, 0x3e28c824, 0x3e2d7aab, 0x3e323a4b, 0x3e3706d7, 
    0x3e3be01f, 0x3e40c5f2, 0x3e45b820, 0x3e4ab678, 0x3e4fc0c8, 0x3e54d6df, 0x3e59f88a, 0x3e5f2596, 
    0x3e645dd0, 0x3e69a105, 0x3e6eeeff, 0x3e74478b, 0x3e79aa74, 0x3e7f1784, 0x3e824743, 0x3e8507a1, 
    0x3e87ccc2, 0x3e8a968a, 0x3e8d64dd, 0x3e9037a0, 0x3e930eb6, 0x3e95ea04, 0x3e98c96d, 0x3e9bacd4, 
    0x3e9e941e, 0x3ea17f2c, 0x3ea46de3, 0x3ea76026, 0x3eaa55d6, 0x3ead4ed8, 0x3eb04b0c, 0x3eb34a56, 
    0x3eb64c99, 0x3eb951b5, 0x3ebc598e, 0x3ebf6406, 0x3ec270fd, 0x3ec58056, 0x3ec891f3, 0x3ecba5b5, 
    0x3ecebb7e, 0x3ed1d32f, 0x3ed4ecaa, 0x3ed807cf, 0x3edb2480, 0x3ede429f, 0x3ee1620c, 0x3ee482a8, 
    0x3ee7a455, 0x3eeac6f2, 0x3eedea63, 0x3ef10e86, 0x3ef4333d, 0x3ef7586a, 0x3efa7dec, 0x3efda3a4, 
    0x3f0064ba, 0x3f01f79e, 0x3f038a6f, 0x3f051d1d, 0x3f06af97, 0x3f0841d0, 0x3f09d3b7, 0x3f0b653c, 
    0x3f0cf651, 0x3f0e86e5, 0x3f1016e9, 0x3f11a64e, 0x3f133504, 0x3f14c2fc, 0x3f165025, 0x3f17dc72, 
    0x3f1967d3, 0x3f1af237, 0x3f1c7b91, 0x3f1e03d0, 0x3f1f8ae6, 0x3f2110c4, 0x3f22955a, 0x3f241899, 
    0x3f259a73, 0x3f271ad8, 0x3f2899b9, 0x3f2a1709, 0x3f2b92b7, 0x3f2d0cb6, 0x3f2e84f6, 0x3f2ffb69, 
    0x3f317001, 0x3f32e2af, 0x3f345365, 0x3f35c214, 0x3f372eaf, 0x3f389927, 0x3f3a016e, 0x3f3b6776, 
    0x3f3ccb32, 0x3f3e2c94, 0x3f3f8b8d, 0x3f40e811, 0x3f424212, 0x3f439982, 0x3f44ee55, 0x3f46407c, 
    0x3f478fec, 0x3f48dc96, 0x3f4a266f, 0x3f4b6d69, 0x3f4cb177, 0x3f4df28e, 0x3f4f30a0, 0x3f506ba2, 
    0x3f51a386, 0x3f52d842, 0x3f5409c9, 0x3f553810, 0x3f56630a, 0x3f578aac, 0x3f58aeeb, 0x3f59cfbb, 
    0x3f5aed11, 0x3f5c06e2, 0x3f5d1d24, 0x3f5e2fcb, 0x3f5f3ecc, 0x3f604a1e, 0x3f6151b6, 0x3f62558a, 
    0x3f63558f, 0x3f6451bc, 0x3f654a07, 0x3f663e67, 0x3f672ed2, 0x3f681b3e, 0x3f6903a2, 0x3f69e7f7, 
    0x3f6ac831, 0x3f6ba44a, 0x3f6c7c39, 0x3f6d4ff4, 0x3f6e1f74, 0x3f6eeab2, 0x3f6fb1a4, 0x3f707443, 
    0x3f713289, 0x3f71ec6c, 0x3f72a1e7, 0x3f7352f3, 0x3f73ff87, 0x3f74a79e, 0x3f754b32, 0x3f75ea3b, 
    0x3f7684b4, 0x3f771a97, 0x3f77abdd, 0x3f783882, 0x3f78c080, 0x3f7943d1, 0x3f79c270, 0x3f7a3c5a, 
    0x3f7ab188, 0x3f7b21f6, 0x3f7b8da1, 0x3f7bf483, 0x3f7c5699, 0x3f7cb3df, 0x3f7d0c52, 0x3f7d5fee, 
    0x3f7daeaf, 0x3f7df893, 0x3f7e3d97, 0x3f7e7db8, 0x3f7eb8f4, 0x3f7eef48, 0x3f7f20b3, 0x3f7f4d32, 
    0x3f7f74c3, 0x3f7f9766, 0x3f7fb519, 0x3f7fcdda, 0x3f7fe1a9, 0x3f7ff085, 0x3f7ffa6d, 0x3f7fff61, 
    0x3f7fff61, 0x3f7ffa6d, 0x3f7ff085, 0x3f7fe1a9, 0x3f7fcdda, 0x3f7fb519, 0x3f7f9766, 0x3f7f74c3, 
    0x3f7f4d32, 0x3f7f20b3, 0x3f7eef48, 0x3f7eb8f4, 0x3f7e7db8, 0x3f7e3d97, 0x3f7df893, 0x3f7daeaf, 
    0x3f7d5fee, 0x3f7d0c52, 0x3f7cb3df, 0x3f7c5699, 0x3f7bf483, 0x3f7b8da1, 0x3f7b21f6, 0x3f7ab188, 
    0x3f7a3c5a, 0x3f79c270, 0x3f7943d1, 0x3f78c080, 0x3f783882, 0x3f77abdd, 0x3f771a97, 0x3f7684b4, 
    0x3f75ea3b, 0x3f754b32, 0x3f74a79e, 0x3f73ff87, 0x3f7352f3, 0x3f72a1e7, 0x3f71ec6c, 0x3f713289, 
    0x3f707443, 0x3f6fb1a4, 0x3f6eeab2, 0x3f6e1f74, 0x3f6d4ff4, 0x3f6c7c39, 0x3f6ba44a, 0x3f6ac831, 
    0x3f69e7f7, 0x3f6903a2, 0x3f681b3e, 0x3f672ed2, 0x3f663e67, 0x3f654a07, 0x3f6451bc, 0x3f63558f, 
    0x3f62558a, 0x3f6151b6, 0x3f604a1e, 0x3f5f3ecc, 0x3f5e2fcb, 0x3f5d1d24, 0x3f5c06e2, 0x3f5aed11, 
    0x3f59cfbb, 0x3f58aeeb, 0x3f578aac, 0x3f56630a, 0x3f553810, 0x3f5409c9, 0x3f52d842, 0x3f51a386, 
    0x3f506ba2, 0x3f4f30a0, 0x3f4df28e, 0x3f4cb177, 0x3f4b6d69, 0x3f4a266f, 0x3f48dc96, 0x3f478fec, 
    0x3f46407c, 0x3f44ee55, 0x3f439982, 0x3f424212, 0x3f40e811, 0x3f3f8b8d, 0x3f3e2c94, 0x3f3ccb32, 
    0x3f3b6776, 0x3f3a016e, 0x3f389927, 0x3f372eaf, 0x3f35c214, 0x3f345365, 0x3f32e2af, 0x3f317001, 
    0x3f2ffb69, 0x3f2e84f6, 0x3f2d0cb6, 0x3f2b92b7, 0x3f2a1709, 0x3f2899b9, 0x3f271ad8, 0x3f259a73, 
    0x3f241899, 0x3f22955a, 0x3f2110c4, 0x3f1f8ae6, 0x3f1e03d0, 0x3f1c7b91, 0x3f1af237, 0x3f1967d3, 
    0x3f17dc72, 0x3f165025, 0x3f14c2fc, 0x3f133504, 0x3f11a64e, 0x3f1016e9, 0x3f0e86e5, 0x3f0cf651, 
    0x3f0b653c, 0x3f09d3b7, 0x3f0841d0, 0x3f06af97, 0x3f051d1d, 0x3f038a6f, 0x3f01f79e, 0x3f0064ba, 
    0x3efda3a4, 0x3efa7dec, 0x3ef7586a, 0x3ef4333d, 0x3ef10e86, 0x3eedea63, 0x3eeac6f2, 0x3ee7a455, 
    0x3ee482a8, 0x3ee1620c, 0x3ede429f, 0x3edb2480, 0x3ed807cf, 0x3ed4ecaa, 0x3ed1d32f, 0x3ecebb7e, 
    0x3ecba5b5, 0x3ec891f3, 0x3ec58056, 0x3ec270fd, 0x3ebf6406, 0x3ebc598e, 0x3eb951b5, 0x3eb64c99, 
    0x3eb34a56, 0x3eb04b0c, 0x3ead4ed8, 0x3eaa55d6, 0x3ea76026, 0x3ea46de3, 0x3ea17f2c, 0x3e9e941e, 
    0x3e9bacd4, 0x3e98c96d, 0x3e95ea04, 0x3e930eb6, 0x3e9037a0, 0x3e8d64dd, 0x3e8a968a, 0x3e87ccc2, 
    0x3e8507a1, 0x3e824743, 0x3e7f1784, 0x3e79aa74, 0x3e74478b, 0x3e6eeeff, 0x3e69a105, 0x3e645dd0, 
    0x3e5f2596, 0x3e59f88a, 0x3e54d6df, 0x3e4fc0c8, 0x3e4ab678, 0x3e45b820, 0x3e40c5f2, 0x3e3be01f, 
    0x3e3706d7, 0x3e323a4b, 0x3e2d7aab, 0x3e28c824, 0x3e2422e6, 0x3e1f8b1e, 0x3e1b00fb, 0x3e1684a9, 
    0x3e121654, 0x3e0db62a, 0x3e096453, 0x3e0520fd, 0x3e00ec51, 0x3df98cef, 0x3df15f37, 0x3de94fc9, 
    0x3de15ef5, 0x3dd98d0a, 0x3dd1da56, 0x3dca4724, 0x3dc2d3c0, 0x3dbb8073, 0x3db44d87, 0x3dad3b42, 
    0x3da649eb, 0x3d9f79c6, 0x3d98cb17, 0x3d923e20, 0x3d8bd322, 0x3d858a5c, 0x3d7ec81a, 0x3d72c0e4, 
    0x3d66ff8d, 0x3d5b8488, 0x3d505049, 0x3d45633d, 0x3d3abdd2, 0x3d306070, 0x3d264b7e, 0x3d1c7f61, 
    0x3d12fc79, 0x3d09c324, 0x3d00d3bf, 0x3cf05d41, 0x3cdfa83e, 0x3ccf891c, 0x3cc00079, 0x3cb10eef, 
    0x3ca2b513, 0x3c94f373, 0x3c87ca96, 0x3c767600, 0x3c5e8a59, 0x3c47d325, 0x3c325144, 0x3c1e058c, 
    0x3c0af0c6, 0x3bf2275e, 0x3bd0ddef, 0x3bb2068a, 0x3b95a260, 0x3b776514, 0x3b487014, 0x3b1e6790, 
    0x3af29a52, 0x3ab2449b, 0x3a77a0f6, 0x3a1e8019, 0x39b25423, 0x391e863b, 0x381e87c4, 0x00000000
};

static const uint32_t _K11[] = {
    0x00000009, 0x0000000d, 0x00000010, 0x00000015, 0x00000019, 0x0000001f, 0x00000025, 0x0000002b, 
    0x00000032, 0x0000003a, 0x00000043, 0x0000004d, 0x00000057, 0x00000063, 0x00000071, 0x0000007f, 
    0x00000090, 0x000000a2, 0x000000b6, 0x000000cc, 0x000000e5, 0x00000100
};

static const uint32_t _K18[] = {
    0x3e378d71, 0x3e1c72fa, 0xbb20461a, 0x3d0be731, 0xbe1e8659, 0x3df21ef0, 0xbe337f3b, 0x3e0ed08b, 
    0xbe494813, 0xbd03fffc, 0xbd8a5d31, 0x3cedc251, 0xbdd087a8, 0x3d38df0a, 0xbd00cc30, 0x3caf8d47, 
    0xbdfc4973, 0x3e44a5b5, 0xbe25cee7, 0x3dcf35b8, 0x3d19779e, 0x3e1e68b7, 0xbc90cb4a, 0xbd498db8, 
    0x3dde3055, 0xbd98427a, 0x3dc2d5e2, 0x3df8fdf5, 0x3e0e21b6, 0xbdafabe8, 0xbe395ebd, 0xbdbe4771, 
    0xbe37f5a4, 0x3ded8b6b, 0x3de6db9a, 0x3d2680c2, 0xbd72e18f, 0x3db83eb6, 0x3e2e1ab9, 0x3de28e8e, 
    0x3de8c0af, 0xbe1801e6, 0xbe2f4c59, 0x3e29d31f, 0x3d11c4f7, 0x3e1137bc, 0xbe2fb762, 0xbe096572, 
    0xbe0746ba, 0xbe5d4580, 0xbdee777c, 0xbe0ee168, 0x3d422caf, 0xbdb175f3, 0xbd82c30c, 0xbde2a9ea, 
    0x3e13b798, 0x3c957dec, 0x3dae7e6c, 0x3da0d7fb, 0x3df304fe, 0x3c36b738, 0xbc01ab05, 0xbcdce232, 
    0x3ddd98a5, 0x3d9c5a8b, 0xbda793ad, 0x3d4ef738, 0xbcde6f28, 0xbd6aa57e, 0xbd16d8c6, 0xbd0d493b, 
    0x3dce8cbe, 0xbbff9bcc, 0x3d1b0bd4, 0xbc661c6c, 0xbd962191, 0xbcdca81d, 0xbd2a0ff2, 0x3d627d63, 
    0x3c88a298, 0x3d9807f5, 0x3ddcc7e6, 0xbd4de0ba, 0xbd04cfdc, 0x3ddb1fae, 0xbd7e9c38, 0xbd5d31d0, 
    0xbd8192ea, 0x3dc261c7, 0xbcc1ac1a, 0xbd4e3af6, 0x3d44dd4e, 0xbc562413, 0x3ddef55c, 0x3d7781cf, 
    0x3dbc35a6, 0x3cd7e01a, 0xbd75062f, 0x3c1cfea5, 0x3dcf16e5, 0x3d9e9347, 0xbcf9206a, 0xbd665df1, 
    0x3c6851ed, 0xbd585159, 0x3d5ff4d7, 0x3db21a2d, 0x3d996365, 0xbda30a0d, 0x3d798986, 0xbd3a774f, 
    0x3da8d5fa, 0xbcb208f2, 0x3cb24d9d, 0x3c5ed444, 0xbd5b9886, 0x3cda1732, 0x3d327986, 0xbd9e9f7a, 
    0xbc55b8c0, 0xbd463da0, 0xbe817630, 0xbd2c8261, 0x3e4f1e41, 0xbde04587, 0x3e538856, 0xbe093181, 
    0xbe22e6f7, 0x3e7859f6, 0xbdc01223, 0x3d866ed9, 0x3e8d3971, 0xbe2767a1, 0xbe00eac8, 0xbda24ea3, 
    0x3e26eaa8, 0xbdbe41a9, 0x3dbe131c, 0x3e4f2185, 0xbe7c9cec, 0xbd61ce09, 0x3c95159a, 0xbe7de77e, 
    0x3e33d5f8, 0xbd86ced6, 0x3e69878b, 0xbd28a225, 0xbdaa82e5, 0xbe03a0a2, 0xbe2c45f5, 0x3db911cb, 
    0x3d55ca1e, 0xbe024ebf, 0x3db0fb98, 0xbde63886, 0x3e2ee387, 0xbd544f02, 0x3e35c200, 0xbe45f480, 
    0xbe4eff0c, 0xbe810f08, 0xbe78f8b9, 0xbe36c569, 0x3d5ffdb8, 0xbe51edfa, 0xbe367c96, 0xbd510183, 
    0x3e3d32d5, 0x3e197dcd, 0x3e06dee2, 0x3cb4f036, 0xbe1bb26c, 0x3e47fea0, 0x3e3c1bd0, 0xbc162063, 
    0x3e6b2636, 0x3e22804a, 0x3e37e9e0, 0xbe0ca0d7, 0x3ceb54d9, 0x3c18fe89, 0x3cc0bfd1, 0xbd4df16f, 
    0xbc3c1015, 0xbd4d3b2f, 0xbca88862, 0x3cc926be, 0x3d46fb48, 0x3b8ce09e, 0xbd2f26d8, 0x3d00420e, 
    0xbd21db79, 0x3cc56abc, 0x3d4e5ee8, 0xbc510bcb, 0xbd00a20c, 0x3c90e307, 0x3bd5754b, 0x3b1424be, 
    0xbd1eee3c, 0x3d919b1e, 0x3d13a556, 0x3c17c05c, 0x3cf60aea, 0x3d5da569, 0xbd19b646, 0xbd708483, 
    0xbce2cf14, 0xbcaae62d, 0xbd894068, 0xbc07a8be, 0xbd2af57b, 0xbd2c90f9, 0xbd94761a, 0xbcd9a2ce, 
    0xbd5d1658, 0xbd938658, 0xbd4a934b, 0xbcd80c87, 0xbc951383, 0x3d5c7acb, 0x3cba02b0, 0x3d46894f, 
    0xbbac632e, 0xbc9711db, 0xbd00beac, 0x3ccac6c6, 0x3d22f3eb, 0xbd8fd46e, 0x3cd94e61, 0xbd8e779e, 
    0x3d6703cc, 0xbd40b39b, 0x3c2d51f9, 0xbce38320, 0x3d07905f, 0xbd8b2d3b, 0xbcb4ab4d, 0xbd362c0a, 
    0xbd50441b, 0x3b651a9f, 0x3d9df6df, 0x3df47853, 0x3d0501ed, 0x3b91fb20, 0x3db20e18, 0xbc59c420, 
    0xbd475663, 0x3d39aad0, 0x3d886765, 0xbdb79a56, 0xbd017f01, 0xbdd770fd, 0xbd82c5d3, 0xbd844fe3, 
    0xbdbad359, 0x3c7910b8, 0xbd0234f8, 0x3d6bc69a, 0x3cad1dd6, 0xba845201, 0x3dbdba65, 0xbd1f6af6, 
    0x3d9d398f, 0x3baaa3ac, 0x3d2d69a0, 0x3d668e1f, 0x3bde620b, 0x3d8218fd, 0xbc1aeabb, 0xbd121ef7, 
    0xbd9e7901, 0x3d81584b, 0xbd70c291, 0x3c7a3881, 0xbd038416, 0xbca9a44a, 0x3c8fa8cf, 0x3cdd9af2, 
    0x3cc8147f, 0xbd605217, 0xbcd6128f, 0x3d80727b, 0x3d2c0929, 0xbcc18da9, 0x3d9600f6, 0x3e022d91, 
    0xbd043322, 0xbc69a9c9, 0xbd5ec36b, 0xb87f618a, 0xbd820342, 0x3d570326, 0x3d317f08, 0x3d771727, 
    0x3bf81065, 0x3d84cd30, 0x3d8dff9c, 0x3d9a773b, 0xbb27cd4a, 0xbbf8bc79, 0xbd0e3420, 0x3c3c8564, 
    0x3c7c01f9, 0xbca46d14, 0x3cc48572, 0xbcac7190, 0xbc86682d, 0xbd1476a0, 0x3c7672b7, 0xbce00199, 
    0xbd6c60d6, 0xbd58b403, 0xbb34c15f, 0xbb7f0e45, 0x3cc0bbc5, 0xbc05fe11, 0xbbcd86e0, 0xbcc062d0, 
    0xbd3f90e5, 0xbb651d85, 0xbd525105, 0x3c800443, 0xbc84a11c, 0xbc405f11, 0x3c333ec3, 0x3c403585, 
    0x3c2dffe1, 0xbd210f74, 0xbc99ab62, 0xbca08f0d, 0xbd4d6e31, 0x3cd512b5, 0xbd1c88b8, 0xbd112fe6, 
    0x3ccfa922, 0xbb38b8a5, 0x3d03f291, 0xbc497bf5, 0x3d0b688f, 0x3b232ba3, 0x3ba664fc, 0xbc8437dd, 
    0xbd98bfeb, 0xbd305181, 0xbc85f23f, 0xbbc099dd, 0x3cf81361, 0xbd63f88d, 0xbd2eac13, 0xb967744a, 
    0xbd1db2b7, 0xbd20439b, 0x3d1b77a0, 0x3c763cd4, 0xbc317261, 0xbd0c49ed, 0xbd643bfe, 0xbce35e64, 
    0xbc62876b, 0xbc76d718, 0x3d5e53ad, 0x3d9237b4, 0xbd2c7374, 0xbd31f59b, 0xbce717f6, 0x3d242774, 
    0x3d345fbf, 0xbdabdaf5, 0xbc883a8f, 0xbc1b6e0f, 0xbda59270, 0x3d68f7e2, 0xbd833913, 0x3cd52c5e, 
    0xbaca19df, 0xbd93015f, 0x3be50f04, 0x3d9c48bb, 0xbcc25d64, 0xbcc22cbc, 0xbdb37d31, 0x3d6a475a, 
    0x3d26d3d1, 0xbd852a2b, 0x3d440c51, 0xbd6bda0e, 0x3d143402, 0x3cb7601c, 0x3d03ace6, 0x3d55c80f, 
    0xbd95717c, 0x3d080118, 0x3d649d25, 0xbd2af6c0, 0xbb4e27b8, 0x3d59ad34, 0xbd43adca, 0x3cdbf96b, 
    0xbc872970, 0xbd51cdc5, 0xbda19dfb, 0xbd73fe55, 0xbcffd863, 0xbd1fa1de, 0xbd45f33a, 0xbd2d6e24, 
    0xbd2ca1f5, 0xbd92df7c, 0x3d20eaec, 0xbd92f07c, 0xbdc43510, 0xbd54eec0, 0xbdd2d5fb, 0x3bcb74e8, 
    0x3bce2bf2, 0xbd37cbb5, 0xbbb24704, 0xbc003ead, 0x3de4f788, 0xbc31c3a6, 0x3d5b93c6, 0xbcf2f15f, 
    0xbbe0ed38, 0x3d660c86, 0x3bd77ed2, 0x3d852987, 0xbd1b0446, 0x3d5b2589, 0xbc6ff0fc, 0x3c153ccf, 
    0x3db57d4c, 0x3d48c3e8, 0xbcdc4112, 0x3bcc21c2, 0xbc8137fd, 0xbcf681bd, 0x3daac643, 0xbd5cdf19, 
    0x3da99aee, 0x3dc5f194, 0x3d099531, 0xbc6b307e, 0xbcf0d7fc, 0x3c0c0b6b, 0xbccfcb84, 0xbd824225, 
    0x3cc93a9c, 0xbc7636fa, 0xbd2fa838, 0x3cfae4c7, 0xbd2eedb1, 0xbc186616, 0xbc95c79e, 0x3da75819, 
    0x3dbd57fc, 0x3d4515bf, 0x3dd1612b, 0xbd0f5a1e, 0x3d39f9e6, 0x3d4f0caf, 0x3db661ac, 0x3bca54b9, 
    0x3ceff54e, 0xbd706e95, 0x3d0c3b1c, 0xbcb3edd8, 0x3cecd878, 0xbd720d1c, 0x3dcbf0ac, 0x3dcb8a02, 
    0x3dc09b3e, 0x3cf8560f, 0xbd09b8e6, 0xbd8abcc8, 0x3d1c3cef, 0xbc031aaa, 0xbc5c02c7, 0xbd35cd01, 
    0x3da2f58e, 0x3e2b5944, 0x3e08cd26, 0xbd64854c, 0x3c6ace16, 0xbc93b6b4, 0xbde68498, 0xbd6d9769, 
    0xbba47b6b, 0xbdb198d8, 0x3d62fe9e, 0xbe0d4f2a, 0xbd94a363, 0x3dc8e6d5, 0x3e315c9d, 0x3e3c46f1, 
    0xbdfa84c2, 0x3e1ae321, 0x3c030b28, 0xbe097b41, 0x3e3e1c00, 0x3d9c93ef, 0xbdb35aac, 0xbb0978d1, 
    0xbd315106, 0x3df7d7ac, 0x3dd2a89e, 0xbdb661f1, 0x3dbb6314, 0xbd7194a6, 0x3e20769d, 0x3d57488b, 
    0x3d9b05ac, 0x3e270349, 0xbe04c22d, 0x3e299d37, 0xbe0466b9, 0xbdc196c7, 0xbc1666ae, 0x3e012ed7, 
    0x3dfc7544, 0xbe07ebfe, 0xbdd9ddf8, 0xbca92b17, 0x3d5049f2, 0x3d790c80, 0xbdf5878d, 0x3d1c771f, 
    0x3bb08ec3, 0x3d72b6d2, 0xbdee31af, 0x3da2c961, 0xbd27aa98, 0xbd8e0439, 0x3c82f4f1, 0xbd843ede, 
    0x3d84825a, 0x3be4207d, 0xbe0c3f93, 0x3d33d22b, 0x3db5b191, 0x3e1d357a, 0xbe13a4e8, 0xbd96cf71, 
    0xbda716a3, 0x3c5e975b, 0xbdb83e24, 0xbe156858, 0xbe0dac85, 0x3bf00d23, 0xbd66f49b, 0x3de1a661, 
    0x3d8928a2, 0x3d9c5d96, 0xbde19450, 0x3dc1c77a, 0x3df0e095, 0x3d6cfc23, 0x3d6a2f48, 0x3da5344d, 
    0x3e10642e, 0x3d0dc6a4, 0xbc514aef, 0x3d0a9df4, 0x3d8c637c, 0x3d37a536, 0xbe14f444, 0xbcdf3253, 
    0xbd27a298, 0x3d30f184, 0x3a0e6a65, 0x3c951e4d, 0xbdb38ccb, 0x3c19f7b8, 0x3d944afc, 0x3de520c5, 
    0x3e0477a7, 0xbd433240, 0x3dda4110, 0x3cccc9e6, 0xbdbdaef9, 0x3d18115b, 0x3b7e9ebb, 0x3d93bdd1, 
    0x3b73e16d, 0x3e0823eb, 0xbd956bba, 0xbe0a3940, 0x3dbf310a, 0xbdca7c3d, 0x3d882c65, 0xbd8ec97b, 
    0x3da62b4b, 0xbe0dd519, 0xbd49e337, 0x3c93f2a3, 0xbe097ead, 0x3dd21ae1, 0x3e1060c6, 0x3d4471ab, 
    0x3d4024ee, 0xbb28884b, 0x3dbd5d89, 0xbdd48705, 0x3e4ae3b7, 0x3e93137f, 0x3d425625, 0xbda900f9, 
    0xbd58b5e5, 0x3df6d420, 0xbc0ee1c9, 0x3dea5c37, 0x3bffb36e, 0xbe8cf0d4, 0xbbbfa6c6, 0xbe530460, 
    0xbe238338, 0xbe4016a2, 0xbea59b58, 0xbea26aa3, 0x3db768c7, 0x3e0f5721, 0x3e008be8, 0x3bf383d0, 
    0x3e1dee65, 0xbd35471b, 0x3d46db8e, 0xbe43f496, 0x3dce30a7, 0x3e592914, 0xbd418658, 0x3e30e602, 
    0x3c91eae7, 0xbe5e0417, 0xbe8097cc, 0x3d7add98, 0x3e7b94b2, 0x3dafa703, 0xbe4d8922, 0xbe13c382, 
    0xbd9e9525, 0x3e545748, 0xbdc4a2f1, 0x3e89d78d, 0x3e918fac, 0x3d630aea, 0x3e2f0931, 0x3df9a38a, 
    0xbd330e7d, 0x3e94c465, 0xbcc3fd4d, 0x3dd97550, 0xbd73623f, 0x3e570fd1, 0x3cb29532, 0x3e173bb9, 
    0xbe4d3521, 0x3d16763f, 0x3e8208af, 0x3d5bbb9d, 0xbde1252f, 0xbdfc9486, 0x3e354869, 0xbdc05a4e, 
    0x3e0116e6, 0x3e1b6441, 0xbbc0c616, 0x3d8668fe, 0x3c97f177, 0x3df1efaa, 0x3deebae5, 0x3d420a24, 
    0x3bfea111, 0x3d18f19e, 0xbde68123, 0x3d687100, 0xbd67699e, 0xbd18701b, 0x3dfeade2, 0xbe49affb, 
    0xbe6266f4, 0xbe4177b4, 0x3db1def4, 0xbdc0b6c5, 0x3e3721b3, 0xbb280f03, 0x3e29121f, 0xbd669c08, 
    0xbd24acd5, 0x3da8335f, 0x3d5f9ee3, 0x3e3c3db0, 0xbd8123e1, 0xbe2f08f8, 0x3e2a62db, 0x3e01846e, 
    0x3db1ef1f, 0x3e0dd446, 0xbdab9994, 0x3e09c412, 0xbe3191c0, 0xbe215384, 0xbdb32188, 0x3de4d83e, 
    0x3e194cc9, 0xbe30a19b, 0xbe3ccba9, 0x3e2d5db7, 0xbde81ad8, 0xbdeaad22, 0x3d206575, 0x3d8a59d8, 
    0x3cce961c, 0x3ddc75fc, 0xbdf0f01b, 0xbda17675, 0x3d649328, 0xbb7b7dcf, 0x3d45f86e, 0xbd8ba526
};

static const uint32_t _K21[] = {
    0xbf266e60, 0x3fe07d18, 0xc02bd160, 0xbfacae02, 0x40018526, 0xbfd74404, 0xbff23add, 0x3f8fc7e8, 
    0x3fc93262, 0x3fc97669, 0x3fdd1416, 0x3e1acdef
};

static const uint32_t _K25[] = {
    0x3d5c4f19, 0x3ce528d1, 0xbe582a0f, 0x3e194ea1, 0x3bfeab40, 0x3e3e9f5c, 0x3e2b860d, 0xbda13ecc, 
    0xbb8a509d, 0x3e06f0a5, 0x3e573c8e, 0xbc8b575f, 0x3e3e0d9c, 0xbe6f56fe, 0x3d5990fb, 0x3dc523ca, 
    0x3d884803, 0x3e3595c7, 0xbdb3b6c1, 0x3e408669, 0x3d21da68, 0x3e2b0f99, 0xbe4f43da, 0xbd81b6c3, 
    0xbe21948a, 0x3e0aa63c, 0xbda77979, 0xbe0f5ca3, 0xbdf4373f, 0xbdb195bd, 0xbd5d21dd, 0x3e258ad7, 
    0xbd538a53, 0xbc9597df, 0xbd5defee, 0xbd43d833, 0xbda6eb0f, 0x3d54ef47, 0xba4c6b46, 0xbe387ceb, 
    0x3ce91204, 0xbbccd83b, 0x3e0c2489, 0x3c8e9e29, 0x3e23230c, 0xbde06925, 0x3d1c53ea, 0x3cc30827, 
    0xbe187468, 0xbd91817f, 0xbaebd3bd, 0xbe45e168, 0xbe239e1e, 0x3db8b531, 0xbda6453f, 0xbcd8d8c4, 
    0x3e34c01a, 0x3da90eac, 0x3dcf13d8, 0xbd991c21, 0x3d1ff0a4, 0x3e060beb, 0x3e687412, 0x3da77a45, 
    0xbe68c95d, 0x3e38fd18, 0xbdfb4f04, 0x3dd7391f, 0xbe06d3bc, 0x3e9693ce, 0x3e8dced0, 0xbcbd0fe5, 
    0xbe27eaa1, 0xbd9f6f1a, 0xbe6b586d, 0xbddeaef0, 0x3e4494b5, 0xbe508f42, 0xbe4ac00d, 0x3d01ab0c, 
    0xbca47a6e, 0xbe01917d, 0xbc6b79b1, 0xbe2823d5, 0x3d5bc870, 0xbde60a66, 0x3d8213a7, 0x3e2c2586, 
    0x3e125187, 0x3e47dbb4, 0x3deba3e3, 0xbe63dc23, 0xbdde7f95, 0xbd55992e, 0x3e16b34e, 0xbe38e751, 
    0x3e3a3af4, 0x3e471a81, 0xbe3e4b6c, 0xbe3eb680, 0x3e035e8c, 0xbc5eb53f, 0xbd2ef236, 0x3e1806e5, 
    0x3d3f1e4a, 0x3dd8d028, 0x3c976c75, 0xbe3edb16, 0x3c90f222, 0xbe0d5bc7, 0x3e9d0dc5, 0x3daf3d06, 
    0xbe704716, 0xbe2e172d, 0x3e64f6e4, 0xbcb04227, 0x3e129995, 0xbe1bd882, 0x3e407f66, 0xbcce493f, 
    0x3e4b94fd, 0x3dfc9853, 0x3d82f7be, 0x3d1d9487, 0x3e2e621d, 0x3ca8019e, 0xbe0a84f0, 0x3e7899e1, 
    0xbe0a5d5d, 0xbe8d8a52, 0xbda1a98f, 0x3e607bed, 0x3d61ac45, 0xbe36577b, 0xbd8b46b3, 0x3ddf4c71, 
    0x3d6667b7, 0x3e2ec5d7, 0xbc4cd3b4, 0xbe07f0fa, 0x3d47d209, 0xbe1d0e1a, 0x3e1e2d29, 0x3e6e9fc5, 
    0x3dc96aa5, 0xbd9761ba, 0x3d2ab84f, 0x3be22474, 0x3dd932d0, 0x3d59ef14, 0xbd87aa20, 0xbe6189ec, 
    0x3dfb0e94, 0x3e35bdf2, 0x3d8d21d6, 0x3dd4ba8a, 0x3dae3591, 0xbdadc2fc, 0xbd683cdc, 0x3dd6032c, 
    0xbe6b5e14, 0xbde795af, 0x3d9bd23b, 0x3e5303fb, 0xbd674255, 0x3d131d4a, 0xbcd67cb2, 0xbdb36175, 
    0xbe639d60, 0x3cff29e8, 0xbe6c9a78, 0xbe33f822, 0x3e141082, 0x3d33a724, 0x3e34b282, 0xbccd11ca, 
    0x3e1c4fe9, 0xbddd7d0c, 0xbe2ad648, 0xbe3267a7, 0xbda43a45, 0x3e3e7066, 0x3daa5827, 0xbe4dd214, 
    0xbe3a9ae6, 0xbd8cfa77, 0x3e06e4a1, 0x3ca2f432, 0x3df7a430, 0xbc442a44, 0x3c2e5adf, 0xbe36d9aa, 
    0xbbaf900c, 0xbb891c27, 0x3d84d033, 0xbe11f62c, 0xbd2d40fa, 0xbc975020, 0x3ca2c28b, 0xbdd07c73, 
    0xbe417bfc, 0xbd9b6b72, 0x3e1b4045, 0xbe008572, 0xbe2629e6, 0xbe4b187b, 0x3e144660, 0xbe641919, 
    0xbe27f41a, 0xbe2eee16, 0x3b1a97ca, 0x3e854c32, 0x3cf3d263, 0xbc3284a6, 0x3c94e4d3, 0xbe1c1611, 
    0xbb73d88b, 0xbe580203, 0xbe37865b, 0x3d903f63, 0x3d9cda70, 0x3e256c93, 0xbd8d6dce, 0x3e0875a3, 
    0xbe8da1d4, 0x3ced7817, 0xbdc5fe6e, 0x3d5a2105, 0xbde7b91f, 0xbd1ea4ac, 0xbe6f9353, 0x3e3c5607, 
    0x3e1a8092, 0xbe044ef2, 0x3e2d086f, 0x3d40a679, 0x3d7baba3, 0xbd019865, 0x3e24b458, 0x3e30c7cd, 
    0x3d749fe9, 0x3e0eba17, 0x3d1140b9, 0x3c019e64, 0xbe24e1cf, 0x3d05bf37, 0xbe3e061d, 0x3dbe186d, 
    0xbd68c639, 0xbe3e0e03, 0x3cc121b8, 0xbe287a6c, 0x3cbbe40b, 0x3d6004d0, 0x3e869baf, 0xbe109693, 
    0x3e2b8c1a, 0x3e5d89c1, 0xbd865a00, 0xbe48dd0b, 0xbdfb449a, 0xbe44c3df, 0x3e9d72d6, 0x3e39e346, 
    0xbb55c6bc, 0xbdd4239a, 0xbc5f54d2, 0x3e1d706c, 0xbd8bd81d, 0xbe0134d1, 0xbe4f0f4f, 0xbd1e3347, 
    0x3d91a70d, 0xbe2707a4, 0x3dcb994a, 0x3e3868ee, 0x3c84415b, 0xbdc7131f, 0x3dcdfd1f, 0xbe2af960, 
    0xbe2c1c1e, 0x3e14990f, 0x3ccad620, 0xbdde7ca8, 0x3b908ddb, 0x3d195fd5, 0xbe357c19, 0xbda651d0, 
    0xbdff784d, 0xbe0b0442, 0x3ddc3340, 0x3e596623, 0xbd9d4810, 0xbe3dc7b2, 0x3e51e81c, 0x3d446287, 
    0xbd8a4447, 0x3e30bdc1, 0xbd973d46, 0x3e3c67ca, 0xbe4a1c54, 0x3e06719b, 0xbe146de4, 0xbe312304, 
    0x3de9d9ef, 0xbe2a871b, 0x3c967d85, 0xbcd821fc, 0x3d268f43, 0xbe4184a3, 0x3e29d4ab, 0xbde3f3e0, 
    0xbd99f38e, 0x3e1af7d2, 0xbdfbc850, 0xbdfe8811, 0xbe0dba21, 0x3db4ed7a, 0xbd92b7d1, 0x3bae2252, 
    0xbdea63be, 0xbdda5a4b, 0x3eb5856f, 0x3dd7e4b1, 0xbd9abfaf, 0x3dd6eed2, 0x3e5a18d0, 0x3de4d279, 
    0x38268ddc, 0x3e2d5186, 0x3d579b15, 0xbcaffa00, 0xbd9083fc, 0xba6d8c42, 0x3e8b0a5c, 0x3d8587c9, 
    0x3df20bfc, 0xbdefbecd, 0x3e143c0d, 0x3d321df3, 0x3e514ef9, 0xbe31c5a4, 0xbd6fd48f, 0xbe59fe9f, 
    0x3e1c641d, 0xbdaf1618, 0xbda1f53a, 0xbe4c1f43, 0x3dd24697, 0xbe0b2b77, 0x3e202cdb, 0x3db513e4, 
    0xbc60ce83, 0x3d908774, 0x3b4efaf5, 0x3e6aecad, 0x3d8ccc6d, 0xbdedd2fb, 0xbe32dcd0, 0xbd2e02a2, 
    0xbd9ae904, 0xbdda282e, 0xbd8e8e1d, 0xbd6144e4, 0xbc8acc32, 0xbcd292c2, 0xbdb72abb, 0x3e3775f5, 
    0x3e509f88, 0x3e2455fd, 0xbd0f9bfa, 0xbe8a6cbb, 0xbb84ca25, 0x3e49198c, 0x3d279be9, 0xbe0f9fbc, 
    0x3dda9a78, 0xbe2f223e, 0x3e35e4a9, 0x3e4cb050, 0x3dd797fd, 0xbc3f2e64, 0x3e8c8356, 0x3e0e357c, 
    0x3e1dd990, 0xbe1b4481, 0xbdbf60fc, 0x3dcf2ff0, 0xbe5728f0, 0x3e720e79, 0x3e1edad4, 0x3e1933ae, 
    0x3e0ff5b3, 0x3e03365c, 0x3e85b324, 0xbe5288ff, 0xbdbe2d68, 0x3e3e7121, 0x3dd67753, 0x3e349b61, 
    0xbd57ac57, 0x3e53bc44, 0x3d95ac6a, 0x3e235d6e, 0xbdb281da, 0x3d0e61cf, 0x3df41a68, 0xbbf909c1, 
    0x3e846cd2, 0x3e09481e, 0xbc1d0736, 0x3e5cf01d, 0xbcebe9dc, 0xba288dae, 0x3e8fa1c5, 0xbe0604c8, 
    0x3e4c07f3, 0xbde7d649, 0x3ea38206, 0x3dae2f25, 0x3e2bd6e3, 0x3d5334e5, 0xbde83ca5, 0x3d699801, 
    0x3d90d24e, 0xbd417397, 0xbd6bd65f, 0x3dbe0f49, 0xbdd0aebc, 0x3e2d8c27, 0x3e15ce42, 0xbe01a048, 
    0x3dd711e8, 0x3e1675a0, 0xbdf7633c, 0xbd5e2f3f, 0xbe2592a8, 0xbda0424c, 0x3e23217a, 0x3e04e350, 
    0xbd862a32, 0x3e6e24b5, 0xbc07c620, 0xbe318a89, 0xbe2c72ae, 0xbe7233bf, 0xbe8bb68a, 0xbd10efbb, 
    0x3c0cc0ba, 0x3da1ffad, 0xbd817669, 0xbe0a8ed6, 0xbb856e05, 0x3e523ad3, 0xbe782c63, 0x3df8b308, 
    0x3db2417b, 0xbe5942ef, 0xbe087f64, 0x3d872b00, 0x3e33e9c5, 0x3e37035c, 0xbe057555, 0x3ca6113c, 
    0x3e052916, 0x3e073478, 0xbdf3d4a8, 0xbdf1074a, 0x3e623105, 0x3b870212, 0xbdcdde5d, 0xbdd0474b, 
    0xbe97e813, 0x3e3fc84f, 0x3d9c86ac, 0x3e410429, 0xbe126b47, 0xbe22927b, 0x3e5c4d41, 0xbe2ac384, 
    0x3dac5b9a, 0x3dea976f, 0xbd67e503, 0xbd97a40a, 0xbe96fc5d, 0xbd5fe958, 0x3e88dcfc, 0x3cb7f5bf, 
    0x3e2c2dc6, 0xbe028bc0, 0xbdfd86df, 0xbdafae57, 0x3e32f90d, 0xb9b6d400, 0x3c884b48, 0x3d49f1a9, 
    0xbe5b0a20, 0xbe092fca, 0xbdcb70e6, 0xbdde118e, 0x3daf4ee5, 0x3e200ce8, 0x3da1216e, 0xbe7871bc, 
    0x3cd40198, 0xbd99827c, 0xbe8c034f, 0xbe35223d, 0xbd896e9b, 0xbe697255, 0xbe3c96a3, 0xbe3021ec, 
    0x3d093637, 0x3e58e48b, 0xbe8f1890, 0xbb230c74, 0xbb5d93bc, 0x38629e3c, 0xbe0cad28, 0xbe3d0a47, 
    0xbd888cdc, 0x3dbf41a9, 0xbd9f158c, 0x3dec1556, 0xbe09327e, 0xbe1d1fa5, 0x3dbfb09c, 0x3e474286, 
    0xbdb96970, 0xbdae3468, 0xbe9cda43, 0xbe9214fc, 0x3e5231f5, 0x3e465a92, 0xbe1f9e0d, 0x3e13d93b, 
    0x3e5cc7f6, 0x3e063f92, 0x3db8df57, 0x3cd910de, 0xbd83dd11, 0x3df05fbf, 0xbe279614, 0x3e08db2a, 
    0xbca4ea4b, 0xbe87def6, 0x3d784e66, 0x3d7b5329, 0xbd1af757, 0xbe19819b, 0xbeabc1fa, 0x3c760a0d, 
    0xbad140ad, 0x3dcf3f82, 0xbdc3689b, 0xbe2ddb0b, 0x3cb160a5, 0x3d930730, 0xbe86f928, 0xbd46f8e4, 
    0x3e56f6d3, 0x3dbb0ad4, 0xbdf07758, 0x3cfca70b, 0xbde5f37e, 0xbdc99104, 0xbe71e48e, 0xbd207544, 
    0xbd1dd49a, 0xbe8f07de, 0xbe076b8c, 0xbcc6481c, 0x3b9f4558, 0x3e3c4504, 0x3e070dd8, 0x3dff5766, 
    0x3de0c8a3, 0x3e20cc5c, 0x3cdfa0b2, 0xbe3802b4, 0x3e7e26ae, 0xbd881a9e, 0xbd9326e4, 0x3d8bc1d8, 
    0x3cc501b7, 0xbd3b8f4e, 0xbdcb6d1d, 0x3e70a22c, 0x3d173520, 0x3dfa5b4d, 0xbd1eb7fd, 0xbe042003, 
    0x3e6d6e36, 0xbceb7af8, 0xbe06e06f, 0xbdb7451c, 0xbe20f72e, 0xbe02dc64, 0x3e89ae50, 0xbd1b9db8, 
    0x3e190519, 0x3dd254f6, 0x3d72197b, 0xbdb00bc6, 0x3e280af4, 0x3d908591, 0xbe500f14, 0x3b85ab3e, 
    0x3e73d579, 0xbe213f4d, 0x3e4abd69, 0x3d4ae2f3, 0x3e39bf3f, 0x3e047ea1, 0x3de489cf, 0x3d189d77, 
    0xbe20214e, 0x3e1449cb, 0x3e817f51, 0x3e83b3b0, 0xbe15bbb1, 0x3d3d83de, 0x3dfc251e, 0xbcf6713e, 
    0xbd282b7e, 0xbe887db5, 0xbe016c34, 0xbd32f553, 0x3dc8d054, 0x3d6d8505, 0xbd5cdcaa, 0x3d5edf70, 
    0x3b9b6aaf, 0x3e516e68, 0x3e0df28c, 0x3da12b0d, 0xbe1359e9, 0x3ce39fee, 0x3e6bebd3, 0xbe1c33fe, 
    0xbe75cda2, 0x3e0edb3f, 0x3e67e6fc, 0xbdff3532, 0xbe0cc30d, 0xbe51ee62, 0xbde5cfc9, 0xbe4255d2, 
    0x3c6d57d4, 0xbe3aa7c2, 0x3e7ee9ed, 0x3e0a28da, 0x3dcee409, 0xbdbbf457, 0xbe0add4d, 0xbdcdb8a4, 
    0x3e3053b5, 0xbe0b3638, 0xbc345318, 0xbd570bb4, 0x3b0c1b01, 0xbe043cdf, 0x3e181cf6, 0xbc810e44, 
    0xbd9ee6c8, 0xbd9fa90a, 0x3cdf8ef9, 0x3df73553, 0x3ccff65e, 0xbd7f226e, 0x3d89be55, 0x3d05ab00, 
    0x3e79319d, 0x3d4574d7, 0x3e0de26c, 0xbd9bd1ff, 0xbda123cd, 0x3e571bb2, 0xbe2b47af, 0x3e2ec379, 
    0x3dea37ca, 0xbd0839cc, 0xbd8e96eb, 0x3a8ef736, 0x3e28658e, 0x3df0186e, 0x3d648c5f, 0xbd900202, 
    0xbe889807, 0x3dd0320e, 0xbddd8211, 0xbe11d0b0, 0xbd57075f, 0xbe04444e, 0xbe647c8c, 0xbe66a38c, 
    0x3e36f462, 0x3e065fad, 0xbdb0eef1, 0x3de98427, 0xbdb95f58, 0x3d56d3c1, 0x3e3604fe, 0x3e41c8e3, 
    0x3e828d22, 0xbe34fe87, 0xbe53a807, 0xbda863aa, 0xbd591159, 0x3da87fb0, 0xbd91587e, 0xbc4ceb57, 
    0xbe842f77, 0xbc4f6b1f, 0x3e83cdd8, 0x3e136428, 0xbd2c8fb6, 0x3c6b180e, 0xbe84ebd0, 0xbe1835cc, 
    0x3e0a782a, 0x3ddf5c36, 0x3de838ce, 0x3cb99035, 0xbdb2cf02, 0xbe99550a, 0xbd5ae96e, 0x3e466742, 
    0xbd14852b, 0x3e60f4ba, 0xbd9c3cee, 0xbdb00a41, 0x3df6b249, 0xbdf1a29c, 0x3da0b519, 0xbcfe7908, 
    0xbc041bdf, 0xbb8190bb, 0xbd91faa1, 0x3ca54993, 0xbb678956, 0x3de6f8fd, 0xbe6966ff, 0x3d1d52d5, 
    0xbcf66ac0, 0xbd922644, 0xbe3cd301, 0x3e0e3069, 0x3cb0a386, 0xbe5b0526, 0x39a1a0f2, 0xbe699c54, 
    0x3e6f02d0, 0xbdb445bc, 0xbeb66176, 0x3e395d5c, 0x3e135e89, 0xbd29a64a, 0xbd836944, 0xbe290118, 
    0xbbc2028c, 0x3e036c38, 0x3ce89e0d, 0x3d836c0a, 0x3e1e3557, 0xbd4b1b17, 0x3daefec5, 0xbde8a8ed, 
    0x3c5f522e, 0x3d63cb23, 0xbc80cdb2, 0x3cedb6cf, 0xbea0472c, 0xbe4390d6, 0xbd0bea5a, 0xbe067a9b, 
    0x3e1d2486, 0x3c073c89, 0x3ca34d70, 0xbd8f618f, 0xbdf3726f, 0xbbc66d72, 0xbd3b510f, 0xbddda2a7, 
    0xbe451863, 0x3da3da27, 0x3e87196c, 0x3e0657e4, 0xbda87ecb, 0xbdc0933d, 0xbe8d5819, 0xbd8146b5, 
    0xbd767a3e, 0x3e48a500, 0x3bf640e5, 0xbe56dd34, 0x3cb11743, 0xbc05b1cd, 0xbe1eeef2, 0xbe4acfe4, 
    0xbd4900b8, 0xbe3643b6, 0xbd992b11, 0x3e445efb, 0xbe7e7b4f, 0xbe00b1b5, 0x3d7ff579, 0xbd58d30a, 
    0x3c30d9bd, 0xbe4f7245, 0x3ba6c9e3, 0x3e1c1a89, 0xbdc5bd18, 0xbe84b369, 0xba9ad8aa, 0xbe51301a, 
    0x3e24765e, 0x3e26e1cc, 0x3e82c714, 0x3d8f0296, 0x3e69ecee, 0x3e15a2b8, 0x3e0afa20, 0xbe531f4f, 
    0x3e011da9, 0xbcd15e25, 0x3e875078, 0x3e44b810, 0x3c17faaf, 0x3da3334f, 0x3d1bec91, 0x3d9aa44a, 
    0xbe76bf09, 0xbdba0eaa, 0x3c8eaa0d, 0xbdd46937, 0x3da55911, 0x3d88bc06, 0x3e1fa506, 0x3e3a0ad0, 
    0x3c49e0b3, 0x3e044913, 0x3dd3c491, 0xbe01186d, 0x3dc0d7ba, 0xbdb748cf, 0x3c741684, 0xbe3fcf25, 
    0xbe92d9bb, 0xbe0b4c9d, 0xbe89a9c9, 0x3cde2130, 0x3e0d4674, 0xbdcbcfd2, 0x3d05e0e6, 0x3dc2ab6a, 
    0xbd5780dd, 0x3e2b3dcd, 0x3e0108d1, 0x3e01d106, 0xbcee9b47, 0xbd7642af, 0xbeb9be8f, 0x3da19880
};

static const uint32_t _K27[] = {
    0x3d9cb38f, 0xbe41bfd1, 0xbd2dbbcf, 0xbd3ea0e7, 0x3ded7fb8, 0xbe1c5e7e, 0x3bea9e4b, 0x3c8e8ada, 
    0x3d8e3fe9, 0x3baca45f, 0xbd6e1495, 0xbe705a69, 0xbe33a0a7, 0xbe446f3e, 0xbded3fef, 0x3e66b077, 
    0xbde85bb9, 0xbe5b89b9, 0xbe2d150f, 0xbe4a70fa, 0xbcaca4e8, 0xbe1fa63d, 0x3e191456, 0x3d6796fa, 
    0xbdc932a6, 0x3d2e96fb, 0x3df27571, 0x3da16fa3, 0xbe415bec, 0xbe22d710, 0x3dc4757b, 0x3e2d14b1, 
    0xbd26bc47, 0x3d943787, 0xbd656bf3, 0xbde90058, 0xbdd12ac9, 0xbda8dd20, 0x3c5b641f, 0x3de2bf92, 
    0xbd5680fd, 0xbd4ac466, 0xbe0ea168, 0x3d9458da, 0x3df6a6b6, 0xbe28cc8d, 0x3e2aa1e7, 0x3d73b853, 
    0xbe6ad84f, 0xbd9b09a4, 0x3d97656e, 0xbc95bf0f, 0x3e38da6b, 0xbd7004a3, 0xbdcb6731, 0x3e078300, 
    0x3d8d3400, 0xbbe6be94, 0x3ce17dd6, 0xbe412010, 0xbdb7325a, 0xbda64daa, 0x3d0b9660, 0x3e57ce89, 
    0x3e1cba1b, 0xbe8d46d4, 0xbe3ebb54, 0x3cb3d12a, 0xbd1bf889, 0x3e2314dc, 0xbdb6a429, 0xbd7101f8, 
    0xbe199d41, 0x3e6ac1b8, 0x3e2dc518, 0xbe984486, 0x3e63e897, 0xbe030fc1, 0x3e94a649, 0x3d103c3f, 
    0x3de12c8b, 0xbe1a987c, 0x3e883111, 0xbdc4a559, 0x3e8d0578, 0xbe0747e2, 0xbdb97f66, 0x3e8c1600, 
    0x3e494444, 0x3dcb01d5, 0x3d755127, 0xbcca136e, 0xbb33a5c6, 0x3e5f95a1, 0xbc745421, 0xbdf2f612, 
    0x3d636e3a, 0xbe2ef0d1, 0x3eb0199a, 0xbe505719, 0xbda2b72c, 0x3e19ca0c, 0x3c37b5b9, 0xbe630887, 
    0xbe6a1081, 0x3e5c55d8, 0x3e9cbf2b, 0x3e22ec67, 0xbe025e41, 0x3e7aa9b0, 0x3e553d5e, 0xbda4f372, 
    0x3d81c4be, 0x3d0936f7, 0x3dd7d33b, 0x3cbd7047, 0xbe2614a7, 0xbd3117c6, 0x3dca2252, 0xbdb61366, 
    0x3e5737ea, 0x3e8b10f9, 0x3d759201, 0xbe744011, 0x3deed661, 0xbd2e72dc, 0xbe38d891, 0x3e2d8284, 
    0x3dbb0f79, 0xbd81ca5f, 0xbe1bea75, 0x3da4a470, 0xbd5b63a0, 0xbddeae76, 0x3da872ca, 0xbd85d319, 
    0x3e4b64c6, 0xbe321244, 0x3c7cb2a7, 0x3dc4c9df, 0x3ca30fc1, 0x3e30b21f, 0x3d49fec3, 0xbed5dc38, 
    0xbe2d6d89, 0xbe693e50, 0x3d8460a6, 0x3e8ea05c, 0x3d902ede, 0xbe216f32, 0x3dbc2808, 0x3ddf058b, 
    0x3dbbe55f, 0x3d926676, 0x3df1d7ee, 0xbdda56a5, 0xbbb9d9fe, 0xbda55491, 0xbdc70f1d, 0xbe0d77d8, 
    0x3e57f1cd, 0xbd507154, 0xbdb2ff6d, 0xbe31985f, 0xbe440037, 0xbdebb812, 0x3e86eb68, 0xbdc342a1, 
    0xbd98de62, 0xbe485257, 0xbce69359, 0xbdf1524b, 0xbddeeee4, 0x3e3d1219, 0xbe2cd8d2, 0x3e59fdd9, 
    0x3c996374, 0x3d93c8d2, 0x3e165842, 0x3db1bc6c, 0xbc88cdfb, 0x3d46aede, 0x3d441974, 0xbd98bdd3, 
    0x3e570048, 0x3daf4ce4, 0xbd1c01ac, 0xbd084b8b, 0xbe8c1296, 0xbe38fb87, 0x3c79ffa2, 0xbe33ff3b, 
    0x3e07ce9b, 0x3e37c13a, 0xbbc0951e, 0xbde76916, 0x3c3af9fc, 0x3e41c1bc, 0x3e894208, 0x3dc13135, 
    0x3da2a7b3, 0xbd66b966, 0xbdf0fd61, 0x3e34c50f, 0xbe239ad0, 0xbe381222, 0xbda4debb, 0xbe0b2479, 
    0x3d2fc774, 0xbdf29d03, 0x3d5ecb23, 0xbc0c83a9, 0x3dbf1435, 0x3ce169d0, 0x3db2a058, 0xbd4f13d4, 
    0x3e03c8b1, 0x3d56a352, 0x3e51012a, 0x3e8e0944, 0xbe5b17de, 0xbe77bfec, 0x3d82aa2b, 0xbe033a80, 
    0x3c122e54, 0xbde34130, 0xbe840a0b, 0x3dbe18d5, 0xbe740b44, 0xbe9f78c9, 0xbbec66bc, 0xbe5bf4bf, 
    0x3e4ea068, 0x3e4b1935, 0x3e78a8ea, 0x3c536962, 0x3db5d182, 0xbe1f2e08, 0x3ea2bf9a, 0xbe306815, 
    0x3d20ae87, 0x3e8415bf, 0xbcd83ee5, 0x3e1c3b66, 0x3e07ff62, 0x3e0d048e, 0xbda5cab9, 0xbcb8bea0, 
    0x3d9d6aa9, 0xbc175b03, 0xbe8e53db, 0xbe057dd4, 0xbe6466d9, 0xbdc7ce83, 0x3d85dd07, 0xbd6e80fe, 
    0xbbd625a9, 0x3e35ff62, 0x3d4b82fb, 0xbe82fdc4, 0xbd901d9a, 0x3dbabbc5, 0x3e6c49cb, 0x3db68164, 
    0xbd732d59, 0xbe2cace3, 0xbe28de64, 0xbe054983, 0xbe361162, 0x3e5ed0b3, 0xbdd4feb9, 0x3e8c4b20, 
    0x3e9a54d1, 0xba15e146, 0xbe2e6d3a, 0x3d0557c8, 0x3e407e9e, 0x3e08cc36, 0xbe212452, 0xbe309c5b, 
    0x3d83dc71, 0x3d39da80, 0xbd466177, 0xbe9a0188, 0x3cd09d12, 0x3cace4b6, 0x3e8c85b4, 0xbd7074dc, 
    0xbe590174, 0x3cc4ede6, 0x3ce5f0b1, 0x3e3a9adc, 0xbd6c116f, 0x3e178605, 0x3e34e3f5, 0x3d8d96c4, 
    0xbd8b3973, 0x3e2218c7, 0x3d235b64, 0xbe11f480, 0xbe24b62c, 0xbdff2dff, 0x3e0d58b7, 0xbe0428be, 
    0x3d17203b, 0xbc6803c2, 0xbe4e0a6e, 0x3d8a5adb, 0xbe7dc260, 0xbcc51cc4, 0x3e325f47, 0xbdfdb9d2, 
    0x3e3feed0, 0xbe1674bd, 0xbc2bbc35, 0xbe4988f5, 0x3e091532, 0xbe0a87c5, 0xbd745625, 0xbe0f3860, 
    0xbd1c8d93, 0x3e2813a2, 0xbe4a9603, 0x3e258b59, 0xbe2b8653, 0x3e2853ce, 0xbdb09681, 0x3e13177b, 
    0xbdde3ddf, 0x3da14f7c, 0x3c45e6bc, 0x3d5aac1d, 0xbddfacc4, 0xbb9ed568, 0x3dce2b96, 0xbc6eec08, 
    0xbe0b1be4, 0xbc9b524f, 0xbe0a608e, 0xbcc0667a, 0x3e4c2a78, 0x3e559092, 0xbd91f594, 0xbe208b93, 
    0x3e5a20f2, 0x3d8e736d, 0xbd7f7a98, 0xbe2bdcba, 0x3d6f2da9, 0x3d8854e6, 0xbe638607, 0x3cba12d4, 
    0xbdcdd3e3, 0xbcd69880, 0xbe028eec, 0x3e686ab6, 0xbd8e1353, 0x3d8de983, 0x3d714c9e, 0x3e496b70, 
    0xbd85f76c, 0x3e159b52, 0x3e51cabf, 0xbe28254f, 0x3dcf1859, 0x3e2b8cec, 0xbe1122be, 0x3e38b61d, 
    0x3d6b07b0, 0x3e901ece, 0xbd997e69, 0xbd81ef80, 0x3e567c6d, 0x3e8bc8dd, 0xbe0e2863, 0x3c9ac18f, 
    0xbd87ff36, 0x3e34d0e5, 0xbe0b3b79, 0x3e4ed0db, 0x3e1f0bbb, 0xbe00fce2, 0x3d0b70b7, 0xbe31dad2, 
    0x3e24a99d, 0x3e1bfc34, 0x3e9228a8, 0x3d857ce2, 0x3da88af7, 0xbe339c3b, 0xbe2abee2, 0xbe85cb85, 
    0xbb8108a1, 0xbddea9f7, 0x3e98c425, 0xbe5ad87b, 0xbe8a6bab, 0x3c8b9700, 0xbda114fa, 0x3d9649e8, 
    0xbe5adc43, 0xbd962195, 0xbcf80825, 0x3e8dacd3, 0xbe7d2dce, 0xbe343248, 0xbe37f696, 0xbd9545fb, 
    0xbe429f75, 0x3e769252, 0xbd9b425e, 0x3e1e3296, 0xbe67864c, 0xbe571bae, 0x3e09d8f6, 0xbe12c84a, 
    0x3ea0751b, 0xbdcdd865, 0x3e2a0ab0, 0x3e1c24eb, 0x3e38d6f1, 0xbdfb3f14, 0xbe9a32cf, 0xbe92381d, 
    0x3e52bd3b, 0x3e2319aa, 0x3d3ca489, 0x3e3fc6b2, 0xbe57e6bd, 0xbd2aee89, 0xbdabd31a, 0x3c9d66c2, 
    0xbe4506ef, 0xbcd757ab, 0xbd02d911, 0xbde83e84, 0x3d679666, 0xbceabbd2, 0xbd922c29, 0xbd2bf37c, 
    0xbe2b41a1, 0x3e163d45, 0xbdacef38, 0x3dbce284, 0x3be964d4, 0x3cddd9d2, 0x3dedea9c, 0x3e071afa, 
    0x3e405313, 0x3dd51aa6, 0x3dc99a1f, 0xbe374955, 0x3de3c299, 0xbe1f7740, 0x3e370f28, 0xbd5014f0, 
    0x3e143493, 0x3c2ac02f, 0x3e251144, 0x3bddb204, 0xbd15253a, 0x3b71e82f, 0xbd9af85e, 0x3ca0032e, 
    0x3d547145, 0x3d133192, 0xbcfdfbee, 0x3d370eae, 0x3e01725c, 0xbe36e8e7, 0x3e25f474, 0xbd08afbf, 
    0x3e836115, 0xbddc5c7d, 0xbe097ea0, 0xbd0d8d74, 0x3d122d0a, 0x3cb6bdc7, 0x3d267789, 0xbe177336, 
    0x3e0d0a55, 0x3cb4474b, 0x3e1e05f7, 0x3e1a3c96, 0x3e208710, 0xbda92af8, 0xbd6029eb, 0xbda68a88, 
    0xbcdf9740, 0x3e251afe, 0x3dd61624, 0x3e0ec20b, 0xbd8881a9, 0xbe0e3f9e, 0xbe07ef0b, 0xbe0ccdfb, 
    0x3d211b9f, 0xbdebb05c, 0xbe196305, 0xbd67b1fc, 0xbc1ecf79, 0xbe47d91d, 0xbd84c4dc, 0x3d9499cc, 
    0x3e53061f, 0x3d86dbcc, 0x3e909b6f, 0xbe5d6229, 0xbb9f7fad, 0xbe308dbd, 0xbd15c8e6, 0x3e15f791, 
    0x3d011661, 0xbe87c91f, 0x3e040bc9, 0xbe8beb13, 0xbdb98033, 0x3e9ce32c, 0xbd9029a9, 0x3dda23c9, 
    0xbb05fcbc, 0x3e6d8886, 0x3e1d28dd, 0x3e2b71b7, 0xbe3b04d0, 0x3e6a7310, 0xbd6973b2, 0x3e421091, 
    0xbcc2ef4e, 0x3e243739, 0xbd62c935, 0x3e47b255, 0xbe041f4c, 0xbe27f769, 0x3e843610, 0xbe2e620a, 
    0x3d400936, 0xbd4d3477, 0x3e34ccdc, 0x3dfd4425, 0xbe17e9cf, 0x3d720884, 0xbda2dfcf, 0xbe7ffebf, 
    0xbe54d2ce, 0x3c73db0b, 0xbdd6680c, 0x3e12ae06, 0x3c16b5bb, 0xbd86939d, 0xbe9067d6, 0xbc1ecb4a, 
    0x3e582a15, 0x3e8bb653, 0xbe3fec90, 0x3e937604, 0xbd95b02b, 0xbda9a84f, 0x3d60cb88, 0xbddba232, 
    0x3e8b87a3, 0xbe9eff1d, 0x3e826e37, 0x3e7b78b9, 0x3cc12137, 0x3e088daa, 0x3c98a66d, 0xbe2c78f8, 
    0x3e011ccd, 0xbe070776, 0x3e0bcbdb, 0xbe9fa49b, 0xbd1587c6, 0xbe74ec51, 0x3e827866, 0xbe435c75, 
    0x3e437951, 0x3e30cfe0, 0x3d77a088, 0xbdfaec09, 0x3dcdd14d, 0x3ddaad74, 0xbdaf288b, 0xbdf2dcee, 
    0xbdaa266b, 0xbd24bf38, 0x3e5484fa, 0x3e55910f, 0xbe21fde5, 0xbe563311, 0x3c9f513a, 0x3e76b49e, 
    0x3d397d0c, 0xbd1ee712, 0x3dbe4eb0, 0x3d3db2a7, 0x3d9f0585, 0xbe0d58f9, 0x3d4ceb7a, 0xbe210e33, 
    0x3baad1e1, 0xbe16d770, 0x3d8ee6ca, 0x3dad2ca4, 0xbd915795, 0x3de599ec, 0xbe95bd69, 0xbd948a58, 
    0xbd8ceada, 0x3df709cf, 0x3dd2dd9f, 0xbe057efa, 0xbda021fc, 0x3e23e13c, 0xbd9ac9e6, 0xbe256b11, 
    0x3dd6e215, 0xbe615b63, 0xbdef1454, 0xbe84f9ac, 0x3e073a6d, 0x3d0c4fab, 0xbb5da30f, 0x3ddb35d4, 
    0xbd44a826, 0x3e2a2d93, 0x3bbb9875, 0xbe6ceedd, 0xbd9a92d4, 0xbc99fc36, 0x3da60732, 0xbcc28945, 
    0x3d769e5e, 0x3daabca8, 0xbd85d80c, 0xbc2a5a69, 0x3d896a4b, 0xbdefe082, 0x3aa66c8b, 0xbe0e244e, 
    0xbd34d0ed, 0xbe6d74f8, 0xbe3a785d, 0xbe57d395, 0x3d1fc0e7, 0xbe9135e7, 0x3e28238b, 0x3b6de1f6, 
    0xbdd140a3, 0x3e39b33f, 0x3d105bca, 0x3de10159, 0xbe49335f, 0xbd43626b, 0x3e209e07, 0x3e0fcc14, 
    0x3e27f88b, 0xbd063174, 0x3dd69d14, 0xbd92ab2b, 0x3d5c82a7, 0x3e390aaf, 0xbe1b58b2, 0x3cfd0e66, 
    0xbe6a749f, 0x3e4633ba, 0x3e1ab341, 0xbb708794, 0xbdfcdfe9, 0xbd6f22bf, 0x3e27e396, 0xbdcac33e, 
    0xbc5ea423, 0xbe39d8c1, 0xbd8b60db, 0x3e57a92a, 0x3e4afe60, 0xbdcab2ee, 0x3e30ffb3, 0x3d8e5461, 
    0x3dcffdd0, 0xbe1a0141, 0xbe64ed49, 0x3e21c2c7, 0xbd5f25a8, 0xbba0d9af, 0x3dc5be3d, 0xbe2370d4, 
    0xbca78fdb, 0xbe0e3bf9, 0xbe58adee, 0x3cae0988, 0xbbed2b7e, 0x3c45be1c, 0xbe0c210d, 0x3d843d8c, 
    0x3e0bb406, 0xbe1b60c1, 0xbda91bd6, 0x3e0bb650, 0xbdbd1168, 0x3c4f4f55, 0x397f705b, 0x3ddcf83f, 
    0x3d3257b7, 0x3e2112c8, 0xbe1caf5d, 0x3c9afa89, 0xbe490741, 0x3cac1b55, 0xbcb1c8ee, 0x3deb5eda, 
    0xbe96058e, 0x3d75345e, 0xbe539b75, 0x3dd32619, 0xbe43e060, 0x3d4030b2, 0x3e6787a0, 0x3e9ec3b7, 
    0xbcc5cda0, 0xbe29d42e, 0xbc8edbee, 0x3dea5d3a, 0xbd59377d, 0x3da86455, 0xbde2502a, 0x3d657e6d, 
    0xbded8216, 0x3d78fc3a, 0xbe02b652, 0x3d49ae60, 0x3df65e5d, 0x3d98dd39, 0x3dd8ec5c, 0x3d0162db, 
    0xbd51b1b5, 0x3e031294, 0x3dcd6c88, 0x3daeb037, 0x3d8c471b, 0x3e3929d8, 0xbd0ee881, 0x3d9adfa7, 
    0x3d74d518, 0x3dfbc7e2, 0x3d8ef0e6, 0xbe6bef0e, 0x3dcf37f6, 0x3e55dc85, 0xbe0f9209, 0xbe22eebe, 
    0xbd9ce565, 0xbe085130, 0xbe007583, 0x3da06b6f, 0x3e46ba82, 0x3ce101fb, 0x3e23c809, 0x3d755e7e, 
    0xbe5ff978, 0xbd752af2, 0xbc434bed, 0xbdd63734, 0x3e0f6510, 0x3e1d5826, 0xbd9a60e1, 0xba4960f9, 
    0x3e0ef93c, 0x3e4ad5b2, 0x3e0e8db9, 0xbdb81e54, 0xbcc21c4a, 0x3e64f690, 0x3dbe2c24, 0xbe81436c, 
    0x3e7ba00d, 0xbe0ea818, 0xbd0003e0, 0xbd6838b9, 0x3cd42f34, 0x3e14ee2e, 0x3e2b1bad, 0xbd8edda5, 
    0xbd8f908b, 0x3e39ac5f, 0xbe3234bd, 0xbbc109b2, 0x3e032149, 0xbe0ef504, 0xbd91d5ad, 0xbb82e7b8, 
    0x3db9e2c6, 0xbdc7cee3, 0x3e1dc2e5, 0xbc769f54, 0x3dea0748, 0x3d76af5e, 0xbe02f060, 0xbe6359c0, 
    0x3d91c932, 0xbe2168db, 0x3e5d9ec6, 0xbc2308b4, 0x3df55aca, 0xbce0d872, 0x3d5386a4, 0xbc41fab5, 
    0x3cbaa5fd, 0x3d4a724c, 0x3d949a15, 0xbdc5c5f4, 0xbd4b60ea, 0xbde0080a, 0x3de9aaff, 0xbe052dcc, 
    0xbc7be5a5, 0x3c45c556, 0xbd755901, 0xbe3a7a8c, 0x3e49dbf4, 0xbe490c48, 0x3e4a003d, 0x3dc3ce3e, 
    0x3d7f6d32, 0x3e0da244, 0xbde460a6, 0xbd65059b, 0x3af629c6, 0xbe1fc253, 0x3e7396f1, 0x3dd7a30a, 
    0xbd9f9a1e, 0x3b83b1b1, 0xbe1bbd9b, 0x3e0afe99, 0x3df08dc3, 0x3d23e386, 0x3e3f75f2, 0x3c696ba1, 
    0x3d16404d, 0xbcabb990, 0x3e4818b9, 0xbe0cb094, 0x3dd9386b, 0xbe0a02a2, 0xbd41e92c, 0xbe08609d, 
    0x3e2b25fa, 0xbc8de143, 0xbb6ce8bc, 0x3daf36c9, 0x3df5d684, 0xbddeadd4, 0x3e2736da, 0x3e161f12, 
    0x3e05301e, 0xbd64d45f, 0x3df7c496, 0x3da7d40e, 0xbd2151f1, 0xbe104ddb, 0xbdea7429, 0xbc3b320a, 
    0xbe0db857, 0xbe22e91a, 0xbe376dc8, 0x3d3a6ff6, 0x3e517394, 0xbdc4e714, 0x3dd51271, 0x3e1487a2, 
    0x3d88502e, 0xbc102792, 0x3d77f2ff, 0xbe1de48a, 0x3e417051, 0xbd6d1189, 0xbd459ccc, 0xbd830301, 
    0x3e31ae13, 0x3c4150d7, 0x3dc1877e, 0x3d8e0f0c, 0xbd3b2032, 0xbe42ff51, 0x3e4d0046, 0x3cc6d5ab, 
    0xbe774f3b, 0x3e0a1603, 0x3badf476, 0x3e1d2adb, 0x3ded52e9, 0xbc8f7020, 0xbe2d6201, 0xbe024676, 
    0x3ddd2aa2, 0xbe32342b, 0xbe951676, 0xbe5f263c, 0x3e75da3d, 0xbe8d5eff, 0x3e948a12, 0x3e81961b, 
    0x3e32a81b, 0x3d9cff56, 0xbe8b8221, 0xbc1f0242, 0x3e3f7633, 0x3d88d31b, 0x3d5a1bcb, 0xbe632a12, 
    0xbd6b18b4, 0xbe5349c6, 0x3c76b7ab, 0xbe492ca2, 0xbe2ebe74, 0xbe200c09, 0x3e0dea95, 0xbe583856, 
    0x3d606ab0, 0xbd162f35, 0xbe4aa41b, 0x3aaf66f2, 0xbdccd612, 0x3c336afa, 0x3d936596, 0xbe06aa4e, 
    0x3ccda096, 0x3e03dc0b, 0x3d2954d2, 0xbdf5cd74, 0x3e733702, 0xbe14efef, 0xbda4f4df, 0x3e35c487, 
    0xbd6d5510, 0xbdfa658b, 0x3e22477d, 0x3e1a7be4, 0xbdf63908, 0x3e60f900, 0xbe0605a5, 0x3dd97db5, 
    0xbda73653, 0x3d8c61af, 0xbe20e572, 0x3d2d82e0, 0x3dc263f1, 0x3db7049a, 0x3db339d1, 0x3d4aed47, 
    0xbe299387, 0x3dbb0103, 0xbdad5b91, 0x3c876d21, 0xbe402fa0, 0x3e02fb05, 0x3e0314a9, 0xbdf3d99c, 
    0x3c6336b1, 0xbe2125ed, 0x3d8161b0, 0xbd9ebc6d, 0xbe067ae7, 0xbd3f4926, 0xbe05c864, 0x3e59d397, 
    0xbcea3afc, 0x3c5f18fc, 0x3d9ad70e, 0xbd4b2909, 0xbc9a360e, 0xbd716ea5, 0xbdaef3d3, 0xbdae9255, 
    0xbe0dc4d8, 0x3da7caa6, 0xbdce1b5b, 0x3c624153, 0x3db619b8, 0x3e0f04a9, 0xbc734ec5, 0x3e2e5fe0, 
    0x3d3866d5, 0x3db4cb56, 0xbcf2f948, 0xbc11dc5f, 0xbe02aa2a, 0x3d2f9e2c, 0x3db81d7c, 0x3e3f585f, 
    0x3dd1d011, 0xbdb1c8c7, 0xbe6af485, 0xbe25ef02, 0xbde9cf10, 0xbde54a99, 0xbe01bd06, 0xbe28ccfb, 
    0xbd099b40, 0x3d120116, 0x3d500b50, 0xbd54d369, 0x3ca84c2c, 0xbd0970e3, 0xbd797cfc, 0xbdbdcd83, 
    0xbe3b0941, 0x3d2efdbd, 0x3d994048, 0xbbc628ba, 0x3e454a2f, 0x3d229835, 0xbe768af9, 0x3e835a63, 
    0xbd796294, 0xbdc55904, 0xbd416543, 0x3e35d116, 0xbe23872a, 0x3e8f17e8, 0xbe275788, 0xbdf5264a, 
    0xbdb2f19b, 0xbe478b96, 0x3d8ff589, 0x3d6e8b25, 0xbdadb3b1, 0x3ddc4bb7, 0xbdc48358, 0x3d560149, 
    0xbe06e968, 0xbd3343d7, 0x3d5ece1e, 0x3e13b1a9, 0x3d0c93e5, 0x3d63a658, 0x3d158652, 0xbddd99dc, 
    0xbe3f2bfe, 0x3e24d683, 0xbe16d31c, 0x3d059810, 0xbdb8b52e, 0xbd07ddc1, 0xbe86cd5f, 0x3e22d8fa, 
    0xbccab8a1, 0x3e54a1c7, 0x3d8c9f3a, 0xbd350578, 0xbe4f5345, 0x3defd34b, 0x3e5e94b1, 0x3e36a8f4, 
    0xbdc37ff0, 0x3e149eb4, 0x3e46e0c5, 0xbe4a679f, 0xbde508ba, 0x3e66cdae, 0x3e74955f, 0xbe82b300, 
    0x3da4248a, 0xbe983f12, 0x3e0cf033, 0x3e5def7b, 0xbdb57370, 0x3dc4b596, 0xbe0dce2a, 0xbd13e9a5, 
    0x3e0388e5, 0x3e177b09, 0xbdf9d112, 0x3ca6b7b9, 0x3e3853e1, 0x3d27cce7, 0x3dd8db89, 0xbe27dcd6, 
    0x3d3e7e38, 0x3e298b1b, 0x3d5c0e67, 0x3e20332b, 0xbe2ac93d, 0xbdb300b2, 0x3de5224b, 0x3dd6d70e, 
    0xbe49f9ce, 0xbdcc59ce, 0xbe0a37f9, 0x3c674881, 0x3bd823f4, 0x3dc3a142, 0x3df94a2a, 0x3c64f0b0, 
    0x3dbf24ca, 0x3b870d3c, 0xbdac4384, 0x3e03897d, 0xbe1cb8f1, 0xbdabb287, 0x3d5bebc1, 0x3ae4e25c, 
    0x3d834c04, 0x3e255928, 0xbdd392b1, 0x3e0f00eb, 0x3e258e7f, 0xbe3726e9, 0xbe08af82, 0xbdafacbb, 
    0x3e582b10, 0x3e154e50, 0xbb071b47, 0xbde40d12, 0x3dc5c83e, 0x3d1229b3, 0x3d58e169, 0x3d270db6, 
    0x3c55361e, 0xbddf3937, 0x3da5dc61, 0xbe30d2e7, 0x3d2bf209, 0xbe1eb007, 0xbcbde060, 0x3cd680ea, 
    0xbe4bd819, 0x3e163d17, 0x3e0e7833, 0xbe3308e8, 0xbe2d79c9, 0xbe4e35c5, 0x3d4ff18e, 0x3d0714dc, 
    0x3e10f9b9, 0x3d200fce, 0x3e1ce181, 0xbd679798, 0xbd51800b, 0xbe203f85, 0x3db083a4, 0x3def14e2, 
    0xbcf64984, 0xbe79a9db, 0xbd5720fb, 0xbe074bd0, 0xbddd2efd, 0xbe11983d, 0x3dbce1aa, 0x3d65e14c, 
    0x3e157a06, 0xbdab3b49, 0x3ca8da76, 0x3c067829, 0x3e37e4af, 0xbe69be13, 0x3d23d5f7, 0xbd86223f, 
    0x3dd1ece0, 0xbd499f8d, 0xbcf9a48a, 0xbd3e68c0, 0xbc9f1568, 0xbe0b7909, 0x3d83a7b2, 0xbdc49774, 
    0xbe6ed4e3, 0x3dd34374, 0x3c9b620a, 0x3e02873e, 0xbe6e20d5, 0xbd7be1c5, 0x3dcca8ca, 0xbdc69006, 
    0xbde0193d, 0x3ca98f17, 0xbd23c886, 0xbe0399b8, 0xbd6e07a5, 0x3e30ccbf, 0xbd29bd95, 0x3e003e89, 
    0x3e76d58f, 0xbe626d61, 0xbda8b5ff, 0x3d13bb21, 0xbd890b97, 0xbc6dacad, 0xbe1fe0c0, 0x3dc66160, 
    0x3e44a11d, 0x3dbf64aa, 0xbe3b99e1, 0xbd393cbf, 0xbe9edf7c, 0xbe978182, 0x3e17bafd, 0xbe8f6c4a, 
    0x3e1fc6a4, 0x3dcdf459, 0x3df487ca, 0xbdbe67e9, 0x3e2491fc, 0x3ddc6dd9, 0xbdebbe1a, 0x3dda3eb6, 
    0x3e4031fd, 0xbc4366b4, 0x3e9ecc93, 0x3e5214d1, 0x3e12bcad, 0x3dcc1fb0, 0x3e00b68e, 0x3cbf477a, 
    0x3e1bfcae, 0x3bdee280, 0xba39e00b, 0xbe669fd8, 0xbe13c6e2, 0x3d886e5f, 0xbd742312, 0xbeadcd8c, 
    0xbdbfbe97, 0x3e2a02ae, 0x3d8a01fd, 0x3dd4e470, 0xbe14e3df, 0x3e2a9b42, 0xbeb0ddb3, 0x3e3c71ce, 
    0x3d853eea, 0x3e384913, 0xbe3d6719, 0xbe53664e, 0x3d462747, 0xbe0d1c68, 0xbd7156c0, 0x3e1d6686, 
    0xbeae54d5, 0xbd43be12, 0xbe3ad90f, 0x3d801b10, 0x3e5f0b02, 0x3e3341a5, 0x3dadeaa1, 0x3df6ca1c, 
    0xbe39df11, 0xbd9bde31, 0x3e01f1b7, 0x3e63ef00, 0x3e90f0d5, 0x3aa6c8ba, 0xbdcf7140, 0x3e356424, 
    0xbde79858, 0x3ea88077, 0xbea7d4ad, 0x3e0554ae, 0xbd0b297b, 0xbe9ed717, 0xbe97b76b, 0xbd6aebd8, 
    0xbe25538a, 0xbc8520f7, 0x3ed0d688, 0xbe2599db, 0x3c08a317, 0xbcf78126, 0x3e74215a, 0x3e89bdb2, 
    0xbdc6514d, 0xbde54e9b, 0xbe91cd8e, 0x3e64ef22, 0x3e22ee81, 0x3e63ad6f, 0xbc12aef8, 0xbe8ed18d, 
    0xbd2fd407, 0xbe39cc73, 0x3e59b729, 0x3e019b4b, 0x3cb65122, 0x3c88b8f2, 0x3e15f6f7, 0x3e9eb78d, 
    0x3d6d537e, 0xbdec2e94, 0xbe4e44ea, 0xbd83f4a6, 0xbec87b8d, 0xbdfe769d, 0x3e9e2b69, 0xbe27615b, 
    0xbe4c19a3, 0xbd2b2bd7, 0x3e590ff5, 0x3dcfbfe9, 0x3d3e045d, 0x3e2abf9d, 0xbe469002, 0xbdc64678, 
    0x3e468e68, 0x3ca1b893, 0x3e9d3197, 0x3da624ef, 0xbe893253, 0x3d7c30b7, 0x3e1e85cf, 0x3dfca1e8, 
    0x3e6e2a10, 0x3d50243f, 0xbe4606f9, 0x3e4c0f1b, 0xbe81c91e, 0xbe1580f9, 0x3d667de0, 0xbe6b494b, 
    0xbe6a8bf5, 0xbd9438e6, 0x3e14807e, 0xbe1dc6ac, 0x3e8fbce0, 0x3e28c347, 0x3e2994c4, 0xbdef3eb4, 
    0x3df5982e, 0x3e6607ac, 0x3e86b60c, 0x3dcfa78a, 0x3e254782, 0xbe3d4774, 0xbd9a497e, 0xbe05cd27, 
    0x3e03ff5e, 0x3e8de413, 0xbcbe845e, 0xbe389572, 0xbe96947e, 0xbdf1c04c, 0xbdd8723e, 0xbd230ff6, 
    0xbde2724f, 0x3e3aabaa, 0xbe3e66ad, 0xbd084834, 0x3cfe5b0a, 0x3e09286b, 0xbdbec498, 0x3da74995, 
    0x3e922f65, 0x3e87b2e5, 0x3c90df06, 0xbe5713b1, 0xbe94e4e7, 0x3e0f0e18, 0x3d161730, 0xbe8b38f1, 
    0xbe8a4aa8, 0xbe954445, 0xbccc00c5, 0xbe868190, 0x3e0507cc, 0x3e9b2bd2, 0xbd9c5861, 0x3ca6fb8a, 
    0x3d36a081, 0xbe35a331, 0xbd27aada, 0xbe349b54, 0x3b210fa0, 0x3db8e4b6, 0x3def382a, 0xbdfa2b03, 
    0xbdb055db, 0xbe05e50f, 0x3d35183c, 0x3c0d18e8, 0x3d385139, 0xbd1b9b61, 0x3e1553dc, 0x3dcbc0f9, 
    0x3d164179, 0xbe5534de, 0x3d53b90f, 0xbe0552f0, 0xbd779486, 0x3d1d082b, 0xbe0a5304, 0x3ddaaaff, 
    0x3d10800a, 0xbdae1094, 0x3d8026d1, 0x3d0af641, 0xbde98c26, 0xbdb77379, 0xbc590a4c, 0xbd65dee3, 
    0x3dbccde6, 0xbd3f173d, 0xbe33b94d, 0x3db91e4e, 0x3e23c505, 0xbe290f6c, 0x3dd2ee0f, 0x3e46c8ec, 
    0x3e697f06, 0xbbe9ee66, 0xbe0acb36, 0xbd5abd51, 0x3d87dc92, 0xbcda91d9, 0xbd02f029, 0x3dc3c600, 
    0x3cc59685, 0xbde128bc, 0x3cb13e76, 0xbda8a7c6, 0xbbdf9da3, 0x3d23a24c, 0x3e1f55dc, 0x3df419f2, 
    0x3d0e2ef6, 0xbdcdfb4c, 0x3b74f7e6, 0xbdf2b191, 0x3e007ce6, 0xbe0357cf, 0xbd814cdb, 0x3d7aab4d, 
    0x3e1ec27a, 0xbda780b9, 0xbde7feb5, 0xbd7cf1e8, 0xbdaca17f, 0xbd2953ea, 0xbd48e1e3, 0xba25de58, 
    0x3e0de070, 0x3d69b031, 0xbcd8713c, 0x3d5bd8fd, 0xbc270bc9, 0x3d5373d9, 0xbd7d9cbe, 0xbcb38613, 
    0x3defe953, 0x3e6e9ebe, 0x3e34b659, 0x3e009c0f, 0x3db54fe2, 0xbb227768, 0x3ded64f8, 0xbd3e6581, 
    0xbd32f70f, 0x3d031c2f, 0x3e00ba64, 0xbe312653, 0x3d5775ac, 0x3e385de2, 0xbe6ecaa7, 0x3d8c6165, 
    0x3bc4e6ce, 0xbe3fd686, 0xbde625e4, 0xbe21f2b6, 0x3e153210, 0x3debe95e, 0xbd7d0fb3, 0xbc81ccae, 
    0xbdab1a0e, 0xbdbbd3cb, 0x3d97146a, 0x3dde0d74, 0x3c32eacb, 0x3e585178, 0xbe695f21, 0xbdbfcb56, 
    0xbe66c3f5, 0x3db8b0bc, 0xbdaf18e4, 0x3e2ebc67, 0x3df1ffb0, 0xbe26fed3, 0x3e053f12, 0x3ddc273d, 
    0x3d7e9f80, 0xbca504c5, 0x3e3f9621, 0xbe4ac447, 0xbd4a5d19, 0xbd907fea, 0xbe10b10e, 0xbe37ddae, 
    0xbe06c781, 0x3e690c64, 0x3e67b7f3, 0x3d413af1, 0x3dd34775, 0x3e75f150, 0x3d29645a, 0x3d3ad802, 
    0xbc3c0b7e, 0xbd2eec91, 0x3dfca21e, 0x3dfc1f65, 0x3e0b239c, 0x3e3a022f, 0xbe2ba527, 0xbdbc3d72, 
    0x3d7036cc, 0xbdc63075, 0x3e3fc140, 0xbe3af3cb, 0x3df7ac37, 0xbdc70ad7, 0xbe43f44f, 0xbe757488, 
    0x3e897ef8, 0x3df38996, 0xbdcd4bc9, 0x3e43808f, 0x3d660b73, 0x3e20ab3e, 0xbe279414, 0x3d253e49, 
    0x3d94772b, 0xbe72e53e, 0xbde6d5e0, 0xbdf4ad7c, 0xbd9d2030, 0x3dd2e539, 0xbdaf4058, 0xbe73b1e2, 
    0xbe221ed7, 0xbe24828f, 0x3e30897e, 0xbdc600af, 0xbdf78cf9, 0x3e13d48a, 0xbd8128c2, 0x3c8f2b4c, 
    0x3c4b9cf2, 0xbe4e0f27, 0xbd107a08, 0xbb63cf8f, 0x3e029865, 0x3dd040f8, 0x3e943fc7, 0x3dd96205, 
    0x3d0e8e5f, 0x3d81142e, 0x3e2433f7, 0xbe64ea27, 0x3de3e5c6, 0x3e762aa1, 0xbe545159, 0xbb76a590, 
    0xbce2cc38, 0xbccda0d7, 0xbe54313b, 0x3e01b575, 0xbd3b3a3f, 0x3d5ab0df, 0x3d1b5b48, 0xbe476c07, 
    0x3d4b343f, 0xbe54b42a, 0x3e80c98e, 0x3e198c8e, 0xbda071ff, 0x3e08efa5, 0x3d867e29, 0x3e8b4aa0, 
    0x3d081385, 0xbe51bc7c, 0x3d055641, 0x3c870b10, 0xbdaaaae4, 0xbe47443f, 0xbd5d4ce7, 0xbe9cb07a, 
    0xbea48874, 0xbd0fb64e, 0xbdd0dbc9, 0xbe7d30a0, 0x3d2fd9fc, 0xbe80a72d, 0x3d17cbb5, 0x3dcada38, 
    0x3e3a1cef, 0x3dfd6439, 0xbe0de4e4, 0xbe88de7e, 0xbe1b0360, 0xbe287359, 0x3e8d51e8, 0x3e977a8e, 
    0xbd199cfb, 0xbd9695b3, 0x3e495538, 0x3d228fd6, 0x3ea34eaf, 0x3c81bc1a, 0x3e288ca6, 0xbdeb0db1, 
    0xbdc6e3fd, 0xbe16b011, 0x3e8c8536, 0x3e58b9ba, 0x3dd206f6, 0x3e0b7094, 0xbc323b05, 0x3e9339c3, 
    0x3c4aa85f, 0xbe580c37, 0xbe55a978, 0xbd63009c, 0x3ca94762, 0xbd430fb7, 0x3d598400, 0x3e809edb, 
    0xbd843393, 0xbe843a28, 0x3e58340d, 0x3dc4d4ba, 0xbc8a5efd, 0xbdee514a, 0xbc0e151e, 0x3ddfa82d, 
    0x3d333047, 0x3e46e66d, 0xbe6fdc62, 0x3deda47d, 0xbe6be8c9, 0x3e1febe1, 0xbe85eae2, 0x3dcea5f3, 
    0x3b7da5b9, 0xbde384fb, 0x3d0ee3ca, 0x3de4a846, 0x3e518a94, 0x3e7b1930, 0x3e8f896e, 0x3e496c3d, 
    0x3de64259, 0xbdcd80d3, 0x3e07981f, 0x3e7d158e, 0x3e50aae4, 0x3e0b0003, 0xbdf2f379, 0x3e2d96df, 
    0x3cea89fd, 0xbdc0113f, 0xbdcab7a5, 0xbe957186, 0xbe590435, 0x3e68b887, 0x3d32b4b3, 0xbe574f8d, 
    0x3e73858e, 0xbce04827, 0xbe5111c0, 0x3e426db2, 0x3db005d2, 0xbd0e8796, 0xbe4ede02, 0x3e098117, 
    0xbe584fcc, 0x3dd2bee8, 0xbe814b42, 0xbc1802e7, 0xbda7d430, 0xbe38931c, 0xbe3aca4d, 0xbe92a391, 
    0x3e16df5a, 0x3de81ce7, 0xbe4f6fef, 0xbe50d855, 0x3dfd9969, 0xbd87a478, 0xbe9775bc, 0x3e843034, 
    0x3e67e880, 0xbe80c238, 0x3e138a17, 0xbde91f77, 0x3e4e52bd, 0xbe3e5ab6, 0xbe423211, 0xbba56b20, 
    0xbe151bd5, 0xbdfd6e0a, 0xbd37b246, 0x3dc1dbac, 0x3e90eaa9, 0x3e7bc965, 0x3dedcf1e, 0xbe363efc, 
    0x3e097745, 0x3da9c3b5, 0x3ddfe394, 0xbd408b9e, 0x3e65a515, 0x3d8a573a, 0x3e1fb868, 0xbe82e561, 
    0xbe597dd0, 0xbe7785be, 0xbe01b779, 0xbe8efda7, 0x3e8237c6, 0xbe5e54da, 0x3d9a755a, 0x3b71d7e8, 
    0xbe1a12ad, 0xbe5edbd2, 0xbe572444, 0xbda6e87e, 0x3db4719c, 0xbb59616d, 0x3da1129e, 0xbd4d07a0
};

static const uint32_t _K30[] = {
    0x3eff68f2, 0x3e5ce290, 0xbf3bdd53, 0xbe75acf4, 0x3de5160f, 0xbeb2a7a7, 0xbec72737, 0xbf2616c3, 
    0xbe8eddf0, 0x3d990774, 0x3f244d15, 0x3e7587c8, 0x3f02c17f, 0x3e405d09, 0xbe20a860, 0x3bb54c18, 
    0xbe88d0de, 0x3d92040d, 0x3d509713, 0x3e8e1dc2, 0xbe706c20, 0x3e98e746, 0x3f9e3684, 0x3ec3faec
};

static const uint32_t _K36[] = {
    0xbe226475, 0x3da9a583, 0x3dc5f61d, 0x3d29f399, 0xbd464954, 0xbd8dfd30, 0x3ba6a736, 0x3e1055a1, 
    0x3dfc233b, 0x3de847d9, 0xbdcca435, 0xbd7649af, 0x3e683c47, 0x38b41932, 0xbe3822c1, 0xbe0ddded, 
    0x3d1b50bb, 0xbc832a5a, 0x3d4d17bc, 0xbe0ae7e4, 0x3d8afc9b, 0x3de719a5, 0x3dd0ee7a, 0xbdb4066b, 
    0x3bf449c6, 0xbb01fe62, 0x3e35a098, 0xbe46d308, 0xbd9628cf, 0x3ce29912, 0x3db16224, 0x3e024793, 
    0xbe2a5b32, 0xbe1cea90, 0xbd8e830e, 0xbdd42555, 0x3c50d2f3, 0x3da81112, 0x3e2ae50b, 0x3d31162f, 
    0xbc71f4ee, 0x3e35e72d, 0xbe1e248c, 0xbcbfc509, 0x3e6dea56, 0x3e5b9939, 0x3b6ca653, 0xbdbaac8b, 
    0x3d2ccced, 0x3e200112, 0xbd63118b, 0xbd8973f4, 0x3d6a9d88, 0xbe03352c, 0x3dbbf9b9, 0xbd379e76, 
    0xbe3614f4, 0x3d064da3, 0x3e449eae, 0x3daa292a, 0x3d078535, 0x3c931e86, 0x3d9cbf4c, 0xbe0793cb, 
    0x3e5c2330, 0x3b9b470b, 0x3cf7010a, 0x3dd9bee8, 0x3d9a775e, 0x3e23f3fb, 0xbd0f33bc, 0x3d79cec5, 
    0x3e30aa4c, 0xbd67a088, 0x3d793128, 0xbda4abb9, 0xbc03eef9, 0x3a99e558, 0x3e1944b0, 0x3dd11f85, 
    0xbe1812fa, 0x3d799c50, 0x3c824d74, 0xbd9ea830, 0x3d5bca47, 0xbd976cab, 0x3d16adee, 0x3e00629c, 
    0x3de4a652, 0xbcee382c, 0xbd18048c, 0x3e2b632e, 0xbe067441, 0x3a3bc2a1, 0xbcf21ef7, 0xbd4ed809, 
    0xbc122925, 0x3dadb100, 0xbe1b5233, 0x3c192bb8, 0x3d5a5aa5, 0xbdae20fe, 0x3de4b6a2, 0x3bb9dabc, 
    0xbd02f2f3, 0xbe1762cb, 0x3c902c7c, 0x3dbfccba, 0xbb422c59, 0xbdd4e317, 0xbe28c935, 0x3e0e73bc, 
    0xbdbf0d48, 0x3c27470b, 0x3bfe4637, 0x3ccab92d, 0x3d94150e, 0xbd9dcd0e, 0xbdd5a9b2, 0xbd3fbd34, 
    0x3e2dc11c, 0x3e377d20, 0x3e2ec36e, 0xbd52afec, 0x3c32c6f2, 0xbc315d95, 0x3e3bd426, 0x3e27b461, 
    0xbe4a1f25, 0xbd3209d4, 0xbd9a5393, 0x3e1812bb, 0x3cb78d12, 0xbdc2d9c0, 0xbe37cd25, 0xbdde84c1, 
    0x3e01db5a, 0x3dd2c126, 0xbdf5fb58, 0x3ddb1c57, 0xbdc3b957, 0x3e0b3b81, 0xbdb92f4d, 0xbd2d21fa, 
    0xbe09ec08, 0xbdd76755, 0x3e34dbf5, 0x3d30ebff, 0xbdd39569, 0x3e311661, 0x3da9a8fd, 0x3ce708b5, 
    0x3de16721, 0xbdcf4823, 0xbe4c25f8, 0x3d4db926, 0x3d4ca59d, 0x3de85d32, 0xbde06cea, 0xbe04c224, 
    0xbd579910, 0xbe04a7a5, 0x3e060140, 0x3d2ff493, 0xbe1bb8c3, 0x3e2aac4c, 0xbe0c88d1, 0xbe6a7822, 
    0xbdd73ffa, 0x3d7f1cf0, 0x3e0fe676, 0xbe4f18e1, 0xbe0f5772, 0xbe085ef9, 0xbc484177, 0x3db38f15, 
    0x3b9eedb6, 0xbe34e6d7, 0x3e05c89b, 0x3db3e890, 0x3ca32fbf, 0xbaac078e, 0xbda4a646, 0x3e20eb89, 
    0x3e282ebc, 0xbdf0337f, 0x3d85fce9, 0xbdd169c7, 0x3d2dc9d8, 0xbc8fef3a, 0x3c8785f8, 0xbdacca8f, 
    0x3e141d20, 0xbac4c120, 0x3df9b4f9, 0x3d7f0f0f, 0xbe15dad5, 0xbde74d50, 0x3e1c40ae, 0x3dbd4cc9, 
    0x3e182db7, 0x3d65411c, 0x3ca4662f, 0x3dececbd, 0x3da7a05a, 0xbe4bc9c2, 0xbe496932, 0xbcbda874, 
    0xbccd2c00, 0x3e0078ea, 0x3e4bfae4, 0x3ca97f29, 0x3d4a043d, 0xbd21f89d, 0x3dde8c8c, 0xbd8f3474, 
    0xbd41f288, 0x3e235bac, 0x3d4c15c7, 0x3b1a2982, 0xbdef8ad9, 0xbafa43d5, 0x3e440f4e, 0x3e4079f2, 
    0x3d61cfa9, 0xbe74bfbb, 0x3dfbd69b, 0xbbfb080b, 0x3d061d4f, 0xbc84b5d5, 0xbdbbd394, 0x3e0acfc4, 
    0xbd991579, 0xbd1f5137, 0x3d84b39e, 0x3e4b8100, 0xbe55bdc2, 0xbdd59f2d, 0xbe13faf6, 0x3df5d709, 
    0xbda2ea7c, 0xbdfb27d1, 0xbcc40400, 0xbcc3f122, 0x3d45b23e, 0x3db1ee8a, 0x3e4a4b85, 0xbc1ba1cb, 
    0xbe1af389, 0x3a54d37a, 0x3da2eedc, 0x3e03caa6, 0x3cce13e2, 0x3d2fd278, 0xbe5e6200, 0x3e3ec41d, 
    0x3d22cca1, 0xbdc0fe6d, 0x3d8b5366, 0x3bbe9397, 0x3c27bb98, 0xbdee190b, 0x3e1e3a70, 0x3d3facf5, 
    0x3d3411fc, 0xbdaa1a37, 0x3dc5b322, 0x3e27d4f3, 0xbe46a0cb, 0xbd9f003b, 0x3dff295d, 0xbe178e2a, 
    0x3e0b8f27, 0xbe88ab69, 0xbcbad685, 0xbc11d43d, 0xbdeb93a7, 0x3b6639f4, 0xbd3f60f1, 0xbd28e9f2, 
    0xbe7ed5df, 0x3c6346bb, 0x3d95a930, 0x3e4f2f25, 0xbe05cb6a, 0xbbcd25ea, 0x3cab52b5, 0xbdb00f8b, 
    0x3c4e20f2, 0xbe0c940b, 0x3c9e5618, 0x3cd5d448, 0x3de73636, 0x3d2c41a9, 0x3d351b1c, 0x3c78db2c, 
    0x3dcbeca7, 0x3da595ee, 0xbcd4cd22, 0xbe2c8288, 0x3d95d436, 0x3e272cb7, 0xbd80aafe, 0x3e17b0a2, 
    0x3e2a3388, 0xbcb3df80, 0xbe3b6c6b, 0x3aa80015, 0xbe146beb, 0x3d9529eb, 0x3e1a6707, 0x3d6d20c3, 
    0xbc2b506a, 0xbe5e80c5, 0x3d0e423e, 0x3dda4d8b, 0x3deeca53, 0xbddf92e4, 0x3e040473, 0x3cedf22e, 
    0x3e45c79b, 0xbc6434bc, 0x3d6a371f, 0xbc06564e, 0x3c89ce71, 0x3cee3499, 0x3dde6d8c, 0xbc56410e, 
    0x3db6ec85, 0xbe005b98, 0x3e363319, 0xbda8a214, 0x3cd409d6, 0x3dcf0906, 0x3dcdfde7, 0xbdea012b, 
    0x3e37b1ac, 0xbe44af2c, 0x3e4e115c, 0x3e78cde2, 0xbd5fc282, 0x3d6ee054, 0xbdda637f, 0xbe369692, 
    0x3e0f3158, 0x3e335341, 0xbbb319ba, 0xbd5127c4, 0x3d1da58e, 0xbe148a9d, 0xbd3fb3b4, 0xbd596220, 
    0xbd952fad, 0xbd45c5ec, 0xbde27df3, 0x3e53690b, 0xbdaef871, 0xbdb04aa0, 0x3de5aeef, 0xbe106381, 
    0xbe2975fc, 0x3d9219e5, 0x3dffaa1f, 0x3e1e4386, 0xbe21287b, 0xbda5af60, 0xbc809aca, 0xbe6829b5, 
    0xbc1f2fcc, 0x3e3588b5, 0x3d6fa496, 0xbc6dcf06, 0x3ceefdca, 0x3e10d7a8, 0xbce3957f, 0xbb806863, 
    0x3e1404a7, 0x3da98e9d, 0x3da8843d, 0xbd38e64e, 0x3e18779b, 0xbe16919a, 0xbdbe11ad, 0xbdabe2c1, 
    0xbe27b471, 0xbdd05d13, 0x3d9fdc80, 0xbe0f1d38, 0x3d6c6877, 0xbdff0b6b, 0xbc53659c, 0x3e0f14fd, 
    0x3cbe733d, 0x3dd49fb6, 0x3c999942, 0xbe45019a, 0xbc02febe, 0x3e1cc499, 0x3e5a04b7, 0x3d30fea5, 
    0x3dccb179, 0x3e347b64, 0xbd264fdb, 0x3db06d9b, 0xbce5e4dd, 0x3bd8cac4, 0xbafafbc7, 0xbd5a5dcd, 
    0xbda00815, 0xbc7ada94, 0xbdad8dd1, 0x3de1115c, 0x3d22864e, 0xbdac65fc, 0xbd760e52, 0x3e4d6fc3, 
    0xbc68f3aa, 0x3de20247, 0xbb8472d2, 0xbe317220, 0x3e3c8567, 0x3e0eb70d, 0x3e0dca03, 0x3e5a98e3, 
    0xbd03d2e5, 0xbd65bf0c, 0xbcdd7813, 0x3dc8175d, 0xbd364956, 0xbdcbd5d3, 0x3dafcf61, 0xbd8467ba, 
    0x3e143dbb, 0x3e5f5702, 0xbe4b5b74, 0xbcddce50, 0xbe565089, 0x3de66e18, 0x3e168e98, 0xbda4f99f, 
    0x3d44babd, 0xbd27fc9f, 0x3e4fbdc3, 0x3c11b52c, 0xbd43b90d, 0x3e152308, 0xbd6df9a8, 0xbd830456, 
    0x3e552836, 0xbe1425f0, 0xbd1e5656, 0x3e21890d, 0x3d4c76b5, 0x3dea725a, 0xbe39966f, 0x3d75c6a1, 
    0x3d38de50, 0xbd976e64, 0xbdf448bf, 0xbe04e4a7, 0x3c96e6cc, 0xbdb55eea, 0xbe205253, 0x3e29345e, 
    0xbdb956ac, 0xbdbb1bc3, 0x3dfbf411, 0x3dfd9eee, 0x3d56486a, 0x3ce7c76d, 0xbdeec40c, 0xbd67de65, 
    0x3c87652d, 0x3d88c750, 0x3e1a8539, 0x3d48f6f3, 0xbe71f9da, 0x3d7fb8b4, 0x3d9acc64, 0xbe242fdb, 
    0x3dbaca3e, 0x3e73aa83, 0xbe2b473a, 0x3d2f73c9, 0xbdce87ad, 0x3e4249d1, 0xbd39632b, 0x3e45759f, 
    0xbe7d4b00, 0xbc8b9e1f, 0x3de44020, 0x3d86073e, 0xbd4fe3c2, 0xbe447022, 0x3e1b4f5f, 0x3df63c50, 
    0xbcf9baba, 0x3da16d89, 0x3d65507f, 0x3e013556, 0x3ce64921, 0x3d44bf09, 0xbe3c980b, 0xbe3af6a6, 
    0x3dd1ce4c, 0xbe0ff844, 0xbe02db39, 0x3dc870ee, 0xbde472e7, 0x3dcf5aca, 0x3d63102e, 0xbe02834d, 
    0xbe3ed71c, 0x3e18c9d4, 0xbe080929, 0x3dda5c26, 0x3d5fd82c, 0x3d8e3994, 0xbca0f4fc, 0x3cfe7d82, 
    0x3d4a9ce2, 0x3e380745, 0x3da3bcf2, 0x3e0b5990, 0xbe02d6cc, 0xbbb95599, 0x3e0f2b62, 0x3dc0d5e0, 
    0x3e40e83c, 0xbc785eff, 0x3e58a881, 0xbd8d9a4d, 0xbe247420, 0x3ce81a3a, 0x3e0560af, 0xbe09d509, 
    0x3df79ed2, 0x3da0c2d1, 0x3baa8cf8, 0x3d532f46, 0xbd8004fd, 0xbe35532f, 0xbe3954fe, 0x3dfbbe19, 
    0x3c7ea8de, 0x3c6a3dd4, 0x3e14a3b8, 0x3d7b4b58, 0xbd60a66c, 0xbdedbdb9, 0xbda86c61, 0xbd507c11, 
    0xbd3dbb5f, 0xbc2600d6, 0x3db9f487, 0x3d79b8e9, 0x3d422b77, 0x3e2cecd7, 0x3e20f2e6, 0xbe26dea4, 
    0xbe4a0843, 0xbe0f7ae8, 0x3d3a28e1, 0xbcafde72, 0xbe0c99cf, 0xbd4d46b4, 0x3ce2faa7, 0x3e47bcc3, 
    0xbdd9e228, 0x3cdccc74, 0xbe30bd8e, 0x3e0fdb6f, 0x3df83786, 0x3c84c1dd, 0xbd50e7cd, 0xbdb345d5, 
    0x3e572f85, 0x3dad71c1, 0x3d92f05b, 0xbace2fbf, 0x3e0d4abb, 0x3dea7b03, 0xbdbcec83, 0x3e01637f, 
    0xbdc802cf, 0xbe369246, 0xbbb49ca8, 0xbca01b95, 0x3b4d8820, 0xbdd1b555, 0xbc2b8db8, 0xbdbe443d, 
    0xbc763041, 0xbccddd24, 0xbe4b66b4, 0x3d9171d6, 0x3dcdc881, 0xbdce53b3, 0x3e220e82, 0x3daac68f, 
    0xbc9f5abf, 0xbd4c37a6, 0xbe36c2d5, 0xbe246b25, 0xbe098265, 0x3da1b1de, 0x3e2366e1, 0x3d07b82b, 
    0x3d9c91a8, 0xbe09d288, 0x3c2a2e2b, 0x3e09696f, 0xbdcbf526, 0xbd2d514e, 0xbe103813, 0x3ce21b68, 
    0xbe56c41b, 0x3bb6298a, 0xbdf2470d, 0x3db23f7d, 0x3e040f9a, 0xbe100cd2, 0xbd889b6e, 0x3dcbf686, 
    0x3e2e8487, 0xbe072cd7, 0xbd9d1bd8, 0xbe4b3eaa, 0xb98d9486, 0x3bdf56d3, 0xbe1f0f2f, 0xbdde1293, 
    0xbdbc9a0e, 0xbe04a02c, 0xbe03b255, 0x3df29d2a, 0x3cf3002b, 0xbd8235e5, 0xbd050cb2, 0x3de11b7d, 
    0xbd25db2a, 0xbe125cb4, 0xba659d31, 0xbdea9050, 0x3d3a4482, 0x3e361088, 0x3dad231e, 0xbd93f132, 
    0xbd416040, 0xbd29edb8, 0x3df2b5b9, 0xbd8427a4, 0xbe2b3736, 0xbdbd062a, 0x3d0c3428, 0xbe542825, 
    0xbe08cc59, 0xbe3c613d, 0x3e4378ee, 0x3d3b074c, 0x3dd8bbad, 0xbe059473, 0x3d9f65b8, 0x3d011d41, 
    0xbe058c27, 0xbd98b41b, 0xbd284171, 0x3df8b3c0, 0xbe059222, 0xbe1b4907, 0x3e1f588a, 0x3e3ffbc9, 
    0xbe1f5d84, 0xbc7397f0, 0xbe3693b5, 0xbe6122be, 0x3d6e515f, 0xbe311be2, 0xbd1dde99, 0x3dbc0004, 
    0xbdade4f4, 0xbc9964ba, 0xbc8c96aa, 0x3dffb363, 0x3d955938, 0xbd1fe315, 0xbd00edd3, 0x3d507f1b, 
    0xbd037bd3, 0x3d2be8e6, 0x3d13bdd6, 0x3dbeba97, 0xbd83e6d9, 0xbe0f8258, 0xbbbdda37, 0x3e285177, 
    0xbe011d0d, 0x3e49fcfa, 0xbd5891a4, 0xbd996dc6, 0x3dd1f4fb, 0x3e200933, 0xbdb1c322, 0x3db26a93, 
    0xbd5d62d9, 0xbe49617f, 0x3dd78da3, 0xbe109cda, 0xbe0f5c65, 0xbe61b94e, 0x3e0092e5, 0xbd62f422, 
    0x3e2fd042, 0x3ce71404, 0x3d98d831, 0x3d0f1a40, 0x3e2d8fbc, 0x3e373a49, 0xbe190ef5, 0x3e1bccdf, 
    0xbc901ec3, 0x3e0b9193, 0x3d985a6c, 0x3d85b7ce, 0x3de8777f, 0xbb7900a0, 0x3d220a91, 0x3dfb380f, 
    0x3d869570, 0xbc424263, 0x3df51f93, 0x3cbe3767, 0xbc0f2f7f, 0xbb043e06, 0x3dad0e86, 0x3d9aa79c, 
    0xbd56b049, 0x3defe1a7, 0xbc9aaa73, 0x3c9222b8, 0x3dbd8b3a, 0xbdfd2b9e, 0x3d7b410a, 0xbe23854b, 
    0x3da3cd17, 0x3d560e73, 0x3dca6230, 0x3c49e346, 0x3e217971, 0xbdbd1b3f, 0x3e29c409, 0xbcd39142, 
    0xbd80875f, 0x3db96057, 0xbe158c26, 0xbcf9953f, 0x3cc9bbd0, 0x3e3b9d1f, 0xbd2eb4f1, 0x3d9c01cd, 
    0x3c89e261, 0xbd8e504d, 0x3dd9b3b5, 0x3d45b18a, 0x3e17bbac, 0xbe4bf842, 0xbe4c6986, 0x3d65054e, 
    0x3d5ade21, 0xb9ce865c, 0x3d84950f, 0xbe00961f, 0xbe07a100, 0x3d802235, 0xbd143549, 0x3df908f7, 
    0x3c79915c, 0x3e476ad0, 0xbc1b98e6, 0x3e37e77f, 0xbdfef592, 0xbdad2256, 0x3e33d57f, 0x3e3b4919, 
    0xbd92ba65, 0xbe45c2b2, 0x3c046692, 0xbe24ca24, 0x3e037628, 0x3e1eda66, 0x3d372407, 0x3d21267e, 
    0xbe1d1ac6, 0xbe1d6423, 0xbdc5d189, 0x3ccc4232, 0x3d401174, 0x3c788d90, 0xbe22aef1, 0x3b29a44f, 
    0xbdf75373, 0x3d150007, 0xbde8aa6d, 0x3dc33d7a, 0x3d81620c, 0x3dc509bc, 0xbe2fcddc, 0x3ddc646a, 
    0xbe1ad09e, 0x3dfd0fd6, 0x3dbf0937, 0x3cedbb19, 0xbd5e37b0, 0x3e0bd61d, 0x3e6d0be5, 0x3e419728, 
    0x3e3b6477, 0x3e09a3bc, 0xbd86410f, 0xbe5f83e8, 0x3c73e69a, 0xbcf3d894, 0x3b6de647, 0x3d95b819, 
    0xbc67dee3, 0xbe61b4e4, 0xbd82c160, 0x3e32a97c, 0x3e2f8506, 0xbe0b209b, 0xbcbcfcd9, 0x3de8c07d, 
    0xbe26a66f, 0xbd786f76, 0x3cd82131, 0xbd2046fb, 0xbdf879d3, 0x3dd9d3e4, 0x3db00d03, 0x3e1738c4, 
    0x3e031536, 0xbdb089bf, 0xbdacef34, 0xbdb64eb8, 0xbe203f1a, 0xbd8d37a1, 0x3e0faec4, 0x3d95411d, 
    0x3dc99879, 0x3c25abbb, 0xbdc4bf4a, 0x3cdaed91, 0x3df96a19, 0x3b9a5b68, 0x3d767769, 0xbe369296, 
    0xbe20fc16, 0xbe2cdbae, 0xbda64833, 0x3de41f61, 0xbe30607d, 0xbe268644, 0xbcc6bb0b, 0xbdedcc1a, 
    0x3dcd1cd1, 0x3e484ad0, 0x3de1baaa, 0x3d21103b, 0xbd450fd1, 0x3deee27c, 0x3d126855, 0xbe16a8e4, 
    0xbde179bd, 0xbe13937f, 0x3c5c3443, 0x3e0f2e81, 0xbe1c2e33, 0xbe1ab4a1, 0x3dcca581, 0xbd69523c, 
    0x3dd2dfdd, 0xbe03722a, 0xbcc91385, 0x3e1d00ab, 0x3d579f2e, 0x3e221783, 0xbd3db15c, 0xbe19df68, 
    0x3da195e5, 0xbd80931c, 0xbcc7208b, 0x3e1fe9a3, 0x3e139405, 0x3cb66994, 0xbd9d564f, 0xbe45a2cd, 
    0x3e1e3c92, 0x3e352653, 0xbc9c0761, 0xbd8a34fd, 0xbdbed495, 0xbd79fc39, 0x3e3f26b1, 0x3e28bdae, 
    0x3c8bd5c7, 0x3db7d956, 0x3e693502, 0xbe1fe603, 0x3d9fba86, 0x3d7cad29, 0x3e178a4d, 0x3db2ab1a, 
    0x3e1a2cd2, 0x3dea25ac, 0x3d55ad9b, 0xbdee316f, 0x3c37fa74, 0xbd76fb88, 0xbe45a6af, 0xbe658c89, 
    0xbddd2b34, 0xbde3089e, 0x3de62c41, 0xbe3c74be, 0x3df1d51e, 0x3cc8763b, 0xbda9678f, 0xbc5cb627, 
    0xbc03f0c7, 0xbdac11e9, 0xbd9b9279, 0xbe06dc4d, 0xbdd05cd9, 0xbb00c927, 0xbe446e14, 0x3d9fc7e1, 
    0xbe0f869c, 0xbe23e714, 0xbdf56331, 0x3bb262ba, 0xbd3f742c, 0xbcf5f6cb, 0xbd866c87, 0x3e4b8187, 
    0x3cc9f446, 0xbe3e3675, 0xbdc8388f, 0x3db8a409, 0x3e53534f, 0x3d9eb43d, 0x3d9b9a2f, 0x3e4d3edc, 
    0x3d82405d, 0x3e9b6f8f, 0x3d948f9e, 0xbddc3d18, 0x3da3b53b, 0x3d93c51b, 0xbdae8f1a, 0x3daa5f34, 
    0xbdf699c4, 0xbdea600b, 0xbe0dad44, 0x3e27c2d9, 0xbd610853, 0x3cc42081, 0xbe308a9f, 0xbe194964, 
    0xbdc0391c, 0xbd428904, 0xbe452833, 0x3cbad4cf, 0x3d595034, 0xbc2d74c1, 0xbd2d683e, 0xbe2e4500, 
    0xbe348cad, 0xbdc17a0c, 0x3e1cdf2d, 0x3e539e49, 0x3e0c9f6e, 0xbe1d86f8, 0xbe05322d, 0xbe0b9f5d, 
    0x3e05818b, 0xbdb4e25e, 0xbe1e8e95, 0x3e165f14, 0x3e4f9740, 0x3cf96124, 0x3d9bfec2, 0x3caba712, 
    0x3dd01c56, 0x3d9b7dc5, 0xbe887cd3, 0x3dc1fd8a, 0xbcbec311, 0xbddc7558, 0xbe2359ce, 0xbe7c4458, 
    0xbe8b5072, 0x3db2070e, 0xbe8c2ce3, 0xbe17d98f, 0xbe2eda5b, 0xbe7c4372, 0x3e58cca1, 0x3d4e960a, 
    0xbcc4b85c, 0x3e231a44, 0x3d70fe0d, 0x3cdc8f42, 0x3e7cc533, 0x3e37696e, 0x3e2724f1, 0x3d4eff47, 
    0xbb599fd0, 0x3e0dffa5, 0x3ca20b77, 0x3d547ba8, 0xbdd409ca, 0x3e5eda8d, 0xbe35e930, 0xbddc931d, 
    0xbd2995c5, 0x3cfd32fa, 0xbd3ed5da, 0xbb916fab, 0xbdf6015b, 0xbd7f9f44, 0xbdeeca8a, 0x3bb5a5b0, 
    0xbdc4f52d, 0x3dc85d52, 0xbd9c102a, 0xbd8bf4e5, 0x3e25eb67, 0xbdaa9331, 0x3db68d7a, 0x3c8336de, 
    0x3d106957, 0xbdd5c269, 0xbd7d79f2, 0xbda8e970, 0xbe266b5d, 0xbddaa5d9, 0x3df27324, 0xbdc8aec3, 
    0xbdaa70ab, 0xbe4147a8, 0xbbb91183, 0xbdbba8af, 0x3cc15735, 0xbd837aac, 0x3e1cd4c9, 0xbe1a9b78, 
    0xbdca3296, 0x3e3f6cb9, 0x3bb060ba, 0xbe61abdb, 0x3e0e9639, 0xbe0927d8, 0xbe1f17e6, 0x3dba0ea7, 
    0x3e2d6b88, 0xbd4686ee, 0x3e4cba95, 0xbe2de23b, 0x3e1b8ba9, 0x3e8bde59, 0xbde263f9, 0x3cf46efb, 
    0x3d90f496, 0x3e0ab717, 0xbd06c9a0, 0xbe09064e, 0x3e14afac, 0x3da25ff8, 0xbcccf856, 0x3e55405e, 
    0xbe4f4ea0, 0xbda225dd, 0xbe1a7161, 0xbe312f9e, 0x3c677037, 0x3dcfeae2, 0xbc82bdb8, 0xbd9d394f, 
    0x3e0ea726, 0xbe32028c, 0x3d45c7fe, 0xbdd36d97, 0xbe10ebd0, 0x3deca7d4, 0x3dd41844, 0xbda7b066, 
    0xbd9e7a42, 0xbd0dad9d, 0x3e4e11e2, 0xbe520f48, 0x3d316ab9, 0xbb664ac8, 0xbd4a797a, 0x3db1daf2, 
    0xbd2ba45a, 0x3d00af27, 0x3c1ae8ee, 0xbe579e08, 0xbe24ab75, 0xbdabb44b, 0x3c304a86, 0xbcb1e923, 
    0xbddf2df0, 0xbdddffa5, 0xbe09ae48, 0xbcea2a02, 0x3dde39b1, 0x3df33670, 0xbe2ad83d, 0x3dae8686, 
    0xbd452124, 0xbcd5abf3, 0x3e3137f3, 0xbe58d57e, 0xbd715da0, 0xbd4839d6, 0xbe23bd92, 0x3de1048c, 
    0x3dce4d81, 0xbd6cb49a, 0xbe09fa30, 0xbdeb65d9, 0xbc5f56b9, 0x3dd1d30a, 0xbe122aba, 0xbc5a3cbc, 
    0x3e04507d, 0xbe1e8129, 0x3dd0b986, 0x3e108b88, 0xbd94918b, 0xbda4c73d, 0x3db95780, 0x3dc01442, 
    0x3da5c8b6, 0x3c2a6c25, 0xbd10fbd1, 0xbe45036b, 0x3e25cfd8, 0xbc8ffd6d, 0xbd9497bf, 0x3e23ba7c, 
    0x3e16da06, 0x3e05f994, 0xbdc839af, 0xbe3651bd, 0xbdd686e5, 0x3dae3abf, 0xbcbc86b2, 0xbc92c438, 
    0xbe12f5a4, 0xbe3f7bd6, 0x3d90bae4, 0x3df3b267, 0x3d920324, 0x3ba664c4, 0x3e01f63d, 0x3e194815, 
    0xbdc99bf8, 0x3d71dc4a, 0xbe41ad35, 0xbe08b173, 0x3dcdcc71, 0x3cde882f, 0xbdf7478b, 0x3cda8c86, 
    0x3d0c7516, 0xbdaf6296, 0x3e090792, 0x3d611cd5, 0x3de96406, 0xbdd6fa54, 0xbcddff4f, 0x3df198f5, 
    0x3d81cc45, 0xbde96baa, 0xbbfe176c, 0x3e5bf33b, 0x3e11a797, 0xbd945d3f, 0x3c9ed23a, 0x3e655bc8, 
    0x3e569129, 0x3e0f4e9f, 0xbcb1135e, 0x3e4eabb0, 0xbd38e206, 0x3e4305b1, 0x392cf4f8, 0x3dda0bb6, 
    0xbb092972, 0x3d7ca6e8, 0x3e4f4b21, 0x3de68f0e, 0x3e2bf06a, 0x3c6c8a6b, 0x3e6c02d8, 0xbdda8148, 
    0xbe1ab122, 0xbe2de355, 0xbdc4a2cf, 0x3e772d2b, 0x3c88910c, 0xbe0bf438, 0x3d92e1ce, 0xbcf4b443, 
    0x3da83298, 0xbdaec7c6, 0x3e146c27, 0x3d47f89d, 0x3cce0d81, 0xbe33361c, 0xbd9d6832, 0x3dff9e45, 
    0x3d89dda8, 0x3e37e1d8, 0x3cc32f38, 0xbe4d3921, 0x3e41f259, 0x3d5e52a1, 0x3d958575, 0x3d1700fe, 
    0xbe1718ac, 0x3d8daf73, 0x3d9d2a37, 0x3df66705, 0xbda34caa, 0x3ca56dac, 0xbe17c690, 0x3cdac0c7, 
    0x3e255558, 0xbd8a496c, 0x3e4e5d0a, 0xbab8be91, 0xbe086b75, 0x3e1f12f5, 0x3e50c62e, 0xbd75b65b, 
    0xbd5971d9, 0x3e2617a8, 0xbdb3afe2, 0xbd7be7b6, 0x3c70e671, 0xbd4bc90e, 0x3da18d44, 0x3b8fe3b8, 
    0xbbcde19c, 0xbdba8b8c, 0x3e3b484a, 0x3de7ed8b, 0xbdab9d2d, 0x3dbb5f8f, 0xbd034af9, 0x3c20aaa0, 
    0xbdd8b527, 0xbdcd4a6a, 0xbe61b329, 0x3d8e61e5, 0x3e137ef6, 0x3dba89e6, 0x3d3b143e, 0xbdabb823, 
    0x3da9ccac, 0x3de909f9, 0x3de7a1cd, 0x3e082851, 0x3cc0504d, 0xbd757e5b, 0xbdd1686a, 0x3ce7062f, 
    0xbd8f1b92, 0x3e5917ed, 0x3e3c9f80, 0x3e26bd81, 0xbe494740, 0x3d39e2a9, 0xbd245dd9, 0xbded3433, 
    0x3e4662ca, 0x3d7dd735, 0x3e938778, 0xbd5e6a12, 0xbd4eb81b, 0x3a8076fc, 0xbdb0d27e, 0xbbe2d6b2, 
    0xbdc28ed0, 0x3ddce190, 0x3e33b302, 0x3e719861, 0xbd896761, 0x3df7fcfb, 0xbdb2f346, 0x3e13ac02, 
    0x3dd5c0cf, 0x3e3a5f7d, 0x3c6a6262, 0xbdc5c0d6, 0xbda2ec52, 0xbd9f7d1b, 0xbd748d59, 0xbdcac66c, 
    0xbe1336ab, 0xbcca4dd7, 0x3d1a1334, 0xbe2f97c3, 0x3daa87a2, 0x3db16f03, 0x3e1bff2c, 0xbc5a6ffb, 
    0x3dca4aaa, 0x3e2a0791, 0x3dcb6aae, 0x3e434bc6, 0xbdb2cff9, 0xbe013261, 0x3e04ab8a, 0xbd8bb735, 
    0x3d8bb2fe, 0xbdea6349, 0xbcf3fe0e, 0x3e0199ec, 0xbdf9d27a, 0x3ca05f7e, 0xbd8bd4bd, 0xbbe3b25b, 
    0xbd5fc1c0, 0x3e23e18e, 0x3df3fe19, 0x3e19650b, 0xbdbb69c5, 0xbe31ce87, 0x3dc85fb6, 0x3dade59b, 
    0x3cac3a6f, 0xbdcb35b5, 0x3cbc7a13, 0x3de8def1, 0x3da9744b, 0x3d623ca6, 0x3e132364, 0x3d33a343, 
    0xbd1207f0, 0x3deb4903, 0x3cf6295f, 0xbe32a84d, 0xbcbac58f, 0x3e16b0b2, 0x3e570755, 0x3ce7d48a, 
    0xbd6b19ce, 0x3d9f3d2d, 0xbd08f397, 0xbe25cba9, 0x3dbb7600, 0xbe2c9db0, 0x3d05fd3a, 0xbe09c7b0, 
    0x3c80a67d, 0xbe1029af, 0x3e1665fb, 0xbde50719, 0x3d6573c5, 0x3d9d897e, 0x3cda4699, 0xbd259d24, 
    0x3e0f536a, 0xbdcffda2, 0xbe103134, 0x3da78884, 0x3e13807f, 0xbe73dde9, 0x3dde11b8, 0x3e438cd4, 
    0x3d897cee, 0xbd92930f, 0xbc5fdedf, 0x3e0d1f71, 0xba239766, 0x3e103171, 0xbd035f69, 0x3daf646d, 
    0xbdc2c78a, 0x3e4ee7e9, 0xbdea94e6, 0xbe0702de, 0x3d78a38d, 0x3e004793, 0x3dd66330, 0xbe2e96e4, 
    0xbd623c71, 0xbe1bd94a, 0x3d9c59b8, 0x3e071ec1, 0x3e514e90, 0xbdd5888d, 0xbe0acc20, 0xbd7dfe80, 
    0x3d85e515, 0xbd34fa2e, 0xbe275e01, 0xbd976038, 0xbdcd8988, 0x3e4a5ca4, 0xbdff5ca7, 0xbb5556ba, 
    0x3d52fb41, 0xbdc35086, 0xbe428d04, 0xbc908e0f, 0x3d03bb6d, 0xbcf98dba, 0x3db300ea, 0xbe5e5175, 
    0xbe0c4a3c, 0xbdac4439, 0xbdaae98f, 0x3c445e47, 0xbd02749c, 0xbe4d8320, 0xbdef02f0, 0xbe26f60e, 
    0xbe25080a, 0xbe90eb1c, 0xbce30192, 0x3dce3c4b, 0xbb2aac23, 0x3dc3b388, 0xbe24983f, 0xbdfe5b6f, 
    0xbd300e25, 0xbe1ddde4, 0x3e393c96, 0x3ca865ab, 0x3ddd383d, 0x3df031ad, 0x3e2dc3f3, 0xbd788260, 
    0x3d966f1b, 0xbd9c900e, 0xbdd93855, 0x3c661cc3, 0x3e0d615f, 0x3e000ac4, 0xbe31ff67, 0x3e1ded87, 
    0xbe45ddfe, 0x3d5dcce1, 0xbdc70c6c, 0x3e48e1d3, 0x3db9ef45, 0xbcb1a727, 0xbc8976bb, 0xbe210684, 
    0x3ce4ed34, 0x3c785a91, 0x3cee6438, 0xbd8f0425, 0xbe2dc7e4, 0xbdd80c14, 0xbdb76e2c, 0xbe5a37ae, 
    0xbd8b81c6, 0xbe187713, 0x3db4232e, 0x3c107fc8, 0xbb398714, 0x3d14f560, 0xbe125f89, 0x3e050295, 
    0xbe65fba5, 0x3e65a76c, 0x3cf90923, 0x3e0a1612, 0x3b89c82e, 0xbe25fe2c, 0xbd8e7df1, 0xbde9120f, 
    0x3dcc6528, 0xbe30c6ef, 0xbd98372b, 0x3e3f9504, 0x3e118c1c, 0xbc23a2c6, 0xbd9b7359, 0xbe57646a, 
    0xbe131db4, 0x3d0acd3a, 0x3e03e5bd, 0x3d8ae52c, 0x3d6a5059, 0x3d25c713, 0x3df8fc32, 0x3e1a91fa, 
    0xbd24466c, 0x3d9fc290, 0x3e035123, 0xbdbe50ed, 0x3d3ca018, 0x3e16a9d2, 0xbde6cf1f, 0x3e4ab483, 
    0x3bbb92d8, 0x3cad1ca2, 0xbcdff942, 0xbd6b39e3, 0x3e29627c, 0x3e0e851d, 0xbd86f18a, 0xbe342334, 
    0xbd511072, 0xbe00515c, 0xbe3dca6b, 0xbe1fe93c, 0xbe1d2e85, 0xbe35ddef, 0xbd556a58, 0xbddd58e7, 
    0xbd73b546, 0xbc386358, 0x3de0b434, 0x3d3d63e1, 0xbc2c20f9, 0xbcbaee08, 0xbdc7ace8, 0xbe3f19b1, 
    0xbe369c75, 0xbe1350df, 0xbe56a60b, 0x3cfeed6c, 0xbdaccbc7, 0x3d040460, 0xbde0cde4, 0x3d1a4eb2, 
    0x3cc6e286, 0xbd56b4c9, 0x3d807586, 0xbd928ae1, 0x3ceb1b1a, 0xbe06b7fa, 0xbdf5b24e, 0xbe07f72c, 
    0xbe64d346, 0xbe355e02, 0xbc27df7b, 0xbdaa7865, 0xbdd4c6e6, 0xbe545050, 0x3db54370, 0x3c0142d2, 
    0x3ce0962e, 0xbc90f176, 0xbe015d48, 0x3d7e2751, 0xbc817750, 0x3e28023c, 0xbcd9e480, 0x3e3916a8, 
    0xbd24fa82, 0x3ddbdf12, 0x3e15a9a2, 0x3d053794, 0xbe1c6648, 0xbdf7c3b9, 0x3e2a6b3b, 0xbdbe1dbd, 
    0xbde1034b, 0xbce899c4, 0xbd8c7de1, 0xbd56a993, 0x3e4b9043, 0x3d0ffea4, 0xbb85f630, 0x3e2db65d, 
    0x3e4537c9, 0xbe4ae5e8, 0xbe0aa617, 0x3d321c35, 0xbe298735, 0xbe461eaf, 0xbda60234, 0xbd0e7bf0, 
    0xbd40e1d1, 0xbc8b4724, 0x3d0b1862, 0x3d2eb8b1, 0x3e3d6aec, 0xbdd97f83, 0x3b9917c0, 0x3e1a3b4f, 
    0xbe4002b2, 0x3e3122b5, 0xbd9e368f, 0xbe1368a5, 0xbd87a5c4, 0xbd976b21, 0xbe18e6a7, 0xbd26e608, 
    0x3e30cccd, 0xbdbcdc3b, 0x3d8e6042, 0x3e17276e, 0x3d81236a, 0xbe2d46f5, 0x3d83714c, 0xbe479b64, 
    0xbd8760f8, 0x3dc0b1eb, 0xbe1a6596, 0x3c88bfb3, 0x3c9dcdea, 0xbcb7c3cd, 0xbe810566, 0x3e1e9d79, 
    0xbda6fb63, 0x3e1741bf, 0x3b06153e, 0x3bb4770e, 0xbd8f4d80, 0x3c8dd0cc, 0xbce89c95, 0xbe080585, 
    0x3db53199, 0xbc99aadb, 0x3c60afe6, 0xbdbd0f8d, 0x3db871cb, 0xbdd2d3fe, 0xbc905408, 0xbe180574, 
    0x3ddac7e9, 0xbe7cbf79, 0xbe30914b, 0x3c71af7f, 0x3e304712, 0xbde51081, 0xbbdc6fe3, 0x3e13f9b5, 
    0xbd0c48ce, 0x3e2a0e9c, 0xbe0726f1, 0xbe2d2a21, 0x3d6b0513, 0xbdf8cd73, 0x3dff7fcd, 0xbde2c119, 
    0x3cfe38a0, 0x3de9621f, 0xbe6b1181, 0x3d679261, 0x3dc4550f, 0xbd3aa698, 0xbe6f9e91, 0xbe603cef, 
    0x3d13086c, 0x3cdc3f51, 0xbb19b59c, 0xbe03bf3b, 0xbd9fad36, 0xbe2908bc, 0x3ca8179e, 0xbe4053c1, 
    0x3d722fea, 0xbe094119, 0xbd2d49f0, 0xbbb41c45, 0xbda8d3a5, 0x3d9a39e2, 0x3def3216, 0x3d0489c7, 
    0x3dc5b933, 0xbdc9e303, 0xbe0bf4bf, 0xbb24a69f, 0x3d94679c, 0xbd9d8992, 0x3dfb4564, 0x3e134fd1, 
    0x3db16d3b, 0xbe3f8c31, 0xbdbbc557, 0x3da7f923, 0xbe1cfcb0, 0x3bd52e4c, 0xbc6c28b4, 0xbdf9457f, 
    0xbe33c822, 0x3e2319de, 0xbd333471, 0xbce7bd63, 0x3db5724b, 0x3d9d973f, 0x3e215e8f, 0x3e429665, 
    0xbe034a10, 0xbe024b81, 0xbcca020a, 0xbe4a58c1, 0xbe7f31f0, 0xbdf46d65, 0x3d304118, 0x3dc07cd9, 
    0xbd8fcf34, 0x3e1734a6, 0x3e827ba4, 0x3cd1104e, 0xbe2a480d, 0xbe26c3a1, 0x3dc39a55, 0xbe0befad, 
    0x3e2c9c0e, 0x3c1c7266, 0xbdd0ddda, 0xbdc31f2d, 0x3d79db5a, 0x3dd8ed54, 0x3dc341c1, 0xbe019bbf, 
    0xbd3def52, 0x3d78fece, 0x3d5b4d26, 0x3d1f8bbd, 0xbdb6cee5, 0x3e075a99, 0xbcfb3667, 0xbd83d0d8, 
    0xbe16fb60, 0xbd12b278, 0xbe1503d3, 0xbdd8cb20, 0xbd8207a4, 0x3c41e27b, 0xbc91f6b0, 0xbddf628e, 
    0x3d19817f, 0x3d133493, 0x3e3d1840, 0x3cddfc8a, 0x3e07ba48, 0x3e2c8983, 0xbdbf2c15, 0x3dfe7ac4, 
    0x3d0e5c2a, 0xbdf28f30, 0x3e08ed07, 0xbd248532, 0x3e20c431, 0x3e334800, 0x3de73287, 0x3de6ff38, 
    0xbd5df186, 0x3e1610a2, 0xbdc6d8d6, 0xbd91c41a, 0x3d9f79c3, 0xbdc25c15, 0x3d752589, 0xbe2cd825, 
    0xbd356cff, 0xbd219655, 0xbe01f111, 0xbdaf0d06, 0x3d7169d9, 0xbd8c2e56, 0xbe41a9d8, 0xbd5e3190, 
    0xbdbf5187, 0x3dfc6cfb, 0x3d75e445, 0x3e121f89, 0x3e3cc6f3, 0xbd96ce90, 0xbe13bcfa, 0x3d86ea8a, 
    0xbd1b74ca, 0x3e209dbc, 0xbdb9cd68, 0x3c9983eb, 0xbdd20f13, 0x3e582093, 0xbd81f115, 0x3db73edb, 
    0x3e20db86, 0xbe5bba38, 0x3dea2dac, 0xbcb06911, 0x3d0263b5, 0x3d7f786f, 0xbe48a535, 0x3dff7d11, 
    0xbddf2485, 0xbc140e70, 0x3deba07a, 0x3e108f2e, 0x3ddc8af2, 0x3ced57d3, 0x3cfe21a4, 0x3de515be, 
    0xbce4233a, 0x3e038b26, 0xbcd27b2f, 0x3df9d4fe, 0xbd94e48a, 0xbdc4a700, 0x3df4d800, 0xbc4f5945, 
    0x3e64a058, 0x3be02771, 0x3dd2f585, 0xbdfbf23e, 0xbde5b663, 0x3d6b7a1c, 0xbc451993, 0xbe21f4cf, 
    0xbcf11591, 0x3cea654d, 0x3e54f9f3, 0x3dabcc83, 0xbdcde338, 0x3e4c4c22, 0x3ce59c42, 0x3ded77bd, 
    0x3dd39e5c, 0x3e1c46a0, 0xbdf8ee9c, 0x3dc2ca5a, 0x3d4dc092, 0x3e51a02d, 0x3e01a6b1, 0x3d899f58, 
    0xbd1e97d6, 0x3dc77393, 0xbe0f1baf, 0x3d75a76d, 0x3e31a68b, 0x3e22ced1, 0xbd74ca3e, 0xbbb1e1db, 
    0x3df9afea, 0xbcc70b42, 0x3e861e1b, 0xbd80d611, 0x3e2c65c0, 0x3e45f18c, 0x3d8a87b5, 0x3e0aa9b3, 
    0x3d8b76b7, 0x3b12c366, 0xbe165c51, 0xbd9717fb, 0xbddeb514, 0x3e61f1f8, 0x3da6be4c, 0x3c647904, 
    0x3e4edf2b, 0xbe2e9dfb, 0x3dc9ca04, 0x3d62fe45, 0x3e09ff73, 0x3de945f2, 0xbdb24486, 0xbe127921, 
    0x3d7c88a9, 0x3d84e473, 0xbe526ee2, 0x3dc9abde, 0xbd7ba0c1, 0x3d483e4b, 0xbca2ce42, 0xbe0f29ab, 
    0xbe27d4e9, 0x3e14e0c3, 0x3da72b9e, 0xbc58683c, 0x3dba7589, 0x3c99f02e, 0xbdb7d367, 0xbe46ac9c, 
    0xbd1247b1, 0xbc1bac7a, 0x3db20b52, 0xbe0508f7, 0xbcf2173a, 0x3c1d134c, 0x3e828819, 0xbdc26772, 
    0x3a63e007, 0x3cfc631c, 0x3c0eafa4, 0x3d78a9b1, 0x3c6ffad8, 0x3d0a81cd, 0x3d5f236e, 0xbdf2d7da, 
    0xbd3730d2, 0xbe0b6ef1, 0x3dd66c19, 0x3dc7bec3, 0x3bf809e4, 0x3d7bbccf, 0x3e13db9b, 0x3e39bf78, 
    0xbd82521a, 0xbe13b374, 0xbd6ff9aa, 0x3e0a266a, 0x3e0bcea5, 0x3bf17ec4, 0xbc2f4f80, 0xbe182b50, 
    0xbc7a3e35, 0xbe637ff7, 0xbd9ae61a, 0x3db101c1, 0xbe2a65f0, 0xbdf88cca, 0xbe03ce90, 0xbd8803b3, 
    0x3da35ec8, 0x3e3dafe6, 0x3e3aabd8, 0x3e1537c9, 0x3dca8228, 0xbc7c385e, 0x3d16bbf7, 0xbd89b23d, 
    0x3e29a5d3, 0xbca45a7a, 0xbcda9d2d, 0x3e1bdc05, 0xbdd8336d, 0xbbd0efa0, 0x3e277218, 0xbe352b46, 
    0xbdfd19e2, 0xbb4e712c, 0xbe204a40, 0xbe2c04fa, 0xbd597b3a, 0x3cfb1187, 0xbe1bbc6b, 0xbd59d544, 
    0xbc339091, 0xbe2ee3ef, 0xbbc4c1f1, 0xbd3641f0, 0x3d8f3f1a, 0xbd943125, 0x3c98d404, 0xbe1f185b, 
    0x3db321d5, 0x3e44d1d2, 0xbe28e106, 0x3c8ecb8e, 0x3dd7bb00, 0xbd2ae5d2, 0x3dc5f748, 0xbe200cd1, 
    0x3e128602, 0xbe6766f3, 0xbe261647, 0xbcbd178f, 0x3d804fbb, 0xbcbd2394, 0x3deb8aeb, 0x3daf8242, 
    0xbe412fc3, 0xbda8cc2b, 0xbd673966, 0xbe2daa98, 0x3ddcb2a7, 0x3dc650bd, 0xbc944a1f, 0xbd5c4947, 
    0xbd6e04a8, 0xbd5160c7, 0xbe319655, 0x3d98651f, 0x3d9b7f73, 0x3e5b8a66, 0x3dcceb60, 0x3c22e865, 
    0x3d701746, 0xbc106b5e, 0x3ddc3b80, 0x3dee7606, 0xbe084ee7, 0xbdbdbaab, 0x3cd1e457, 0x3bdb8f4c, 
    0x3dcfebc1, 0x3cb2c2a7, 0x3c726e3c, 0xbd5388fe, 0x3c79f74c, 0x3d934ec3, 0xbda64542, 0x3e1d8b47, 
    0x3c52d5b6, 0xbdb53637, 0x3dfe5cbc, 0x3d623a30, 0x3da38070, 0x3c3c9075, 0xbdc2a92a, 0xbda869fe, 
    0x3e03f83d, 0x3cf80629, 0xbd69c33d, 0xbc5993b6, 0x3e14f3b6, 0xbd9a1da0, 0x3e4297d5, 0x3d988de4, 
    0x3c2defb6, 0xbdd2c866, 0x3dd472bf, 0xbe193658, 0xbd809fd2, 0x3c748426, 0xbe28e312, 0x3a91cf86, 
    0x3df0e41a, 0xbdf6846a, 0xbac4cb1e, 0xbdf8c324, 0x3d8e006d, 0xbd9cca08, 0x3df34961, 0xbe1cac87, 
    0x3d823429, 0xbe40b6f1, 0xbb8d32c6, 0xbd7bca5f, 0xbddacf30, 0x3dbdd061, 0xbc80405e, 0x3c140fc0, 
    0x3d1925ec, 0x3e2e2bb5, 0xbe49c2d1, 0xbe26fd7a, 0xbe28ff52, 0x3d501e6f, 0x3de2eff7, 0x3d78679d, 
    0x3db21431, 0xbdb00f86, 0x3a429c89, 0x3e371268, 0x3d30c9c7, 0x3e0fb459, 0xbe26c192, 0xbd1863cc, 
    0xbd84b2e9, 0x3db1b1c1, 0x3d5cd578, 0x3caf19f1, 0xbc5f9c27, 0x3e3fbbbe, 0x3de49899, 0xbe095247, 
    0xbd6797fc, 0xbdf8aee1, 0x3c3ec363, 0x3de91d2d, 0xbe05baae, 0x3e26738d, 0xbdd5e40e, 0xbe0951fe, 
    0xbccc8d84, 0x3c1eedd5, 0x3da7fa2d, 0x3d8c27de, 0x3dd0d4c2, 0x3e07c022, 0xbd995b9d, 0xbd2e3bc9, 
    0x3d9a18b1, 0x3e5b4f6d, 0x3d94e161, 0xbcbc2c3e, 0xbe0c98d1, 0x3d71828e, 0x3d8b65f2, 0x3d79d264, 
    0x3d2e50c1, 0x3da2116b, 0x3e1161c8, 0xbd4835fc, 0x3e3eb65f, 0x3cd712f1, 0xbdc19992, 0x3e2c1d45, 
    0x3ca9bcaf, 0x3d18b222, 0x3da2a532, 0x3dbed666, 0xbc9f6e2e, 0x3ac8f083, 0xbcc50b97, 0x3e2d71fd, 
    0xbdff02d3, 0x3da4cb58, 0xbe0ad5f2, 0xbc3bfbc3, 0x3d7c1606, 0xbd2b7b56, 0xbca9db11, 0xbd3be396, 
    0xba5f62ce, 0xbe2b7e15, 0x3dd86952, 0x3e670b68, 0x3dd62409, 0x3d809144, 0x3db1b234, 0x3e8294f1, 
    0x3e458421, 0xbd855ad0, 0x3d4f4ecd, 0xbc3c0b77, 0xbd26b50b, 0xbd87fe35, 0x3e32fff0, 0xbd967f1b, 
    0x3e516721, 0x3e14a0e4, 0x3ce0f866, 0xbd855274, 0xbe7727d3, 0x3e66e5e8, 0x3e0d9f8b, 0x3e2e6491, 
    0x3e168fa9, 0xbd5b859e, 0x3e07fa68, 0x3e0042df, 0x3d214f0c, 0x3d9516f4, 0x3c738cf8, 0x3e5f0b22, 
    0xbe2791a7, 0x3e076661, 0xbe7d03bc, 0x3dad7d94, 0x3e07b591, 0x3dcf8ef5, 0x3e074a34, 0x3de5da8c, 
    0x3d492b3e, 0x3c170cb3, 0xbe16f572, 0xbdb0c73a, 0xbcf8d9a7, 0xbe2c02f4, 0x3c042b98, 0x3d9cc478, 
    0xbd3b0dea, 0xbe196abc, 0xbdad637e, 0x3e2404bf, 0xbe04c0ea, 0xbdf63e66, 0xbd40f75c, 0xbd0e6bee, 
    0x3db3eb72, 0x3e76d0af, 0xbe1310ef, 0xbcb3c10a, 0xbde4edf7, 0xbbda528b, 0x3e0f1089, 0xbdfa3d47, 
    0xbd1fb727, 0x3da43f65, 0x3dd09da1, 0x3dcd94a6, 0xbdf7fba2, 0x3c827b10, 0x3d925320, 0xbe4a94d7, 
    0x3e025be1, 0x3c7a4d60, 0x3d426acc, 0x3e222e87, 0x3e22faf6, 0x3e088115, 0x3e03c604, 0xbd17fecc, 
    0x3c02433a, 0xbe1f693f, 0x3cc48ead, 0xbd41f855, 0xbddf1a8c, 0xbda7a136, 0xbdbee9ee, 0x3d94afb7, 
    0xbd59f1a3, 0xbcf558e0, 0x3e15f1a9, 0x3e68cb80, 0xbe109e04, 0xbe79ea4d, 0x3dc1b864, 0xbe6ddff0, 
    0xbd799b2b, 0x3c403215, 0xbc38ab4b, 0x3e19a59b, 0x3d07b856, 0xbdf841a1, 0x3c9deea4, 0xbe1892c7, 
    0x3d9997bd, 0x3d5ac64a, 0xbd9e31c3, 0x3d8d202c, 0xbd0206d0, 0xbe2f994e, 0xbdadc5cc, 0xbda8315d, 
    0x3d855eef, 0xbe5abeb3, 0x3dacd5b5, 0xbcc31abe, 0xbe1edb43, 0x3e264fbd, 0x3c91ce02, 0xbe15da09, 
    0x3e170d14, 0x3e17e6a3, 0x3db66a9f, 0xbe1229cf, 0xbddb206b, 0xbe1bfc33, 0xbd11f6ed, 0xbd0c3906, 
    0x3d4e849d, 0xbddedd00, 0xbca77535, 0xbd9b13e3, 0x3d4592d5, 0x3daf8c51, 0x3e62e3dd, 0xbb6d88e1, 
    0x3d2766b3, 0xbe32c31b, 0x3d712da8, 0x3de70a7e, 0x3e222bf9, 0x3e16dd01, 0x3e04f87a, 0xbe018ec2, 
    0xbdb9a79f, 0x3d8ba1bd, 0x3dcfad33, 0xbda46311, 0x3e07f3f0, 0xbd489a17, 0xbe343512, 0x3cb8e598, 
    0xbb556ab2, 0xbdd1b070, 0x3dae6bbb, 0xbe0fff78, 0xbd8f0b37, 0xbd6f4a1e, 0x3c1f684a, 0x3e2a1096, 
    0x3d40f8fc, 0x3d828c20, 0xbc045025, 0x3e230f2d, 0x3de1bd7d, 0xbd0ce6ea, 0xbd0044f4, 0x3cef77c3, 
    0xbbbeb8c4, 0xbe421cc3, 0x3e143cb0, 0x3c0e3b46, 0xbe0662f0, 0xbddad5c5, 0xbd7b8a7d, 0xbe26086c, 
    0x3d4e0b73, 0x3dccba56, 0x3dcc621e, 0xbd1ca153, 0x3c7db1a7, 0x3e16efec, 0x3e1adae7, 0xbe02b384
};

static const uint32_t _K38[] = {
    0xbdb45e76, 0x3db0250d, 0xbe35bfec, 0x3df5ec1f, 0x3c87ea31, 0x3d359161, 0xbdb1c61c, 0xbc338c9d, 
    0x3bd93cf9, 0xbd718729, 0xbe1585d6, 0xbddc9ee8, 0xbd9757e1, 0x3c7a4b62, 0x3cac27e5, 0x3d0a06a4, 
    0xbc398de7, 0x3e15a71a, 0x3da507ea, 0x3c851b32, 0xbd157c80, 0xbd2e0802, 0xbd2ed7d9, 0x3daefbc7, 
    0xbce9d08a, 0xbd8f3cba, 0xbdcf4961, 0xbdd9d3b8, 0x3d220afb, 0x3d9a5852, 0xbdf85b54, 0xbd796481, 
    0x3dcc3c9c, 0xbe03cda6, 0xbdaf9b51, 0xbd3259c1, 0x3dab6147, 0x3e025ab8, 0x3d8411c3, 0x3d5672c5, 
    0x3d99b822, 0xbd5fb4d3, 0x3e05b287, 0xbd1e0695, 0xbdec6e65, 0x3dabc0de, 0x3d78679f, 0x3da0a01c, 
    0xbe15c6d5, 0xbddc909c, 0x3dc239a3, 0xbc871a74, 0xbca2fb6a, 0x3d922222, 0xbd8054ef, 0x3d8780a8, 
    0xbd558789, 0xbce985f1, 0x3ce6b133, 0xbbc64d5c, 0x3e1e554f, 0x3d300288, 0x3d99124c, 0x3e1394e2, 
    0x3ce0f77d, 0xbdaefd36, 0xbd300102, 0xbe16e678, 0x3dfb03dc, 0xbb50c434, 0x3e6c2628, 0x3dc57477, 
    0xbd95d0e5, 0x3cbebbb0, 0x3de15157, 0x3dc0ff91, 0xbe1d258c, 0xbe1edfc7, 0x3e1d8da3, 0x3ce804f3, 
    0xbd2829ef, 0x3ddc08e0, 0xbd67d945, 0xbd233927, 0xbdc60dc4, 0x3de7e64b, 0x3d444a4f, 0xbd239c76, 
    0x3d8d4712, 0x3db23601, 0xbe1092bd, 0x3d8b1047, 0x3d8c67a8, 0x3d07b9fb, 0xbe53bf97, 0xbbf111f3, 
    0x3d968f07, 0x3dafcb3a, 0x3d062c11, 0x3d8d4c25, 0xbda8a1ba, 0xbcbcf08b, 0xbc335441, 0xbd2e39c0, 
    0x3ce63b89, 0x3d50c591, 0x3d621f4a, 0x3d83ce08, 0x3d2c3a55, 0xbd1e1370, 0xb9c2fb47, 0xbd694fe0, 
    0xbcc4f472, 0x3da8d07a, 0xbba49410, 0xbc2bcb86, 0xbc9a436b, 0xbd4cc1ac, 0xbc998b34, 0x3caac3d1, 
    0x3cb048a8, 0x3da07830, 0xbd069e33, 0xbb361fa4, 0xbcf0f794, 0x3db55873, 0xbd267fd9, 0xbcf4cd73, 
    0x3cd60d60, 0x3d0aa63a, 0xbd8619db, 0xbd512868, 0x3c0e6868, 0xbd60bd86, 0x3d963333, 0x3d574580, 
    0xbd815d44, 0xbc9f3a6f, 0x3ceea4ee, 0x3c06a8dd, 0x3d5de7dc, 0x3cce1bbe, 0xbd2103e3, 0xbd38db97, 
    0x3caa2aa4, 0xbaa5a8fb, 0x3d03937b, 0x3d1564bf, 0xbbc98c84, 0xbd087cbb, 0xbd37d636, 0xbd8412f7, 
    0xbc47a5b6, 0x3d392685, 0xbd87502b, 0xbd8e7960, 0xbc3dfa88, 0xbcd968c3, 0xbd5f1cfc, 0x3ce2870d, 
    0x3d475847, 0x3d6818e4, 0x3d613ad3, 0x3d8b09c3, 0x3c1a68d6, 0xbd3ea7e1, 0xbd03bceb, 0x3c2538dd, 
    0xbd1113dd, 0xbb78da2f, 0x3c059afe, 0xbd435400, 0x3d6367f3, 0xbd9cc1f6, 0x3c72ba90, 0x3d7fd982, 
    0x3db4dafd, 0xbd2d6ca1, 0xbb22311d, 0x3d803e81, 0xbd6cb201, 0xbd2a5bd8, 0xbd4cac36, 0xbd8a762c, 
    0x3d73660a, 0x3d311045, 0xbc8481d8, 0xbb79ef1c, 0xbbd6be25, 0x3d697684, 0x3d02549a, 0xbd4f025a, 
    0xbddf1679, 0x3d458c39, 0xbd01a933, 0x3cc5e723, 0x3da6d491, 0x3daebea1, 0x3c61b33c, 0xbc0c7e9c, 
    0xbdd1c884, 0x3bd1e4a3, 0x3dbb1bb6, 0x3d24c053, 0x3dad128c, 0xbdad764d, 0x3c24eca8, 0xbd66d437, 
    0x3d8bd8ea, 0x3d8b41e4, 0x3d9f0623, 0x3d1bafe2, 0xbcde8177, 0x3d353125, 0x3dd259fe, 0xbd29e53f, 
    0x3ce0f072, 0x3d704264, 0x3d667c37, 0x3ceed3c9, 0x3d32db8d, 0xbd4441fb, 0xbd06d3c3, 0xbbf3a39a, 
    0xbde3e56c, 0xbbc6275e, 0x3ddb88fd, 0xbcca7331, 0xbd5707dc, 0xbd683803, 0x3d231caa, 0x3d35362e, 
    0x3c39e986, 0xbd22de79, 0xbd69465a, 0x3c7bfb74, 0x3d97719e, 0x3dacac41, 0xbd8c3624, 0xbda3fcc9, 
    0x3dba47fe, 0xbbe08c1e, 0x3dc17ccd, 0xbd4b2e0b, 0xbae7b290, 0xbe116be7, 0x3d184d54, 0x3c4cbb5a, 
    0x3c660c1d, 0x3d1a5755, 0xbde3195f, 0xbdd5d488, 0x3da1d5ec, 0xbce30d2f, 0x3d51342b, 0xbc9c8902, 
    0xbd855c88, 0x3b531f60, 0x3dea077d, 0xbbb24b30, 0x3dae6f4c, 0xbdd5cb78, 0xbda06e43, 0xbc497af6, 
    0xbd0e0ac3, 0xbc4494c2, 0xbd0363fc, 0xbdacf8e2, 0xbb9d1c75, 0xbda205e7, 0xbe02904d, 0xbd8afe37, 
    0x3cc1c718, 0x3c6e4bd0, 0x3d60b583, 0x3d7acc93, 0xbd0b9602, 0xbdbcf21a, 0xbd640983, 0xbdd01782, 
    0xbda75fab, 0x3d6349a8, 0x3d81dd3a, 0x3d024699, 0x3b11dd5a, 0x3d98e0c2, 0xbd852b2d, 0x3b83f183, 
    0xbd405d6b, 0x3d53aa3f, 0xbd2d93df, 0x3dc6d8fd, 0xbd7125c5, 0xbd3b558a, 0x3d14d0af, 0x3df1405e, 
    0xbda6f3cb, 0xbd02e6a5, 0x3da57a99, 0xbcebbc5f, 0x3da6c68d, 0x3cdb97c0, 0xbd3132ba, 0xbd98d3f5, 
    0x3d24af80, 0x3daaadae, 0xbd3ee602, 0xbcfa4422, 0xbd5e6517, 0x3bdeccbb, 0x3d1dca79, 0xbdf8cf69, 
    0x3d73e77e, 0x3d0a7fcd, 0xbd60fa94, 0x3d586733, 0xbd0ec041, 0x3dc5cb67, 0x3d260d2c, 0xbd4b5272, 
    0xbd34995d, 0x3d1cdf9c, 0xbcff52f6, 0x3c8cf87d, 0x3d849e59, 0xbdd6907e, 0xbd3287ea, 0x3bf09a7f, 
    0xbd97a157, 0x3be8607b, 0x3d344a2e, 0x3d82acbd, 0x3d7ba891, 0xbd4f3e5a, 0x3cde465a, 0xbd750c70, 
    0x3cfa2fd3, 0x3d03ed56, 0xbb4383b2, 0xbcbe884a, 0xbd5db45f, 0xbd5f620b, 0xbd65e12e, 0xbddb7673, 
    0x3d5d5c65, 0xbb299813, 0x3c1e4dc3, 0x3d6747ef, 0x3d43d31b, 0x3db9a486, 0x3c6d3378, 0xbc3e800b, 
    0x3d4c41c1, 0x3d51ebe7, 0x3df49f29, 0xbcd04c39, 0x3ca572db, 0x3c175f00, 0xbc9551c4, 0x3de65d1f, 
    0xbc7014bc, 0x3ca2d7a1, 0x3b4526f3, 0x3d8310ad, 0xbdcb1545, 0x3d0c050b, 0xbb8b0c9f, 0xbd814d16, 
    0x3de27bde, 0x3c1e21df, 0x3db02f05, 0xbcd1678d, 0xbb11fc27, 0xbd299774, 0x3d7e9d6c, 0x3cd65a76, 
    0x3d52cfb6, 0x3ca10cde, 0xbc2b86bc, 0x3d540180, 0xbcc1004f, 0xbd415e8e, 0x3d46b92c, 0xbd984d49, 
    0x3d5edf0a, 0xba710891, 0xbc69b7a5, 0xbde8a66b, 0x3dea7eaa, 0xbd9a3550, 0xbde829b9, 0x3cc5b253, 
    0xbd5b9bfc, 0x3d184d14, 0xbd464e52, 0xbda671cc, 0x3dea839a, 0x3d9c719a, 0x3e04dd37, 0x3c3191aa, 
    0x3ce8ec5b, 0xbd5fbe12, 0x3da52d3c, 0xbe038ac8, 0x3e4aa0b4, 0xbc82de32, 0x3d214ac5, 0x3cb311b9, 
    0xbd862a78, 0x3d6a5b62, 0xbcb71398, 0xbe34a254, 0xbe03ad5f, 0xbe058d18, 0xbdb23397, 0xbcbefb81, 
    0xbc89820d, 0x3be44bc0, 0xbdaec7b5, 0x3e196f40, 0xbd28e1d8, 0xbd6c3dbb, 0xbe54b905, 0xbc51cdab, 
    0x3d60f4e3, 0x3b7a4bde, 0xbb4e6006, 0x3db3eaf9, 0xbdd4eb19, 0x3d5c59ea, 0x3dd4d920, 0xbe20b004, 
    0x3c9f2432, 0xbda04a39, 0x3e5c8c72, 0xbcc0f85a, 0x3d44516a, 0x3b355d0d, 0xbd437623, 0x3e03afa1, 
    0xbdaed621, 0x39988e6c, 0x3d3a4477, 0xbd058f0c, 0xbd82f557, 0xbe3d2447, 0xb99a6448, 0xbd80c85d, 
    0xbe2fcaef, 0xbe069cfb, 0x3da58fda, 0xbd776a04, 0x3e2e9bfd, 0xbd93f945, 0xbe2a5923, 0x3dfab821, 
    0xbdc94380, 0xbd42d486, 0xbe09e36b, 0x3d24278a, 0xbdaeee9d, 0xbbc87cbc, 0x3abcd53e, 0x3d8a0faf, 
    0xbe07d9b9, 0xbdc98fa1, 0xbd5d5a56, 0xbe037bb3, 0x3e54bbd2, 0xbdd3d815, 0x3dcb75d5, 0xbdb82820, 
    0xbc4a3325, 0x3dae6a84, 0x3c9e6ae1, 0xbd1ad15f, 0xbd3904a7, 0x3d25e9fb, 0xbdb27794, 0x3daf6f48, 
    0x3d12cb74, 0xbd8495a8, 0x3df59d43, 0x3d9a861f, 0xbd5cf643, 0xbda05bdd, 0x3d5cb27e, 0x3da96de8, 
    0x3d8c9a04, 0x3e14d8d8, 0x3e0d4899, 0x3df01798, 0x3ceb94ba, 0xbb999848, 0x3d2b02ee, 0x3b7b6b18, 
    0x3dc74c95, 0xbce70584, 0xbc0fa0ab, 0xbccdd644, 0x3d1e40ac, 0x3d5352e6, 0xbdcb4560, 0x3da662e4, 
    0x3d0ddb7f, 0xbe175ee2, 0x3d953e45, 0xbc9efaf8, 0x3da4558d, 0x3ce2e3f9, 0x3de14589, 0xbe0bb866, 
    0xbd5647fb, 0x3e08fb28, 0xbd91267c, 0x3d7752f7, 0x3d4cd3c1, 0xbdb705bc, 0x3dba1c7e, 0x3cd1b32f, 
    0x3c79af7e, 0x3d6b03d1, 0xbe1106e0, 0x3dbe8a2b, 0x3dbf8018, 0xbdcb6285, 0x3c91300b, 0xbde77008, 
    0xbc8b9144, 0x3dc28f4b, 0xbd09e4cd, 0x3e5a939b, 0x3df2f07b, 0xbdd4835c, 0xbdc34293, 0x3d7ccb7d, 
    0xbca0154c, 0xbd0e58c6, 0x3de79873, 0x3d8e26ec, 0xbb80bce7, 0x3ab68898, 0x3d87385c, 0x3dbf9330, 
    0xbd12b704, 0xbd8b835f, 0xbdbd032f, 0x3d39794e, 0xbb2bee87, 0xbc83fbb9, 0x3e1f92d7, 0x3e09bb47, 
    0xbde2c4b9, 0x3e026b8d, 0xbd5225ee, 0xbbf63f75, 0x3e05acb7, 0xbd37317c, 0xbd46d45a, 0xbccb5e02, 
    0xbdb56e65, 0x3d92dbef, 0x3bc92aa8, 0x3c7c4ff2, 0xbd5b38b8, 0xbd9d7be8, 0xbddef28e, 0xbd051827, 
    0xbd3c34d4, 0x3b6c654b, 0x3c5e2a78, 0xbd33c50a, 0xbdb24e85, 0x3d24841d, 0x3e23f2d8, 0x3d15a039, 
    0xbd9ce521, 0x3db6742e, 0x3d830c47, 0x3e3a2ec0, 0x3dad47ee, 0x3dd50e5a, 0x3b77e5e0, 0xbcb9329d, 
    0xbda9c3e7, 0x3de456ab, 0x3c9b7602, 0x3e04ff70, 0xbd50a242, 0x3dd8fe2d, 0xbbd3fa14, 0xbdb10ea7, 
    0xbc78e266, 0x3d26cd75, 0x3db9adea, 0xbc9d3a0c, 0xbd7349df, 0x3df0d248, 0xbdcf2655, 0x3db8327b, 
    0xbe188b31, 0xbe2fc2b7, 0xbd99d5b2, 0x3e1761b2, 0xbdec4c49, 0x3e310693, 0x3d1b85dd, 0x3d85ffdf, 
    0x3dce06a2, 0xbd5712be, 0xbde4d77d, 0x3da73c0b, 0xbbb52b79, 0xbdc8bc7e, 0x3d782e39, 0xbda7b198, 
    0xbdb52bcd, 0xbc8988f7, 0xbdfd71a8, 0xbd4346d2, 0xbdd1af1e, 0x3ddea02d, 0xbd5f6c70, 0xbe049442, 
    0xbcffa04c, 0xbe1d712b, 0x3d85a0af, 0xbe2c7e11, 0x3e1d8b58, 0xbd3e6385, 0x3d66ec28, 0x3d78aa2f, 
    0x3d8f75e7, 0xbe272bf1, 0xbdd072b9, 0xbccc5965, 0xbe249f78, 0x3e27838f, 0x3d283810, 0x3df11b80, 
    0xbdae074e, 0x3de56691, 0xbcab4c7f, 0x3b0cf2c0, 0x3e3a5d14, 0xbdd62033, 0x3ce4a16a, 0x3da3a1cb, 
    0xbd8c514a, 0x3dcdd1a2, 0x3c528a89, 0x3e2c0ecc, 0xbdea47b7, 0x3b5761d9, 0xbd99470f, 0xbe1359a9, 
    0xbddfc071, 0xbe2cbea4, 0xbdaab5d4, 0xbdae67f6, 0x3e1e52b6, 0x3d96dd13, 0x3d8d62d8, 0x3dee783f, 
    0xbd3dce19, 0xbd960069, 0xbd3f73d0, 0xbd0441c3, 0xbdf72ff6, 0xbc846a7b, 0xbd21608a, 0x3dcddc55, 
    0x3cf2e78c, 0xbd43572a, 0x3d8613f0, 0x3ca64f0e, 0x3d6b47a8, 0x3ce4195d, 0x3d386f3d, 0x3d95838e, 
    0xbdc7a64b, 0xbdba1bbc, 0x3c950dc5, 0x3d83c3b5, 0x3c993525, 0xbc4e6f9f, 0x3c69985e, 0x3c81c411, 
    0x3d174c59, 0x3d584fd6, 0xbd7c24eb, 0x3cc112c8, 0xbc6e0e14, 0xbbe2fbb0, 0x3d9c9935, 0xbbeff7d3, 
    0xbd12cb93, 0x3df6e11b, 0xbd1f9cca, 0x3c821497, 0x3d7705c8, 0x3d25df7f, 0xbd47b950, 0xbcad1585, 
    0x3bd9b4d9, 0x3c491951, 0x3d057270, 0x3db7bd57, 0x3d65e5b2, 0xbd34d456, 0x3cbef966, 0x3c85ade1, 
    0xbc5d68f2, 0xbda6f827, 0x3b99ec7b, 0x3d67748b, 0x3c7b14da, 0xbd32508f, 0xbcbf532e, 0x3d1b4db9, 
    0xbbcd06cb, 0x3da629b5, 0x3da416d9, 0xbdbf5818, 0x3ce7abc3, 0xbdf52925, 0xbd13ae09, 0xbbf1639a, 
    0xbcddd878, 0x3d878ffd, 0xbd4fb9b3, 0xbd73dfb7, 0xbd6c972c, 0x3d411c50, 0x3cfea77e, 0x3d651bd2, 
    0x3d0905d6, 0xbd252941, 0xbc62ec7a, 0x3da1dfd1, 0x3d8ebf75, 0x3ccf167c, 0xbb820569, 0xbd1fc576, 
    0xbd3853d8, 0xbdd2d902, 0xbc4809a9, 0xbd9fed16, 0xbc19b9d4, 0xbddaa97c, 0xbcb49089, 0xbd8cfff7, 
    0xbbaeee46, 0x3ba96049, 0x3d0c338f, 0x3cd214cd, 0xbd9b978a, 0x3b50d426, 0x3d78a2bc, 0xbd5b97dd, 
    0xbd11209f, 0x3e14c1b9, 0xbdc386f1, 0x3d17d329, 0xbcb90dc7, 0xbd98a7c8, 0x3d2131d2, 0x3d154d7d, 
    0xba55a805, 0xbc5a0e7f, 0xbbaf3723, 0x3d2d3fd8, 0x3d8685a8, 0xbd64377b, 0x3cb9c241, 0xbd95fdef, 
    0xbcd8a1d4, 0x3da0057b, 0x3ce32f34, 0x3cf4201e, 0xbd211f1c, 0x3d880075, 0xbd769eee, 0x3cd0493f, 
    0xbd7d9448, 0x3c3e8078, 0xbc49d204, 0xbb9ad973, 0xbd8cb795, 0x3d8f005b, 0x3d2775db, 0x3ca3b51d, 
    0x3cdf771b, 0x3b170d2c, 0xbd86d863, 0x3d435e28, 0x3d2c11fc, 0xbdb4b33d, 0xbcbb682e, 0xbd84e9dd, 
    0xbda8aa2e, 0xbd933855, 0xbbe60d86, 0xbdf461d8, 0xbd92f9f1, 0xbcf38dfe, 0xbdc97b9d, 0xbd6c0173, 
    0x3cfcc017, 0xbcf5e23b, 0xbda970bb, 0xbb92ef09, 0xbc6c99d5, 0xbc8d30ca, 0x3db8246c, 0x3da47902, 
    0xbe04524a, 0xbc8b01cc, 0xbd999f40, 0xbcf596af, 0xbd678043, 0xbcd32295, 0x3d74da5f, 0xbd5a1d4c, 
    0xbcb666e1, 0xbda31f39, 0xbd885146, 0xbd70eb39, 0x3c27cea5, 0xbdc102c3, 0xbca7f252, 0xbd1d75e1, 
    0xbd69a712, 0x3d4fa904, 0x3c65c722, 0xbd8d22b7, 0xbd089b27, 0x3d9765c4, 0x3d853bef, 0x3d372a13, 
    0x3d49e3f3, 0xbd911fb4, 0x3d1e8766, 0x3cc02fde, 0x3d6327fc, 0xbc9039a3, 0xbd81e7f7, 0x3d80d9f2, 
    0xbd670ec6, 0xbbb0492e, 0xbd75c904, 0xbd86e0b2, 0xbd19fe48, 0x3dd2d2ad, 0xbda1e70b, 0x3df4af77, 
    0xbdaa7150, 0xbc905bd7, 0x3e083323, 0x3d9873d3, 0xbc0a0459, 0xbc87694b, 0x3b967b85, 0x3d815514, 
    0x3db1a405, 0xbd90df38, 0x3ca74c0e, 0x3e0129b4, 0x3dea2a9c, 0x3d348798, 0x3d0505c4, 0x3ba7e05d, 
    0xbd75ec2e, 0x3dcd2e52, 0x3bd74b54, 0xbc6a2916, 0xbdd4b17f, 0x3da6219d, 0x3cd65431, 0x3e098a30, 
    0xbd78368d, 0xbd8324dc, 0x3dcfb25c, 0x3def40c7, 0xbd32f0b7, 0x3c6cba8d, 0x3b7cccf2, 0xbd99f49c, 
    0x3e0bf398, 0x3c805d6e, 0x3d389bd7, 0xbd5acfe3, 0xbd5fc7b1, 0xbe0a1126, 0xbdcd75ee, 0xbd2eb7df, 
    0xbd85e6f5, 0x3b61462a, 0xbd324f42, 0xbd8fa8ed, 0x3a000ba4, 0xbd4fdbd9, 0x3bbca033, 0xbe1c3615, 
    0xbe0ce60c, 0x3bbc6442, 0xbe125594, 0xbdf6bdb7, 0x3d87fc2b, 0x3d09b8ea, 0x3e065fd1, 0xbd10cb90, 
    0xbde25af6, 0xbe085a70, 0xbe1a4598, 0xbd029f30, 0x3dd135f9, 0xbcfd5719, 0x3d9e3619, 0xbd4b32ce, 
    0x3d8c7b8b, 0x3dd1c8c7, 0xbd408e4b, 0xbdac4a6f, 0x3db255f5, 0xbd3e0a20, 0x3da45ddf, 0x3d3173a1, 
    0x3ba8bf4a, 0xbe1653a1, 0xbe2970e9, 0xbda3f74a, 0xbdd55feb, 0xbd5ef320, 0x3c73b06f, 0x3d90b3ac, 
    0xbd85a746, 0xbc86a0ef, 0xbd419e5a, 0x3c44d000, 0x3d3be6a4, 0xbe844ca4, 0x3e197647, 0x3d8b7b89, 
    0x3d59ffd5, 0x3def703e, 0x3c66d675, 0xbdc1694e, 0x3d182439, 0xbdbf9d42, 0xbcfe24e7, 0x3d1aeed9, 
    0x3e0d9561, 0x3d369c90, 0xbc9e3fe9, 0xbd126b02, 0xbd914b28, 0xbd8abe48, 0xbdfd0c76, 0xbd381d03, 
    0x3d841337, 0xbd360966, 0xbdb6dbb0, 0xbd459df6, 0x3c9afc86, 0xbcd63139, 0xbd5751c0, 0x3c8027b4, 
    0x3db97c5e, 0x3dd369c5, 0xbdb61966, 0xbda46bf2, 0x3a747869, 0x3e1cf156, 0x3c69f4c0, 0x398513d5, 
    0xbd05f806, 0x3d11b923, 0xbd3f8bfd, 0x3cd169c5, 0xbd1f02e6, 0xbc91592b, 0xbca8345b, 0xbca81ad5, 
    0x3d80dfa9, 0xbdee50e9, 0x3cf6f287, 0x3d8dcb6e, 0x3cc14c06, 0xbdd480ed, 0x3d64cd49, 0xbd045f51, 
    0xbd174c05, 0xbda0ca5b, 0x3d73b139, 0xbb2b9715, 0xbdbedebf, 0xbdadb033, 0x3d658d6b, 0xbd8447b2, 
    0xbd320915, 0xbc9e7080, 0xbda887de, 0xbd740600, 0x3da63801, 0xbd93991b, 0x3e0e4e86, 0xbcf991c5, 
    0xbdc3acbd, 0x3d8e3890, 0x3cd41b9b, 0x3d87785b, 0x3db67efe, 0x3d90dff1, 0x3d885388, 0x3dfb1a21, 
    0xbcf48fa1, 0xbdae1731, 0x3d8d6dbb, 0x3d88d0fc, 0xbe072c48, 0x3c71903a, 0xbd831b95, 0xbd811e29, 
    0xbc7b1851, 0x3d9854cd, 0xbb03cc5e, 0x37b47632, 0xbdaaa081, 0x3d967c2f, 0x3c2e776b, 0xbd9ecf3f, 
    0xbd20c1ad, 0x3d632136, 0xbdc802bb, 0x3c789cca, 0xbdeb6091, 0xbdb51852, 0xbe00f2d5, 0x3d619dfe, 
    0x3cb4b59a, 0x3dd4d1bc, 0xbcfb3487, 0x3ce8009c, 0x3da205fd, 0xbcaa6885, 0xbd97c153, 0x3e194618, 
    0x3d1d126f, 0xbbac81c2, 0x3de702c4, 0xbcd5af87, 0x3c49d7c9, 0xbdabd6d5, 0xbdc9e047, 0x3d9d0302, 
    0xbde52208, 0x3cd8c702, 0xbd3db770, 0x3d730057, 0x3dce902f, 0xbd9ef659, 0xbc66cf2a, 0x3dbdf7c7, 
    0xbd4c83e6, 0xbd59079c, 0xbd3bc11e, 0x3d47b5e6, 0xbd52a7c3, 0x3cf87a4a, 0xbe0685b6, 0xbdbddd4f, 
    0x3d2b7ca6, 0xbdc29e7c, 0x3dff568c, 0xbdecd4e1, 0x3d08755f, 0xbda0aa16, 0x3ddf7e7b, 0x3c575ed8, 
    0x3c7afd4d, 0xbdedd84c, 0x3db7e400, 0x3d8f9abc, 0xbca6a96a, 0x3d2292db, 0xbc64b8bc, 0x3c53298b, 
    0xbcf72b36, 0x3cdb2e33, 0xbd8e0487, 0xbd557a4c, 0x3dc934c6, 0xbb9a5e83, 0xbdd656ed, 0x3cde182e, 
    0xbc9ad209, 0xbdc88eed, 0x3d0c3529, 0x3d2ffd6c, 0x3dc923c2, 0xba570d1c, 0xbd8aaf22, 0x3da3ba22, 
    0x3da6d079, 0x3d4148a8, 0xbab9a3c8, 0x3d1a28a6, 0xbdcc1249, 0x3db504f8, 0x3e105792, 0x3d77b5d6, 
    0xbde2f2f3, 0xbd15b4a0, 0xbd2a6bb6, 0xbc6eb689, 0xbe19a908, 0xbdca4c04, 0xbdc8c730, 0x3d9cd6a7, 
    0x3d5801af, 0xbcb52334, 0x3d5f15a2, 0x3d0fe7f9, 0x3e079395, 0x3d6dce98, 0xbb3cf398, 0x3db6129a, 
    0xbc91f93d, 0xbcba6fb4, 0xbd805997, 0xbcb6ffbe, 0xbb06c3c3, 0xbd41b87e, 0x3c57abd1, 0x3d6e1bb2, 
    0x3d4db975, 0xbdd40513, 0x3d17f324, 0x3dc0a3d5, 0x3db3e5c0, 0x3d9c4aed, 0x3d1d5438, 0x3d6d83c5, 
    0xbdcee574, 0xbd171cbb, 0x3d884e3d, 0xbd9714df, 0xbcf37f3c, 0xbdbc0450, 0x3d641be8, 0x3d95ab93, 
    0x3b808101, 0x3d2d7f0d, 0xbb91382c, 0x3df172ea, 0xbcb74f3c, 0x3d4228db, 0x3d865a4c, 0xbd6307a4, 
    0x3d6c0fdf, 0xbd7d320d, 0x3bdf47a4, 0xbc8654e6, 0x3d7dd678, 0xbc19fb84, 0xbd8e6843, 0x3c8358a4, 
    0x3b8b4ae9, 0x3d20abf3, 0x3d28686d, 0xbd1b8c1b, 0xbd17feca, 0x3b50c141, 0x3dbb32a1, 0x3c369b80, 
    0x3aec70ef, 0x3d7b8f04, 0xbbcf224e, 0x3c3b3480, 0xbcf1b7c0, 0xbd867280, 0x3c72bece, 0xbd727c67, 
    0xbcdef160, 0xbc880de7, 0x3d90d661, 0x3da9db97, 0xbc5499d5, 0xbdb62287, 0x3d22b582, 0x3dd3980e, 
    0xbc4eefac, 0xbd8047bb, 0x3d460310, 0x3cc485b5, 0x3d937e51, 0x3d7015f1, 0xbda54766, 0xbd3425df, 
    0xbbbdabb5, 0xbd29e909, 0x3d15b88f, 0x3cd006f7, 0xbd8dc3b2, 0x3d132b4a, 0xbc9f5123, 0xbda9ffc3, 
    0xbdf143cb, 0xbcb0d1e7, 0xbd854cb5, 0x3d827850, 0xbd950e3b, 0x3c1e478b, 0x3dab8aaa, 0x3d1442fd, 
    0xbe0c027a, 0xbc9c24fc, 0xbd01a1ce, 0x3d7408bd, 0x3d011445, 0x3cd01fd8, 0xbcfc54f5, 0x3ccf576b, 
    0x3d968a62, 0xbc9d647a, 0x3d4af277, 0x3d6b48b9, 0xba89f390, 0xbca78310, 0x3d490aac, 0xbd6e1526, 
    0x3d970f01, 0x3b3760ce, 0xbc42b9af, 0x3dcbc183, 0x3d6be044, 0x3ce8189a, 0x3dd3f494, 0xbcd81144, 
    0xbda1b269, 0xbbb9873f, 0xbd79ce7a, 0x3d0909bd, 0xbb9ee597, 0x3c22c523, 0x3d1e58a6, 0xbda370c6, 
    0xbaaafede, 0x3c2e8419, 0x3dcb0298, 0xbd641eb3, 0xbdb41af4, 0xbb300f56, 0x3d975d10, 0x3d25a08c, 
    0x3e05e5e6, 0x3d3cac2c, 0x3cc1f74f, 0x3cb62533, 0xbd0aaa2c, 0x3dc01f62, 0xbda326ec, 0xbc19ed99, 
    0x3be31bfd, 0x3d8e0549, 0x3b9f1301, 0x3dc01570, 0x3c9cecb2, 0xbc2e9591, 0x3af0aa15, 0x3dbecc15, 
    0xbde9982c, 0x3d906b88, 0xbd23cafb, 0xbe0b19e5, 0xbd3b9ce0, 0x3dd8eb5e, 0xbddec7fc, 0x3d24a1d8, 
    0x3dcc69b7, 0x3c323166, 0xbda63210, 0x3cec9f94, 0xbe0b2183, 0xbdf09de3, 0x3ddfc374, 0x3c3e6f5d, 
    0x3da876c1, 0x3dfea1ce, 0x3d899a76, 0x3d8bfafc, 0x3d71467a, 0x3d418382, 0xbd31f9bf, 0xbdaf8319, 
    0xbceea5d1, 0x3de98781, 0xbdc0b029, 0x3d3a69f5, 0x3d2b130d, 0xbd215f2e, 0x3d2c2ab7, 0xbd53ade1, 
    0xbd56355b, 0xbdcb65a8, 0x3a550276, 0x3d5cbe2b, 0xbd4f528d, 0x3d89f9be, 0x3d97c624, 0xbd6db77a, 
    0xbd41e588, 0xbc705ce7, 0x3dc7a453, 0x3d41cd22, 0xbe18789b, 0xbcfcf8db, 0xbce3dede, 0xbdcac53e, 
    0x3d3057d8, 0x3ded3d88, 0xbdbb69ed, 0xbd4faa78, 0x3d1aa7f8, 0xbe113e1e, 0xbd0d3ccc, 0x3d970e44, 
    0x3dbfca25, 0xbc72e338, 0xbd155581, 0x3c430128, 0xbc0a2da0, 0x3c850f94, 0xbccdcdeb, 0xbd1a8df2, 
    0x3d14b84b, 0xbdc9bdb4, 0x3b56c8f8, 0xbd5e6fd6, 0xbcac43a2, 0x3e146dc7, 0xbdb28800, 0x3ceafca0, 
    0x3e145e58, 0x3da6a5f7, 0x3c613b3f, 0xbdea1240, 0xbdab9c16, 0x3d61933a, 0x3d935a35, 0x3d59b93d, 
    0x3cf7f4f7, 0xbdb15fbe, 0x3e02a384, 0x3d811323, 0x3b0453e4, 0xbd59c1cc, 0x3e1b94f2, 0xbd85bf60, 
    0xbe067fa9, 0x3c9e2465, 0x3e0e121a, 0xbd432917, 0xbda2167b, 0x3e1d8979, 0xbd5d1f6b, 0x3d0cb8a4, 
    0x3e019ded, 0x3c34f31f, 0xbd7fa837, 0xbdb075d0, 0xbd001cf6, 0x3d2721ee, 0xbbc891f3, 0x3c69a737, 
    0x3da093f1, 0x3d80d3a1, 0xbe4040c3, 0xbd8c2ae9, 0xbd96fe7e, 0x3d0557c9, 0xbd1e67b4, 0xbe2c3033, 
    0x3b904c68, 0x3ce8145b, 0xbe0a3f46, 0x3d9ed1c8, 0x3d69079a, 0x3d9b575a, 0x3dec25ca, 0xbbeb4b82, 
    0xbdf3d091, 0x3dfbd103, 0x3dec0e72, 0xbdb34a68, 0xbc1a44c2, 0x3bc943d5, 0xb939170d, 0x3d145aab, 
    0x3e22c51a, 0x3d958ba1, 0xbc93ffbf, 0x3d5de72a, 0x3d8d48c7, 0xbe236115, 0xbd310069, 0xbcdf371f, 
    0xbdfe2c91, 0xbdf73773, 0x3c10f69b, 0xbbf5af11, 0xbd147028, 0xbd8e0de7, 0xbc55dd6c, 0x3d5ae724, 
    0xbd6fad4d, 0xbe4adbe3, 0xbd33ef91, 0x3d4b0d12, 0xbdcd707e, 0x3ddbf69a, 0x3d8a7ad4, 0x3c47e380, 
    0xbb6a57d3, 0x3dc8c1a4, 0x3e297bee, 0xbd37b225, 0x3be10449, 0xbd20ec5e, 0x3de7e2bb, 0xbe165da8, 
    0x3d9687dc, 0x3deb61ab, 0xbdd49613, 0x3dbbebe5, 0xbd69e587, 0x3d49125e, 0x3d8cc42e, 0xbd752932, 
    0xbe315368, 0x3cba3b71, 0xbdb365ab, 0xbd768578, 0x3dbda223, 0xbcd9ef3d, 0x3d2ab989, 0x3dcbd89e, 
    0x3e0a6ca4, 0xbd880d89, 0x3dfbf5b9, 0x3d3bc604, 0xbce9ff86, 0x3d5c30f0, 0xbb5353c3, 0x3cd5569d, 
    0xbc7b1863, 0xbde5852f, 0xbd69f6aa, 0x3d275ed9, 0x3e142e9e, 0x3ca4be3e, 0xbd399f98, 0xbc82b859, 
    0xbe3fbdd5, 0x3d57a6c5, 0x3ca93007, 0x3db8e186, 0xbd22606a, 0x3db6d165, 0x3cecd673, 0xbe00f3a4, 
    0x3d98fa41, 0xbced740c, 0x3cb52c21, 0xbde28431, 0xbdae0877, 0xbc72343e, 0xbdae41e6, 0x3db4971e, 
    0x3d8ebe39, 0x3d567cb4, 0xbdca4a7e, 0x3d3f0ec2, 0xbda99c6d, 0x3d2d2867, 0xbe2cd716, 0xbc33cc2f, 
    0xbd80745f, 0x3d89e445, 0x39c60b3b, 0xbd92aced, 0xbdc8ee77, 0xbe1b384f, 0x3d826597, 0xbe024f29, 
    0xbd4320bb, 0xbe17abc9, 0xbdcd0b97, 0xbd9042b2, 0xbd562c5a, 0xbdbac105, 0xbcd14748, 0x3b99ac17, 
    0xbc720e41, 0xbcba6813, 0x3da72d24, 0xbd40fb52, 0x3d29338a, 0xbb67c657, 0xbe0b8c16, 0xbcc3b58e, 
    0x3d936413, 0x3da99c95, 0x3da42989, 0xbcacb053, 0x3dbe1ee1, 0x3c793b94, 0xbe29535d, 0x3dc07a27, 
    0x3d850288, 0xbd5bd52d, 0x3d972618, 0x3dbbe764, 0x3ddb991b, 0x3dd79d3a, 0x3e38d823, 0xbe0240b2, 
    0xbc435406, 0xbe1aad70, 0x3d9531ed, 0xbe0a6dad, 0x3d59efd4, 0x3d0ac4f8, 0xbceb3daa, 0x3d8ca5ce, 
    0xbd0edbb2, 0x3c92a1ed, 0x3e22bb7f, 0x3dcf2065, 0xbe0bc78f, 0xbd9a09e6, 0x3dcf1888, 0x3d872a28, 
    0x3e3723ef, 0x3d6003b6, 0x3c807f19, 0xbd7139e9, 0x3d8f0e73, 0x3dba2fce, 0xbcc3cdad, 0xbc11c804, 
    0x3d2b2d4f, 0x3dc16603, 0xbe179a60, 0x3c9a72e4, 0x3c0c7045, 0x3db0aa16, 0xbdbf566a, 0xbe114482, 
    0x3d350601, 0xbb5759fb, 0xbb8d7464, 0xbdaf3613, 0x3da82426, 0xbcee5f29, 0x3da3af8a, 0xbd2d74f2, 
    0xbcb4eb4f, 0x3daf57c7, 0xbb96147c, 0xbc5b7b98, 0x3d04cb73, 0xbdede1da, 0xbb11caf9, 0x3de5d96b, 
    0xbd8b5a5d, 0xbd646f9b, 0x3db23e9e, 0x3e06d331, 0xbd8d2072, 0xbe1d4b6d, 0x3d277eb8, 0x3dfde7ae, 
    0x3c8d1aef, 0xbd4f1c72, 0xbe0bff32, 0x3d8d863b, 0x3db66e68, 0xbca1ef84, 0x3c9de177, 0xbd570fce, 
    0x3d9e8bf4, 0x3ce2db37, 0xbd7bf72b, 0xbdb8b2f0, 0x3ca4631f, 0x3bd01a16, 0xbddc4554, 0xbd984f34, 
    0x3dabf3c0, 0xbd29bffe, 0x3d8076ba, 0xbdbdea4d, 0xbd80be47, 0xbde9bb89, 0xbc94770e, 0x3e0bf92a, 
    0x3cc7aa47, 0x3ccb589b, 0x3ddc66ce, 0xbd7b1047, 0xbd1b3cee, 0xbe437ce6, 0x3dfe953f, 0x3e0c7568, 
    0x3db452da, 0x3be826dd, 0xbe373146, 0xbd02489a, 0xbbcc6305, 0xbd8906c1, 0x3e1ac245, 0x3dbb92b8, 
    0xbe173b58, 0x3d86b3ab, 0xbde82495, 0x3da96bbb, 0x3d91474a, 0x3d9ad785, 0xbd1b67b4, 0xbddb9127, 
    0xbd72baec, 0xbc8c60a2, 0xbcc09819, 0xbc625a83, 0x3d8ac739, 0xbd542661, 0xbe015ace, 0xbdd06039, 
    0x3dfac171, 0x3d0a3ec4, 0x3d8e4ee6, 0x3d9f2b23, 0x3e08ad28, 0x3c89739e, 0x3ddfefb9, 0xbc77ec92, 
    0x3dde537b, 0x3dd5256e, 0xbdc506eb, 0xbdc57ba9, 0x3d9b14fb, 0xbde29602, 0x3dc89a2b, 0x3def226e, 
    0x3d27669a, 0xbbc0fa49, 0xbdc28c0f, 0xbd14f56c, 0xbb5d0b50, 0xbe04d861, 0xbc930acf, 0xbdc62bd8, 
    0xbd860199, 0xbdb9a617, 0xbd767c8a, 0x3d80c982, 0xbc332bf1, 0xbddffe25, 0x3debe585, 0xbddea45a, 
    0xbd81799e, 0xbc522470, 0xbb1412db, 0xbdf1d251, 0x3d38a986, 0xbd9bf0ab, 0xbdb2e88e, 0x3d463c52, 
    0x3d22adea, 0xbc9435b0, 0xbca177fd, 0xbe2a2195, 0x3d7d0fec, 0x3df5758e, 0xbdad8afb, 0xbca4b735, 
    0xbd7f7a5d, 0x3d982484, 0x3c9bee7d, 0x3e0cda92, 0x3a1b6f2d, 0x3d6ca8bd, 0x3d1b5806, 0x3d5e8837, 
    0x3deb2e9a, 0xbbabd088, 0xbdf4523f, 0xbe051936, 0xbd4e94e9, 0x3e0eb60b, 0xbd66800b, 0x3b47ffe8, 
    0x3c26a82f, 0x3d9ea0bc, 0xbd7b1cee, 0xbdf13cbe, 0xbde40f22, 0xbde433d5, 0x3cf6ccdf, 0x3bedf9f2, 
    0x3cf04831, 0x3d990eb3, 0xbd4e8016, 0xbe3e9fc9, 0xbd9ecca4, 0x3dd53de5, 0xbdb744d4, 0xbcc24497, 
    0xbd931880, 0x3df9e737, 0xbcfc807b, 0x3b1c397a, 0xbc3c8176, 0xbd79bae4, 0xbe0d2349, 0x3dde0208, 
    0x3ddf8b53, 0xbe00b575, 0x3d056310, 0x3e3476a6, 0x3e280279, 0x3d2a3dbd, 0xbc5dc7e3, 0x3d439f6c, 
    0xbd80265d, 0x3b3b4315, 0x3cfe7e94, 0xbd6765e5, 0x3dfef474, 0x3d947658, 0xbdabb6f7, 0x3cfefb9e, 
    0xbdb9ad4e, 0xbdc149eb, 0x3d230b1a, 0xbcce1b9f, 0x3e1cca0d, 0x3dea8f03, 0x3e0f0a18, 0xbc81258f, 
    0x3d05def8, 0xbd50b20d, 0x3df615db, 0x3d98d4ca, 0xbc40289e, 0xbe01f79d, 0xbe066557, 0xbc337957, 
    0xbd26addc, 0x3d81552f, 0xbe316f86, 0x3d984725, 0xbe0ff60c, 0x3d517fe5, 0x3dbe1148, 0x3d1622d7, 
    0x3c451aeb, 0xbd74cb3b, 0x3d15f5f8, 0xbe10c498, 0x3d9b9325, 0xbdd9c0a3, 0x3e40d3b4, 0x3dbc96c9, 
    0xbdee5940, 0x3d4bf71f, 0x3dbae7a9, 0x3d811572, 0xbdbb9bf0, 0x3b71896f, 0xbe00a790, 0x3db8690b, 
    0xbd865abd, 0xbc1da3eb, 0x3d68633e, 0xbdd88f85, 0xbdbedbc7, 0x3d9369c9, 0x3d15187b, 0x3d687b47, 
    0x3d619614, 0x3de64e14, 0xbda3b194, 0xbba039ec, 0x3d8bb25b, 0x3e31683c, 0x3e398e6b, 0xbe3734e3, 
    0xbd1a5e09, 0x3e4b7d0d, 0x3defbcbc, 0x3e03e43e, 0xbd8b53f0, 0xbe031719, 0xbcfb18b5, 0x3e3fe87d, 
    0xbe233cec, 0x3e1100bb, 0x3d355163, 0xbe2e1f1b, 0xbcb9504b, 0xbcf61ece, 0xbe23ffe7, 0x3e739230, 
    0xbdb1a97c, 0xbc91db8c, 0x3e050eed, 0xbda4df53, 0x3ce0d0e3, 0x3dd5371c, 0x3c070b9e, 0xbce6591f, 
    0xbdfb08ff, 0xbcc326f2, 0xbc37b4d0, 0x3d4f2a07, 0x3d001d6e, 0x3cd5f16f, 0xbd03f00d, 0xbb763f83, 
    0x3d3bb8e4, 0xbcce7a1e, 0xbd0b8bc0, 0x3d3fed67, 0x3c36c5f1, 0x3d1b1efa, 0x3d366e27, 0xbaefeb53, 
    0x3d977ee6, 0xbcf02ba1, 0xbd8e94f2, 0x3c8eadd7, 0x3d44d6a4, 0xbbe98648, 0x3e0efdc2, 0xbd4e661f, 
    0xbdda6752, 0xbe12a02d, 0x3d398357, 0xbd42dcdf, 0xbc059b52, 0xbc67a592, 0x3d3fc502, 0x3d0003b1, 
    0xbcdf1576, 0x3d964027, 0x3cb03f36, 0xbdb65656, 0xbc30d2a3, 0xbd76bf12, 0xbd7ef5aa, 0x3cf0f30b, 
    0x3c847549, 0xbda897fe, 0xbd3381f6, 0x3d659c1b, 0x3d428b01, 0x3d090c67, 0xbd886d32, 0xbcdcc8a6, 
    0x3d32a6a1, 0xbd07038c, 0x3c27b1c4, 0xbceaaace, 0xbc32e3b3, 0xbcfda91f, 0x3da0d0cd, 0xbc65377e, 
    0xbd6e4ed1, 0xbd29d5f3, 0xbc07beb1, 0x3dafb038, 0xbb1e5c96, 0x3cbaa414, 0x3d84e747, 0x3d95506f, 
    0x3cc34d3b, 0x3bb24bf5, 0xbd00927d, 0x3c2d8162, 0xbd50a2fe, 0xbc5bf5c5, 0x3bb92988, 0x3d2f9066, 
    0xbd48d5ce, 0xbca834c5, 0x3db5325d, 0x3de501cb, 0xbdad7905, 0x3da19445, 0x3c80f60a, 0xbda7c73f, 
    0x3bee82ef, 0x3d07b7f3, 0x3cd94dad, 0x3d044ed3, 0xbd25f8d1, 0x3c9cf978, 0x3de370e5, 0x3b8ca583, 
    0x3d01e4a3, 0xbe1805ba, 0x3de35f16, 0x3d2a1b0e, 0xbc94c703, 0x3c937ed8, 0xbdb32449, 0x3d459211, 
    0xbc85b039, 0xbcf4457a, 0x3d9723ad, 0x3d6040fe, 0x3d178042, 0x3c178728, 0x3c15a176, 0x3c0d2cad, 
    0xbd240518, 0xbd8bbd17, 0x3d82492b, 0xbd53a9b1, 0xbd747b0e, 0xbda37cd4, 0xbcb6b050, 0x3caef67c, 
    0xbcdf4bf5, 0x3d6f5754, 0x3d4cb33c, 0x3c8a19c0, 0x3bf28f13, 0xbd48a641, 0xbd36ab51, 0xbd333b1c, 
    0xbc8fc818, 0x3d15f026, 0x3b719248, 0xbd00abe1, 0xbb3eebaa, 0x3db3b5c3, 0xbbb0ba32, 0xbd9b0c75, 
    0xbd14b5ed, 0x3dbcbb4d, 0x3d35e650, 0x3bdd287a, 0xbc8ebc00, 0xbd24f0f9, 0xbc7b4de9, 0xbcdb36a8, 
    0x3d8300e7, 0xbd45faeb, 0xbb62a6c3, 0xbd3e9d1f, 0x3cb85dbc, 0x3d2f3fe2, 0xbd2d6560, 0xbd83f9f4, 
    0x3d916528, 0xbc1e94ef, 0xbcaeccb2, 0x3cf39f0c, 0x3d65e973, 0x3cfe5914, 0x3d7e2fad, 0xbde37a8e, 
    0xbd126571, 0x3d6e566f, 0x3c70a649, 0xbce40eb9, 0x3d5e57ff, 0x3d7bb220, 0xbd9c9de3, 0xbd0308f4, 
    0xbd1656d2, 0x3dcfa7d4, 0x3d7a2b5a, 0xbd839c43, 0x3d34d184, 0x3d4c7065, 0xbd7dc2e4, 0x3d35d7a3, 
    0xbd6e1fbf, 0x3ceadae7, 0x3cd816c7, 0x3d99418f, 0xbda56b99, 0xbcebf293, 0xbcd43ac7, 0x3c7116dd, 
    0x3d825097, 0x3b807d38, 0x3d6246ad, 0xb989bb80, 0x3c03966a, 0xbc84dea8, 0x3dba1195, 0xbd9d9d52, 
    0x3c92a626, 0x3da503ed, 0xbd2edb19, 0xbc930585, 0x3d37418c, 0x3c93f14b, 0x3d827303, 0x3d2ba457, 
    0xbd0a88db, 0xbd35d241, 0x3c3fb35f, 0x3d23b1f4, 0x3e742d63, 0x3db81112, 0xbe0de05c, 0x3e05baa7, 
    0x3df113d7, 0xbe5a8886, 0xbd2e469f, 0x3dc89c4f, 0x3e07abc5, 0x3e058ac7, 0x3e04849b, 0xbde0516d, 
    0xbd9c0866, 0x3dce3e10, 0x3e64e128, 0xbde6561c, 0x3df3f497, 0x3d9caaf3, 0xbdfbf0a9, 0xbdfa3e0c, 
    0x3d8c46f5, 0x3d825100, 0x3db744ff, 0x3e0d548d, 0xbe0d74a6, 0x3d18146d, 0x3da0e484, 0x3cef190f, 
    0xbde0aeb2, 0x3da64bf3, 0xbdb4bd8d, 0x3d50d155, 0x3e13045c, 0x3d9929f4, 0xbdcf8238, 0x3e2e261a, 
    0x3b376655, 0x3cdb54eb, 0x3e1c9ccf, 0xbd8ef357, 0x3dbaba00, 0x3d9dcb83, 0x3df34965, 0x3dfa2c69, 
    0xbd23d30e, 0x3d2cc9f5, 0xbca30852, 0xbe2a404f, 0x3e2fe858, 0xbd865014, 0x3d001f5e, 0x3e38acc1, 
    0xbe388d89, 0xbe0eac2b, 0x3df41d32, 0x3d9886d2, 0x3dd2fde7, 0x3daaddf8, 0x3dd4b15a, 0xbcefb140, 
    0x3d9ec658, 0xbdeee3db, 0xbc9ba0e8, 0x3d9e5f17, 0xbd43356a, 0x3daf0beb, 0x3dd483a5, 0xbe273ad6, 
    0x3d1f65b2, 0xbe0f02b2, 0xbd2ed983, 0xbd990505, 0x3b846a66, 0xbda8f17a, 0xbd465e2a, 0xbc06e73e, 
    0xbe26d476, 0xbe3b23e7, 0x3d289c3c, 0xbc10aa1d, 0x3e2f54a8, 0xbc6cd4e6, 0xbdf51ba5, 0xbb90f2a7, 
    0x3db9a695, 0x3dce7e76, 0x3dc1b6bb, 0x3da33e8e, 0xbcf243c3, 0x3e412c61, 0xbdd47007, 0x3d38fd83, 
    0x3dd05fe0, 0xbda450c9, 0xbe33f37e, 0xbddfbef7, 0x3dc48e31, 0xbd4a3cab, 0x3d996560, 0x3dc04916, 
    0xbe29a4fd, 0xbe02fe7a, 0x3b230442, 0x3d55b423, 0x3d8328ed, 0x3e386df0, 0x3d566924, 0x3d178454, 
    0x3cb452b3, 0xbe03643c, 0x3d8eac37, 0xbe09e06c, 0x3c712731, 0x3e58ed79, 0xbdd937ac, 0xbe03ada2, 
    0x3d32c20f, 0xbd22020c, 0x3d505e2c, 0xbc54f204, 0x3e2019a2, 0x3d950fb7, 0x3db47025, 0xbd9eb6cd, 
    0xbbdbe82f, 0xbd7e29b4, 0xbdbfd4db, 0xbdd3b2f0, 0x3d47780c, 0x3e41384f, 0x3d45336a, 0x3ccfb177, 
    0x3e0279c8, 0xbc8e00bd, 0x3d0c5471, 0xbde95a94, 0x3da0b9ae, 0x3e17fa90, 0xbe3afc05, 0xbde89191, 
    0x3d91f567, 0x3dc2696c, 0xbcdb8b48, 0xbdcbcacd, 0x3df414c9, 0x3da3931a, 0x3d223e27, 0x3bac2439, 
    0x3d5aeaed, 0x3dd76fef, 0x3e2dc484, 0x3de1f8c2, 0x3c5225db, 0xbe4dd7be, 0xbd1806a0, 0xbdb96207, 
    0xbdd9bc01, 0xbc2278fe, 0xbc414c36, 0x3e323ece, 0x3d3c446a, 0x3e07a5ea, 0xbc5c4f91, 0x3c8a644f, 
    0xbdcf2c4b, 0xbd90b258, 0xbe225c19, 0xbc3695ec, 0xbe3f5a1a, 0xba60bc57, 0x3dd7303c, 0xbc928a5e, 
    0x3e170bca, 0xbe48b7a8, 0xbd243b73, 0xbd814084, 0xbe22b02b, 0xbd3d1729, 0x3e061d44, 0xbd56ac93, 
    0xbe075028, 0xbd933d1f, 0x3dbc2b5d, 0x3e76fac3, 0x3c1e9043, 0x3c5ae9c4, 0x3d784f45, 0x3e064ad3, 
    0x3ccfded2, 0xbdbc13cd, 0x3d5ef6fa, 0x3e050c9e, 0x3e486d75, 0x3cc0d1f1, 0xbde38140, 0xbdc28257, 
    0x3bc4cea1, 0x3d34dbf1, 0xbe053e0e, 0xbdba69ad, 0xbc81fae1, 0x3d07c820, 0xbd2f50db, 0xbd980dc9, 
    0x3ccb2240, 0xbda9691c, 0xbdf09a0c, 0xbe06f400, 0x3d620720, 0xbe16a13f, 0xbcd6c6a3, 0xbe012948, 
    0xbcb5e15f, 0xbd3003cb, 0x3dd04583, 0x3d9647eb, 0xbdb9f866, 0xbe0b2bd0, 0x3da4127c, 0x3d667294, 
    0xbcfcb207, 0xbe4ab50a, 0xbd921244, 0xbe01ae0f, 0xbd56ef44, 0xbd5845d5, 0x3b1247ba, 0xbcd3eb19, 
    0xbd9fbb5f, 0x3d0ec153, 0xbdd4f6ac, 0x3cb9034f, 0xbdea2859, 0xbd4b4e51, 0xbb8de57e, 0x3cad667a, 
    0xbe2e1c34, 0x3e42324f, 0xbb1034d1, 0x3d8bf03c, 0xbcc2f708, 0x3d6e8cdb, 0xbe036244, 0x3db7daf7, 
    0x3df7e598, 0x3d0199df, 0xbd188655, 0xbc211a0d, 0xbda7f108, 0xbd7d61b5, 0xbd82e023, 0x3e199d0c, 
    0x3de12571, 0xbd81c3da, 0xbdbab8e9, 0xbde1606b, 0x3d5b74de, 0xbbd615bf, 0xbc9838f2, 0xbe59dd1e, 
    0x3da18a79, 0x3df5d906, 0x3d4c1548, 0xbe0491ab, 0x3c43bead, 0xbe1365d9, 0x3dad0331, 0xbe223c34, 
    0x3d614e57, 0xbdd46cad, 0xbd869486, 0xbe046c45, 0x3d49c0f9, 0xbc294925, 0x3d9fc9e9, 0x3d2ee31d, 
    0x3dcb29d9, 0x3e0c9702, 0x3d2a282c, 0xbd11f5e4, 0x3b48f1d7, 0xbdf45387, 0xbe1c45b1, 0xbdbe0140, 
    0x3d0757e6, 0x3d662781, 0xbcb1f3ed, 0x3dfce7ed, 0xbe2e1f57, 0xbd391415, 0x3d3e5e3a, 0xbccee4e3, 
    0xbbca4a3e, 0x3e0c9ea3, 0xbe113b42, 0xbcce29ee, 0xbe0c6260, 0x3e457b27, 0x3c21b626, 0xbc06949a, 
    0xbe3a1539, 0x3d2e91af, 0xbd2b7bf2, 0x3ddd07dc, 0xbe19b97e, 0x3dd23c34, 0x3e19d9fb, 0x3d15473c, 
    0xbe3a1694, 0xbc21a5c5, 0xbc97cffe, 0x3db28221, 0x3dafb19b, 0xbd3eaceb, 0xbde06d6f, 0xbb1826c6, 
    0xbcd50dd1, 0xbdd57efc, 0x3e39a115, 0xbda70529, 0xbcb306da, 0xbdc1b7ba, 0xbe00186b, 0xbe00c6ef, 
    0x3e348274, 0x3e540d26, 0x3bfabeab, 0x3e015bde, 0x3db2c610, 0xbe3ed2fd, 0x3dcc6a62, 0xbdbaa3cc, 
    0x3e0cff98, 0x3cdb2f0c, 0x3e0c62b7, 0x3c829d53, 0xbe0500f1, 0x3e2f732a, 0xbdb9d5c4, 0xbd0691b9, 
    0x3e127203, 0x3ddc3acd, 0xbd2c0888, 0x3e388e3c, 0x3da4c02a, 0x3cbcbdd8, 0xbdc62044, 0xbd1757b1, 
    0xbe276672, 0x3d7b14f7, 0xbd4a3b26, 0x3d7d4458, 0x3e73cf8c, 0xbddb37c6, 0x3d5f3989, 0xbe091b59, 
    0xbdcc103c, 0x3cc365b8, 0xbe283e25, 0x3e28745e, 0x3e2efd6f, 0x3de1d394, 0xbe3354c7, 0x3e0d9721, 
    0x3c32d96c, 0xbe1b69fd, 0xbbcd5d93, 0x3d6f6ac3, 0x3c353808, 0x3da0b279, 0x3dba6ec3, 0x3d940059, 
    0xbd6cf555, 0xbdcd2c69, 0xb9c2dbc7, 0x3d1a4945, 0xbd877895, 0x3d98739e, 0x3dfc8bc8, 0x3de6698d, 
    0x3b2f8617, 0xbc0cc0a6, 0x3c5c7cc1, 0x3c6495f3, 0xbc886355, 0xbccf0b70, 0xbd632963, 0xbd019aa4, 
    0xbd926eaa, 0xbd8533a3, 0xbcb3ec59, 0x3cf6375e, 0x3dd9d0d5, 0x3ce21cd5, 0xbd8716cd, 0x3da7b315, 
    0x3d4a0351, 0xbd70c284, 0xbda500f9, 0x3db895b6, 0x3d22c16c, 0xbd2a5ebf, 0xbd80847d, 0x3cb5427a, 
    0xbd8135c6, 0xbd65cf82, 0xbda35dc6, 0xbe02ce18, 0xbd1c02cf, 0xbcc05dae, 0xbc944990, 0xbdc51ae6, 
    0x3d4bba20, 0xbccd272b, 0x3d8b1216, 0x3c619737, 0x3b5f7523, 0x3cd96142, 0xbd322681, 0x3c9106a9, 
    0x3d7dacbc, 0x3c1c0de3, 0x3b7b50c1, 0x3c8d5501, 0xbc4f4d4a, 0x3d0fe7c7, 0x3c92f1a9, 0xbd1f9946, 
    0x3de16bb5, 0x3d8e09a0, 0xbba62f07, 0x3d852c7b, 0xbc11646a, 0xbd2abef0, 0x3dbd373b, 0x3c34e44b, 
    0xbde4f552, 0xbd315aa1, 0xbcaa6853, 0x3d51eed8, 0xbd8e4cf9, 0x3dd73e24, 0x3cc96704, 0xba7f1692, 
    0xbcf007ab, 0x3dbebb72, 0x3d48dbf7, 0x3db4e4d3, 0x3d5a999c, 0xbd3002f9, 0x3db55b45, 0xbbedee9b, 
    0xbc0d8de9, 0x3d53be2f, 0xbd31a481, 0x3d72d111, 0xbdb673d2, 0xbd9b9c54, 0xbd19a95d, 0xbd3db5d5, 
    0xbd3ec532, 0xbbeaf566, 0x3ccba8b7, 0x3d688ec7, 0xbc11418f, 0xbd525057, 0x3d9df8b2, 0xbdacc036, 
    0x3cc9720f, 0xbd604da8, 0xbd3039c2, 0xbd7f3d7d, 0x3d8ea54b, 0xbce8a68e, 0x3d4e01ea, 0xbd561c04, 
    0x3d3e998f, 0xbd76e4bb, 0x3c6b49be, 0xbd7220cd, 0x3dd1a1de, 0x3e090f64, 0xbdbbde5e, 0xbd8a4061, 
    0xbd91fbfb, 0x3d06a51b, 0x3dbf5025, 0x3d58a50d, 0x3dd213e5, 0x3dab7045, 0x3dc4382c, 0xbd8504e5, 
    0x3c9d6a8e, 0xbc857f54, 0x3e36b8e1, 0x3dbccc32, 0xbcdabd49, 0x3dca6894, 0xbdb10c97, 0x3d80f189, 
    0xbd869d78, 0x3dcefe81, 0xbda5684f, 0x3e005f20, 0xbd39fef4, 0x3db917bf, 0x3d90d18e, 0xbd01d88d, 
    0xbd0fe9ae, 0xbdc2e9cc, 0x3df9a908, 0xbcab5505, 0x3dcbed58, 0x3e2b13c4, 0xbd951f92, 0xbd153668, 
    0x3dc7dd69, 0x3dbc74bf, 0xbd3bc5c9, 0xbc2e8cad, 0xbe0098f1, 0xbd29279b, 0x3d97361f, 0x3d80b213, 
    0xbdf9d8d0, 0x3d88c17c, 0xbe02cff1, 0x3d50ad79, 0x3e3c3913, 0xbdaacb0e, 0x3dae5bba, 0xbcbcf503, 
    0x3d7243f7, 0xbd161597, 0xba8e2a81, 0xbdfd1c39, 0x3d36028b, 0x3d5fd0f2, 0xbe059190, 0x3dc8dcb7, 
    0x3e52b26f, 0x3cfb10da, 0x3ca12c71, 0xbddbf76a, 0x3df8beca, 0x3ca046dc, 0x3e00a6f2, 0xbdee08a0, 
    0xbdb6a3b5, 0x3e319797, 0x3dc84aa2, 0xbe4e74c3, 0xbe3ca10f, 0xbe5835de, 0x3df00491, 0x3b90e39b, 
    0xbc4c0864, 0xbc0447d9, 0xbaa39cd3, 0xbe2f8bcb, 0xbd4bd7fd, 0x3d4fa21f, 0xbd76cb50, 0x3ddffa23, 
    0xbca7b840, 0xbd2b2765, 0xbd8e3497, 0xbd676ebb, 0xbd0df21e, 0x3db242cd, 0xbe217bac, 0xbdaaa72a, 
    0x3db6f6b3, 0x3d92a372, 0xbd0ffa7a, 0xbd41a21e, 0xbe15fb7f, 0x3d4af2e7, 0xbe12c05e, 0x3b0586d2, 
    0x3c6575e5, 0x3da8d595, 0xbd13e2e5, 0xbd29eb38, 0x3dd35795, 0x3d64cf36, 0x3c015848, 0x3d1a4a92, 
    0xbe0f703d, 0x3d8d6e99, 0x3dcc0e4b, 0xbdd8675a, 0x3dad84d1, 0x3c43e40a, 0xbc82c358, 0xbcdd0071, 
    0x3d9425e0, 0xbde12525, 0xbda4b71a, 0xbdc6634d, 0x3db5b6c8, 0xbd3ee8ae, 0xbdf2a4ef, 0xbd2c0cd0, 
    0xbc46c6f1, 0xbd9f63ea, 0x3da7fc76, 0xbd27838f, 0x3e0b6d30, 0x3e22c0a7, 0x3d7c3031, 0xbdd81f2a, 
    0xbd9a0fd4, 0xbdb279c0, 0x3db9d749, 0xbe033aab, 0xbe2d5101, 0xbdc3b076, 0x3d03fb6b, 0xbe02eb2e, 
    0x3b0d5c0f, 0xbd43172b, 0xbdddba73, 0x3c47faea, 0xbde0048a, 0xbcc6d13a, 0xbd90789d, 0x3dd42313, 
    0x3e09e10d, 0xbd3dd6de, 0x3e120416, 0xbd98aecc, 0x3cc00bea, 0x3d0b6a24, 0xbd7d22cc, 0xbc142691, 
    0xbd93a789, 0xbddbd6a3, 0xbd6ea6d4, 0xbdc4beae, 0xbd11861b, 0x3dbeb164, 0xbd410326, 0x3db88427, 
    0xbe0c8189, 0xbe5b82af, 0x3d6c5326, 0x3de2af75, 0x3dedeebc, 0x3d6c3de1, 0x3c5d9724, 0x3dafc117, 
    0xbd5c38b7, 0xbe13eb33, 0xbd476e96, 0x3d51aa15, 0x3c3726d7, 0xbd5fc34a, 0xbe089869, 0xbe1bc1f6, 
    0x3d816569, 0x3db7791d, 0xbca272ae, 0xbde54d2a, 0x3daac5fa, 0x3dc36c9f, 0x3e319053, 0xbcf9f32d, 
    0x3cf1803a, 0x3d834195, 0x3da94b30, 0x3dd3c191, 0x3d592166, 0xbd4fb088, 0xbd96ca8d, 0xbddb4ac1, 
    0x3dad6e69, 0x3dc68ee3, 0x3ce7a923, 0x3df47351, 0xbd7711dd, 0x3d922769, 0xbd6902fd, 0x3d14b9bc, 
    0x3b3bfb50, 0xbd156693, 0xbc4bac6b, 0x3d6f0296, 0xbc0b02ad, 0xbd178eaf, 0xbda6dced, 0x3dba044c, 
    0xbde72aad, 0xbd7629b3, 0xbd06accb, 0xbdb251b6, 0xbd8e690d, 0x3d9d27b0, 0xbd07fd24, 0xbdbe005e, 
    0xbdd2fb6a, 0x3d033f76, 0xbdbbc138, 0x3d277ac2, 0xbd703e6b, 0x3cf93c32, 0x3d9dd7ef, 0xbc2de3fb, 
    0x3d80c21e, 0x3d351f97, 0x3a38b10f, 0x3de4f8d9, 0xbdb43aa2, 0xbd720c8b, 0x3dd3ca17, 0x3deaf1e4, 
    0x3db1bedf, 0x3d32c32d, 0x3d589876, 0x3db1cc17, 0xbda82fd3, 0xba0bf27a, 0x3d6f4f26, 0xbd6fc03a, 
    0xbdc1ccaf, 0xbe131939, 0xbce66280, 0xbc583283, 0xbd9d045b, 0x3def4a9b, 0x3db5737d, 0x3cc9c0b7, 
    0x3da72ed5, 0xbc9694a7, 0xbd2546f7, 0xbdab2010, 0xbbb9f3e8, 0xbdf32b5a, 0x3d949dd5, 0x3b348db6, 
    0x3d4f1fe4, 0x3ca6d09d, 0xbdb3c8d4, 0x3cc167d8, 0xbd6ce95b, 0xbd5d9065, 0x3ddefc71, 0x3d3caf6e, 
    0x3d8f5c76, 0x3d9a5204, 0xbe164388, 0x3d52b893, 0xbd5a39e9, 0xbd9dcefb, 0x3da49fb5, 0xbd8beb0f, 
    0xbd5a89b9, 0x3c05657f, 0x3da7a574, 0xbd039847, 0x3c5fbdf7, 0x3d208edf, 0xbd8ab4d7, 0xbc8854ba, 
    0xbd6058b4, 0xbcfb84a0, 0x3dedaead, 0x3dcff2ce, 0x3dd4d0f4, 0xbdb692ad, 0x3d2efa08, 0x3d34d5df, 
    0x3d936174, 0x3d1bac39, 0xbd4bc0f8, 0x3d586b6f, 0x3d4b356f, 0xba7e1b98, 0xbdb87b0a, 0xbda7abf8, 
    0xbd7733a0, 0x3d9f9904, 0x3c951d7a, 0xbd1f6e15, 0x3da970a6, 0xbda60385, 0x3dc18c35, 0x3ab7554c, 
    0xbd85f394, 0x3c85906f, 0x3c5e43e0, 0xbd125792, 0x3d99fa60, 0x3d683474, 0x3ae9576d, 0xbdb5dad1, 
    0xbd8d963d, 0x3dccfb0f, 0xbd834759, 0x3d92b5f8, 0x3ddf4b51, 0xbc0de518, 0x3d0e86ab, 0x3d320ff9, 
    0x3cbdb7d9, 0xbdac293f, 0xbc9b5f1a, 0x3d1b7f3c, 0xbbac1d98, 0xbd56fe06, 0xbd955649, 0xbd80945b, 
    0xbbb26b7c, 0xbda6cf7a, 0xbc36fa13, 0x3d40e97a, 0x3d6e7a49, 0x3b81c17d, 0x3bf0f780, 0xbd06e2b4, 
    0x3c5aa475, 0x3d4b32f1, 0x3b5e67af, 0x3d778171, 0xbd2cb9ca, 0xbd511f5c, 0x3d846fb9, 0x3bdd4a00, 
    0x3d797314, 0x3d3d32f1, 0x3ce53fc5, 0x3dcff141, 0x3d54b73e, 0xbaa40f0f, 0xbd87be5b, 0xbd9ae0cb, 
    0xbd64fa9c, 0xbd209594, 0xbd44e24f, 0x3c72858c, 0x3d7c6e06, 0x3d0aaa48, 0xbd42a42e, 0xbd105f81, 
    0xbc1901b3, 0xbd8b6c26, 0x3db04689, 0xbc49ae30, 0x3dc2f053, 0x3d0a9a88, 0x3ca8b59f, 0x3d68ddb6, 
    0x3d23d6dd, 0x3da1e684, 0xbd7a8eec, 0xbc859677, 0xbd5e4a4b, 0xbd48505e, 0x3dab2a9b, 0x3d260ab2, 
    0x3c66c36b, 0x3dcd72a2, 0x3dcde6ab, 0x3cbcf8ad, 0x3cfa4747, 0xbd2d3312, 0xbc8b5280, 0xbc76c6e7, 
    0x3d59b9b8, 0xbd86c14f, 0xbcc30d7a, 0xbda41cbd, 0xbccaa613, 0xbbe6a156, 0xbca3f043, 0x3caa3b72, 
    0x3d9643f3, 0xbd479e99, 0x3c146695, 0x3cfe72e4, 0x3d6f7d8c, 0xbd4fd5e7, 0xbd669862, 0xbd81d06d, 
    0x3d5513b1, 0x3e26f9a7, 0x3d8c8a38, 0xbc589c62, 0xbc329f33, 0x3d65b31b, 0x3d849760, 0xbbd8af4f, 
    0x3c0e9e93, 0xbc44ca5a, 0x3d89eb75, 0x3c00d0c2, 0xbc85c6a8, 0xbcbd3fb0, 0x3dbb54f5, 0x3dadcd89, 
    0x3ce6fc8f, 0x3cb09981, 0x3d717786, 0x3cfd6d1a, 0x3caf0295, 0xbdce2c40, 0x3d710087, 0xbdf40c30, 
    0x3cc6e969, 0xb9a75db2, 0x3ce61c50, 0xbd0c8ad0, 0x397f9d9b, 0x3d13996d, 0xbd654ccf, 0x3d1f9262, 
    0x3c7549c5, 0x3dce72b3, 0x3b817729, 0xbd04e2a6, 0xbd7e41fc, 0x3c78afa5, 0x3d379795, 0x3dc3e413, 
    0x3dca151c, 0x3e026b33, 0xbc87d6bc, 0x3dcb7795, 0x3daf1f71, 0x3d14932a, 0x3db3a4bd, 0x3ce6f579, 
    0xbd883487, 0xbcadd1a3, 0xbcbb01f3, 0xbd8fa363, 0xbc4e5160, 0xbdebfab5, 0xbd063b97, 0xbdbeaffb, 
    0xbd4d8a53, 0xbd1c3941, 0xbcc29d29, 0xbe17a98b, 0x3c5a470e, 0xbdad069a, 0x3bc44752, 0x3bdcfb3b, 
    0x3c489ab6, 0x3e09f2ea, 0x3d2e378c, 0x3bf8ed4d, 0xbb005f65, 0xbdb1d51d, 0xbb93b4b2, 0x3d65123a, 
    0xbdbc644c, 0xbd86c21c, 0x3d8c0c6b, 0xbccf556c, 0xbd925806, 0x3db62e2c, 0xbdefd654, 0xbd84084c, 
    0xbd880480, 0x3d871170, 0x3e10a7d1, 0xbe0cf540, 0x3d47aba5, 0x3c495b50, 0x3c6048b6, 0x3d4fd10e, 
    0xbe0c3e17, 0xbdec14c2, 0x3c99ee47, 0xbd27243e, 0x3de856e1, 0x3d9a0410, 0xbdb34df4, 0x3b8cc531, 
    0xbdb98155, 0x3c972025, 0xbdaeae90, 0xbd0f45e5, 0xbd82812c, 0x3db5b585, 0xbdda4259, 0x3e16e626, 
    0xbd7f979f, 0x3b275074, 0x3d49ac14, 0xbda8131c, 0x3bc5ab6a, 0x3c965be0, 0x3ccc8889, 0x3db29094, 
    0xbddce85e, 0x3e19bfc0, 0xbc884f54, 0xbe276f73, 0x3d9c19f8, 0xbe1f3bc3, 0xbdb956d3, 0xbd077bfb, 
    0x3c87f10f, 0xbc442e1d, 0x3c9b0418, 0x3cc3559a, 0x3b484df2, 0x3da59736, 0xbe322f0e, 0xbdcf7700, 
    0x3c79c202, 0x3c43e8b7, 0xbc86b96d, 0x3d4d7529, 0xbd823a72, 0xbd441373, 0x3e079488, 0xbda55a79, 
    0x3dd364f4, 0x3d06b7f3, 0x3d00bf23, 0xbccde107, 0x3e571700, 0xbbdd3b48, 0xbe1739d5, 0xbe041e05, 
    0xbe1061f3, 0xbe033067, 0x3dc28496, 0xbba38f39, 0x3cd56c1c, 0x3dc51f51, 0xbd133cf5, 0xbdc05c9d, 
    0xbb84a535, 0x3cd9e87e, 0x3dd7aa8a, 0x3dab7487, 0xbe4d8b5b, 0xbd652e83, 0xbdc05a25, 0xbe090ff7, 
    0x3de8ca1c, 0x3ce1c123, 0x3c87ad1b, 0xbce3eac7, 0x3e293e0f, 0xbd93121a, 0x3dac2adb, 0xbdf26df6
};

static const uint32_t _K41[] = {
    0xbe1665f9, 0xbf28514f, 0xbf0c6cec, 0xbf233b39, 0x3e895b10, 0x3e210678, 0x3e47d6f2, 0xbf3362cc, 
    0x3f660aec, 0x3eaafd0d, 0x3f5d5212, 0x3eae8498, 0x3c95cefa, 0x3e7a3852, 0x3d46a10c, 0x3eef22c3, 
    0x3d330788, 0xbe62d294, 0x3d87491f, 0x3e81e9b9, 0xbf1cea3d, 0xbe3dca8d, 0x3e3e6376, 0x3e93a862, 
    0x3f8a0db0, 0x3dae6941, 0xbe4781a7, 0xbdd926fa, 0x3e09040c, 0xbc678131, 0xbf213de9, 0x3dfcacdd
};

static const uint32_t _K47[] = {
    0x3ec6b37b, 0xbd8db394, 0x3ddf52f1, 0xbe24b833, 0x3d376a71, 0x3cc96c40, 0x3ce6fd2e, 0xbde4ab02, 
    0x3e8a0bb4, 0x3ef41870, 0x3efa409c, 0xbe9589a8, 0xbd98ddd0, 0xbdd93b68, 0x3eb17b44, 0xbe3d785f, 
    0x3e3ef1d7, 0x3e18bde1, 0x3ef9b871, 0xbe967698, 0xbe826efc, 0x3eccf883, 0x3ead0013, 0x3e06233c, 
    0x3e9df615, 0xbe9a6fbd, 0x3efcc934, 0x3ec1f662, 0x3e11a0a2, 0xbe6cf72f, 0x3e913d0a, 0x3f033f67, 
    0xbe45fcfd, 0xbeb42c5f, 0x3ed5fb40, 0x3db53ec1, 0x3db39a2a, 0xbf046f95, 0x3e743e79, 0x3d820b5f, 
    0xbdd8bd5a, 0xbea8f5dc, 0xbe11a982, 0x3de92073, 0x3e0d5fd4, 0xbef98ddc, 0x3db87aa3, 0x3e9cf71a, 
    0xbea70bbb, 0xbe779d5a, 0xbe7756ba, 0xbd8c896c, 0x3d2c05be, 0x3e8915ec, 0x3ebc779b, 0xbd0384ba, 
    0x3b832f07, 0xbd796cfb, 0xbebbe27c, 0xbe5fcbfb, 0xbd49785e, 0x3ea4c49e, 0x3e8b97bc, 0xbecceea7, 
    0x3e2261e6, 0x3e6b12d3, 0x3ec99f50, 0x3e1c9338, 0xbe8e79cb, 0xbe29d7dd, 0xbe4e69da, 0x3e31a00c, 
    0xbeaba922, 0x3e0c3490, 0xbe55842a, 0xbe691d64, 0x3e410fe9, 0xbebda531, 0xbb74954e, 0xbea24692, 
    0x3e96b62e, 0xbd08afa4, 0xbe0ff5bc, 0xbe833732, 0x3e4f7280, 0xbf149d06, 0xbebaf34b, 0xbde0507e, 
    0xbeb183d1, 0x3dc6037e, 0x3e0c4bfd, 0xbdb68aba, 0xbde1e75a, 0x3e34d0bd, 0x3e85b2e0, 0x3de9a9e3, 
    0xbe8e012b, 0xbe0994a9, 0x3d59996b, 0xbe383781, 0xbe0e8d04, 0x3ea69122, 0x3d80e1d9, 0xbe8050e0, 
    0x3e973101, 0xbe836db4, 0x3ea22a9f, 0xbd543c6f, 0x3e5d5502, 0x3d67a1ee, 0xbe5bd87d, 0x3db47c49, 
    0x3e8ef102, 0xbea7a53f, 0x3e1b4f41, 0xbdd18cc0, 0xbe6997f9, 0xbe7f0559, 0xbe6d3dfc, 0xbe21f905, 
    0x3e928ce2, 0x3e4060e1, 0x3db0ba58, 0xbee63797, 0x3ed8d234, 0x3d5b6c16, 0x3d4d3536, 0xbeaee92d
};

static const uint32_t _K49[] = {
    0x3d94b395, 0xbd3dc877, 0xbdd2c6c0, 0xbcd2deb9
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[22] (88 bytes) 
#define _K18             ((float *)_K18)                     // f32[12,3,20] (2880 bytes) 
#define _K21             ((float *)_K21)                     // f32[12] (48 bytes) 
#define _K25             ((float *)_K25)                     // f32[24,3,12] (3456 bytes) 
#define _K27             ((float *)_K27)                     // f32[24,3,24] (6912 bytes) 
#define _K30             ((float *)_K30)                     // f32[24] (96 bytes) 
#define _K36             ((float *)_K36)                     // f32[32,3,24] (9216 bytes) 
#define _K38             ((float *)_K38)                     // f32[32,3,32] (12288 bytes) 
#define _K4              ((float *)_K4)                      // f32[512] (2048 bytes) 
#define _K41             ((float *)_K41)                     // f32[32] (128 bytes) 
#define _K47             ((float *)_K47)                     // f32[4,32] (512 bytes) 
#define _K49             ((float *)_K49)                     // f32[4] (16 bytes) 
#define _K16             ((int8_t *)(_state + 0x000008d0))   // s8[5008] (5008 bytes) 
#define _K3              ((int8_t *)(_state + 0x00000000))   // s8[2256] (2256 bytes) 
#define _K7              ((int *)(_state + 0x00001c60))      // s32[24] (96 bytes) 
#define _K8              ((float *)(_state + 0x00001cc0))    // f32[258] (1032 bytes) 
#define _K10             ((float *)(_buffer + 0x00000000))   // f32[257] (1028 bytes) 
#define _K12             ((float *)(_buffer + 0x00000404))   // f32[20] (80 bytes) 
#define _K13             ((float *)(_buffer + 0x00000000))   // f32[20] (80 bytes) 
#define _K14             ((float *)(_buffer + 0x00000050))   // f32[20] (80 bytes) 
#define _K15             ((float *)(_buffer + 0x00000000))   // f32[60,20] (4800 bytes) 
#define _K17             ((float *)(_buffer + 0x000012c0))   // f32[30,12] (1440 bytes) 
#define _K19             ((float *)(_buffer + 0x00000000))   // f32[30,12] (1440 bytes) 
#define _K2              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K23             ((float *)(_buffer + 0x000005a0))   // f32[30,12] (1440 bytes) 
#define _K24             ((float *)(_buffer + 0x00000b40))   // f32[30,24] (2880 bytes) 
#define _K26             ((float *)(_buffer + 0x00000000))   // f32[30,24] (2880 bytes) 
#define _K28             ((float *)(_buffer + 0x00000b40))   // f32[30,24] (2880 bytes) 
#define _K32             ((float *)(_buffer + 0x00000000))   // f32[30,24] (2880 bytes) 
#define _K34             ((float *)(_buffer + 0x00000b40))   // f32[15,24] (1440 bytes) 
#define _K35             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K37             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K43             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K45             ((float *)(_buffer + 0x00000000))   // f32[7,32] (896 bytes) 
#define _K46             ((float *)(_buffer + 0x00000380))   // f32[32] (128 bytes) 
#define _K48             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K5              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
#define _K50             ((float *)(_buffer + 0x00000010))   // f32[4] (16 bytes) 
#define _K6              ((float *)(_buffer + 0x00001000))   // f32[257,2] (2056 bytes) 
#define _K9              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 

// Represents a Circular Buffer
// https://en.wikipedia.org/wiki/Circular_buffer
typedef struct
{
	char *buf;
	int size;		// total bytes allocated in *buf
	int used;		// current bytes used in buffer.
	int read;
	int write;
} cbuffer_t;

#define CBUFFER_SUCCESS 0
#define CBUFFER_NOMEM -1

// Reset instance (clear buffer)
static inline void cbuffer_reset(cbuffer_t* buf) {
	buf->read = 0;
	buf->write = 0;
	buf->used = 0;
}

// Initializes a cbuffer handle with given memory and size.
static inline void cbuffer_init(cbuffer_t *dest, void *mem, int size) {
	dest->buf = mem;
	dest->size = size;
	cbuffer_reset(dest);
}

// Returns the number of free bytes in buffer.
static inline int cbuffer_get_free(cbuffer_t *buf) {
	return buf->size - buf->used;
}

// Returns the number of used bytes in buffer.
static inline int cbuffer_get_used(cbuffer_t *buf) {
	return buf->used;
}

// Writes given data to buffer.
// Returns CBUFFER_SUCCESS or CBUFFER_NOMEM if out of memory.
static inline int cbuffer_enqueue(cbuffer_t *buf, const void *data, int data_size) {
	int free = cbuffer_get_free(buf);

	// Out of memory?
	if (free < data_size)
		return CBUFFER_NOMEM;

	// Is the data split in the end?
	if (buf->write + data_size > buf->size) {
		int first_size = buf->size - buf->write;
		memcpy(buf->buf + buf->write, data, first_size);
		memcpy(buf->buf, ((char *)data) + first_size, data_size - first_size);
	}
	else {
		memcpy(buf->buf + buf->write, data, data_size);
	}
	buf->write += data_size;
	if (buf->write >= buf->size)
		buf->write -= buf->size;

	buf->used += data_size;
	return CBUFFER_SUCCESS;
}

// Advances the read pointer by given count.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data
static inline int cbuffer_advance(cbuffer_t *buf, int count) {
	int used = cbuffer_get_used(buf);

	if (count > used)
		return CBUFFER_NOMEM;

	buf->read += count;
	if (buf->read >= buf->size)
		buf->read -= buf->size;

	// Reset pointers to 0 if buffer is empty in order to avoid unwanted wrapps.
	if (buf->read == buf->write) {
		buf->read = 0;
		buf->write = 0;
	}

	buf->used -= count;
	return CBUFFER_SUCCESS;
}

// Returns a read pointer at given offset and  
// updates *can_read_bytes (if not NULL) with the number of bytes that can be read.
// 
// Note! Byte count written to can_read_bytes can be less than what cbuffer_get_used() returns.
// This happens when the read has to be split in two since it's a circular buffer.
static inline void* cbuffer_readptr(cbuffer_t* buf, int offset, int* can_read_bytes)
{
	int a0 = buf->read + offset;
	if (a0 >= buf->size)
		a0 -= buf->size;
	if (can_read_bytes != NULL)
	{
		int c0 = buf->used;
		if (a0 + c0 > buf->size)
			c0 = buf->size - a0;

		*can_read_bytes = c0;
	}
	return buf->buf + a0;
}

// Copies given "count" bytes to the "dst" buffer without advancing the buffer read offset.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data.
static inline int cbuffer_copyto(cbuffer_t *buf, void *dst, int count, int offset) {
	
	if (count > cbuffer_get_used(buf))
		return CBUFFER_NOMEM;

	int can_read_bytes;
	void* src_ptr = cbuffer_readptr(buf, offset, &can_read_bytes);

	int c0 = (count < can_read_bytes) ? count : can_read_bytes;
	memcpy(dst, src_ptr, c0);
	
	int c1 = count - c0;

	if (c1 > 0)
		memcpy(((char *)dst) + c0, buf->buf, c1);

	return CBUFFER_SUCCESS;
}

typedef struct {
	cbuffer_t data_buffer;			// Circular Buffer for features
	int input_size;					// Number of bytes in each input chunk
	int window_count;				// Number of input chunks in output window.
} fixwin_t;

#ifdef _MSC_VER
static_assert(sizeof(fixwin_t) <= 64, "Data structure 'fixwin_t' is too big");
#endif

#define IPWIN_RET_SUCCESS 0
#define IPWIN_RET_NODATA -1
#define IPWIN_RET_NOMEM -2

/*
* Try to dequeue a window.
*
* @param handle Pointer to an initialized handle.
* @param dst Pointer where to write window.
* @param stride_count Number of items (of size handle->input_size) to stride window.
* @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NODATA (-1) is no data is available.
*/
static inline int fixwin_dequeuef32(void* restrict handle, void* restrict dst, int stride_count)
{
	fixwin_t* fep = (fixwin_t*)handle;

	const int stride_bytes = stride_count * fep->input_size;
	const int size = fep->window_count * fep->input_size;
	if (cbuffer_get_used(&fep->data_buffer) >= size) {
		if (cbuffer_copyto(&fep->data_buffer, dst, size, 0) != 0)
			return IPWIN_RET_NOMEM;

		if (cbuffer_advance(&fep->data_buffer, stride_bytes) != 0)
			return IPWIN_RET_NOMEM;

		return IPWIN_RET_SUCCESS;
	}
	return IPWIN_RET_NODATA;
}

static inline void hannmul_f32(const float* restrict a, const float* restrict b, float* restrict result, int d0, int d1)
{
	for (int j = 0; j < d1; j++) {
		for (int i = 0; i < d0; i++) {
			*result++ = *a++ * b[i];
		}
	}
}

static void makeipt(int nw, int *ip)
{
    int j, l, m, m2, p, q;
    
    ip[2] = 0;
    ip[3] = 16;
    m = 2;
    for (l = nw; l > 32; l >>= 2) {
        m2 = m << 1;
        q = m2 << 3;
        for (j = m; j < m2; j++) {
            p = ip[j] << 2;
            ip[m + j] = p;
            ip[m2 + j] = p + q;
        }
        m = m2;
    }
}

static void makewt(int nw, int *ip, float *w)
{
    void makeipt(int nw, int *ip);
    int j, nwh, nw0, nw1;
    float delta, wn4r, wk1r, wk1i, wk3r, wk3i;
    
    ip[0] = nw;
    ip[1] = 1;
    if (nw > 2) {
        nwh = nw >> 1;
        delta = atan(1.0) / nwh;
        wn4r = cos(delta * nwh);
        w[0] = 1;
        w[1] = wn4r;
        if (nwh == 4) {
            w[2] = cos(delta * 2);
            w[3] = sin(delta * 2);
        } else if (nwh > 4) {
            makeipt(nw, ip);
            w[2] = 0.5 / cos(delta * 2);
            w[3] = 0.5 / cos(delta * 6);
            for (j = 4; j < nwh; j += 4) {
                w[j] = cos(delta * j);
                w[j + 1] = sin(delta * j);
                w[j + 2] = cos(3 * delta * j);
                w[j + 3] = -sin(3 * delta * j);
            }
        }
        nw0 = 0;
        while (nwh > 2) {
            nw1 = nw0 + nwh;
            nwh >>= 1;
            w[nw1] = 1;
            w[nw1 + 1] = wn4r;
            if (nwh == 4) {
                wk1r = w[nw0 + 4];
                wk1i = w[nw0 + 5];
                w[nw1 + 2] = wk1r;
                w[nw1 + 3] = wk1i;
            } else if (nwh > 4) {
                wk1r = w[nw0 + 4];
                wk3r = w[nw0 + 6];
                w[nw1 + 2] = 0.5 / wk1r;
                w[nw1 + 3] = 0.5 / wk3r;
                for (j = 4; j < nwh; j += 4) {
                    wk1r = w[nw0 + 2 * j];
                    wk1i = w[nw0 + 2 * j + 1];
                    wk3r = w[nw0 + 2 * j + 2];
                    wk3i = w[nw0 + 2 * j + 3];
                    w[nw1 + j] = wk1r;
                    w[nw1 + j + 1] = wk1i;
                    w[nw1 + j + 2] = wk3r;
                    w[nw1 + j + 3] = wk3i;
                }
            }
            nw0 = nw1;
        }
    }
}

static void makect(int nc, int *ip, float *c)
{
    int j, nch;
    float delta;
    
    ip[1] = nc;
    if (nc > 1) {
        nch = nc >> 1;
        delta = atan(1.0) / nch;
        c[0] = cos(delta * nch);
        c[nch] = 0.5 * c[0];
        for (j = 1; j < nch; j++) {
            c[j] = 0.5 * cos(delta * j);
            c[nc - j] = 0.5 * sin(delta * j);
        }
    }
}

static void bitrv2(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    }
}

static void bitrv216(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x7r, x7i, x8r, x8i, x10r, x10i, 
        x11r, x11i, x12r, x12i, x13r, x13i, x14r, x14i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    a[2] = x8r;
    a[3] = x8i;
    a[4] = x4r;
    a[5] = x4i;
    a[6] = x12r;
    a[7] = x12i;
    a[8] = x2r;
    a[9] = x2i;
    a[10] = x10r;
    a[11] = x10i;
    a[14] = x14r;
    a[15] = x14i;
    a[16] = x1r;
    a[17] = x1i;
    a[20] = x5r;
    a[21] = x5i;
    a[22] = x13r;
    a[23] = x13i;
    a[24] = x3r;
    a[25] = x3i;
    a[26] = x11r;
    a[27] = x11i;
    a[28] = x7r;
    a[29] = x7i;
}

static void bitrv208(float *a)
{
    float x1r, x1i, x3r, x3i, x4r, x4i, x6r, x6i;
    
    x1r = a[2];
    x1i = a[3];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x6r = a[12];
    x6i = a[13];
    a[2] = x4r;
    a[3] = x4i;
    a[6] = x6r;
    a[7] = x6i;
    a[8] = x1r;
    a[9] = x1i;
    a[12] = x3r;
    a[13] = x3i;
}

static void cftf1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = a[j + 3] + a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = a[j + 3] - a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = a[j0 - 1] + a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = a[j0 - 1] - a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = a[j0 - 1] + a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = a[j0 - 1] - a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i + x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = a[j0 + 3] + a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = a[j0 + 3] - a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i + x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftmdl1(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    k = 0;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
    }
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
}

static void cftmdl2(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, kr, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y2r, y2i;
    
    mh = n >> 3;
    m = 2 * mh;
    wn4r = w[1];
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] - a[j2 + 1];
    x0i = a[1] + a[j2];
    x1r = a[0] + a[j2 + 1];
    x1i = a[1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wn4r * (x2r - x2i);
    y0i = wn4r * (x2i + x2r);
    a[0] = x0r + y0r;
    a[1] = x0i + y0i;
    a[j1] = x0r - y0r;
    a[j1 + 1] = x0i - y0i;
    y0r = wn4r * (x3r - x3i);
    y0i = wn4r * (x3i + x3r);
    a[j2] = x1r - y0i;
    a[j2 + 1] = x1i + y0r;
    a[j3] = x1r + y0i;
    a[j3 + 1] = x1i - y0r;
    k = 0;
    kr = 2 * m;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        kr -= 4;
        wd1i = w[kr];
        wd1r = w[kr + 1];
        wd3i = w[kr + 2];
        wd3r = w[kr + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] - a[j2 + 1];
        x0i = a[j + 1] + a[j2];
        x1r = a[j] + a[j2 + 1];
        x1i = a[j + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wk1r * x0r - wk1i * x0i;
        y0i = wk1r * x0i + wk1i * x0r;
        y2r = wd1r * x2r - wd1i * x2i;
        y2i = wd1r * x2i + wd1i * x2r;
        a[j] = y0r + y2r;
        a[j + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wk3r * x1r + wk3i * x1i;
        y0i = wk3r * x1i - wk3i * x1r;
        y2r = wd3r * x3r + wd3i * x3i;
        y2i = wd3r * x3i - wd3i * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] - a[j2 + 1];
        x0i = a[j0 + 1] + a[j2];
        x1r = a[j0] + a[j2 + 1];
        x1i = a[j0 + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wd1i * x0r - wd1r * x0i;
        y0i = wd1i * x0i + wd1r * x0r;
        y2r = wk1i * x2r - wk1r * x2i;
        y2i = wk1i * x2i + wk1r * x2r;
        a[j0] = y0r + y2r;
        a[j0 + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wd3i * x1r + wd3r * x1i;
        y0i = wd3i * x1i - wd3r * x1r;
        y2r = wk3i * x3r + wk3r * x3i;
        y2i = wk3i * x3i - wk3r * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
    }
    wk1r = w[m];
    wk1i = w[m + 1];
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] - a[j2 + 1];
    x0i = a[j0 + 1] + a[j2];
    x1r = a[j0] + a[j2 + 1];
    x1i = a[j0 + 1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wk1r * x0r - wk1i * x0i;
    y0i = wk1r * x0i + wk1i * x0r;
    y2r = wk1i * x2r - wk1r * x2i;
    y2i = wk1i * x2i + wk1r * x2r;
    a[j0] = y0r + y2r;
    a[j0 + 1] = y0i + y2i;
    a[j1] = y0r - y2r;
    a[j1 + 1] = y0i - y2i;
    y0r = wk1i * x1r - wk1r * x1i;
    y0i = wk1i * x1i + wk1r * x1r;
    y2r = wk1r * x3r - wk1i * x3i;
    y2i = wk1r * x3i + wk1i * x3r;
    a[j2] = y0r - y2r;
    a[j2 + 1] = y0i - y2i;
    a[j3] = y0r + y2r;
    a[j3 + 1] = y0i + y2i;
}

static int cfttree(int n, int j, int k, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    int i, isplt, m;
    
    if ((k & 3) != 0) {
        isplt = k & 1;
        if (isplt != 0) {
            cftmdl1(n, &a[j - n], &w[nw - (n >> 1)]);
        } else {
            cftmdl2(n, &a[j - n], &w[nw - n]);
        }
    } else {
        m = n;
        for (i = k; (i & 3) == 0; i >>= 2) {
            m <<= 2;
        }
        isplt = i & 1;
        if (isplt != 0) {
            while (m > 128) {
                cftmdl1(m, &a[j - m], &w[nw - (m >> 1)]);
                m >>= 2;
            }
        } else {
            while (m > 128) {
                cftmdl2(m, &a[j - m], &w[nw - m]);
                m >>= 2;
            }
        }
    }
    return isplt;
}

static void cftf161(float *a, float *w)
{
    float wn4r, wk1r, wk1i, 
        x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    x0r = a[0] + a[16];
    x0i = a[1] + a[17];
    x1r = a[0] - a[16];
    x1i = a[1] - a[17];
    x2r = a[8] + a[24];
    x2i = a[9] + a[25];
    x3r = a[8] - a[24];
    x3i = a[9] - a[25];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y4r = x0r - x2r;
    y4i = x0i - x2i;
    y8r = x1r - x3i;
    y8i = x1i + x3r;
    y12r = x1r + x3i;
    y12i = x1i - x3r;
    x0r = a[2] + a[18];
    x0i = a[3] + a[19];
    x1r = a[2] - a[18];
    x1i = a[3] - a[19];
    x2r = a[10] + a[26];
    x2i = a[11] + a[27];
    x3r = a[10] - a[26];
    x3i = a[11] - a[27];
    y1r = x0r + x2r;
    y1i = x0i + x2i;
    y5r = x0r - x2r;
    y5i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y9r = wk1r * x0r - wk1i * x0i;
    y9i = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y13r = wk1i * x0r - wk1r * x0i;
    y13i = wk1i * x0i + wk1r * x0r;
    x0r = a[4] + a[20];
    x0i = a[5] + a[21];
    x1r = a[4] - a[20];
    x1i = a[5] - a[21];
    x2r = a[12] + a[28];
    x2i = a[13] + a[29];
    x3r = a[12] - a[28];
    x3i = a[13] - a[29];
    y2r = x0r + x2r;
    y2i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y10r = wn4r * (x0r - x0i);
    y10i = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y14r = wn4r * (x0r + x0i);
    y14i = wn4r * (x0i - x0r);
    x0r = a[6] + a[22];
    x0i = a[7] + a[23];
    x1r = a[6] - a[22];
    x1i = a[7] - a[23];
    x2r = a[14] + a[30];
    x2i = a[15] + a[31];
    x3r = a[14] - a[30];
    x3i = a[15] - a[31];
    y3r = x0r + x2r;
    y3i = x0i + x2i;
    y7r = x0r - x2r;
    y7i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y11r = wk1i * x0r - wk1r * x0i;
    y11i = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y15r = wk1r * x0r - wk1i * x0i;
    y15i = wk1r * x0i + wk1i * x0r;
    x0r = y12r - y14r;
    x0i = y12i - y14i;
    x1r = y12r + y14r;
    x1i = y12i + y14i;
    x2r = y13r - y15r;
    x2i = y13i - y15i;
    x3r = y13r + y15r;
    x3i = y13i + y15i;
    a[24] = x0r + x2r;
    a[25] = x0i + x2i;
    a[26] = x0r - x2r;
    a[27] = x0i - x2i;
    a[28] = x1r - x3i;
    a[29] = x1i + x3r;
    a[30] = x1r + x3i;
    a[31] = x1i - x3r;
    x0r = y8r + y10r;
    x0i = y8i + y10i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    x3r = y9r - y11r;
    x3i = y9i - y11i;
    a[16] = x0r + x2r;
    a[17] = x0i + x2i;
    a[18] = x0r - x2r;
    a[19] = x0i - x2i;
    a[20] = x1r - x3i;
    a[21] = x1i + x3r;
    a[22] = x1r + x3i;
    a[23] = x1i - x3r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x3r = wn4r * (x0r - x0i);
    x3i = wn4r * (x0i + x0r);
    x0r = y4r - y6i;
    x0i = y4i + y6r;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    a[8] = x0r + x2r;
    a[9] = x0i + x2i;
    a[10] = x0r - x2r;
    a[11] = x0i - x2i;
    a[12] = x1r - x3i;
    a[13] = x1i + x3r;
    a[14] = x1r + x3i;
    a[15] = x1i - x3r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    x3r = y1r - y3r;
    x3i = y1i - y3i;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x0r - x2r;
    a[3] = x0i - x2i;
    a[4] = x1r - x3i;
    a[5] = x1i + x3r;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftf162(float *a, float *w)
{
    float wn4r, wk1r, wk1i, wk2r, wk2i, wk3r, wk3i, 
        x0r, x0i, x1r, x1i, x2r, x2i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    wk3r = w[6];
    wk3i = -w[7];
    wk2r = w[8];
    wk2i = w[9];
    x1r = a[0] - a[17];
    x1i = a[1] + a[16];
    x0r = a[8] - a[25];
    x0i = a[9] + a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y0r = x1r + x2r;
    y0i = x1i + x2i;
    y4r = x1r - x2r;
    y4i = x1i - x2i;
    x1r = a[0] + a[17];
    x1i = a[1] - a[16];
    x0r = a[8] + a[25];
    x0i = a[9] - a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y8r = x1r - x2i;
    y8i = x1i + x2r;
    y12r = x1r + x2i;
    y12i = x1i - x2r;
    x0r = a[2] - a[19];
    x0i = a[3] + a[18];
    x1r = wk1r * x0r - wk1i * x0i;
    x1i = wk1r * x0i + wk1i * x0r;
    x0r = a[10] - a[27];
    x0i = a[11] + a[26];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y1r = x1r + x2r;
    y1i = x1i + x2i;
    y5r = x1r - x2r;
    y5i = x1i - x2i;
    x0r = a[2] + a[19];
    x0i = a[3] - a[18];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[10] + a[27];
    x0i = a[11] - a[26];
    x2r = wk1r * x0r + wk1i * x0i;
    x2i = wk1r * x0i - wk1i * x0r;
    y9r = x1r - x2r;
    y9i = x1i - x2i;
    y13r = x1r + x2r;
    y13i = x1i + x2i;
    x0r = a[4] - a[21];
    x0i = a[5] + a[20];
    x1r = wk2r * x0r - wk2i * x0i;
    x1i = wk2r * x0i + wk2i * x0r;
    x0r = a[12] - a[29];
    x0i = a[13] + a[28];
    x2r = wk2i * x0r - wk2r * x0i;
    x2i = wk2i * x0i + wk2r * x0r;
    y2r = x1r + x2r;
    y2i = x1i + x2i;
    y6r = x1r - x2r;
    y6i = x1i - x2i;
    x0r = a[4] + a[21];
    x0i = a[5] - a[20];
    x1r = wk2i * x0r - wk2r * x0i;
    x1i = wk2i * x0i + wk2r * x0r;
    x0r = a[12] + a[29];
    x0i = a[13] - a[28];
    x2r = wk2r * x0r - wk2i * x0i;
    x2i = wk2r * x0i + wk2i * x0r;
    y10r = x1r - x2r;
    y10i = x1i - x2i;
    y14r = x1r + x2r;
    y14i = x1i + x2i;
    x0r = a[6] - a[23];
    x0i = a[7] + a[22];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[14] - a[31];
    x0i = a[15] + a[30];
    x2r = wk1i * x0r - wk1r * x0i;
    x2i = wk1i * x0i + wk1r * x0r;
    y3r = x1r + x2r;
    y3i = x1i + x2i;
    y7r = x1r - x2r;
    y7i = x1i - x2i;
    x0r = a[6] + a[23];
    x0i = a[7] - a[22];
    x1r = wk1i * x0r + wk1r * x0i;
    x1i = wk1i * x0i - wk1r * x0r;
    x0r = a[14] + a[31];
    x0i = a[15] - a[30];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y11r = x1r + x2r;
    y11i = x1i + x2i;
    y15r = x1r - x2r;
    y15i = x1i - x2i;
    x1r = y0r + y2r;
    x1i = y0i + y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    a[0] = x1r + x2r;
    a[1] = x1i + x2i;
    a[2] = x1r - x2r;
    a[3] = x1i - x2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r - y3r;
    x2i = y1i - y3i;
    a[4] = x1r - x2i;
    a[5] = x1i + x2r;
    a[6] = x1r + x2i;
    a[7] = x1i - x2r;
    x1r = y4r - y6i;
    x1i = y4i + y6r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[8] = x1r + x2r;
    a[9] = x1i + x2i;
    a[10] = x1r - x2r;
    a[11] = x1i - x2i;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[12] = x1r - x2i;
    a[13] = x1i + x2r;
    a[14] = x1r + x2i;
    a[15] = x1i - x2r;
    x1r = y8r + y10r;
    x1i = y8i + y10i;
    x2r = y9r - y11r;
    x2i = y9i - y11i;
    a[16] = x1r + x2r;
    a[17] = x1i + x2i;
    a[18] = x1r - x2r;
    a[19] = x1i - x2i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    a[20] = x1r - x2i;
    a[21] = x1i + x2r;
    a[22] = x1r + x2i;
    a[23] = x1i - x2r;
    x1r = y12r - y14i;
    x1i = y12i + y14r;
    x0r = y13r + y15i;
    x0i = y13i - y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[24] = x1r + x2r;
    a[25] = x1i + x2i;
    a[26] = x1r - x2r;
    a[27] = x1i - x2i;
    x1r = y12r + y14i;
    x1i = y12i - y14r;
    x0r = y13r - y15i;
    x0i = y13i + y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[28] = x1r - x2i;
    a[29] = x1i + x2r;
    a[30] = x1r + x2i;
    a[31] = x1i - x2r;
}

static void cftf081(float *a, float *w)
{
    float wn4r, x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    x0r = a[0] + a[8];
    x0i = a[1] + a[9];
    x1r = a[0] - a[8];
    x1i = a[1] - a[9];
    x2r = a[4] + a[12];
    x2i = a[5] + a[13];
    x3r = a[4] - a[12];
    x3i = a[5] - a[13];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y2r = x0r - x2r;
    y2i = x0i - x2i;
    y1r = x1r - x3i;
    y1i = x1i + x3r;
    y3r = x1r + x3i;
    y3i = x1i - x3r;
    x0r = a[2] + a[10];
    x0i = a[3] + a[11];
    x1r = a[2] - a[10];
    x1i = a[3] - a[11];
    x2r = a[6] + a[14];
    x2i = a[7] + a[15];
    x3r = a[6] - a[14];
    x3i = a[7] - a[15];
    y4r = x0r + x2r;
    y4i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    x2r = x1r + x3i;
    x2i = x1i - x3r;
    y5r = wn4r * (x0r - x0i);
    y5i = wn4r * (x0r + x0i);
    y7r = wn4r * (x2r - x2i);
    y7i = wn4r * (x2r + x2i);
    a[8] = y1r + y5r;
    a[9] = y1i + y5i;
    a[10] = y1r - y5r;
    a[11] = y1i - y5i;
    a[12] = y3r - y7i;
    a[13] = y3i + y7r;
    a[14] = y3r + y7i;
    a[15] = y3i - y7r;
    a[0] = y0r + y4r;
    a[1] = y0i + y4i;
    a[2] = y0r - y4r;
    a[3] = y0i - y4i;
    a[4] = y2r - y6i;
    a[5] = y2i + y6r;
    a[6] = y2r + y6i;
    a[7] = y2i - y6r;
}

static void cftf082(float *a, float *w)
{
    float wn4r, wk1r, wk1i, x0r, x0i, x1r, x1i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    y0r = a[0] - a[9];
    y0i = a[1] + a[8];
    y1r = a[0] + a[9];
    y1i = a[1] - a[8];
    x0r = a[4] - a[13];
    x0i = a[5] + a[12];
    y2r = wn4r * (x0r - x0i);
    y2i = wn4r * (x0i + x0r);
    x0r = a[4] + a[13];
    x0i = a[5] - a[12];
    y3r = wn4r * (x0r - x0i);
    y3i = wn4r * (x0i + x0r);
    x0r = a[2] - a[11];
    x0i = a[3] + a[10];
    y4r = wk1r * x0r - wk1i * x0i;
    y4i = wk1r * x0i + wk1i * x0r;
    x0r = a[2] + a[11];
    x0i = a[3] - a[10];
    y5r = wk1i * x0r - wk1r * x0i;
    y5i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] - a[15];
    x0i = a[7] + a[14];
    y6r = wk1i * x0r - wk1r * x0i;
    y6i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] + a[15];
    x0i = a[7] - a[14];
    y7r = wk1r * x0r - wk1i * x0i;
    y7i = wk1r * x0i + wk1i * x0r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y4r + y6r;
    x1i = y4i + y6i;
    a[0] = x0r + x1r;
    a[1] = x0i + x1i;
    a[2] = x0r - x1r;
    a[3] = x0i - x1i;
    x0r = y0r - y2r;
    x0i = y0i - y2i;
    x1r = y4r - y6r;
    x1i = y4i - y6i;
    a[4] = x0r - x1i;
    a[5] = x0i + x1r;
    a[6] = x0r + x1i;
    a[7] = x0i - x1r;
    x0r = y1r - y3i;
    x0i = y1i + y3r;
    x1r = y5r - y7r;
    x1i = y5i - y7i;
    a[8] = x0r + x1r;
    a[9] = x0i + x1i;
    a[10] = x0r - x1r;
    a[11] = x0i - x1i;
    x0r = y1r + y3i;
    x0i = y1i - y3r;
    x1r = y5r + y7r;
    x1i = y5i + y7i;
    a[12] = x0r - x1i;
    a[13] = x0i + x1r;
    a[14] = x0r + x1i;
    a[15] = x0i - x1r;
}

static void cftleaf(int n, int isplt, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 512) {
        cftmdl1(128, a, &w[nw - 64]);
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
        cftmdl2(128, &a[128], &w[nw - 128]);
        cftf161(&a[128], &w[nw - 8]);
        cftf162(&a[160], &w[nw - 32]);
        cftf161(&a[192], &w[nw - 8]);
        cftf162(&a[224], &w[nw - 32]);
        cftmdl1(128, &a[256], &w[nw - 64]);
        cftf161(&a[256], &w[nw - 8]);
        cftf162(&a[288], &w[nw - 32]);
        cftf161(&a[320], &w[nw - 8]);
        cftf161(&a[352], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(128, &a[384], &w[nw - 64]);
            cftf161(&a[480], &w[nw - 8]);
        } else {
            cftmdl2(128, &a[384], &w[nw - 128]);
            cftf162(&a[480], &w[nw - 32]);
        }
        cftf161(&a[384], &w[nw - 8]);
        cftf162(&a[416], &w[nw - 32]);
        cftf161(&a[448], &w[nw - 8]);
    } else {
        cftmdl1(64, a, &w[nw - 32]);
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
        cftmdl2(64, &a[64], &w[nw - 64]);
        cftf081(&a[64], &w[nw - 8]);
        cftf082(&a[80], &w[nw - 8]);
        cftf081(&a[96], &w[nw - 8]);
        cftf082(&a[112], &w[nw - 8]);
        cftmdl1(64, &a[128], &w[nw - 32]);
        cftf081(&a[128], &w[nw - 8]);
        cftf082(&a[144], &w[nw - 8]);
        cftf081(&a[160], &w[nw - 8]);
        cftf081(&a[176], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(64, &a[192], &w[nw - 32]);
            cftf081(&a[240], &w[nw - 8]);
        } else {
            cftmdl2(64, &a[192], &w[nw - 64]);
            cftf082(&a[240], &w[nw - 8]);
        }
        cftf081(&a[192], &w[nw - 8]);
        cftf082(&a[208], &w[nw - 8]);
        cftf081(&a[224], &w[nw - 8]);
    }
}

static void cftrec4(int n, float *a, int nw, float *w)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m;
    
    m = n;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
}

static void cftfx41(int n, float *a, int nw, float *w)
{
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 128) {
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
    } else {
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
    }
}

static void cftf040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r - x3i;
    a[3] = x1i + x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftx020(float *a)
{
    float x0r, x0i;
    
    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}

#ifdef USE_CDFT_THREADS
struct cdft_arg_st {
    int n0;
    int n;
    float *a;
    int nw;
    float *w;
};
typedef struct cdft_arg_st cdft_arg_t;


static void cftrec4_th(int n, float *a, int nw, float *w)
{
    void *cftrec1_th(void *p);
    void *cftrec2_th(void *p);
    int i, idiv4, m, nthread;
    cdft_thread_t th[4];
    cdft_arg_t ag[4];
    
    nthread = 2;
    idiv4 = 0;
    m = n >> 1;
    if (n > CDFT_4THREADS_BEGIN_N) {
        nthread = 4;
        idiv4 = 1;
        m >>= 1;
    }
    for (i = 0; i < nthread; i++) {
        ag[i].n0 = n;
        ag[i].n = m;
        ag[i].a = &a[i * m];
        ag[i].nw = nw;
        ag[i].w = w;
        if (i != idiv4) {
            cdft_thread_create(&th[i], cftrec1_th, &ag[i]);
        } else {
            cdft_thread_create(&th[i], cftrec2_th, &ag[i]);
        }
    }
    for (i = 0; i < nthread; i++) {
        cdft_thread_wait(th[i]);
    }
}


static void *cftrec1_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    m = n0;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}


static void *cftrec2_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl2(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    k = 1;
    m = n0;
    while (m > 512) {
        m >>= 2;
        k <<= 2;
        cftmdl2(m, &a[n - m], &w[nw - m]);
    }
    cftleaf(m, 0, &a[n - m], nw, w);
    k >>= 1;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}
#endif /* USE_CDFT_THREADS */

static void cftfsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2(int n, int *ip, float *a);
    void bitrv216(float *a);
    void bitrv208(float *a);
    void cftf1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftf1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216(a);
        } else {
            cftf081(a, w);
            bitrv208(a);
        }
    } else if (n == 8) {
        cftf040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void bitrv2conj(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += nm;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    }
}

static void bitrv216neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i, x8r, x8i, 
        x9r, x9i, x10r, x10i, x11r, x11i, x12r, x12i, 
        x13r, x13i, x14r, x14i, x15r, x15i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x9r = a[18];
    x9i = a[19];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    x15r = a[30];
    x15i = a[31];
    a[2] = x15r;
    a[3] = x15i;
    a[4] = x7r;
    a[5] = x7i;
    a[6] = x11r;
    a[7] = x11i;
    a[8] = x3r;
    a[9] = x3i;
    a[10] = x13r;
    a[11] = x13i;
    a[12] = x5r;
    a[13] = x5i;
    a[14] = x9r;
    a[15] = x9i;
    a[16] = x1r;
    a[17] = x1i;
    a[18] = x14r;
    a[19] = x14i;
    a[20] = x6r;
    a[21] = x6i;
    a[22] = x10r;
    a[23] = x10i;
    a[24] = x2r;
    a[25] = x2i;
    a[26] = x12r;
    a[27] = x12i;
    a[28] = x4r;
    a[29] = x4i;
    a[30] = x8r;
    a[31] = x8i;
}

static void bitrv208neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    a[2] = x7r;
    a[3] = x7i;
    a[4] = x3r;
    a[5] = x3i;
    a[6] = x5r;
    a[7] = x5i;
    a[8] = x1r;
    a[9] = x1i;
    a[10] = x6r;
    a[11] = x6i;
    a[12] = x2r;
    a[13] = x2i;
    a[14] = x4r;
    a[15] = x4i;
}

static void cftb1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = -a[1] - a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = -a[1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    a[j2] = x1r + x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r - x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = -a[j + 1] - a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = -a[j + 1] + a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = -a[j + 3] - a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = -a[j + 3] + a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i - x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = -a[j0 + 1] - a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = -a[j0 + 1] + a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = -a[j0 - 1] - a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = -a[j0 - 1] + a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i - x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = -a[j0 - 1] - a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = -a[j0 - 1] + a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i - x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = -a[j0 + 1] - a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = -a[j0 + 1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = -a[j0 + 3] - a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = -a[j0 + 3] + a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i - x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftb040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
}

static void cftbsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2conj(int n, int *ip, float *a);
    void bitrv216neg(float *a);
    void bitrv208neg(float *a);
    void cftb1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftb040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftb1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2conj(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216neg(a);
        } else {
            cftf081(a, w);
            bitrv208neg(a);
        }
    } else if (n == 8) {
        cftb040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void rftfsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rftbsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rdft(int n, int isgn, float *a, int *ip, float *w)
{
    void makewt(int nw, int *ip, float *w);
    void makect(int nc, int *ip, float *c);
    void cftfsub(int n, float *a, int *ip, int nw, float *w);
    void cftbsub(int n, float *a, int *ip, int nw, float *w);
    void rftfsub(int n, float *a, int nc, float *c);
    void rftbsub(int n, float *a, int nc, float *c);
    int nw, nc;
    float xi;
    
    nw = ip[0];
    if (n > (nw << 2)) {
        nw = n >> 2;
        makewt(nw, ip, w);
    }
    nc = ip[1];
    if (n > (nc << 2)) {
        nc = n >> 2;
        makect(nc, ip, w + nw);
    }
    if (isgn >= 0) {
        if (n > 4) {
            cftfsub(n, a, ip, nw, w);
            rftfsub(n, a, nc, w + nw);
        } else if (n == 4) {
            cftfsub(n, a, ip, nw, w);
        }
        xi = a[0] - a[1];
        a[0] += a[1];
        a[1] = xi;
    } else {
        a[1] = 0.5 * (a[0] - a[1]);
        a[0] -= a[1];
        if (n > 4) {
            rftbsub(n, a, nc, w + nw);
            cftbsub(n, a, ip, nw, w);
        } else if (n == 4) {
            cftbsub(n, a, ip, nw, w);
        }
    }
}

// input array (any shape >= 1D)
// output array (shape = input.shape.replace(axis, n).insert(0,2))
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void rdft_ndim_f32(
    const float* restrict input, 
    float* restrict output, 
    int d0, int d1, int d2,
    int* restrict temp_ip, float* restrict temp_w, float* restrict temp_a)
{
    void rdft(int n, int isgn, float* a, int* ip, float* w);

    int d3 = d0 * d1;
    int d_out = (d1 >> 1) + 1;

    for (int k = 0; k < d2; k++)
    {
        int dk = k * d3;
        int dm = k * 2 * d_out * d0;
        for (int i = 0; i < d0; i++)
        {                	           
            for (int j = 0; j < d1; j++)
            {
                temp_a[j] = input[dk + j * d0 + i];
            }
            rdft(d1, 1, temp_a, temp_ip, temp_w);

            for (int m = 2; m < d1; m+=2)
            {
                int index = (m * d0) + 2 * i + dm;
                output[index] = temp_a[m];
                output[index + 1] = -temp_a[m + 1];
            }
            int beta = dm + 2 * i;
            output[beta] = temp_a[0];
            output[beta + 1] = 0;
            output[beta + d3] = temp_a[1];
            output[beta + d3 + 1] = 0;
        }
    }
}

static inline float __norm_f32(const float* input, int step, int count)
{
	float sum = 0;
	for (int j = 0; j < count; j++) {
		float item = input[j * step];
		sum += item * item;
	}
	return sqrtf(sum);
}

// input array (any shape >= 2D)
// output array (same shape as input array except with axis removed)
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void norm_f32(const float* restrict input, int d0, int d1, int d2, float* restrict output)
{
	const int d3 = d0 * d1;

	for (int k = 0; k < d2; k++) {
		int k3 = k * d3;
		int k0 = k * d0;
		for (int i = 0; i < d0; i++) {			
			*(output + i + k0) = __norm_f32(input + i + k3, d0, d1);
		}
	}
}

static inline float __mel_f32(const float* restrict input, const int* restrict filter_points, int filter)
{
	int n0 = filter_points[filter];
	int n1 = filter_points[filter+1];
	int n2 = filter_points[filter+2];
	int c0 = n1 - n0;
	int c1 = n2 - n1;
	float sum = 0;
	
	for (int i = 0; i <= c0; i++) {
		float rate = i / (float)c0;
		float value = input[i + n0];
		sum += value * rate;
	}

	for (int i = 1; i <= c1; i++) {
		float rate = i / (float)c1;
		float value = input[i + n1];
		sum += value * (1.0 - rate);
	}

	return sum;
}

// input array (any shape >= 1D)
// output array (same shape as input array except with 0 replaced with num_filter)
// size = input.shape.size(0)
// slot = input.shape.slot(0)
static inline void mel_f32(const float* restrict input, const int* restrict filter_points, int size, int slot, int num_filter, float* restrict output)
{	
	for (int k = 0; k < slot; k++) {
		const float *ip = input + k * size;
		for (int i = 0; i < num_filter; i++) {
			*output++ = __mel_f32(ip, filter_points, i);
		}
	}
}

static inline void clip_f32(const float* restrict input, int count, float min, float max, float* restrict output)
{	
	for (int i = 0; i < count; i++) {
		float value = input[i];
		if (value > max)
			value = max;
		if (value < min)
			value = min;

		output[i] = value;
	}
}

static inline void loge_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		*result++ = logf(*x++);
	}
}

/**
 * Enqueue handle->input_size values from given *data pointer to internal window buffer.
 *
 * @param handle Pointer to an initialized handle.
 * @param data Data to enqueue.
 * @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NOMEM (-2) if internal buffer is out of memory.
 */
static inline int fixwin_enqueuef32(void* restrict handle, const void* restrict data)
{
	fixwin_t* fep = (fixwin_t*)handle;

	if (cbuffer_enqueue(&fep->data_buffer, data, fep->input_size) != 0)
		return IPWIN_RET_NOMEM;

	return IPWIN_RET_SUCCESS;
}

static inline float mac_f32(const float* restrict a, const float* restrict b, int count)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		sum += *a++ * *b++;
	}
	return sum;
}

static inline void conv1d_flat_f32(
	const float* restrict input,
	const float* restrict weight,
	float* restrict output,
	int top,
	int bottom,
	int n_output_rows,
	int filters,
	int strides,
	int kernel_size)
{
	for (int i = 0; i < n_output_rows; i++) {
		const float* wp = weight;		// Weight matrix
		const float* bp = input;		// Input matrix
		const int step = i * strides;	// Row size
		int len = kernel_size;			// Normally do one kernel

		int skip = top - step;			// Pad top?
		if (skip > 0) {
			len -= skip;				// Trim kernel length
			wp += skip;					// Advance kernel
		}
		else {						// No top padding,
			bp -= skip;					// Rollback input
		}

		skip = step + len - bottom;		// Pad bottom?
		if (skip > 0)
			len -= skip;				// Just cut the kernel at end

		float* op = output + i * filters;
		for (int j = 0; j < filters; j++) {
			*op++ = mac_f32(wp + j * kernel_size, bp, len);
		}
	}
}

static inline void add_f32(
	const float* restrict a,
	const float* restrict b,
	int l, int g1, int m, int g2, int r,
	float* restrict output)
{
	int index = 0;
	for (int x = 0; x < l; x++) {
		for (int i = 0; i < g1; i++) {
			for (int y = 0; y < m; y++) {
				for (int j = 0; j < g2; j++) {
					for (int z = 0; z < r; z++) {
						output[index] = a[index] + b[x * m * r + y * r + z];
						index++;
					}
				}
			}
		}
	}
}

static inline void relu_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		const float value = *x++;
		*result++ = value > 0 ? value : 0;
	}
}

static inline float maxpool1d_f32_max(const float *restrict x, int ncols, int pool_size)
{
    float max = -FLT_MAX;
    for (int i = 0; i < pool_size; i++) {
        const float value = *(x + i * ncols);
        if (value > max)
            max = value;
    }
    return max;
}

static inline void maxpool1d_f32_row(const float* restrict x, int pool_size, int ncols, float* restrict result)
{
    for (int i = 0; i < ncols; i++) {
        const float* xp = x + i;
        *result++ = maxpool1d_f32_max(xp, ncols, pool_size);
    }
}

static inline void maxpool1d_valid_f32(
    const float* restrict input,
    int pool_size,
    int strides,
    int ncols,
    int n_output_rows,
    float* restrict result)
{
    int input_pointer_step = ncols * strides;

    for (int i = 0; i < n_output_rows; i++) {
        const float* input_current = input + (i * input_pointer_step);
        float* rp = result + (i * ncols);
        maxpool1d_f32_row(input_current, pool_size, ncols, rp);
    }
}

static inline float _globav1d_f32_mean(const float *restrict x, int nchannel, int nsteps)
{
	float mean = 0.0;
	for (int i = 0; i < nsteps; i++) {
		const float value = *(x + i * nchannel);
		mean = mean + value;
	}
	mean = mean/(float)nsteps;
	return mean;
}

static inline void globav1d_f32(const float *restrict x, int nsteps, int nchannel, float *restrict result)
{
	// Loop over all channels
	for (int i = 0; i < nchannel; i++) {
		const float* xp = x + i;
		*result++ = _globav1d_f32_mean(xp, nchannel, nsteps);
	}
}

static inline void dott_f32(const float *restrict a, const float *restrict b, float *restrict out, int d0, int d1, int d2)
{
	for (int i = 0; i < d2; i++) {
		float* op = out;
		for (int j = 0; j < d1; j++) {
			*op++ = mac_f32(a + j * d0, b, d0);
		}
		out += d1;
		b += d0;
	}
}

static inline void softmax_f32(const float* restrict x, int count, float* restrict result)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		float value = expf(x[i]);
		sum += value;
		result[i] = value;
	}
	for (int i = 0; i < count; i++) {
		result[i] /= sum;
	}
}

/**
* Initializes a fixwin sampler handle.
*
* @param handle Pointer to a preallocated memory area of fixwin_handle_size() bytes to initialize.
*
* @param input_size Number of bytes to enqueue.
* @param window_count Number of items (of size input_size) in each window
*/
static inline void fixwin_initf32(void* restrict handle, int input_size, int window_count)
{
	fixwin_t* fep = (fixwin_t*)handle;
	fep->input_size = input_size;
	fep->window_count = window_count;

	char* mem = ((char*)handle) + sizeof(fixwin_t);

	int data_buffer = input_size * window_count;
	
	cbuffer_init(&fep->data_buffer, mem, data_buffer);
}

#define __RETURN_ERROR(_exp) do { int __ret = (_exp); if(__ret < 0) return __ret; } while(0)
#define __RETURN_ERROR_BREAK_EMPTY(_exp) {  int __ret = (_exp); if(__ret == -1) break; if(__ret < 0) return __ret;  } 

int IMAI_dequeue(float *restrict data_out) {    
    while(1) {
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K3, _K2, 160));
        hannmul_f32(_K2, _K4, _K5, 512, 1);
        rdft_ndim_f32(_K5, _K6, 1, 512, 1, _K7, _K8, _K9);
        norm_f32(_K6, 1, 2, 257, _K10);
        mel_f32(_K10, _K11, 257, 1, 20, _K12);
        clip_f32(_K12, 20, 0.000316227766016, 3.40282347E+38, _K13);
        loge_f32(_K13, 20, _K14);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K16, _K14));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K16, _K15, 33));
    conv1d_flat_f32(_K15, _K18, _K17, 0, 1200, 30, 12, 40, 60);
    add_f32(_K17, _K21, 1, 1, 1, 30, 12, _K19);
    relu_f32(_K19, 360, _K23);
    conv1d_flat_f32(_K23, _K25, _K24, 12, 372, 30, 24, 12, 36);
    conv1d_flat_f32(_K24, _K27, _K26, 24, 744, 30, 24, 24, 72);
    add_f32(_K26, _K30, 1, 1, 1, 30, 24, _K28);
    relu_f32(_K28, 720, _K32);
    maxpool1d_valid_f32(_K32, 2, 2, 24, 15, _K34);
    conv1d_flat_f32(_K34, _K36, _K35, 24, 384, 15, 32, 24, 72);
    conv1d_flat_f32(_K35, _K38, _K37, 32, 512, 15, 32, 32, 96);
    add_f32(_K37, _K41, 1, 1, 1, 15, 32, _K39);
    relu_f32(_K39, 480, _K43);
    maxpool1d_valid_f32(_K43, 2, 2, 32, 7, _K45);
    globav1d_f32(_K45, 7, 32, _K46);
    dott_f32(_K47, _K46, _K48, 32, 4, 1);
    add_f32(_K48, _K49, 1, 1, 1, 1, 4, _K50);
    softmax_f32(_K50, 4, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K3, data_in));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K3, 4, 512);
    fixwin_initf32(_K16, 80, 60);
}

