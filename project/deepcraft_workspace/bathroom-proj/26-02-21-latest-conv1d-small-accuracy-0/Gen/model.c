/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 11:36:14 UTC. Any changes will be lost.
* 
* Model ID  7e653984-e1ea-435d-a354-6ce66ec345e3
* 
* Memory    Size                      Efficiency
* Buffers   6240 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  24856 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-accuracy-0
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
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,20,12]
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
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,12,24]
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
* Convolution 1D                 [30,24]         float      dequeue
*    filters = 24
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,24,24]
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
* Dropout                        [15,24]         float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [24]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[24,4]
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
* (ACC) Accuracy 94.385 %
* (F1S) F1 Score 94.261 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                2368              854              837             1034
* (FN) False Negative or Incorrect Negative Prediction               41               11                0              251
* (FP) False Positive or Incorrect Positive Prediction              255                1                5               42
* (TN) True Negative or Correct Negative Prediction                2732             4530             4554             4069
* (TPR) True Positive Rate or Sensitivity, Recall               98.30 %          98.73 %         100.00 %          80.47 %
* (TNR) True Negative Rate or Specificity, Selectivity          91.46 %          99.98 %          99.89 %          98.98 %
* (PPV) Positive Predictive Value or Precision                  90.28 %          99.88 %          99.41 %          96.10 %
* (NPV) Negative Predictive Value                               98.52 %          99.76 %         100.00 %          94.19 %
* (FNR) False Negative Rate or Miss Rate                         1.70 %           1.27 %           0.00 %          19.53 %
* (FPR) False Positive Rate or Fall-Out                          8.54 %           0.02 %           0.11 %           1.02 %
* (FDR) False Discovery Rate                                     9.72 %           0.12 %           0.59 %           3.90 %
* (FOR) False Omission Rate                                      1.48 %           0.24 %           0.00 %           5.81 %
* (F1S) F1 Score                                                94.12 %          99.30 %          99.70 %          87.59 %
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
    0xbd954fa1, 0x3a743967, 0x3bf1abf5, 0x3d85ba78, 0x3d8e6fb3, 0xbca51a4e, 0xbd4ab4fc, 0xbc8a76ee, 
    0xbcd4aa82, 0xbc877557, 0xbd962fcf, 0xbd80ca83, 0xbd891458, 0x3c33fefb, 0xbcc639ae, 0xbc84df91, 
    0x3c97dffe, 0x3d095354, 0x3c23dc2b, 0xbd8e2280, 0xbdca56df, 0xbb701916, 0xbb6ad297, 0x3d1f1b1e, 
    0x3d6dd062, 0xbd3b493d, 0xbc83e5cb, 0xbc74806a, 0xbcb15d74, 0x3b8dcdab, 0xbd5333fd, 0xbd6810cb, 
    0xbd185b0b, 0x3c94d41e, 0xbc24a4ee, 0x3bd15e39, 0x3d32b154, 0x3d954bc3, 0x3cef5477, 0xbda1fda6, 
    0xbd9aec7d, 0x3ab663d3, 0x3c398587, 0x3d6eb93d, 0x3d8edd0c, 0xbd2b3d38, 0xbceb8cd1, 0xbc2ed22d, 
    0xbd3420c9, 0x3cb9d5d9, 0xbd5ba34c, 0xbc8c62af, 0xbcb49a32, 0x3ca1e3aa, 0x3c99a0e3, 0x3c8aa00f, 
    0x3d682c89, 0x3d98f8fa, 0x3c911fcb, 0xbd916228, 0xbdb14837, 0xbb828e4d, 0x3c874aad, 0x3dcf3fd6, 
    0x3d94a767, 0xbcf6feb9, 0xbc5dd624, 0x3cec8969, 0x392b1ef0, 0x3ca86804, 0xbcb65f83, 0x39eda046, 
    0x3ceeced0, 0x3dac4a72, 0x3d144d85, 0x3d9ce536, 0x3d5f5a60, 0x3de72901, 0x3d459ef3, 0xbd80d399, 
    0xbd62daf5, 0xbce80538, 0x3a7090c9, 0x3dd227db, 0x3dca9221, 0xbc5db143, 0xbc222830, 0x3d0e5537, 
    0xbc34bb5f, 0x3d849418, 0x3c79a603, 0x3c1a558c, 0x3bf2ba25, 0x3db012eb, 0x3d1a61f2, 0x3d8c1e7d, 
    0x3d4aa56e, 0x3de62c47, 0x3d848b11, 0xbd6dca5f, 0x3db8e7fd, 0x3cd6e333, 0xbd7e49b6, 0x3e033775, 
    0xbc9542bc, 0x3e039a47, 0xb92a28ca, 0xbe411061, 0xbc8e917a, 0xbe073d0a, 0xbcb79ed0, 0xbd827e1c, 
    0xbda2f326, 0xbdd3db62, 0xbd8279e4, 0xbe5a0b04, 0xbdcb10cf, 0xbe60cf1d, 0x3c0277f5, 0x3e440040, 
    0xbc428e01, 0x3d9699cd, 0xbde5ebea, 0x3d9009c0, 0xbd661b77, 0x3d451f08, 0xbcd7f8a2, 0xbddd9efc, 
    0xbdb1ae43, 0xbdc733a8, 0xbb05750e, 0xbc52ff8d, 0xbd88d475, 0xbe031b05, 0xbd44cef5, 0xbe591b26, 
    0xbde2f070, 0xbe45a050, 0x3c8d1071, 0x3e2a6ab0, 0xbd52cf4e, 0x3dd49462, 0xbe032075, 0xbc357265, 
    0xbdc1ab36, 0x3da2eaba, 0xbdfd8c60, 0xbe0c8d15, 0xbd921c4d, 0xbe14f743, 0x3c82b9a9, 0x3d015599, 
    0xb96830ef, 0xbd3efd0d, 0x3d5698d9, 0xbddbe8a9, 0xbd1c46a2, 0xbe15ee6b, 0x3cddb90b, 0x3e671fef, 
    0x3d7aa183, 0xbc53d5da, 0xbdb63368, 0x3ccfd791, 0xbd9da9ec, 0x3d60a498, 0xbd0d99bd, 0xbe2b031b, 
    0xbd91e2ca, 0xbdb71f39, 0x3d5d1d31, 0x3e211d9b, 0x3e2839d8, 0x3dd54129, 0x3e5ceaad, 0x3c59ac24, 
    0x3dd7a851, 0xbd5d91f9, 0x3e2f4349, 0x3ea9655d, 0x3cc0b0b6, 0xbb3252b2, 0xbd4ca3c0, 0x3ca2af9a, 
    0xbdd274b3, 0x3d6c1966, 0xbe2230ae, 0xbe378280, 0xbce52e05, 0xbe2f5e18, 0x3dbc2c6b, 0x3da3b7d3, 
    0x3dd096cc, 0x3d656b56, 0x3e82a692, 0xbba0febb, 0x3de19a03, 0x3d284fc8, 0x3e0b02bc, 0x3eb67055, 
    0xbc65c262, 0x3d07be56, 0x3ca5defb, 0xbc8e17f5, 0x3bc94a8a, 0x3cafbdf3, 0x3d3d3743, 0x3ca182a6, 
    0xbb2d2c2a, 0x3cbdbdb0, 0x3c8a8ba0, 0x3b20a118, 0xbc13e3b8, 0xbc8784eb, 0xbc8a1ed8, 0xbb6a4816, 
    0x3ca8e6d0, 0x3c2c936c, 0xbc2d3f70, 0xbc28835b, 0xbc9ee185, 0x3cf7f53a, 0x3b30d300, 0xbcded120, 
    0xbb0141d2, 0x3c3ea227, 0x3d48280a, 0x3c4af815, 0xbc6991b4, 0x3ca89d35, 0x3c08c03a, 0xbc66490d, 
    0xbb923589, 0xbc748965, 0xbcb33522, 0xbc64748c, 0x3bc76223, 0x3a9812f6, 0xbc89c80a, 0xbc92bd41, 
    0xbcb6aa54, 0x3d008138, 0x3a95b893, 0xbca27b20, 0x3c03edb4, 0x3c6d605b, 0x3d311b14, 0x3cb50322, 
    0xbc98b951, 0x3c24345f, 0x3c18b5bd, 0xbc20c8a0, 0xbc262de9, 0xbcc9c6aa, 0xbca5533d, 0xbb6ffea9, 
    0x3c81ffa0, 0x3c89c201, 0xbc32c320, 0xbc92737e, 0xbd06cb34, 0x3c3a1695, 0xbc04d47f, 0xbd0e294a, 
    0xb9deb637, 0x3c796ce2, 0x3d0edcd7, 0x3ca6c6ee, 0xbc95fe2f, 0x3c0565df, 0xbc6ff9cf, 0xbc6c2ffa, 
    0xbc5bf39a, 0xbcf8edd3, 0xbd05b4e6, 0xbc394774, 0x3c8e7e0c, 0xba9e5dc3, 0xbcddf4ad, 0xbcdb3ae4, 
    0xbcad5382, 0x3cab5230, 0xbbbc138d, 0xbd1849fc, 0x3bb011f5, 0x3cacc82d, 0x3d136e7f, 0x3c5612fa, 
    0xbc6669a4, 0x39c982e2, 0xbc6ec937, 0xbc89b098, 0xbcbd0ba1, 0xbcd7b844, 0xbcdd9e08, 0xbb6ea322, 
    0x3c90805d, 0x3c14ce4c, 0xbceaaec9, 0xbcc97c47, 0x3ac14b68, 0x3d10282a, 0xbc2a4159, 0x3ca51dfc, 
    0x3d3cfc96, 0xbbcef1a9, 0x3ce4c816, 0x3d55a937, 0x3d2c5a09, 0x3db21b90, 0x3d8da376, 0x3d336a6e, 
    0x3d738321, 0x3d8e231f, 0x3d84d53e, 0x3d8a6986, 0x3d891b49, 0x3d08614e, 0x3cdc5650, 0x3d34fb59, 
    0xbd998949, 0xbcf5fb2c, 0xbd85e5ea, 0xbd735063, 0x3c183243, 0xbda12ac8, 0xbcb6367b, 0x3aad5b90, 
    0xbbd83c11, 0x3d0567ea, 0x3be0197a, 0xbbbc2e59, 0x3d0873ac, 0x3af70591, 0x3c0cbdb6, 0x3cb1f262, 
    0x3c1fd074, 0xbcaeacb4, 0x3c425122, 0x3b0033f4, 0xbd8f0581, 0xbcea40bb, 0xbd9ccd38, 0xbd81c5eb, 
    0xbcce8c99, 0xbda45538, 0xbd03cb4f, 0x3c352a1d, 0x3c2e26c7, 0x3ce01746, 0x3ccfb503, 0x3a594b0d, 
    0x3bc3dd7d, 0x3cd77b57, 0x3c1a4fac, 0x3c973222, 0x3d0358d5, 0x3c056454, 0xbab79f03, 0xbb49428f, 
    0xbd9a995b, 0xbd0d2cc6, 0xbd9f14fd, 0xbd766a4c, 0xbc84b1aa, 0xbd867aac, 0xbd1a232c, 0x3c2958c6, 
    0x3b85c9a2, 0x3cfa8227, 0x3c28a9fb, 0x3bfa57ce, 0x3cf85e5c, 0x3d046b8e, 0x3d0f861f, 0x3c3dcafa, 
    0x3ca0dd5e, 0xbb60a27f, 0x3baf44ef, 0xbb3d4881, 0xbd688c8e, 0xbd101180, 0xbda366a5, 0xbd5f2bf0, 
    0x3c2d5a4c, 0xbd9c848a, 0xbd158c9c, 0xbc888655, 0x3c629ec5, 0x3d587f1e, 0x3c91df4f, 0xbc1c0790, 
    0xbbcaa91d, 0x3cb00f0a, 0x3c8a1a36, 0x3c74b767, 0x3bb5d3b0, 0xbcc379aa, 0xbc11ef57, 0x3b2cac08, 
    0x3ce43a62, 0x3bad0abb, 0xbb9015f4, 0xbbcb981b, 0x3c72b621, 0xbcd32203, 0x3c165718, 0x3c689b37, 
    0xbc8c8c61, 0x3c69447f, 0xbcefeb7c, 0xbc40a3b2, 0xbc751484, 0xb977ba0d, 0xbc19037d, 0x3cbd450a, 
    0x3c882072, 0x3c2e1c22, 0x3a965de8, 0xbd289085, 0x3c7d0bf0, 0x3c6430c2, 0xbbca345f, 0xbc80ddbd, 
    0x3c9e4e97, 0xbd2e10e9, 0x3b5ec1c0, 0x3cb3abc6, 0xbcae1300, 0x3c27283a, 0xbce034d1, 0xbca0b2dc, 
    0xbc684942, 0x3c711f35, 0x3b79805c, 0x3cd388b5, 0x3ca4273b, 0x3cab7d74, 0x3c03d85b, 0xbd07639e, 
    0x3c39a6c1, 0xbae02984, 0xbc474e89, 0xbcead355, 0x3c899da1, 0xbd087040, 0xba5dd01f, 0x3c22b492, 
    0xbca451e3, 0x3b784607, 0xbcb072ed, 0xbcb48c9d, 0xbc7208fb, 0x3c68797a, 0xbbb5e211, 0x3cb87f4f, 
    0x3ce15d00, 0x3cdaa8a6, 0x3bb2bcb9, 0xbcee370b, 0x3c8612b2, 0xba57511b, 0xbc46a78c, 0xb9c659bb, 
    0x3ce14592, 0xbceae429, 0x3c775e79, 0x3ca1ace4, 0xbb0f7f21, 0x3ccd722d, 0xbb3a6089, 0x3b592df4, 
    0x3c83f08d, 0x3d26c9af, 0x3c2e87ba, 0x3d2d9570, 0x3cf6d2f0, 0x3cf8c5a4, 0x3c1bf2e7, 0xbd120b22, 
    0x3c8dd5b8, 0x363bda2a, 0xbbe8883a, 0xbc21a586, 0x3c6b7890, 0xbd14e4f4, 0x3b85c64d, 0x3cee24d5, 
    0x3b94a91a, 0x3ce71d7b, 0xbc7a72db, 0x3b8bcb72, 0x3c139e27, 0x3cb6aa01, 0xb990d234, 0x3d266997, 
    0x3cd52740, 0x3c942eda, 0x3c5b9cbe, 0xbd10fe64, 0x3c0314f7, 0x3c0f8d92, 0xbab7b637, 0xbab62e83, 
    0xbc19d049, 0x3b0e4f8c, 0xba76a008, 0xbbaf10e2, 0xbb1ceaff, 0xbc172078, 0xbae7a58a, 0xbb0c4f7c, 
    0x3a3eaf8a, 0x3b267f63, 0x3bf9f9da, 0x3ca6f5bf, 0x3c7f4148, 0x3c3c1ef3, 0x3b54077b, 0xb9db3854, 
    0x3c57b445, 0x3c164610, 0x3b668dd9, 0xbb6c300e, 0xbc1fd379, 0x3b1a12e3, 0xba062ec6, 0xbb948bee, 
    0xbb3b1f6e, 0xbc34e3cd, 0xbc0c0b22, 0xbbccbe7a, 0x3b9007bc, 0x3ba741d1, 0x3c522a97, 0x3c748c29, 
    0x3c78cf8e, 0x3c5a262f, 0x3c00dce1, 0xbb189f56, 0x3c380b29, 0x3c008399, 0x3b53130b, 0xbb635682, 
    0xbc36d572, 0x3ba49206, 0xbbcf1c9c, 0xbb203598, 0xbbda4a14, 0xbc169b45, 0xbbf382c5, 0x3913945e, 
    0x3b7a778f, 0x3b80b90e, 0x3c217b9a, 0x3c83538f, 0x3c448027, 0x3c3b8ada, 0x3b722a39, 0xbb71669c, 
    0x3c296a87, 0x3ba5a5b3, 0xb9589fcf, 0xbb9efdbb, 0xbbc18155, 0x3b709146, 0x3aaeeb45, 0xbac3b036, 
    0xbba73520, 0xbbf9db11, 0xbc24c68f, 0xbba1ba05, 0x3b656b33, 0x3bdd52af, 0x3bb7cb38, 0x3ca05ab7, 
    0x3c3b8592, 0x3c563246, 0x3bb0292c, 0xbb092690, 0x3c3a5157, 0x3bde2157, 0xbaa5f276, 0xbb09a0dd, 
    0xbba73a5d, 0xb8622c35, 0xbb7a830f, 0xba790e7c, 0xbb22de8d, 0xbbfb54f1, 0xbbf0de3b, 0xb8dd1544, 
    0x3b6915d0, 0x3baded54, 0x3bdb6cf7, 0x3c98259f, 0x3be51c90, 0x3ba57595, 0x3ae4d3bf, 0xbb9e2c3a, 
    0xbc7821d8, 0x3d91408d, 0x3d88d17b, 0x3d0e1a94, 0xbe00d2e2, 0x3da804b2, 0xbd7efab0, 0xbdd2d336, 
    0x3d0b5686, 0xbd13c602, 0x3e0d9f64, 0x3dc33ede, 0x3e064aed, 0x3ca7300d, 0x3d5840cd, 0xbc9fee70, 
    0xbcf4b96a, 0xbcec3ece, 0x3d58a14e, 0x3dd8a51e, 0xbc094876, 0x3c0bc346, 0x3d349820, 0x3caf40fb, 
    0xbe03d6fc, 0x3ddbdc73, 0xbcc4e0eb, 0xbdbbe816, 0x3d2374d3, 0xbc80d937, 0x3e0cdb8f, 0x3dc6dc0a, 
    0x3dc71d25, 0xbb9535a4, 0x3d02277e, 0xbd952985, 0xbc820c1e, 0xbd5261cb, 0x3d1f59f7, 0x3e16ef19, 
    0x3c319ae0, 0x3d9d47c5, 0x3d9ef121, 0x3d6a076a, 0xbdace6b0, 0x3d9313e8, 0xbd6de605, 0xbd9ef6c0, 
    0x3becc5f6, 0xbd3975ac, 0x3da2a872, 0x3dad69b0, 0x3d85357c, 0xbc8396cb, 0xbc666ec8, 0xbd3673b0, 
    0xbdba3b4a, 0xbd9b578b, 0xbbd8a2bb, 0x3dc22274, 0x3d288e11, 0x3daa6489, 0x3d7f8381, 0x3d2ff04d, 
    0xbdf2457c, 0x3e0194a2, 0xbd389999, 0xbd7d4843, 0x3bb2c9d2, 0xbc8d6711, 0x3dc95571, 0x3d7eaadc, 
    0x3d97ef62, 0xbd3b3f73, 0xbc950ed8, 0xbde0e746, 0xbdcdb291, 0xbd6bbd0a, 0xbc71b750, 0x3df16c2f, 
    0x3d76ad80, 0x3dbcabad, 0x3d8f4ef1, 0x3d390822, 0xbe0d143b, 0x3d8a2a49, 0xbd086f8c, 0xbdef9adf, 
    0x3d099f6b, 0xbd4c29d5, 0x3d7d566a, 0x3d74413e, 0x3b57f3a3, 0xbd81ad46, 0xbd76547f, 0xbdcf9e8e, 
    0xbdb56a8e, 0xbd8323fa, 0xba02cc87, 0x3db2c08c, 0x3d200d7c, 0xbda5607c, 0x3d40717f, 0x3d36bfe6, 
    0xbcd94d5d, 0xbc8e7304, 0xbd429d7d, 0xbd36020f, 0x3cf277b8, 0xbdbc8e4e, 0xbc15efa7, 0x3db1b63b, 
    0x3d0fbfa8, 0x3d9223df, 0x3d9046cc, 0x3c710bbe, 0xbd4d2ff2, 0xbb3e83f9, 0x3c89ab8a, 0x3d1c50f2, 
    0x3d52dd51, 0xbd673641, 0x3d1f48b8, 0x3d31487e, 0xbcccc7c6, 0xbca6a0ae, 0xbdd2300e, 0xbd736536, 
    0x3ccc0f74, 0xbda667d9, 0xbc97ea84, 0x3da06fc0, 0x3d000950, 0x3d150002, 0x3d98cb3a, 0xbb027575, 
    0xbd87dcc0, 0xbd2527af, 0x3d184a3c, 0x3c968482, 0x3d4b7bad, 0xbd7f6ce2, 0x3d313b64, 0x3d48a1dc, 
    0xbd4b3f2f, 0x3bc38ef4, 0xbd8e5c2d, 0xbd988a79, 0x3d203918, 0xbdc90b96, 0xbd524779, 0x3d90f398, 
    0xbc1b5df3, 0x3c9ddb43, 0x3d8e0f9b, 0xbc6071cc, 0xbda71b2b, 0xbd404b1d, 0xbba7f063, 0xbb5d6774, 
    0x3d85bd59, 0xbd90f00d, 0x3d58db38, 0x3d5fbb90, 0xbd4f77ec, 0xbc74091b, 0xbdae1cdb, 0xbdb95677, 
    0x3bc5e388, 0xbdea1c57, 0xbc761642, 0x3d946889, 0xbcdfacb4, 0x3c01f038, 0x3d83793f, 0xbd2e0a61, 
    0xbdcd06ac, 0xbdbff31f, 0xbcbb2067, 0xbc65150e, 0x3d368b11, 0xbd7ec429, 0x3d278307, 0x3d39ceeb, 
    0xbca592b7, 0xbcb4d737, 0xbd83092e, 0xbd50fbaa, 0x3cc4d6a7, 0xbe025ee8, 0x3bec731e, 0x3d9d33c7, 
    0x3b769efa, 0x3d315ebd, 0x3da67dca, 0xbcf0bb52, 0xbd9b79b7, 0xbd8d8198, 0xbd0262e1, 0x3ae8a8d8, 
    0xbd16d071, 0x3d534190, 0x3c7054aa, 0x3c604ecb, 0xbdcdb355, 0x3e07e4c1, 0xbcb008cd, 0xbba40f3a, 
    0x3c2482a2, 0xbd3cdfbc, 0x3d334409, 0x3c8632f2, 0x3b46095d, 0xbc7b3b92, 0xbd011acd, 0xbcecdf1e, 
    0xbd60b381, 0x3dacda16, 0xbc32409a, 0xbb866aac, 0xbd41f009, 0x3c71cb90, 0x3cffa161, 0xbbafa351, 
    0xbe1d9582, 0x3e19f72f, 0x3c827b51, 0x3c15c2a6, 0x3c1d8b48, 0xbd22b3cd, 0xbbc9c300, 0x3bdfaaa9, 
    0xbc98f480, 0xbc0cfa86, 0xbc7d5d53, 0xbb8a70a7, 0xbc3882fb, 0x3db8ec1a, 0xbccceabe, 0x3c7049e1, 
    0xbcbdd0e7, 0x3d80357c, 0x3cb032f6, 0x3c93306b, 0xbdf42526, 0x3e0be599, 0xbcf33f24, 0xb9ad2e4e, 
    0x3ca1a40c, 0xbce624ea, 0x3d2d28cc, 0x3c5b70b9, 0x3c820f6c, 0xbbe147cf, 0xbc0f386a, 0x3a370bff, 
    0xbce91855, 0x3dd9a829, 0xbc83d393, 0x3c3e0dbb, 0xbcae4933, 0x3d6e30ff, 0x3d2d2afe, 0x3d1ed134, 
    0xbdec4731, 0x3e018ca0, 0x3b77f3ca, 0x3cc9f464, 0x3cfad793, 0xbd3d3690, 0x3c962024, 0x3c9b65c1, 
    0xbcae3bc5, 0x3c4c40a3, 0xbc58fe78, 0x3c8b8fbf, 0xba4bf9f6, 0x3dfdc109, 0xbbc567e1, 0x3c387f42, 
    0xbd0dfd5b, 0x3cdf01ac, 0x3d7d3897, 0x3cf15b8d, 0xbde2453a, 0x3e03540e, 0xbbc69b2e, 0xbc62a516, 
    0xbb8cfde8, 0xbc37f5f4, 0x3d60c232, 0x3b319018, 0xbb5961fe, 0xbb915287, 0x3c18de78, 0xbb035a3f, 
    0xbd0dc204, 0x3df78332, 0x3c2f635a, 0x3ced981b, 0xbd0dec05, 0xb824f5cd, 0x3d5e3c2d, 0x3d1b31ef, 
    0x3d271d08, 0x3c85b790, 0x3bb6e788, 0x3c8aa794, 0xbbe1939c, 0xbce8e4da, 0xbd1673e1, 0xbbd24acd, 
    0xbd271300, 0xbb743c7a, 0xbcf286e0, 0xbd20c3dd, 0xbc71f5a8, 0xbcc5b05c, 0xbd0f707c, 0xbd352392, 
    0xbd083949, 0x3cb4ee98, 0x3d8f29ba, 0x3d3fce89, 0x3ccf5655, 0x3c310373, 0xba094d60, 0x3c4f7382, 
    0xbc7ea569, 0xbc30a7b2, 0xbc3e8579, 0xbcc75f53, 0xbcc406be, 0xbd247eb7, 0xbcc09fd8, 0xbd510ef4, 
    0xbd0f605f, 0xbd45e81e, 0xbd412b03, 0xbd580084, 0xbcfee902, 0x3b364adb, 0x3d26afbd, 0x3cfefefa, 
    0x3d231f88, 0x3cb166d7, 0x3a8074a6, 0xbc89b559, 0xbbaad206, 0xbc9e7a6f, 0xbc4ebe75, 0xbcd2e15c, 
    0xbd45d84d, 0xbc90465b, 0xbd39bb79, 0xbd462c17, 0xbc801dc5, 0xbd310aa5, 0xbce7c081, 0xbd1d21a9, 
    0x3a766350, 0x3d5f2665, 0x3e144ed1, 0x3db7b7b6, 0x3dbfca21, 0x3d90d517, 0x3d9006ab, 0x3cf8dd19, 
    0x3d1868e9, 0x3d0ec6f7, 0x3d10c553, 0x3cc0fef7, 0x3bbe11a6, 0xb8fc5dc3, 0x3c3d8402, 0xbc41eda9, 
    0x3c4c5c0a, 0xbc4e3920, 0x3a4cc058, 0xbc4c6399, 0x3c38630c, 0x3d8f4d84, 0x3deca627, 0x3dc29b17, 
    0x3db7dc85, 0x3d921966, 0x3d89ba5e, 0x3d11f9ab, 0x3cf8bc01, 0x3d102ec3, 0x3cb343e8, 0x3c3075c4, 
    0x3b3d89a5, 0x3d11adf7, 0x3ca7eaf8, 0x3afd7996, 0xbc4a4175, 0xbc534f52, 0xbcc3700d, 0xbca6709d, 
    0xbd13ffb6, 0x3cf9f0f5, 0x3b823ce2, 0xbcfd18c3, 0xbad4c820, 0xbc11413c, 0x3bae9ebd, 0x3902d07a, 
    0xbd0a694c, 0xbb0dd55e, 0xbb3ad5bb, 0xbd186533, 0xbceb3efc, 0xbd64afa9, 0xbd1c0cab, 0xbca7d89c, 
    0x3c5d0d1f, 0x3c14ae8c, 0xbd2fec68, 0xbcb011a9, 0xbd0b9da7, 0x3d07da5a, 0x3c74f712, 0xbc9d346b, 
    0x3b2f6b6b, 0xbbdf1517, 0x3c42845f, 0x3cc86d92, 0xbc935ffc, 0x3ca9e37e, 0xba10194f, 0xbcef1029, 
    0xbb2e36d4, 0xbd2e4dcc, 0xbcc2e8cf, 0xbc966836, 0x3cd380e1, 0x3cd0e95e, 0xbc2995b6, 0xbcbf4adf, 
    0xbcda5c81, 0x3d032d98, 0x3be861ca, 0xbc0c1639, 0x3c6fc87c, 0xbc015005, 0x3cb21e7f, 0x3caa2f0b, 
    0xbce9dee0, 0x3c9f9b6e, 0x3be9c2fd, 0xbc205ccc, 0xbb78db28, 0xbd14949f, 0xbcc20efa, 0x3a024297, 
    0x3cc7d48e, 0x3cc679c0, 0xbcc02d7e, 0xbc3b67ed, 0xbd1718bb, 0x3c62c89d, 0xbb831a2b, 0xbc70e34e, 
    0x3b5237ff, 0xbc37966b, 0x3c3cbdb2, 0x3af61a8d, 0xbca2efd4, 0x3c121c56, 0xbbc3b750, 0xbcfe5488, 
    0xbc49b8ed, 0xbd49d272, 0xbd1ee704, 0xbba39937, 0x3c65abda, 0x3cb6ca4c, 0xbc85ccf1, 0xbcd1f486, 
    0xbd1d6d73, 0x3cffc0fb, 0x3c850ca9, 0xbcf05aec, 0xbbebc334, 0xbbf1c6c9, 0x3c91df1a, 0x3c2afd54, 
    0xbc9f1b02, 0x3cb494df, 0x3c10f90e, 0xbc529d9c, 0xbcb4cb2b, 0xbcca81a8, 0xbd124e82, 0xbcaf1a93, 
    0x3ce2769b, 0x3ca7f848, 0xbcb15941, 0xbc68d932, 0xbcb060ae, 0xbc0d50b2, 0x3c8500d9, 0x3d083f73, 
    0x3d7edf08, 0x3d7840a3, 0x3db3b0eb, 0x3d9b5bfb, 0x3cbfce40, 0x3d4dc6cc, 0x3d987ecd, 0x3d744bb4, 
    0x3d1ee89c, 0x3caec523, 0x3cd4b52f, 0x3cd8734a, 0x3b5b7009, 0x3c885c16, 0x3c3b5a95, 0x3caf0bc1, 
    0xbda13cd1, 0xbd30db87, 0xbd2fedb8, 0xbcca5f30, 0x3bc0214c, 0x3c2407db, 0x3d495009, 0x3d00c5e4, 
    0xbcaeedbe, 0x3c3c2607, 0x3ca72835, 0x3957f9bb, 0xbc4dc86c, 0xbb9172f4, 0xbcaf5cd8, 0xbceb63ba, 
    0xbcb9398d, 0xbbc11b8e, 0xbc81e455, 0xbccea6e4, 0xbd91f4ca, 0xbceada9b, 0xbce03b2e, 0xbccacf3b, 
    0x3c325a2a, 0x3a1db28b, 0x3d0e32d7, 0x3d0aa599, 0xbcd92623, 0x3c00ed5b, 0x3cf1cfa4, 0xbb2c228e, 
    0xbc75c1be, 0xbc8ef50a, 0xbb0d41b7, 0xbc83a487, 0xbcb94c98, 0xbb34de81, 0xbc087a3a, 0xbc87b597, 
    0xbd86ed58, 0xbcbd3973, 0xbc78fa31, 0xbc282003, 0x3cc29894, 0x3c7dbd29, 0x3d596d3a, 0x3d35efcb, 
    0xbbb39699, 0x3ce21de2, 0x3c6a1267, 0x3c074c20, 0xbc0b3d09, 0x3bd3e398, 0xbc8b7106, 0xbb3af401, 
    0xbc5316f2, 0xbaa70f41, 0xbb7e84db, 0xbce6bdba, 0xbd5ef522, 0xbced2086, 0xbcc2c9d4, 0xbbb7a995, 
    0x3c94ccd6, 0x3d01eac9, 0x3d45a8f1, 0x3d00476c, 0x3c1e213c, 0x3ca5d996, 0x3cb2779d, 0x3c02d5d7, 
    0xbc22218b, 0xbc2627c1, 0xbc97b41e, 0xbce86629, 0xbcaca9de, 0xbc979f25, 0xbb3814f9, 0xbc31d923
};

static const uint32_t _K21[] = {
    0x3f9e619d, 0xbfd2771c, 0xbec74bf7, 0xbf17db4c, 0x3f41e3d3, 0x3dec8e80, 0x4021c5a6, 0xc008b6d8, 
    0x3fe34741, 0x400024ee, 0xbfdfd9c6, 0xbe12729a
};

static const uint32_t _K25[] = {
    0xbe1ab7b6, 0xbdd1f1dc, 0x3d7738d3, 0xbdbb0609, 0xbd1245b6, 0xbdc193ed, 0x3decb0a0, 0x3d424489, 
    0xbe055f18, 0xbc37ea07, 0x3e0d1c6d, 0xbcb41b60, 0xbe674bb0, 0xbded8a67, 0x3d562eac, 0xbd857cd3, 
    0x3cbb1704, 0xbd28b31b, 0x3d934535, 0x3c9dbbee, 0xbda6d2b0, 0xbcdc417c, 0x3dbc5c4c, 0x3c11ba71, 
    0xbe66267f, 0xbda067fc, 0x3d7bcd1e, 0xbca7c8f9, 0x3c34cc47, 0xbdba51d2, 0xbc6c447b, 0xbd2637b3, 
    0xbe1bcd85, 0xbd2f5c05, 0x3dc1d051, 0x3d814c59, 0xbe54e0b8, 0xbe06fe4c, 0x3d80f86a, 0xbdb6ebbb, 
    0x3aa9db3d, 0xbd9821db, 0xbbc56a6b, 0xbb888145, 0xbdbd85a4, 0x3d3d9816, 0x3e16b8c6, 0xbd2f6a5b, 
    0xbe0a7b03, 0xbd2ef81d, 0x3d9e573f, 0x3b8f74af, 0x3d68d3e2, 0xbdc2a8dd, 0xbd1e1814, 0xbd8c5f72, 
    0xbd80c0d5, 0x3dc93b12, 0x3da91791, 0xbc81f88a, 0x3ca8d2e5, 0x3e243c44, 0xbc461aa5, 0x3d8d2165, 
    0x3cbc1a48, 0x3c48a884, 0xbc4afdf4, 0x3dc491e8, 0xbe12e5bd, 0xbcdfcf43, 0x3e2290d9, 0x3d64b03f, 
    0xbbf8bcf7, 0x3d40b634, 0x3d9c9a2e, 0x3e38c6af, 0x3adc73f9, 0x3d393f98, 0x3dea415e, 0x3dbe03a8, 
    0xbe087353, 0x3c995337, 0x3ddb4788, 0x3d76564b, 0xbd3a56c5, 0x3e1b0272, 0x3da38728, 0x3d84301b, 
    0xbd73bce3, 0x3d67110f, 0xbb5e5c3b, 0x3d9cc5e6, 0xbe0959a0, 0x3dcc9497, 0x3e494322, 0x3decd54c, 
    0x3d2351d8, 0x3da7260c, 0x3dc836fb, 0x3dab09da, 0x3c0df942, 0x3b8f97f6, 0xbd73c775, 0x3daec1c1, 
    0xbdd21a6c, 0x3d9e6aee, 0x3e4d2f83, 0x3e0744ce, 0x3a1ac253, 0x3e0345c7, 0x3cb5beaa, 0x3ca70124, 
    0x3c13b406, 0x3cbaf2df, 0xbd777b9a, 0x3e1da6af, 0xbcbfd80e, 0xbcf2d6cd, 0x3e300910, 0x3da60b5c, 
    0x3d88f22e, 0xbe6b45fa, 0x3ddebd17, 0xbcade886, 0xbcf71525, 0xbd82bd80, 0xbe03dcdb, 0xbe566b72, 
    0x3d7fc99a, 0x3d58d376, 0x3d0bfcaa, 0x3e33e696, 0x3dca07e8, 0xbe73d178, 0x3df00b65, 0xbcca5eaa, 
    0x3c0c3b57, 0xbd4f4196, 0xbe1cfe41, 0xbe0a1337, 0x3bfba73e, 0x3d11aeff, 0x3d4be4f0, 0x3e28cdf4, 
    0x3e0211f8, 0xbe05d508, 0x3d8a002e, 0xbd3fc349, 0x3d187d72, 0xbd63c9b7, 0xbe52b80d, 0xbe18df63, 
    0x3d5a6ccf, 0x3d013a89, 0x3b76b739, 0x3daaad1e, 0x3dcfd2aa, 0xbe884f35, 0x3d76cebe, 0xbd9fbeac, 
    0xbc7fb3b8, 0xbd8cce2f, 0xbe525235, 0xbe227c04, 0xbc0c0747, 0xbceca985, 0x3c1f8307, 0x3e060d9f, 
    0x3e1d1de6, 0xbd96ece3, 0x3d25f04b, 0xbd134386, 0x3d5baac4, 0xbda7a15c, 0xbe24b936, 0xbdd88f9e, 
    0x3ce58478, 0x3d0a07c5, 0x3d574e48, 0x3dbc2182, 0xbdbd0d83, 0xbdce10d1, 0x3e3c4b85, 0x3ed026e1, 
    0xba6c2c0e, 0x3b10c0b3, 0x3e22d297, 0x3dadbc7c, 0xbd6c2b16, 0xbe125888, 0x3de6329d, 0x3eb9cd82, 
    0xbc264994, 0xbdf618e0, 0x3d9e415b, 0xbdd695ab, 0x3ce36ffa, 0xbd9a398d, 0x3bd60d90, 0xbcf52357, 
    0xbdf9c9ca, 0xbd051f58, 0x3e79a611, 0xbd675c70, 0xbd54da45, 0xbce6778f, 0x3cbfe626, 0xbcee46c4, 
    0x3ca1d30a, 0xbd51db65, 0xbe44472d, 0xbe23343c, 0xbd9e0011, 0x3dae1e47, 0x3e74932a, 0xbcf8fde1, 
    0x3e1a4cf1, 0x3e70719b, 0xbd1e28e5, 0xbdec4da8, 0x3e1c930d, 0xbe19b1a3, 0xbd915330, 0xbdad1a87, 
    0x3de08b77, 0x3d01e58a, 0x3e5f0474, 0xbc99bc15, 0xbc70588c, 0xbe8a3a3b, 0x3d572e4d, 0xbd6c2d82, 
    0xbd94dc71, 0xbe3618a2, 0x3da48497, 0xbb6b9915, 0xbd9a5e58, 0xbc9cf1da, 0x3e5fca96, 0xbd5b813e, 
    0x3b3ae01e, 0xbde04e9e, 0x3da0f949, 0x3e2cd069, 0xbd3e7f1a, 0xb9fba125, 0x3de016c7, 0xbd47e193, 
    0x3d867e74, 0xbdc8fd45, 0x3cbe9199, 0x3de74db9, 0xbaebd557, 0xbdf85cc7, 0x3d3f12d5, 0x3d90de81, 
    0x3b8b7ee8, 0x3d15dc18, 0x3dc129b5, 0xbd3173d2, 0x3db1ee9a, 0xbdb4d7b7, 0x3d97ca39, 0x3e1af00d, 
    0xbd1c340e, 0xbe1cc8af, 0x3dba9ce5, 0x3e037776, 0xb7228a79, 0x3dc33aee, 0x3d80a3db, 0xbd85cb7d, 
    0x3d16aded, 0xbda0e388, 0x3db31aaa, 0x3daefbe4, 0xbda4be88, 0xbe10d89b, 0x3d959fa5, 0x3d562703, 
    0xbd638df4, 0x3d9ea0b0, 0x3dd04cf2, 0xbd2b462f, 0xbaabb223, 0xbce6ec85, 0x3da3c68a, 0x3d1fa380, 
    0xbdab0a70, 0xbd7ab967, 0x3d972fec, 0x3d3417d0, 0xbd3c0870, 0x3da186a9, 0x3dd59b44, 0xbcf7f5b4, 
    0xbd1299ba, 0x3d2130e8, 0x3d076956, 0x3d5fe46d, 0xbe0743a5, 0xbd95507e, 0xbdb6986f, 0x3e28ed00, 
    0xbcabd0b3, 0x3d9efb47, 0x3cf1eecb, 0xbd96c0dc, 0x3e232b0c, 0xbe2951ff, 0x3e18c209, 0xbe4e5358, 
    0xbdc731a8, 0xbddacbde, 0x3d2ce851, 0x3e8226a1, 0x39a32dc5, 0x3e163d59, 0x3deb89fd, 0xbd9794b5, 
    0x3e237c2c, 0xbe07e1c4, 0x3dd837e1, 0xbe0648f5, 0x3d6e18b7, 0x3d2adbda, 0xbd2d46a0, 0x3e98887a, 
    0x3e14fe90, 0x3e2d7e61, 0x3da4074b, 0x3bfcadcb, 0x3ea8307c, 0xbd018274, 0x3de403c0, 0xbdbee41a, 
    0xbd451979, 0xbe2ef66b, 0xbdd420a7, 0x3e398552, 0x3ce7e719, 0x3dac1695, 0x3d1d6201, 0xbc8c09ce, 
    0x3e564d78, 0xbe1a0278, 0x3dde9920, 0xbe304e3a, 0xbdb9d0c4, 0xbe75b323, 0xbdddb6d9, 0x3e027362, 
    0xbde3cda8, 0x3e04e754, 0x3db50dd6, 0xbd077177, 0x3de19744, 0xbde4fc81, 0x3cfcd60d, 0xbe29b415, 
    0x3e77ec88, 0xbed24586, 0xbd2d4e34, 0x3d559544, 0xbe3a60e7, 0x3c92fb89, 0xbd54894a, 0x3ef84145, 
    0x3d9ebad2, 0xbbb57504, 0xbed2fbf6, 0x3ce45ca3, 0x3ded0ccb, 0xbea73da8, 0xbe3028f1, 0xbd66d96f, 
    0xbe0ec8e7, 0x3c2d1f7a, 0xbcda77d0, 0x3f220a83, 0x3d62b8d3, 0xbe0156df, 0xbe9548dc, 0x3e73ea6a, 
    0x3d772e62, 0xbcca305d, 0xbe310f5b, 0xbdbbbab6, 0xbcdbfd15, 0xbcb8ecca, 0xbd874236, 0x3f2323ed, 
    0x3ce2deba, 0xbe13e2e2, 0xbe8db5f3, 0x3e2b6bcf, 0xbcf095e3, 0x3e28f6bd, 0xbe97490f, 0xbf00e3ff, 
    0xbe2dd93e, 0x3bcc19c7, 0xbdfd8c1b, 0x3f14f2d7, 0xbc120f74, 0x3dc4ff47, 0xbe951abc, 0xbc2efeb9, 
    0x3c2f13cf, 0xbd3f70dd, 0xbe3ceb80, 0xbe982214, 0x3daae0ae, 0xbdecaeb6, 0x3d2db0f3, 0x3f13d6a5, 
    0x3b8210dd, 0x3e20d385, 0xbe8f1e76, 0xbe11df7a, 0x3c7a8914, 0xbe53100a, 0x3c73508f, 0x3d96dca4, 
    0x3dda0302, 0xbcade17a, 0x3cb87845, 0xbc21dc47, 0x3db3c412, 0xbf011609, 0x3d10ad9d, 0xbc804663, 
    0xbd3eeabb, 0xbe2ba692, 0xba88fa95, 0x3e219802, 0x3c9e7c8e, 0x3bd3deb3, 0x3d864715, 0x3d407c8d, 
    0x3e280e96, 0xbf0f6d15, 0x3d5d2b0b, 0xbd227388, 0xbd96eae1, 0xbcf76d7e, 0xbc9d8ea7, 0x3e113369, 
    0x3d8a6a27, 0xbcf1040e, 0xbd84c628, 0xbd2c40a4, 0x3de0124a, 0xbf29144c, 0x3d47a9f8, 0x3d915335, 
    0x3db09a46, 0x3e219fd0, 0x3d378869, 0xbac426cf, 0x3def53d1, 0xbcf558ba, 0x3bec2805, 0xbd4189f1, 
    0x3e251620, 0xbebdd0d8, 0x3db0436f, 0xbd57ea72, 0x3d3deaf9, 0x3daab9b1, 0x3bcb70a6, 0x3cd349b2, 
    0x3dea1d48, 0xbd410493, 0xbd714038, 0xbc82399d, 0x3e260cba, 0xbeea3e11, 0x3deee5c7, 0xbc1ff259, 
    0xbf0c76fd, 0xbed66355, 0x3d975e2f, 0xbe31957b, 0xbeff3dbc, 0xbe9452ba, 0x3e71cc75, 0x3e219e00, 
    0xbe5df798, 0xbe1cd1ba, 0x3e2077e3, 0xbf1bc84d, 0xbed5f6f2, 0xbe63a36b, 0x3db3d809, 0xbeaf01db, 
    0xbf12f994, 0xbe82b1ef, 0x3e1346d6, 0x3cd553e9, 0xbe13ad9f, 0xb97d0b6c, 0xbd4e94ed, 0xbebd255a, 
    0x3cd9a6b6, 0x3f438ed9, 0x3e1fb00b, 0xbe98a794, 0xbe49d29b, 0xbe83cd8b, 0xbe011463, 0x3d0f621c, 
    0x3e99813c, 0xbcae9c2c, 0x3c14e49f, 0xbe1d2453, 0x3ecc3cbe, 0x3ed6e3be, 0xbd8497bf, 0xbc736b12, 
    0x3e797972, 0x3e1e810e, 0xbe03c431, 0xbe8be8d9, 0x3ecb598c, 0xbe81fd59, 0xbcf80f8a, 0xbe51a3c2, 
    0x3f1c02e5, 0xbdc47e2e, 0xbea1cea0, 0x3f04f190, 0x3f1e052f, 0x3efaf3b5, 0x3e91a0ec, 0xbe002bc7, 
    0x3ef5c50b, 0xbe763a56, 0x3db5af88, 0xbeba08c0, 0xbce9c1be, 0xbca41ad7, 0xbd2423d0, 0x3c11526b, 
    0x3b9ec585, 0x3d95e869, 0x3d6d8f62, 0xbe7b5d8b, 0x3c30902a, 0x3da2f923, 0xbe3d0e5c, 0x3c803830, 
    0xbda17005, 0x3cfd2e71, 0xbc6fc910, 0x3d39e415, 0x3c8ba4e4, 0x3d6736ff, 0x3cec72cc, 0xbe55034a, 
    0xbccfa42e, 0x3dce6b49, 0xbe14d389, 0xbc0f44a3, 0xbe1aa676, 0x3cbfaebf, 0xbd08476b, 0x3d0fae78, 
    0xbd4cf30b, 0x3dc6b477, 0xbd626023, 0xbe39a9b0, 0xbddfea63, 0x3b916594, 0xbe09848e, 0xb9d2a84b, 
    0xbd6d7f22, 0x3df229f2, 0x3b0e97ab, 0x3dbca6c9, 0xbbe0c77d, 0x3d26751a, 0xbdb8fbd1, 0xbe4493ab, 
    0xbd821d32, 0xbcbe6ecc, 0xbe533383, 0x3c7c8901, 0xbcd983e9, 0x3dcd4ccd, 0xbd6c7c34, 0x3dee2dfe, 
    0x3d840ac9, 0x3d9bc0ae, 0xbd90c60b, 0xbe56aa63, 0xbd37f019, 0xbd462d5b, 0xbe58990a, 0x3c2ad217, 
    0xbbb96b4a, 0xbe73e5e2, 0xbd3aa880, 0x3d538d34, 0x3c03f1b9, 0xbd7238f7, 0x3dd09e12, 0xbdc76ce3, 
    0x3cfaeff9, 0x3dd992e6, 0xbd5eec8c, 0xbe68467b, 0xbdc3423c, 0xbe85aba5, 0xbcf9c32d, 0x3e3d12b7, 
    0x3c8169aa, 0xbe105b5a, 0x3e32eedc, 0xbe11d460, 0xbd16d046, 0x3de2e851, 0xbd86a23b, 0x3e32a63d, 
    0xbe0a577f, 0x3e8326c5, 0xbbed25c7, 0x3bdcd2d7, 0xbdee0a81, 0xbe1a410d, 0x3dcffeb1, 0xbe094025, 
    0x3d1c8a1d, 0x3dbe1a52, 0xbe293fc7, 0xbe51f763, 0xbdd8c78a, 0x3f02fbe9, 0xbd324c6b, 0x3d548e40, 
    0xbe5117bb, 0xbe250044, 0xbdc15f84, 0xbe89bf14, 0xbcb47427, 0xbd1c0df1, 0xbe3cb982, 0xbd909cdb, 
    0x3e4902b6, 0x3f102f9c, 0xbe8d6019, 0x3e0d1910, 0x3e20688c, 0xbb90dd53, 0xbe0178f1, 0xbea1bda3, 
    0x3de0f12b, 0xbdd8559b, 0xbe850ade, 0xbc48a796, 0xbd03efaf, 0xbe3db625, 0x3c995b9d, 0xbd9d4d12, 
    0xbd1e07bb, 0xbc9ea86e, 0xbd3d7192, 0xbccf2b12, 0xbd728508, 0x3d52f9a4, 0x3c895263, 0xbdd84dbe, 
    0xbcf2984b, 0xbe16525c, 0x3ccbeb8d, 0xbdabff25, 0xbda15c9f, 0xbd2afbc9, 0x3cc5bb45, 0xbc828fd4, 
    0xbd563a39, 0x3d86fe6e, 0x3d88a376, 0xbd49f80b, 0x3d83537b, 0x3ab621b9, 0x3d4ca53f, 0xbdb21647, 
    0x3cd1c224, 0xbd472ef8, 0xbca532df, 0x3ac33bb0, 0x3b99ac79, 0x3e8a8fab, 0x3d4b3d7f, 0xbd990739, 
    0x3d874e50, 0xbac721ef, 0x3c1861d6, 0xbd38fb77, 0xbcc48597, 0xbd1d21cc, 0xbb2f6504, 0xbc5780b9, 
    0x3c4a3e57, 0x3e6e29bf, 0x3ce54f37, 0xbd90d319, 0x3e15f697, 0x3da3bd17, 0xbcf9f5ec, 0xbe1a88c1, 
    0x3c8efdc6, 0xbd7a211c, 0xbd4b2f95, 0xbc496d67, 0x3cb213cc, 0x3e3cc309, 0x3d219483, 0xbda1b2e1, 
    0x3dfe981c, 0xbe16291f, 0x3d9a5605, 0x3e13d49c, 0x3bb1e6fa, 0xbc4f0dc9, 0xbe14d759, 0xbe81bec5, 
    0xbd38363e, 0xbd11ce9e, 0xbe3e102c, 0x3e7d0a5f, 0x3d149d96, 0xbd6819bf, 0x3e984ae1, 0x3ee486fb, 
    0x3ba22225, 0xbd328882, 0x3c8f527b, 0xbe8efcc9, 0xbd4a8ddd, 0xbc84c32b, 0xbdcee16d, 0x3f1882e7, 
    0x3e8fbbfd, 0x3df288f9, 0x3e90bcc4, 0x3cd6bd9e, 0x3c1e503f, 0xbdcbd2e3, 0xbdacd676, 0xbe89e7bb, 
    0x3d886988, 0x3de9e8c7, 0x3d093b11, 0x3e5480d2, 0x3d85bbe5, 0xbdc2e735, 0x3e75bd5f, 0x3e4d2e24, 
    0xbde7de20, 0xbdcf4173, 0xbe87b40d, 0xbe51d6d2, 0xbe04d6fc, 0x3e1b518c, 0x3d640e0f, 0x3e77fb68, 
    0x3e7207d6, 0x3e6bf801, 0x3d86cc09, 0x3c3484d8, 0xbde51c0b, 0xbde622b1, 0xbe6c4163, 0xbe00e80a, 
    0x3d86ff09, 0x3e5aab62, 0xbd9e1978, 0x3db282f8, 0x3c244e7e, 0xbdc09297, 0x3d7711dc, 0x3e255902, 
    0x3daa216b, 0xbd87fd85, 0xbe62b00b, 0xbd4a03d0, 0xbe2da6e1, 0xbd01bb40, 0x3daa6603, 0x3e172a65, 
    0x3c1dda06, 0xbda2e806, 0x3d8d1f72, 0x3dd99aa4, 0x3d3fc840, 0xbd9acfef, 0xbe2a74ac, 0xbd058aa5, 
    0xbe3472f6, 0xbd409d28, 0x3dc10bb4, 0x3e2dab1c, 0xbc325be0, 0xbb639c08, 0x3de0ee15, 0x3d53700a, 
    0x3bf20962, 0xbd7132ce, 0xbd51e9d9, 0xbc93621b, 0xbe04fe75, 0x3a253379, 0x3df214ca, 0x3dedeb0c, 
    0x3c70a91c, 0xbca65f22, 0x3d2faa2a, 0x3d5c6641, 0x3d80000d, 0xbdc5f263, 0xbe580577, 0xbd893573, 
    0xbe161be5, 0x3d6f3dae, 0x3db2ef59, 0x3da22a1b, 0x3d0b85f6, 0xbcfe0f76, 0x3d456b4e, 0x3d230e8b, 
    0x3db443d8, 0xbd6c527e, 0xbe938cea, 0xbd354b0b, 0xbdb8a4e4, 0x3cc7da76, 0x3dad9f86, 0x3d9b9341, 
    0x3c3baf21, 0x3e21dc66, 0xbe40738c, 0x3d7153c6, 0xbd29a81b, 0x3c451ce7, 0x3e3c3155, 0x3aaab0a9, 
    0x3d7a9508, 0xbd7a751d, 0xbde9927b, 0xbd82f286, 0xbda87016, 0x3d16fa8b, 0xbe3ff769, 0x3d95cf0f, 
    0xbe190ab2, 0xbcbd8916, 0x3eb5f168, 0x3d22b05d, 0x3db51587, 0x3d61223c, 0xbe1f8170, 0xbca333a3, 
    0xbe055cc2, 0xbd8dda10, 0xbdbff054, 0x3d581fdf, 0xbe3cf539, 0x3d2c2aac, 0x3ebddfff, 0x3dd9aed0, 
    0x3d1bf79f, 0x3d9b11d5, 0xbd64625c, 0xbda3c899, 0xbe302a3d, 0xbd180fd0, 0xbe34e75f, 0xbdb6e903, 
    0xbe66480c, 0xbcb68d27, 0x3e83e82d, 0x3e3078a7, 0xbd8aa030, 0xbbe73a2a, 0xbcbc2adb, 0xbdff72e0, 
    0xbe483edf, 0x3dff740f, 0xbe1b29ff, 0xbe3e01d7, 0xbe793c5c, 0xbd00831d, 0x3d84fc7f, 0x3e8a4ead, 
    0xbda0a1c3, 0x3afddceb, 0xbdcc0fdb, 0xbe49d3c8, 0xbd2852ff, 0xbd7dd770, 0xbc81ce7d, 0x3d4bc8e1, 
    0x3d24da40, 0x3b97d8e8, 0xbb54b2b8, 0xbda464af, 0xbbf7b25d, 0x3d985c9e, 0xbdf06ac6, 0xbce1a510, 
    0xbd402141, 0xbd3d81b6, 0x3b731a3a, 0x3d6c5e83, 0x3d23835d, 0xba5942fa, 0xbc87810c, 0xbd94bb1c, 
    0xbd0c2b9b, 0x3adae0ed, 0xbdf898e4, 0x3b75ac9a, 0xbd548381, 0xbcee04b5, 0xbd24d19b, 0x3c9875e5, 
    0x3c9a97e9, 0x3c182b44, 0x3c621f90, 0xbdf66429, 0xbc966078, 0xbd5b4e5c, 0xbde69089, 0xbcbc4ada, 
    0xbd8dd5e5, 0xbcd5457e, 0xbd5b89ca, 0x3c662c7a, 0x3ba21780, 0x3a144b97, 0x3d2138a0, 0xbdc92d46, 
    0xbc11c337, 0xbcf66a9a, 0xbdd0623a, 0x3bef59cb, 0xbd54149d, 0xbc2a5462, 0xbd2431ad, 0x3d08d535, 
    0xbb9d24f9, 0xbc4e6329, 0x3d38811a, 0xbde94b38, 0xbca9a8b3, 0xbd032963, 0xbe02f975, 0x3b627589, 
    0x3e1c247e, 0x3ba02666, 0xbcddfd8d, 0x3d2245d6, 0xbbbf3c01, 0x3d42d345, 0xbd1fda3b, 0xbdc5c316, 
    0xbdd79c3b, 0x3bd6e5a6, 0x3da9a20e, 0xbd4747a4, 0x3dad48d0, 0xbcf0965b, 0x3bd42b9b, 0x3dc46579, 
    0x3bdb931a, 0x3d7fae1e, 0xbd61cc6b, 0xbdaef0f6, 0xbdfed24d, 0xbbc316da, 0x3d81b150, 0x3bece2e3, 
    0x3ed50285, 0x3d27e353, 0xbd58ca17, 0x3dea2c4b, 0x3e1647d3, 0x3d667a8b, 0xbd28403f, 0xbd8dcbf1, 
    0x3cef8632, 0x3df6ba23, 0x3d848cf7, 0xbbd1fd18, 0x3e224194, 0xbd1f6e64, 0xbd18b5c5, 0x3daf3d8b, 
    0xba973430, 0x3d501ee8, 0x3db021cb, 0xbda5142b, 0xbc2caa4f, 0x3c976626, 0xbc08a92c, 0xbcad6cbb, 
    0x3e366539, 0xbde6fdba, 0xbdf77ded, 0x3cdfd4ee, 0x3d82dc5f, 0x3d968fbf, 0x3d9a51fb, 0xbdb936e5, 
    0xbd3d6ab6, 0xbc25b0a8, 0x3cf7e4c9, 0xbcd148a4, 0xbd49d436, 0x3c5de0f3, 0xbd98a934, 0x3e2101b2, 
    0x3d236e5b, 0xbddaa0e3, 0xbcab43fd, 0xbd7237b9, 0xbdef8dca, 0xbda574df, 0xbd772af5, 0x3ced3768, 
    0xbd6d3c05, 0x3c43a74d, 0xbd2eabeb, 0x3e718eee, 0x3cabb54c, 0xbd98f493, 0xbcfd8692, 0xbb57d6db, 
    0xbe124001, 0xbdcbc050, 0xbc9121a9, 0x3a913dcd, 0xbcaef7a9, 0x3e0b770f, 0xbd0d6c34, 0x3e2fe493, 
    0x3daeeec1, 0xbe17db81, 0xbd93538b, 0x3d0ff017, 0xbdc65a24, 0x3cb2fdc0, 0xbd52972b, 0x3ca08255, 
    0xbccd6733, 0x3e48d0c3, 0xbd8b0074, 0x3dbada5b, 0x3d697d76, 0xbe196e23, 0xbcde5820, 0x3d10809e, 
    0xbd94930d, 0x3b3d18af, 0xbb5b428a, 0xbc639483, 0x3b8ce37f, 0x3de8147c, 0xbd498383, 0x3bdf2c46, 
    0x3c78a4fb, 0xbe0585c2, 0xbd908274, 0x37c4f742, 0xbdcb9af0, 0x3b1798a8, 0xbd660d06, 0xbc69627d, 
    0xbe75f739, 0x3c85075e, 0x3bdcbeab, 0xbcb4323b, 0xbcd9ca5a, 0xbe008bba, 0x3db0f0bd, 0x3d141e95, 
    0xbcc66927, 0x3dcf3e76, 0x3cad39e6, 0xbe354cd5, 0xbe9039a8, 0x3ca8f260, 0x3c594ac8, 0x3d70dac7, 
    0xbdcaef0c, 0xbdd146ae, 0x3dfe20e7, 0x3db1dc71, 0xbd6dd529, 0x3de3c630, 0x3d476187, 0xbe1867f5, 
    0xbe731ac8, 0xbccfd2ed, 0xbb8c6f34, 0x3c595039, 0xbd8e893c, 0xbe050fa8, 0x3da2cbe0, 0x3d918f1c, 
    0xbc645c6b, 0x3de94a23, 0x3c9709a9, 0xbdcfdee9, 0xbe76f44e, 0x3d89dddb, 0xbce40199, 0x3ccfd096, 
    0xbdd204b4, 0xbe1abc5b, 0x3dbe311a, 0x3d92ca90, 0xbce3941f, 0x3dae56e3, 0x3ca46029, 0xbe35dabf, 
    0xbe84aaa7, 0x3e2bb433, 0xbd604db8, 0xbbcd6322, 0xbdeb1186, 0xbdd6a6b6, 0x3c2359b1, 0x3db59962, 
    0xbd8b6211, 0x3c99a104, 0x3a97b7f5, 0xbe2a3fb3, 0xbdf2dd55, 0x3c999352, 0xb8003c02, 0x3ca13cf2, 
    0xbd5cec76, 0xbe7667d7, 0xbe1fc8a7, 0xbeb2675c, 0x3e64e234, 0xbeef1adb, 0x3da7ed50, 0xbdf84b19, 
    0xbe10082e, 0xbd8e1ae4, 0x3e4200e1, 0x3e96ff47, 0xbd31d870, 0xbe71270f, 0x3d6bf676, 0xbe989f64, 
    0x3e0fe179, 0xbee3b0a3, 0xbc29ed0b, 0x3e8d3606, 0xbc942277, 0xbda9af1b, 0x3de839d4, 0xbcef40f7, 
    0xbcd4f518, 0xbdb91ca0, 0xbd7860ba, 0xbe5ff336, 0x3e93e41a, 0xbedc8128, 0x3da42a85, 0xbe299dba, 
    0xbd3e96c5, 0x3c6e5557, 0x3d17f065, 0xbc18fb5c, 0xbd26cfc3, 0xbe33459f, 0x3d232652, 0xbe8a2632, 
    0x3e970fa2, 0xbd8a9d74, 0x3d840403, 0xbe4c52d0, 0x3d3bf318, 0x3dbf32a3, 0x3e175ee0, 0xbe1ce161, 
    0xbdbaf429, 0xbdaf31f5, 0xbd6d02e4, 0xbe3c887d, 0x3e63cad4, 0xbe1959c5, 0x3e2d5246, 0xbe18ca89, 
    0xbd73ea44, 0xbb3a0af0, 0xbe007226, 0xbdc8c633, 0x3d988415, 0x3d994f25, 0x3dff0530, 0x3d821fd7, 
    0x3dc86751, 0xbe326ec1, 0xbda3e1a9, 0xbd91e073, 0xbd8f6cad, 0x3b8984c3, 0xbe02c3b5, 0xbdd8cf4e, 
    0x3d065b58, 0x3e024b8a, 0x3d5b2e00, 0x3c1eacf9, 0x3d448008, 0xbe70693d, 0xbdf552b4, 0xbdd7f050, 
    0xbd0d71f1, 0x3cb892c4, 0xbddf0112, 0x3cee642a, 0x3d9a10d0, 0x3e010e65, 0x3aae7600, 0x3cb4c2cf, 
    0x3b01d4a5, 0xbe576408, 0xbdea18dd, 0xbda8a582, 0xbb99b0d8, 0x3d67c608, 0xbe2e6c96, 0xbd219400, 
    0x3ddc1456, 0x3e02740c, 0x3cf33025, 0xbb9f9156, 0x3d47de84, 0xbe71ca82, 0xbdfd09bc, 0xbe133079, 
    0x3c26173b, 0x3d90613a, 0xbdf171b1, 0xbc20a103, 0x3d94cd97, 0x3da25805, 0x3da0f022, 0x3d34a247, 
    0xbc884d94, 0xbe89160d, 0xbe233af2, 0xbdd7c68d, 0xbda0509b, 0xbd2e649a, 0x3ce6c184, 0xbddaf8db, 
    0xbd88c1d6, 0xbd99c860, 0x3d1e8d77, 0x3c5f7fd1, 0xbe0164b4, 0xbd662a9f, 0x3de75b5f, 0x3b0d347d, 
    0xbe0d6fd4, 0xbbf54613, 0x3e0fa477, 0x3d597bb1, 0xbb7dffa8, 0xbdd2ee18, 0x3c48855d, 0xbd2015b7, 
    0xbe438483, 0x3c6a7282, 0x3dfed1f6, 0x3d9dbfd6, 0xbd74952e, 0xbde0eab1, 0x3e05dd38, 0x3bf154af, 
    0x3b289f89, 0xbdce7b31, 0xbd369a88, 0xbd3d79c3, 0xbe3f4008, 0x3d76d033, 0x3e2b3898, 0x3dbc85c9, 
    0xbd8d4fc1, 0xbd0d46a4, 0x3ccc1b14, 0x3cb2a571, 0x3d3ff52d, 0xbdc4fc0b, 0xbddcac28, 0xbd8b7041, 
    0xbe096222, 0x3dd4231b, 0x3dae8bd3, 0xbb9a5756, 0x3d1251a9, 0x3da89020, 0x3b54f97e, 0xbd8cc2a7, 
    0x3d45de52, 0xbdc39381, 0xbe2f4660, 0xbdcef620, 0x3d2db2fd, 0x3dd74634, 0x3d9b9111, 0xbd1af0b6, 
    0x3b4a27b1, 0xbdf7b93a, 0x3b095798, 0xbe1ab5ee, 0xbd1428bc, 0xbcbf06d5, 0xbca4fd93, 0xbddbede2, 
    0x3dfc4251, 0xbdb2bfa2, 0x3d364978, 0xbd705214, 0x3c6e27be, 0xbdb06ca4, 0xbd58aa87, 0xbdd32f8e, 
    0xbd536007, 0x3d22c95d, 0xbad46913, 0xbdd1e7ae, 0x3de4254f, 0xbd46e7ee, 0x3c351c24, 0xbd5760ba, 
    0x3d45e952, 0xbdf930d5, 0xbd8647d4, 0xbdc190ef, 0x3cba46f8, 0x3d04d88e, 0xbb6011e2, 0xbd9de0a7, 
    0x3dd044c3, 0xbde20e61, 0x3af69b8c, 0x3c375220, 0x3dab5c5b, 0x3cd5f26b, 0xbde42558, 0xbe1a0244, 
    0x3d83a307, 0x3dbf3a2b, 0xb9cecf13, 0xbda7695b, 0x3e4d7e27, 0xbcbda151, 0x3cac73cb, 0xbda2fec6, 
    0x3e0afc16, 0x3db1de32, 0xbdc90d6f, 0xbe4708c0, 0x3d31f3f0, 0x3db0d021, 0xbd0df49e, 0xbdc72713, 
    0x3e634257, 0xbd0520e8, 0x3c888ab6, 0xbd5a190b, 0xbd1bd73b, 0xbdc0e98a, 0x3d907f19, 0x3e057ae4, 
    0x3d21e5c6, 0xbcba3454, 0xbe9b4658, 0xbe07bfbd, 0xbe1d7066, 0xbd5b92c8, 0x3d97b6e8, 0x3e50093e, 
    0x3cba1d2a, 0xbda276ae, 0x3e1a6844, 0x3c9c892b, 0x3cf9d8e2, 0xbd38e91b, 0xbe74bd70, 0xbde671f4, 
    0xbdc78cf0, 0xbccb0874, 0x3d6b9db8, 0x3e4fdad9, 0xbc1516b3, 0xbd087ddc, 0x3dd9fce5, 0x3d7f6841, 
    0x3d4913d1, 0xbd81b656, 0xbde93464, 0xbe185016, 0xbdcf50e9, 0xbc52d84b, 0x3d8dc258, 0x3e220027, 
    0x3dad4664, 0xbd73bd45, 0x3d9893a4, 0x3b0e7394, 0x3c1d1050, 0xbde16841, 0xbeb8c4be, 0xbe16af36, 
    0xbe028054, 0x3d34d1f4, 0x3d8ad1d7, 0x3dabc104, 0x3d906b9c, 0xbd5bdc60, 0xbb334fa4, 0xbd2c23f3, 
    0x3d87a9a9, 0xbdc3b1d0, 0xbecd546c, 0xbe39ab4d, 0xbdf897e1, 0x3caa3ed6, 0x3d415963, 0x3de7a884
};

static const uint32_t _K28[] = {
    0x3d06d8a0, 0xbfc6c8f4, 0x3f2fae9e, 0xbf99984c, 0xbfa53f6d, 0xbf7985ac, 0xbe1a0e28, 0x3e8ccd31, 
    0xbf9aca00, 0x3f09557d, 0xbf505d63, 0xbe6e864d, 0xbf868976, 0xbefbd27a, 0xbe538c1a, 0x3e5562b8, 
    0xbf656436, 0xbf0dffc1, 0xbd9c4214, 0x3bb30a40, 0x3ddca070, 0xbec68e3a, 0xbda7e3b6, 0x3e9636d6
};

static const uint32_t _K32[] = {
    0x3c93d95b, 0x3e5b7c55, 0xbda89cfb, 0x3e244a25, 0xbe0be26b, 0xbe3a0b09, 0xbe067363, 0xbef0fe9f, 
    0x3c11a494, 0xbe6dbbe0, 0xbd01f7f9, 0x3e3ce77e, 0xbdfd1874, 0xbc693b9d, 0x3ca6d5be, 0xbd9fc4fa, 
    0xbe467724, 0x3dd5dcc7, 0xbed31a30, 0xbd3f7241, 0xbe0179c6, 0x3e125922, 0xbe0cda6b, 0x3e149612, 
    0x3d1585c6, 0x3eb0fd25, 0x3cd1a5cc, 0x3eaff2cb, 0xbdb5befd, 0xbd5a37fc, 0xbe12eaa4, 0xbf096ee0, 
    0x3e3ffaff, 0x3caad632, 0x3dac4ed4, 0x3ed4263f, 0xbbce2f93, 0x3e0c2da2, 0x3dadc1a2, 0xbd1f6a0d, 
    0xbe68347f, 0x3e57188e, 0xbee503e6, 0x3e4a984e, 0xbe1d73cd, 0x3d380904, 0xbd5cd802, 0x3e27d6cb, 
    0x3d960606, 0x3ea169bc, 0x3cc11c8c, 0x3ec29a94, 0x3d25cd0d, 0x3cdbddbe, 0x3cd5d55f, 0xbec20cd7, 
    0xbda2835a, 0x3e300265, 0x3ec6032f, 0x3e879d99, 0x3d844dde, 0x3e4130e0, 0x3d2cfce0, 0xbe22cdf5, 
    0xbe0ea960, 0x3efe8a81, 0xbecb682c, 0xbe6a7236, 0xbe03a91f, 0x3dc17a8e, 0x3d60c608, 0x3e50ee1e, 
    0x3d0274bd, 0x3e8c6e90, 0xbd1877ea, 0x3eb52a1c, 0x3db60de7, 0x3d514faa, 0x3b9dcb08, 0xbe8f4d9d, 
    0x3ddb072d, 0x3d8e156b, 0x3e82b16b, 0x3e30ddd8, 0xbbc3af77, 0x3de2d0f8, 0xbc58f43e, 0xbe3ed2c1, 
    0x3c93d397, 0x3ef2b6b6, 0xbf00bd8f, 0xbb4cd27d, 0xbca3b5c7, 0x3d5ae441, 0x3e241e68, 0x3c0a3d32, 
    0x3d9da644, 0x3eb01a25, 0x3d010d8b, 0x3e371539, 0xbe125562, 0x3ddac833, 0xbe15288b, 0xbe4c5013, 
    0x3d1b86b9, 0xbe9e58da, 0xbe4cdecc, 0x3d40a23c, 0xbe1b5bbf, 0xbd4a56d1, 0x3d7121e8, 0xbe376e28, 
    0x3da496bf, 0x3ebd8570, 0xbeef404c, 0x3e49b408, 0x3d4770b6, 0x3ddf225b, 0x3e52f4de, 0x3d56da97, 
    0xbcce5482, 0xbc9b80d2, 0x3e051262, 0xbb9a7ea7, 0xbcbde76b, 0x3c297588, 0xbe06dd8f, 0x3c4ca65e, 
    0x3c2dc844, 0xbdf7b844, 0xbe19e00a, 0xbcb8f9e9, 0x3d09fbf9, 0xbb35cb15, 0x3d3551f1, 0xbd36b563, 
    0x3d82b5ec, 0xbd898753, 0xbe7ff69a, 0x3cdbc5ed, 0xbc138c2e, 0xbd23cc38, 0x3e26fd6e, 0x3d9a7b14, 
    0xbc8108af, 0xbd5e2476, 0x3e1c059e, 0xbc82cb17, 0xbd3af1fd, 0x3cf618fb, 0xbdb8fd73, 0x3c1d3717, 
    0x3be9c7e5, 0xbdbb0310, 0xbdf0676b, 0xbc57bae3, 0xbb4eea8a, 0x3a9d3969, 0xbc1f6744, 0xbd0a92dc, 
    0x3dbe0836, 0xbcc554f2, 0xbe5e1dad, 0x3dfc400e, 0x3d2237a9, 0xbcc52510, 0x3e318610, 0x3dc76b35, 
    0xbc816c9b, 0xbd7b1988, 0x3e3d071e, 0xbd904b21, 0xbd8b86be, 0xbb9ef059, 0xbdc296cd, 0x3c0632bd, 
    0x3b4132c8, 0xbdc0dd4b, 0xbe219b63, 0x3b404956, 0x3cd1eb56, 0xbc54fdf5, 0xbbbb0591, 0xbcc6faa9, 
    0x3dc871d2, 0xbada43c4, 0xbe77cc97, 0x3d26d706, 0xbc0c31c5, 0xbc849cc1, 0x3e2329f5, 0x3d742fa8, 
    0xbd7758d5, 0xbd19bc1a, 0x3e2c33f6, 0xbdd177a5, 0xbda6568e, 0xbce50d18, 0xbdc2a7ce, 0xbb407be8, 
    0x3c98e50f, 0xbd6f709e, 0xbe038aab, 0x38b0f27c, 0x3c4a7220, 0x3c28f8c5, 0xbbe8a7d6, 0xbc3ebcc1, 
    0x3da1ca51, 0xbd4ac58e, 0xbe730091, 0x3d8cf6e5, 0x3d27b030, 0xbc2cd1da, 0x3e294429, 0x3d9f6f47, 
    0xbd843cef, 0xbd5a9f60, 0x3e02445e, 0xbd091434, 0xbce21d06, 0xbca767e3, 0xbdbb602d, 0x3a906e2d, 
    0x3c8d1101, 0xbdaffb1c, 0xbd979ac2, 0x3c858c9a, 0x3c930375, 0xbcbbe8e2, 0xbcd3ac66, 0xbd1d59d7, 
    0x3dfb0310, 0x3c23ecb7, 0xbe967888, 0x3d49a269, 0x3c5cfaa5, 0xbc6a2c9c, 0x3e65b6f8, 0x3d562ee7, 
    0x3d35c02b, 0x3c917107, 0x3ce7a52e, 0xbc3de6c7, 0x3d2a9a5f, 0xbd42be80, 0xbe5af3cc, 0x3d7628e2, 
    0xbea878a5, 0x3db7f635, 0x3da46c86, 0x3cfbc83b, 0x3eadb73e, 0x3ec98fbf, 0xbe4b027f, 0xba3b8713, 
    0xbd912255, 0x3e3d65e3, 0x3c953618, 0x3ded9c7b, 0x3cef9add, 0xbb561d83, 0x3d0e2334, 0x3e7598ef, 
    0x3cc47030, 0xbc17e673, 0x3ddccef5, 0xbc990b07, 0x3c007b5b, 0xbdb8fe61, 0xbe06c789, 0x3e31ac0a, 
    0xbeb11473, 0x3d9280bd, 0xbc97a36b, 0xbc4c9f88, 0x3de1e007, 0x3ee7ee09, 0xbe655d27, 0x3c642a09, 
    0xbd69b274, 0x3e1159e2, 0xbaf1ee57, 0xbd2fa38b, 0x3e13ae93, 0x3d356e1f, 0x3d515ca2, 0x3e990bc6, 
    0x3cc66f76, 0x3d6ebd5e, 0x3dd1ac02, 0xbde55a0f, 0x3be09d88, 0xbdd7cde6, 0xbe71a6b3, 0x3d5ce3af, 
    0xbee2bbc9, 0x3d167cd4, 0x3c8c96d9, 0xbe00ffa6, 0x3e7310d1, 0x3ed5e0b1, 0xbe8d2503, 0xbd681b55, 
    0xbc28cb2f, 0x3dc6a441, 0x3b948bf5, 0x3d34c4b0, 0x3da00ade, 0x3cde95c8, 0xbd8ae8df, 0x3ea922df, 
    0x3c9e8a56, 0x3ccdf14f, 0x3d59b63a, 0xbd2c574e, 0x3d9b374c, 0xbe30ab0a, 0xbe9044fd, 0x3cf69691, 
    0xbe690a6f, 0x3d2a0304, 0x3d925385, 0x3c999fa4, 0x3e9f042c, 0x3ee81983, 0xbe88440d, 0xbe19e5c7, 
    0x3d0976a6, 0x3dc44284, 0x3b030b0b, 0xbd13d8d9, 0x3cf99ac6, 0x3d28fab2, 0xbd42217f, 0x3ea37832, 
    0x3c2e7a40, 0x3a2b8940, 0x3dabc92b, 0x3aa4101c, 0xbc4084a7, 0xbd55d38b, 0xbe6f4970, 0x3e078f35, 
    0xbecabcd1, 0x3d9e3a0a, 0xbe522a47, 0xbe03f676, 0x3d721207, 0x3eb32d3b, 0xbe9a9523, 0xbd7177eb, 
    0x3d70c640, 0x3e197852, 0xbc3a475a, 0xbbb9e50e, 0x3dcb2e11, 0xbd53dadc, 0x3b0000b1, 0x3ebc03aa, 
    0xbe291d19, 0x3d6e6069, 0xbe4c5856, 0xbc090a7b, 0x3bcdb320, 0xbcaafb23, 0xbdbf7268, 0x3e086767, 
    0x3d467741, 0x3d7b73e4, 0x3ab3c634, 0xbe72e6a0, 0xbe2a2c6a, 0x3da2de9a, 0x3ccc63be, 0x3e07bf57, 
    0xbdc51cb7, 0xbbfdb819, 0x3cae378a, 0x3c5c27ab, 0x3dbaac89, 0xbccc6263, 0xbd827210, 0x3d46bc54, 
    0xbe39a889, 0xbbc9ce33, 0xbe13e53e, 0x3d083720, 0xbc33f594, 0x3d13b39d, 0xbe03cc64, 0x3e14d884, 
    0x3d8cc5f2, 0x3d78fb96, 0xbb68a5ec, 0xbe222de3, 0xbda7f989, 0x3d78cee7, 0xbc28c61c, 0x3e238100, 
    0xbe0d10d9, 0xbd158679, 0xbcefa050, 0x3d467d40, 0x3da52448, 0xbd9b7f58, 0xbc58dd0b, 0x3db1e370, 
    0xbe246428, 0xbc13a21f, 0xbe3fe907, 0x3d5babfb, 0x3d049fea, 0x3c967805, 0xbe0c4ee4, 0x3e49dc8c, 
    0x3bc3f6cf, 0x3d4aa474, 0xbcca849d, 0xbe1193ac, 0xbdce4b18, 0x3daada88, 0xbd31b7af, 0x3de64313, 
    0xbd9bf3c9, 0xbd4c1844, 0xbd707cc6, 0x3d55e66d, 0x3d1e59a7, 0xbda4f6d4, 0xbc3118b6, 0x3de32835, 
    0xbe12f283, 0x3c90adbd, 0xbe04c986, 0x3c1fcd52, 0x3d13cbe0, 0xbcd72edf, 0xbdfddb91, 0x3dfb8db0, 
    0x3d415f9d, 0x3d890514, 0xbcdccd1c, 0xbdba8d15, 0xbd9b6704, 0x3dae1301, 0xbc3edf3a, 0x3e34df2b, 
    0xbd358262, 0xbd7291b1, 0xbda18f7f, 0x3d9fcd05, 0x3d8fc8da, 0xbdb00563, 0x3af70151, 0x3dc373a5, 
    0xbdc395a1, 0x3cca8e70, 0xbe095122, 0x3d18a67a, 0x3b9e374c, 0x3c913da7, 0xbdaa3fff, 0x3de1d121, 
    0x3db22160, 0x3ca51b51, 0x3d057f55, 0x3d8c4a7b, 0xbdc66259, 0x3da2cf26, 0x3c1f6cb2, 0x3d947df1, 
    0xbd5d77bf, 0xbcd8bc6b, 0xbd9db63a, 0x3da268fa, 0x3d994da6, 0xbd4f3fa4, 0xbb44b5bd, 0x3d9c4177, 
    0x3dcc3f5d, 0xbe572889, 0xbcfb26d0, 0xbdd3f664, 0xbd941310, 0x3de191ca, 0xbc8bbc8f, 0xbc7cbff6, 
    0x3ceabb2c, 0xbea9259b, 0xbe66e5bc, 0xbd49fbe3, 0xbe9a7320, 0xbe341f88, 0xbd3dc248, 0xbde41ea9, 
    0xbdf54609, 0x3c3771cc, 0xbe10f88b, 0x3cb0d513, 0xbe1d3bc1, 0xbd335a01, 0x3c104b49, 0xbda3d59e, 
    0x3e1e6b0e, 0xbe28a085, 0xbd0416dc, 0xbe19b4a7, 0xbd0a6b80, 0x3e3db57f, 0xbde99a8c, 0xbd5a98ee, 
    0xbd83576b, 0xbed6ba35, 0xbed06236, 0x3c322405, 0xbe8045bd, 0xbe28be1f, 0x3d71870f, 0xbd0f4b6c, 
    0xbe11994d, 0xbe3f5a8f, 0xbe192cd9, 0x3dc26f86, 0xbe01b163, 0xbc2edb38, 0x3daa7fa8, 0xbc06bb7e, 
    0x3d98eb9e, 0xbe23ff01, 0xbe2fa467, 0xbdc6f77d, 0xbce7a024, 0x3d91a7f8, 0xbdf0ccf0, 0xbdf2a30c, 
    0xbea0234d, 0xbe3433a6, 0xbd364524, 0x3d981837, 0xbdf59e05, 0xbe2be0e7, 0x3e15fed8, 0xbd8fc92a, 
    0xbe466943, 0xbe0e36a2, 0xbdbd2e43, 0x3dedd119, 0xbe150b18, 0x3da06856, 0x3d607975, 0xbd6b6b39, 
    0x3e2e7d39, 0xbdccfef2, 0xbe2725f5, 0x3d89cf3e, 0xbdb742ea, 0x3d27524b, 0x3d326ec8, 0x3cb5bceb, 
    0xbd5579cc, 0x3d6afabb, 0x3ea04663, 0x3d46df5b, 0xbe014618, 0xbdb4cd19, 0x3e56de5a, 0xbddeb2bc, 
    0xbe0d29f7, 0x3e4db13f, 0xbd410da3, 0xbc91f81d, 0xbdffc651, 0xbb5363e9, 0x3d67d6db, 0xbdcced0f, 
    0x3da07f5e, 0xbdb229d9, 0xbe1cb1dd, 0x3e243d2b, 0xbdfd8709, 0x3da778c2, 0xbd125561, 0xbd388825, 
    0x3ee5bb4a, 0x3e0e3ad5, 0x3f12a6b2, 0x3dc6d80e, 0xbd2f551b, 0xbd39ccc9, 0x3dc738a4, 0xbe783d6e, 
    0xbdba4df0, 0x3e99813a, 0xbd9c88e6, 0xbcbf4fc6, 0xbd95800f, 0x3def5aa6, 0xbb61af03, 0xbdc760cb, 
    0xbe4c1d5b, 0xbd2872ef, 0xbd84aceb, 0xbc8d4f39, 0x3c5bf96e, 0x3d5a7457, 0xbcea53be, 0x3e65144c, 
    0x3d8a43a4, 0x3d76781f, 0x3cae5677, 0xbe66d6a4, 0xbb32d621, 0x3d33783f, 0xbc83acb3, 0x3e1fb3f6, 
    0x3c1bc3e1, 0xbc19f1a2, 0x3c61d491, 0xbcd942b3, 0x3d8c3df8, 0xbdbd3db6, 0x3cbac613, 0x3d519686, 
    0xbe41d8a4, 0xbe088457, 0xbd4ef948, 0x3bd78c0b, 0xbca3369d, 0x3af181ef, 0xbdbc6ef7, 0x3e8163e4, 
    0x3dc44325, 0x3d14eee5, 0xbceb967f, 0xbe938132, 0xbacde361, 0x3d762920, 0xbd336d71, 0x3e2594f9, 
    0x3c252af4, 0xbd00d70a, 0xbd644209, 0x3d200977, 0x3db6ba5a, 0xbe0e1ca8, 0x3d7198f5, 0x3d8597a7, 
    0xbe28ffaa, 0xbdefae77, 0xbc808e0d, 0xbd47b96b, 0xbca6edc7, 0x3d85321c, 0xbe0fbe8a, 0x3e8d685a, 
    0xbc30877d, 0x3d04f544, 0xbc45bc44, 0xbeab0452, 0xbc6fc463, 0x3cd2ff1d, 0xbd42668c, 0x3e257e52, 
    0xbca3f7ef, 0xbd8636b4, 0xbd898e55, 0x3cbd97e4, 0x3dccac1f, 0xbe0ce94c, 0x3d7027a6, 0x3d5f69ff, 
    0xbe19a457, 0xbd943d23, 0xbc053993, 0xbc77d361, 0x3cd557c9, 0x3cad9816, 0xbe2c9591, 0x3e4ba9ac, 
    0x3e016311, 0x3d614ee4, 0xbce6f74a, 0xbe6ac2e7, 0x3da78273, 0x3d9b2873, 0xbb7dd988, 0x3e38b51a, 
    0x3c8324db, 0xbcc41d58, 0xbd99103c, 0x3d5de7fe, 0x3dadba65, 0xbd5c7572, 0x3d5b0e71, 0x3d47989a, 
    0xbe213231, 0xbd938e1c, 0xbd0f6a29, 0x3d602c6d, 0xbd35109b, 0x3d1c9142, 0xbe19d4dd, 0x3e5b0550, 
    0x3d341cc1, 0x3d3fd35b, 0xbcab1971, 0xbdbc8f18, 0xbc96443d, 0x3d3c401b, 0x3c59a0c1, 0x3db2c1bf, 
    0x3d286bd5, 0xbc18ab15, 0xbd842104, 0x3d5abd45, 0x3dbf352c, 0xbd4fdc2b, 0x3dbfe4ba, 0x3d629f4c, 
    0xbcc5cb66, 0xbdd9473e, 0xbd765463, 0x3e72fce1, 0xbeb44887, 0x3d614e9a, 0x3db32264, 0x3ea1b48f, 
    0xbdffb348, 0xbd9a658e, 0xbe9472ca, 0xbe048af2, 0xbd447232, 0xbe8ebe36, 0xbe8bf6e6, 0x3e072197, 
    0x3d6a857b, 0xbe32e6dd, 0xbcd5df48, 0x3d364f7a, 0xbdfb4618, 0x3d102f44, 0xbe11d89a, 0xbe835cfe, 
    0x3ce8b46c, 0xbdff401d, 0xbc264030, 0xbd259c5b, 0xbebfe956, 0x3db42b3e, 0x3db378b3, 0x3efc798f, 
    0xbe976967, 0xbdd24105, 0xbe6ae0d3, 0xbe878b7d, 0xbdef511c, 0xbe8749bf, 0xbe9ef978, 0x3e38e989, 
    0x3d353b85, 0xbd94ca08, 0xbdccdeb1, 0x3e2249e0, 0xbe544ecc, 0xbd16e099, 0xbc9ec34a, 0xbe39bff4, 
    0xbc36a56d, 0xbe02bf89, 0xbc887371, 0x3d296d15, 0xbe88f804, 0x3db009b5, 0x3d97da53, 0x3f02b7e5, 
    0xbdc92b33, 0xbdb445a0, 0xbdd62865, 0xbe5cc99e, 0xbe051e35, 0xbe280718, 0xbea70180, 0x3e1d90d3, 
    0xbd22ea93, 0xbe2697fa, 0xbe5abf51, 0x3d95eb2b, 0xbe216276, 0x3c1e4382, 0xbd97f8cd, 0xbe8a1835, 
    0x3d10a2f0, 0xbdf5074a, 0x3aff6a9c, 0x3e0fa5b4, 0xbeae85ad, 0xbd10b4f0, 0xbcd85278, 0x3eaea3c0, 
    0x3db21c0c, 0xbdce67ee, 0xbeb24518, 0xbe8f3f96, 0xbd9da323, 0xbe4d0210, 0xbe8dbf32, 0x3da7f962, 
    0xbdcb4ae7, 0xbe112bae, 0xbe7c9689, 0x3e0cb9ac, 0xbe32c2c1, 0x3c1423fe, 0xbd38564a, 0xbe52c0a0, 
    0xbc020854, 0xbe3dd302, 0xbcf1a0a1, 0xbe84353b, 0xbed19738, 0xbb031be4, 0xbde10a91, 0x3e8a80a9, 
    0xbe4908ea, 0xbce171d3, 0xbd9b4db5, 0xbd371c16, 0x3c89fcfa, 0xbe8d9c1d, 0xbe9b6e40, 0x3d990be6, 
    0xbd5e5982, 0xbe75ad53, 0xbe39d591, 0xbb4c927f, 0xbe2bc125, 0x3d826f28, 0xbccc1f1d, 0xbe88560a, 
    0x3d3196d1, 0xbade2726, 0x3e951a5a, 0x3e1e6fd9, 0x3bcc4d74, 0xbdf719f7, 0xbe5605eb, 0xbd0868bb, 
    0xbe3c2697, 0x3c96b39e, 0xbe12ba62, 0x3d8114f5, 0x3dbc4e5a, 0x3d8803c5, 0x3e15fc08, 0x3d4db52a, 
    0xbdac216a, 0xbd4daa33, 0xbdd87772, 0xbc6a4a31, 0x3dd3fb34, 0x3cf2b76f, 0x3bf2d22d, 0x3de79580, 
    0x3dae6c67, 0x3c900a11, 0x3ea68a23, 0x3ca4ea35, 0xbdb122bc, 0xbe3185ae, 0xbe3c1dda, 0xbd77952f, 
    0xbd87bd42, 0x3d4b694c, 0xbe378556, 0x3d44ea35, 0x3dd58ec0, 0x3d663c32, 0x3de91d66, 0x3c98b079, 
    0xbdb701f5, 0xbda91f00, 0xbdf5cf34, 0x3d27209a, 0x3e307555, 0xbc9538a8, 0x3d0943ac, 0x3db82528, 
    0x3c4aa0db, 0xbcb27632, 0x3eaffce9, 0x3cd0ac21, 0xbda330ae, 0xbe5d03df, 0xbdd06344, 0xbd7c67d9, 
    0xbe1cd2b0, 0x3d190709, 0xbe5b0d1b, 0x3cc62b22, 0x3d72f4fb, 0x3cec23ae, 0x3cb54241, 0x3d11d4b9, 
    0xbd344468, 0x3bc0bad9, 0xbe62b786, 0xbd08ae51, 0x3e272717, 0xbd10972b, 0x3d6caf91, 0x3d79eddb, 
    0x3cea0b9a, 0xbcfa2a64, 0x3e984c80, 0xbdd602d7, 0xbdfad953, 0xbe3cd9eb, 0xbdfd245b, 0xbdb1aa1f, 
    0xbe0db20e, 0x3d281b24, 0xbe3eb3b4, 0x3bce5da0, 0x3d044bb7, 0x3d1db04e, 0xbd353dc4, 0x3d100508, 
    0x3c6fbe38, 0xbc193511, 0xbe673eba, 0xbd682bc1, 0x3e046984, 0x3c8279c3, 0x3cdd0277, 0x3db47114, 
    0xbd263fd4, 0xbd20372e, 0x3e28e87e, 0xbd83644b, 0xbdf98944, 0xbe127ebe, 0xbe6ab02b, 0xbe05c971, 
    0xbd8a1afb, 0x3d4d98a7, 0xbe2cdff0, 0x3d4d926a, 0x3dc33db6, 0x3cad7891, 0xbba83630, 0x3c8c7119, 
    0x3ba72a95, 0xbd2210dc, 0xbe68856d, 0xbd9b9441, 0x3e1d47e9, 0xbc58ef70, 0x3d805d19, 0x3d2be7db, 
    0x3e5f25f2, 0xbd3f4575, 0xbe4314e0, 0x3e2b5135, 0x3d53459c, 0xbe75be60, 0xbe824025, 0x3e455b9d, 
    0xbea5c5d2, 0x3bbde732, 0x3de7036e, 0x3d40482d, 0x3dec7c4e, 0x3ee37404, 0x3defda0d, 0x3e2fc4c1, 
    0xbede8e35, 0x3e9f4648, 0xbe13eae7, 0xbf15806b, 0x3dec2bce, 0xbd01c2fe, 0x3deb8d3e, 0x3e9fdf83, 
    0x3e55fb49, 0x3c035a7d, 0xbe1517f8, 0xbe2d2edf, 0xbe36359d, 0xbe8f4a00, 0xbd23a4f9, 0x3e8d4088, 
    0xbea1e6bb, 0x3dded36d, 0xbe35f89b, 0xbd50b482, 0xbe2860f3, 0x3e9cb206, 0xbd8cf948, 0x3e7f77a2, 
    0xbebe1320, 0x3ea937ad, 0xbd76a082, 0xbec0895a, 0x3da523cd, 0x3dda88a2, 0xbd53dfe4, 0x3ea95d4a, 
    0x3e456be3, 0xbde0165a, 0xbdf412d6, 0xbb184d77, 0xbe231ad4, 0xbe64da6d, 0xbe9beb1b, 0x3e770bff, 
    0xbeed7627, 0x3dd5c4fd, 0x3d85759b, 0xbdc8e136, 0x3e40072b, 0x3ed201f7, 0xbe7f4924, 0x3e83a31a, 
    0x3b7c7226, 0x3ed68b05, 0xbd9ecac6, 0xbe17bfb3, 0xbd0c427f, 0x3d87d918, 0xbd9b01e6, 0x3eafa308, 
    0x3d088eee, 0xbdf3995b, 0xbdb2517b, 0x3d765b65, 0x3c7f3e3d, 0xbeb7b513, 0xbed0c24e, 0x3cefbdb5, 
    0xbe65b0a8, 0x3c460158, 0x3ce283f8, 0xbca01c8d, 0xbc8a5724, 0x3ef4f071, 0xbe6f5621, 0x3e32f56b, 
    0xbe50866e, 0x3e65446f, 0xbe29d4d6, 0xbef3ee41, 0x3bb80281, 0x3c92e487, 0xbd7ed028, 0x3ea35f18, 
    0x3b4288cc, 0xbdd2d289, 0xbdb70b6e, 0xbc3ff1a7, 0xbdf723d7, 0xbe79c2d8, 0xbec431a3, 0x3e8c17fa, 
    0xbeee3d0b, 0x3db2e96b, 0xbeb1600a, 0xbd694e41, 0xbea00dcd, 0x3eb9881c, 0xbe83dc45, 0x3e6cfa45, 
    0xbdf1d473, 0x3e926517, 0xbe869f4f, 0xbeaf9689, 0x3ddffdf1, 0x3c9e7c82, 0x3d210d7e, 0x3e9ae59b, 
    0x3edcbc56, 0x3d83edc5, 0x3d8a50dd, 0x3e861cb8, 0x3bf28b67, 0xbdda6388, 0xbd642242, 0xbdc012c3, 
    0xbd75dfc0, 0x3c131ce9, 0xbe20d376, 0xbc8aa80b, 0xbdfa23b7, 0x3e147519, 0xbdc21d25, 0x3e8a6b59, 
    0xbe894c42, 0x3c2c88e1, 0x3d162339, 0xbd3dfa36, 0xbeb16cd0, 0x3ea0c43a, 0xbe08f483, 0x3da8c031, 
    0x3ed57bbb, 0x3be58523, 0x3c9fe658, 0x3e06d1dc, 0xbd47ab34, 0xbdb602e2, 0xbd13a17a, 0xbe3e6d65, 
    0x3bf37849, 0x3c3f17f5, 0x3a341f81, 0x3e2525cd, 0x3d82fd79, 0x3ca2939c, 0xbda90d67, 0x3e50167d, 
    0xbec5feaf, 0xbe1b1558, 0xbcbd2d3d, 0xbe61f2a0, 0xbe674c98, 0x3e835468, 0xbe308638, 0x3e0a6748, 
    0x3ebbaad2, 0xbd93f9b3, 0xbd85dd91, 0x3eac7677, 0xbdb66e35, 0xbe4bb42c, 0xbd962938, 0xbe6e27b0, 
    0xbdc04090, 0x3d9f9ab0, 0xbd80d3c6, 0x3d9c1b90, 0xbead7909, 0x3d4aabcc, 0xbd89ebaa, 0x3d02abff, 
    0xbeb2393f, 0xbd35ba67, 0x3cc26cd2, 0xbe061846, 0xbe67774e, 0x3e9280ed, 0xbe65dbe2, 0xbc81f0d4, 
    0x3eb8e595, 0xbc76f641, 0x3df74126, 0x3d01c5a2, 0xbde797af, 0xbe61054e, 0xbd9ddd7e, 0xbe070168, 
    0x3deae1ed, 0x3dc773ae, 0x3e82f15f, 0x3e92b553, 0x3e3aa00e, 0x3d944ec3, 0xbde59cc2, 0x3dcbbb86, 
    0xbe862d7a, 0x3d5721ee, 0xbcaed575, 0xbe20ca94, 0xbdc6a3e9, 0x3e95b871, 0xbe28691d, 0x3d98020e, 
    0x3ebe08e4, 0xbce9358b, 0x3dc158e3, 0x3ed500fc, 0xbe35ba60, 0xbe7f8a79, 0xbcf46e0f, 0xbce6a0d6, 
    0xbd4df43e, 0x3e87347d, 0x3e48fd98, 0x3e79517a, 0x3baac7fd, 0x3df368a2, 0xbe18f98b, 0x3d937681, 
    0xbec2465f, 0x3d7a5806, 0xbd024452, 0xbe6825a8, 0x3baef124, 0x3ea56146, 0xbe731985, 0x3cd0fcf9, 
    0x3d850647, 0x3cd95d99, 0x3e99a646, 0x3d661490, 0x3dc53136, 0xbcec7568, 0xbe39cd86, 0x3d776048, 
    0xbe7e248f, 0x3d863402, 0x3c68362a, 0x3d3d3a15, 0x3e13afe9, 0x3e269204, 0xbde4a3fb, 0x3d4ed2b3, 
    0x3bb5f24a, 0x3ccb0588, 0xbd9a1070, 0x3d918a52, 0x3d41f0b7, 0x3c1214b3, 0x3d677e86, 0x3e026ef7, 
    0x3ced1874, 0x3c079305, 0x3e9fd88c, 0x3d6c0b12, 0x3d36421d, 0xbdd318cb, 0xbe4507be, 0x3d573148, 
    0xbe310830, 0x3dba8024, 0x3a44a3a3, 0x3c94594d, 0x3e2eb185, 0x3e3e8467, 0xbdf038ce, 0x3b3a3b27, 
    0x3cd15fa6, 0x3cdb2ffa, 0xbd800287, 0x3ce1ef69, 0x3dd9125f, 0xbce64b75, 0x3cc950d9, 0x3e0cba2e, 
    0x3c024575, 0xbd140c4b, 0x3e93b257, 0xbd104f03, 0x3c9dbaca, 0xbdf86358, 0xbdc78021, 0x3d0572fe, 
    0xbe6d3545, 0x3d92f61f, 0x3c95224a, 0xbc2ccb50, 0x3e0aa121, 0x3dd971b8, 0xbe31baa5, 0xbc82ec5f, 
    0x3c59a2eb, 0x3c50ba18, 0xbd9f8192, 0x3d40b6e8, 0x3d0c7827, 0x3c40d66d, 0x3d1e4864, 0x3e04d798, 
    0x3bc968df, 0xbd2d79ea, 0x3e95c647, 0xbcddc90c, 0x3ab97042, 0xbdb0118a, 0xbe1ab157, 0x3d4819ff, 
    0xbe60a60a, 0x3d8e5cd5, 0x3ca67f65, 0xbd3383f5, 0x3dd5e883, 0x3e0272b2, 0xbe004909, 0x3cf52f24, 
    0x3d987254, 0x3d6b87e0, 0xbd9263cb, 0x3ca1c74e, 0x3d0c3990, 0xbc69053c, 0xbbd9aec5, 0x3e0d961b, 
    0xbc025142, 0xbd5e0443, 0x3e80a509, 0xbd30d43f, 0xbc4c2caa, 0xbdba6dde, 0xbe3a7ba0, 0xbc9882ef, 
    0xbe56a533, 0x3d2fcb87, 0xbd98e36e, 0xbca5f876, 0x3e32640f, 0x3e05a21b, 0xbdf9053c, 0x3c937350, 
    0x3d889773, 0x3d0a1abf, 0xbe00e75b, 0xbd5f6e62, 0xb9e3201e, 0xbccd72bc, 0xbc462d80, 0x3e0f5de6, 
    0xbda26301, 0x3e35e542, 0x3e0a6ab0, 0x3dc84e09, 0x3e5b2c32, 0x3e0dc0df, 0x3eb61732, 0x3e7c8368, 
    0x3ea22a6d, 0xbe913345, 0x3df5a9cf, 0x3e32f3af, 0x3c2ca56f, 0xbe073740, 0x3e5b15dd, 0xbda7c792, 
    0x3e4d945e, 0xbe95e149, 0x3e041ec3, 0x3e762dbc, 0x3e096249, 0x3c9859fe, 0x3dda85a9, 0xbe074b6f, 
    0xbe0f9388, 0x3e0253bb, 0x3da9f58a, 0x3e2e149e, 0x3e748d59, 0x3e2d2278, 0x3e72398e, 0x3e4a4ae2, 
    0x3e490d0f, 0xbe6675a1, 0xbd3346a0, 0x3d422020, 0xbda7f77c, 0xbdc98ddd, 0x3dbd8194, 0xbe1db9ed, 
    0x3dcf9297, 0xbe381fc2, 0xbccad03c, 0x3e9684ce, 0x3d10837c, 0xbd2fb5ba, 0x3e1a17e6, 0xbce120c4, 
    0xbd837254, 0x3e1931ea, 0x3d942bac, 0x3da06dd1, 0x3ea2ecad, 0x3dfac84e, 0x3e88227a, 0x3e301fd1, 
    0x3e807bce, 0xbea8be25, 0xbd13f6e1, 0x3d888fff, 0x3dd660fd, 0xbd84e0d7, 0x3e651bc0, 0xbdd25688, 
    0x3e5ef543, 0xbe07038e, 0xbd11720a, 0x3e4e6af8, 0x3e19b280, 0xbda64c1c, 0x3e201975, 0xbd5ad50f, 
    0xbd768ede, 0x3e219728, 0x3d2ce579, 0x3c4df546, 0x3e26bbe0, 0x3e254168, 0x3e53d323, 0x3e8126af, 
    0x3c1e82a2, 0xbea74556, 0xbdc8ba85, 0x3b275ddc, 0x3d866d98, 0x3d261c01, 0x3e8cacd7, 0xbd2b9bd8, 
    0x3ddcf437, 0xbe3b8f06, 0xbd51add5, 0x3e627668, 0x3dfddd3c, 0xbdf9bfa0, 0x3e0a14db, 0xbc033070, 
    0xbd50e526, 0x3e201e65, 0x3d88ce41, 0x3d8ec76e, 0x3e8131c8, 0x3daa3aba, 0x3e8446cb, 0x3e81390a, 
    0x3cd62f92, 0xbeab2221, 0x3d673e50, 0x3ddc76fa, 0x3b5d9415, 0x3cd3cf7a, 0x3e88ebd0, 0xbe231e92, 
    0x3db6252b, 0xbdedb90b, 0x3d8e5aa2, 0x3e4e35f7, 0x3e14fcf7, 0xbe10a761, 0x3d353924, 0xbccb17b2, 
    0xbdd2f546, 0x3e57d5b8, 0x3d3e3836, 0xbb3f2c36, 0xbca59a5a, 0xbe4e3dad, 0xbc5c1257, 0xbe402a28, 
    0xbd185e39, 0xbe78b032, 0xbd80a1e6, 0x3dc7e6bc, 0x3e2c7082, 0xbdbd346e, 0xbe031c24, 0xbe772ff1, 
    0x3dac83d5, 0x3e0140a4, 0xbe4f6163, 0xbdd7292a, 0xbe5b74a8, 0x3deb752f, 0xbc747bee, 0x3d149d80, 
    0xbdc549e8, 0x3e2fb295, 0x3d1cd003, 0x3d9e30ec, 0x3d04a097, 0xbc823e2f, 0x3d316b16, 0xbe8ab0bd, 
    0x3e485cac, 0xbddc63fd, 0x3e3c0077, 0x3e3bf838, 0x3e59d67f, 0xbcb99fea, 0xbdb110cf, 0xbe6a1dac, 
    0x3d6a803a, 0x3e258394, 0xbe62a1a0, 0x3d756cb8, 0xbe8093de, 0x3d6aa4da, 0x3e08a85b, 0x3d8783b5, 
    0xbdbd467b, 0x3e38711f, 0x3dba1b4a, 0x3e12ff07, 0x3d68c3b2, 0x3d680eaa, 0x3da056d0, 0xbe2c80da, 
    0x3c6d3cef, 0x3d2b1e3f, 0x3e40f65f, 0x3d88859b, 0x3e91eaa5, 0x3cdc1af2, 0xbc4a6613, 0xbe8be092, 
    0x3e2b16ad, 0x3e9a2ae0, 0xbe12bd73, 0xbe315a34, 0xbe4dd7c2, 0xbb4e36c3, 0x3dd75f9d, 0x3c978660, 
    0xbaca27a6, 0x3e8004eb, 0x3dac7729, 0x3de62c1b, 0x3de0ad60, 0x3e5f7fad, 0x3e03e6cf, 0xbcf4c104, 
    0x3c9bb26e, 0x3d1597bb, 0x3e64dc6a, 0x3cd51e5d, 0x3e9ab7b2, 0x3c49b984, 0x3d433f94, 0xbe9cb8d5, 
    0x3e3b5d61, 0x3e9eaa84, 0xbe541e17, 0xbce27dbc, 0xbe4bf467, 0x3d981394, 0x3e4d1ed4, 0xbdee71f2, 
    0xbdaf41c2, 0x3e403153, 0x3d34f3ba, 0x3d939eb0, 0x3e50d9d1, 0x3e990a80, 0x3e12a3f2, 0xbd460077, 
    0x3d995e22, 0xbe5d3cec, 0x3d34b3f1, 0x3d18d3ac, 0xbc10d3a4, 0xbdb44e0a, 0x3dadcbb6, 0xbea8860b, 
    0x3e740caf, 0x3e702ace, 0xbe35afe4, 0x3dea9e85, 0xbe0de50b, 0x3b30469e, 0x3e887957, 0xbd90f247, 
    0x3eb7fe60, 0x3e2f43dd, 0xbde2baea, 0x3eebffb0, 0xbccdc310, 0xbec084bd, 0xbdedc4d5, 0xbe833030, 
    0x3da37995, 0xbd884a05, 0x3e74ae07, 0x3dc3113e, 0x3e11e450, 0x3d889d8e, 0xbe586cfc, 0xbde9b951, 
    0xbec3b01c, 0x3cef52e1, 0x3e112905, 0x3dfe4147, 0xbe41849d, 0x3eaf2c9f, 0xbec544f3, 0x3c8b7edd, 
    0x3eb2194b, 0x3e3cc82e, 0xbe100274, 0x3ede9414, 0xbe6bac93, 0xbe8e3f47, 0xbe824456, 0xbd7c5e6b, 
    0xbd4b2cc3, 0xbdb6ef47, 0xbea3d59f, 0xbd973586, 0xbeb5181f, 0x3e046644, 0xbe4257f1, 0xbd99459f, 
    0xbe6710c2, 0x3c759eb4, 0xbd5b3229, 0xbe452e4a, 0x3c397261, 0x3ea0e141, 0xbead6001, 0x3d924e91, 
    0x3e59417f, 0x3ed6f69c, 0x3e56e2e4, 0xbbd37d41, 0xbe953ea1, 0xbdefa62e, 0xbec9f2b0, 0xbdd3120f, 
    0x3e1fcf77, 0xbde5f7ad, 0x3e1487bd, 0x3de1b237, 0x3ec4b288, 0x3e6bd844, 0xbe57111a, 0x3d5ad967, 
    0x3e2133e4, 0x3e4433b7, 0x3d9f1036, 0x3ec3f731, 0xbe87d952, 0x3ebf60e5, 0xbd5e9c8d, 0xbd124ad2, 
    0x3df105b7, 0x3e446557, 0xbe004912, 0x3ed10552, 0x3cbdc428, 0x3dc3a8c9, 0xbe984e45, 0xbde9c98b, 
    0x3dce7b31, 0xbe955d3d, 0xbd44a868, 0xbd988b22, 0xbede6150, 0x3e78ba63, 0xbd390804, 0xbdbb5f6d, 
    0x3e14b299, 0xbdb3d67a, 0xbd88b6d5, 0x3b9b589c, 0x3be1236c, 0x3ea05f8b, 0x3d37dfde, 0x3e0d6382, 
    0x3e25e191, 0x3e5cb50d, 0x3de58479, 0x3dbe9969, 0xbe0fd503, 0x3eccc657, 0xbec6b915, 0x3c30ff8d, 
    0x3e61f5db, 0xbf3679a6, 0xbef50412, 0xbe138bf4, 0xbd646009, 0x3d0dcf72, 0x3e17ddac, 0xbe5e6906, 
    0x3e924ea2, 0xbe53def0, 0xbd1729f1, 0x3e8ff87d, 0xbde24a30, 0x3e1be5c6, 0x3e993c71, 0x3c95e768, 
    0x3dc68b9d, 0x3e81a94b, 0x3cc6d9cc, 0x3e482923, 0x3dc70ce9, 0xbe1abf63, 0xbdea940b, 0x3e25aeab, 
    0xbeda3975, 0x3aeb60d6, 0xbd413b39, 0xbe46c8fc, 0x3d80ac27, 0x3e93e2d0, 0xbe82601f, 0x3de12226, 
    0xbe2cb835, 0x3e79f81c, 0x3ca8b295, 0x3b293297, 0xbd7aa04c, 0x3d84f933, 0xbde1f7c9, 0x3d7e9eb0, 
    0x3e19f121, 0x3e5a3b81, 0xbbf6ffd1, 0xbb0fcd02, 0x3dea8e6e, 0xbe2a9cfd, 0xbe4bfd9e, 0x3ddad893, 
    0xbe3b5efc, 0x3cbaa14d, 0xbd698edb, 0xbd68fe59, 0x3e4707c0, 0x3e823d1a, 0xbe6abb51, 0x3d0d29bd, 
    0xbd6e0ff8, 0x3df63e90, 0x3d96a2b5, 0xbeb361e2, 0xbd0d939c, 0x3b29121b, 0xbd063f96, 0x3e0ed7ab, 
    0x3e013da0, 0x3e8ccef4, 0xbcf7f03b, 0xbd1d94dc, 0x3c94f0c4, 0xbe74017d, 0xbe27a833, 0x3d05050f, 
    0xbed6ef2c, 0x3e1c3915, 0x3e59e087, 0xbdd06427, 0x3e698b06, 0x3e924a81, 0xbeb0f852, 0xbc0ca042, 
    0xbd8da776, 0x3e281531, 0x3e0dd11e, 0xbcdca722, 0xbdd2ce90, 0x3d56738b, 0xbd15d8fe, 0x3c83120c, 
    0x3cf6e867, 0x3e21eb1e, 0xbd9656c7, 0x3e294566, 0x3de903b9, 0xbdea59e8, 0xbddfe7d2, 0x3e06c708, 
    0xbefec043, 0x3d6ef61f, 0xbde93727, 0xbe48b1e5, 0x3cccacc2, 0x3e58d3c8, 0xbeb23363, 0x3ccef613, 
    0x3dcaa63a, 0x3e86a40e, 0x3dbf2c8f, 0xbe6105f7, 0xbd838e10, 0xbb9901a4, 0xbe34a6b6, 0x3e0556d0, 
    0x3c68b30c, 0x3e5906e7, 0xbd3cff0c, 0xbd53a489, 0x3d0376d4, 0xbdfe5aae, 0xbe9ab83a, 0x3d1f3c63, 
    0xbea9023a, 0xbc9bc241, 0xbe4db1ba, 0xbe393185, 0x3e3ebc31, 0x3e5a94c8, 0xbe5aed01, 0xbc000ac5, 
    0x3e0fd4e2, 0x3e2a0df8, 0x3da55b4e, 0xbe89ac01, 0xbe228187, 0x3d097bda, 0xbe35bf90, 0x3da814b6, 
    0x3e047b5a, 0xbc8de28d, 0x3c9dbf4b, 0xbd0237ef, 0xbe4ba488, 0x3e1e5230, 0xbdf53054, 0x3e3104cb, 
    0x3dfefe52, 0xbd805a87, 0x3d818f92, 0x3d48f799, 0x3d8899a4, 0xbd559e99, 0x3d525a03, 0x3daad02e, 
    0x3cc7fde8, 0xbd735046, 0x3e01ba5e, 0x3dccf27e, 0x3d9e3f50, 0x3d548040, 0x3bf38a5c, 0xbd026701, 
    0x3e13d074, 0xbc2694a3, 0x3cbd2b59, 0xb9ef9859, 0xbe35bd08, 0x3d8b4c81, 0xbcd57dcb, 0x3e834844, 
    0x3cfca078, 0xbcbe2b36, 0x3d9fdb83, 0xbd1a43a2, 0x3d58afe5, 0xbdc4b4ff, 0x3b8c6367, 0x3d84d9ad, 
    0xbc24b43d, 0xbd05bb37, 0x3e0c640e, 0x3e1e2ae2, 0x3d86ccd4, 0x3ceb04a6, 0x3d885b97, 0xbdaf2a37, 
    0x3e142bac, 0x3b934ad0, 0x3c95f062, 0xbd718090, 0xbe454d6d, 0x3e50b480, 0xbdb76ff8, 0x3e87a113, 
    0x3e19aa23, 0xbcde7bfb, 0x3d3ec081, 0xbdb32577, 0x3d887aab, 0xbdfac97e, 0xbc2269f6, 0x3cadddee, 
    0x3d074ec8, 0xbc4787f5, 0x3e2d84d0, 0x3e096f2d, 0x3d771ebf, 0x3bd4e97b, 0x3d75e048, 0xbd842fd7, 
    0x3e1ba644, 0x3daab626, 0x3d8da006, 0xbdc2cac6, 0xbe0e9e4f, 0x3e742c0e, 0xbc9d268f, 0x3e44e8b4, 
    0x3e3aaefa, 0xbddc5971, 0x3d1c1e27, 0xbe22118d, 0xbbe2b484, 0xbddf3c5b, 0xbacd5846, 0xbc79c78f, 
    0x3c873671, 0x3d0c901f, 0x3e112191, 0x3e097e02, 0x3db5b38e, 0x3d8d47ca, 0x3d8bdc5b, 0xbd337107, 
    0x3dd2099b, 0x3d0102c5, 0x3bb3b35a, 0xbd2d7801, 0xbe224fa2, 0x3e76ea6b, 0x3c48733c, 0x3dd4b26d, 
    0x3b86d236, 0xbe56f43c, 0xbe1986df, 0xbdd1843f, 0xbd156afd, 0xbd4def47, 0x3cd49a99, 0x3c98f921, 
    0x3c9ee0fb, 0xbd2505ec, 0x3dbd2fbe, 0x3daca532, 0x3dca9b98, 0x3d82a2da, 0x3cc9f43e, 0xbd9f7972, 
    0x3e772f77, 0xbe83d661, 0xbd5b9847, 0xbe128ad7, 0x3dfcef14, 0xbe263304, 0xbe31ec31, 0x3e261ce4, 
    0x3cabb0be, 0x3eb0ce94, 0x3eaf4542, 0x3e6c729f, 0x3e8fb346, 0x3a8d42e1, 0x3e39497a, 0x3dc3ab27, 
    0xbe62ccaf, 0x3dd9a2ac, 0x3e315158, 0xbe9451ce, 0xbdef8c5b, 0x3e266d2c, 0xbdbb3542, 0xbcede59d, 
    0x3e969414, 0xbe824a19, 0xbe01f562, 0x3e17feb2, 0x3de453ac, 0xbdfda571, 0xbe36587d, 0x3d50e159, 
    0xbe8ece3b, 0x3e9def3d, 0x3e30bce8, 0x3d80dda9, 0xbea431c0, 0xbdb26657, 0x3e0feec1, 0x3e22d7d4, 
    0xbea9b9bc, 0x3dafc63f, 0x3e622346, 0xbe630dc8, 0xbde7556a, 0x3dedcfbb, 0xbd9aad15, 0xbe115033, 
    0x3e5fbf9a, 0xbdb46d05, 0x3dd41e04, 0xbd1bdc1e, 0x3c86c3d1, 0xbe8f195a, 0xbb384c7e, 0x3e13fa4c, 
    0x3d7b1894, 0x3ece6a0b, 0x3eb2ff0e, 0x3e2a428f, 0x3eaf1ead, 0xbdcb23f5, 0x3dd2f8a9, 0x3d7589b0, 
    0x3dc839cc, 0x3e475b74, 0x3eb8d105, 0xbe0dbe69, 0xbe0d8cc6, 0x3e4c63c5, 0xbda3b2c0, 0xbddce0f3, 
    0x3e578523, 0xbd92db03, 0xbe0708c4, 0x3db36937, 0xbd0cc1d3, 0xbea02fd0, 0xbe6775b8, 0x3e9e82e6, 
    0x3c21b5ea, 0x3ef52907, 0x3ed83969, 0xbc96a38b, 0xbefe48ee, 0xbde530a9, 0xbd3804ca, 0x3dec7100, 
    0xbeadfcef, 0x3dedff7d, 0x3eadfda9, 0xbe6f410d, 0xbbe41512, 0x3dd6844d, 0x3d1b4ce1, 0xbdcea8c0, 
    0x3e5874ce, 0xbd89eb2e, 0x3e1739da, 0xbdd34d7f, 0x3e470d07, 0xbe0c990a, 0x3ddc4ee5, 0x3ea2a6e5, 
    0x3ee751be, 0x3edc3807, 0x3ed201c2, 0x3d056ab5, 0x3da2c830, 0xbd64da2d, 0xbe2a97aa, 0xbcc7b96d, 
    0x3cda0fb1, 0x3ca9513a, 0x3e9f7faf, 0xbe34863d, 0x3c413f46, 0x3cbc041d, 0xbd5e5ea0, 0xbd922814, 
    0x3e76ad65, 0x3e584eb8, 0x3d390352, 0x3f03ea9d, 0x3e315c4f, 0x3e0448fb, 0xbe094ea1, 0xbd2be724, 
    0xbc3d7e81, 0xbdbbb4f2, 0xbe3d43b2, 0xbe8b12c7, 0xbe8ae848, 0x3e46df7d, 0xbdc5a9f0, 0x3da5d6af, 
    0xbde2faf5, 0x3bdba82a, 0xbdc1cc77, 0x3e2906d0, 0x3c8b9fd2, 0x3eb4b4b7, 0x3d6745dc, 0xbd3e0df2, 
    0x3e0040a1, 0x3e27df48, 0xbd395100, 0x3f160a4d, 0x3dd6faba, 0x3e0da845, 0xbe1da43d, 0xbebbaf4f, 
    0x3e111b2f, 0x3d8cdf2a, 0x3eeec0c8, 0xbdc0d101, 0xbd1ef77f, 0x3dab89eb, 0xbdee1323, 0xbe07def8, 
    0xbd4877cb, 0xbdb78464, 0xbcaece41, 0xbdc15f80, 0xbdd7bfb3, 0x3ea4a037, 0x3dce90f9, 0x3cae6c1b, 
    0x3ea19952, 0x3dc600f5, 0xbd99d65b, 0x3f2c7c64, 0x3b9c558a, 0x3db7698e, 0xbd4f0b62, 0xbd3cdfa3, 
    0xbde7b837, 0x3e091e24, 0xbe03c2d8, 0xbd76ca02, 0xbe74c242, 0x3d75d10a, 0xbd903b60, 0xbdd5a6d2, 
    0xbd989de1, 0x3db34224, 0xbe3cbe56, 0xbe0084bd, 0x3dd19cb0, 0x3ece77d8, 0x3a39b951, 0x3e1ad501, 
    0x3e34bfd4, 0x3ecd305a, 0x3e1b00d0, 0x3e7667aa, 0xbd59a6ba, 0x3d96f9b8, 0xbecc5985, 0xbe179e83, 
    0x3e19acdc, 0xbb929152, 0x3e95c1cb, 0x3dd001e2, 0x3f0d6982, 0x3e2cc7fc, 0xbe376e38, 0xbda602f5, 
    0x3e5eb8b2, 0x3da26422, 0xbdb27dae, 0x3ef4122d, 0xbed514f6, 0x3edac4b2, 0x3d28932e, 0xbc8fccaf, 
    0x3e07344a, 0x3e591e80, 0xbdaaf31d, 0x3f30947a, 0x3e5315e2, 0xbd42f9bc, 0xbde5c34b, 0xbe79bb07, 
    0x3d509535, 0x3d7561ae, 0x3e91d31a, 0x3deb15f5, 0xbddcf15c, 0x3ed0df60, 0xbd99327e, 0xbe1513ee, 
    0xbca56c1c, 0xbe2ddca3, 0xbe13b9a8, 0x3c4637d8, 0xbe8c86a3, 0x3ec70e4d, 0x3dadbd09, 0x3d8d607b, 
    0x3ec1a99a, 0x3d9c1a8e, 0x3e0c6699, 0x3ea658a2, 0x3de7e2f7, 0xbd21e284, 0xbef0c2c4, 0x3b5ed94d, 
    0x3d02102e, 0x3dadb821, 0x3e485f09, 0x3c0b2295, 0x3e9b0ed0, 0x3df895c6, 0x3dbd34d3, 0x3dc0ef65, 
    0xbe90af58, 0xbd04e838, 0x3d0bcc3a, 0x3e8f555a, 0xbe9b073b, 0x3ec80d3f, 0xbe58db71, 0xbd8d8029, 
    0x3ec23087, 0xbd252abb, 0x3d0b6d42, 0x3ee523c2, 0x3cfcb840, 0x3da3c2b6, 0xbea0e089, 0xbe3829e7, 
    0x3bb947cb, 0x3ca4d6ab, 0xbdc348b7, 0xbd10217e, 0xbe9a119f, 0x3e32b36e, 0xbddf0ce9, 0x3a0aef9e, 
    0xbe8c25b1, 0xbcb82308, 0x3d8c9410, 0xbe8515c4, 0xbe4f2e34, 0x3e9b79ee, 0xbe076347, 0x3da9b3d6, 
    0x3ef98166, 0xbd07465e, 0x3dd1c370, 0x3e11e380, 0xbb97f6d3, 0xbd6f8ea8, 0xbee7783b, 0xbda54899, 
    0xbc99e533, 0xbdafce28, 0xbe3e4468, 0x3d94db0f, 0xbe4d1d23, 0xbd80682b, 0x3cdb09f9, 0xbd7c9df2, 
    0x3d79fca6, 0xbc5817e6, 0xbdaf69f7, 0xbe0e2076, 0xbe801365, 0x3e843c77, 0xbd9322c1, 0x3cfcc28e, 
    0x3ed62e9b, 0x3d085eb1, 0xbd7d8200, 0x3deb8cff, 0xbc99f570, 0xbde3c649, 0xbefe9750, 0xbabc1c85, 
    0x3dde20e6, 0x3d688295, 0x3e55ab3f, 0x3cfe9c2d, 0x3e327c08, 0x3e003ea0, 0xbd0fd68f, 0x3db8bd6a, 
    0xbe8f207a, 0xbda3956d, 0xbcfe1120, 0x3e3d78c4, 0xbe5a5c83, 0x3ed07931, 0xbe221dc7, 0xbcfb0957, 
    0x3ea2763d, 0x3c8bae94, 0x3d26b45e, 0x3edb15e5, 0x3d60cc32, 0xbcb2b75e, 0xbe68d21e, 0xbd971246, 
    0x3d1777fc, 0x3e4b01ab, 0x3e9fe8e2, 0x3e67ca77, 0x3c715514, 0x3e35a3c6, 0xbda4b380, 0xbca34cac, 
    0xbe724261, 0xbc55bce1, 0xbc920cf7, 0xbcdf5d27, 0x3b90f071, 0x3e8ba45f, 0xbe1c273a, 0x3dbdb091, 
    0x3e16670b, 0xbd86d6b3, 0xbe0bceac, 0x3ce941ca, 0x3ced984f, 0xbc69a96d, 0xbe4f880e, 0x3da2b19a, 
    0xbdeb92c0, 0x3d69c49a, 0xbc617e02, 0xbd410301, 0xbe3f3968, 0xbc921fda, 0x3d4ab6e2, 0x3dd5ca77, 
    0xbe54e733, 0xbd2d4be4, 0xbca4b758, 0xbccef020, 0xbd7c4e92, 0x3d622ce1, 0xbdd360e5, 0x3c2007ee, 
    0x3e38206a, 0xbbe08ed3, 0xbd16d407, 0x3c7781b7, 0x3d045751, 0xbd9b88b7, 0xbe250914, 0x3dbb4026, 
    0xbce9ced7, 0x3de4a6fb, 0x3d4119dc, 0x3cc95b55, 0x3dc37907, 0xbd232f33, 0x3d839915, 0x3ccbcc6f, 
    0xbe6a3a3f, 0xbc3fbe21, 0x3d18f90e, 0x3d3c154c, 0xbd4ad130, 0x3dd6785b, 0xbd61d94d, 0xbd373fe7, 
    0x3e037dd5, 0x3c4d0133, 0xbe1ac695, 0x3d128ca3, 0xbd1fb663, 0xbdecf569, 0xbe26a15f, 0x3ce6e1cb, 
    0xbdbc6650, 0x3d901bd6, 0x3b0a3d62, 0xbca18172, 0xbe7a3416, 0x3c772fd4, 0x3bc1aa5f, 0x3d5418e4, 
    0xbe582864, 0xbd0e139d, 0x3d0f199b, 0xbda90220, 0xbd926571, 0x3deb9e8e, 0xbdbd4bae, 0xbc81abda, 
    0x3e2601fc, 0x3b20516f, 0x3d84d206, 0xbcabcb6a, 0xbd4db874, 0xbd7c7d93, 0xbe18ad15, 0x3d946179, 
    0x3e2ee90d, 0x3dac8572, 0x3e254a34, 0x3dea3a39, 0x3defae2d, 0xbb90e031, 0xbd23a172, 0x3cdcdced, 
    0xbd11551a, 0x3d4cb664, 0x3d509c3e, 0x3bc98a46, 0xbd6ae306, 0x3de1976b, 0xbd0095e7, 0xbd78cda1, 
    0x3dc60600, 0xbc137fef, 0xbca4ac4e, 0x3d1fc34f, 0xbd18fcdc, 0xbdbbc999, 0xbde45333, 0x3d21e969, 
    0x3e46b2cd, 0x3da719aa, 0x3dd66b57, 0x3daf5895, 0xbc4406b1, 0x3c058022, 0xbe248d15, 0xbca3ca06, 
    0xbe0708d0, 0xbcafebb1, 0x3da59614, 0xbd76158e, 0xbd8065a7, 0x3e14d55b, 0xbd96f297, 0xbd253b11, 
    0x3dde30c0, 0x3e0996f2, 0x3d713005, 0x3d4b4a17, 0xbd071d73, 0xbe37164a, 0xbd806b48, 0xbe7f48ef, 
    0xbcc3b724, 0x3d5d0115, 0x3e2a9fb3, 0x3dc72854, 0xbcb67682, 0xbcd9651a, 0xbd6d74ad, 0xbda0654a, 
    0xbd6045e8, 0x3d8eac91, 0xbd9a1e1d, 0xbe6c303e, 0xbdaf42ba, 0x3dafa8cc, 0xbda1e336, 0x3d6f36e2, 
    0x3e00e542, 0x3dc38d79, 0xbcb0c525, 0x3e838d3c, 0x3dac649b, 0xbe058931, 0x3d83ed13, 0xbe4671a1, 
    0xbe208a4c, 0x3d0cf4d8, 0xbbc4f2e1, 0x3d3e3db8, 0xbe0359d7, 0x3bbed290, 0xbe0dbc8b, 0xbda9df59, 
    0xbdbe42a2, 0x3dcb1e48, 0xbdf3ca4d, 0xbe707f19, 0xbdc78a16, 0x3dc4c10f, 0xbe1dbf31, 0x3d46976a, 
    0x3d0b48f4, 0x3e210d41, 0x3e035398, 0x3e38cd71, 0x3d9c5588, 0xbe09099d, 0xbda87ea3, 0xbe48dfad, 
    0x3e1957d1, 0xbd1acbb4, 0x3e5435ec, 0x3e3e2411, 0x3db7d7d4, 0xbc0fb1ca, 0xbe0abbef, 0xbd9dd1b2, 
    0x3bd813f1, 0x3e27bd3a, 0xbde3b00b, 0x3dc74cd2, 0xbe0be9ca, 0x3db38694, 0xbd35fef3, 0x3c8c57f7, 
    0x3db9f1a4, 0x3dd24ad9, 0x3e0b815f, 0x3e9bc116, 0x3dfa3e87, 0xbd22d347, 0x3d76bc2e, 0xbdf8ee29, 
    0x3cf1d6d7, 0x3c5ddec9, 0xbcba81aa, 0x3df78e39, 0xbcf3d477, 0xbd39e70a, 0xbc56df69, 0xbda5dfe1, 
    0xbdc52088, 0x3de787f4, 0xbe4f6545, 0xbcc9df6d, 0xbd937e54, 0x3dc26767, 0xbd090187, 0x3daf258f, 
    0x3d885c51, 0x3e105ea6, 0x3e36f068, 0x3debb7ef, 0xbcf98b00, 0x3b074eb9, 0xbdb3a1ff, 0xbda6e72a, 
    0x3d93db2d, 0xbd9cc84f, 0x3e24482a, 0x3e13d3ca, 0x3de033d7, 0xbb28cfe1, 0xbe241d48, 0xbe03646e, 
    0x3c80ec58, 0x3d806848, 0xbe41782e, 0x3cd4d502, 0xbe02547e, 0x3e12e43f, 0x3dd9ea34, 0xbd077bdf, 
    0x3ac525c4, 0xbb7b3fcb, 0x3e09074d, 0x3c1ba360, 0x3ddbc699, 0x3c9d7502, 0x3a036faa, 0x3d010f9b, 
    0xbd9f2d1f, 0xbd9b4bce, 0x3c150475, 0xbdad6369, 0x3e1d2d36, 0x3e6de75f, 0xbe22267b, 0xbdb2fb96, 
    0xbd62eca8, 0x3c0f9b4c, 0xbdf29988, 0x3e2ccd24, 0x3d89660b, 0xbbf20c36, 0xbbdb8c38, 0x3e82ddbc, 
    0x3c34f319, 0x3cfcfe08, 0x3dcf1a21, 0x3dc05225, 0x3dec5372, 0xbccbb054, 0xbc5d7535, 0x3dccf8fc, 
    0xbda84c2f, 0xbd06b5e2, 0xbd9ef41b, 0xbdaa9fed, 0x3e2a3ed7, 0x3e305ccb, 0xbe3f63a5, 0xbd79a8ac, 
    0xbd441b9e, 0x3d1c14ff, 0xbe0de326, 0x3e008f0a, 0x3dadb690, 0xbd0d89a6, 0x3d5f746c, 0x3ea1a0bb, 
    0x3d0804ac, 0x3b336bbd, 0x3e29d07f, 0x3c9cafe0, 0x3e111f4e, 0xbc51d9d1, 0x3c59f588, 0x3dbdb626, 
    0xbdc49f49, 0xbd9dfb86, 0x3c93f257, 0xbd7492af, 0x3e460e56, 0x3e228fb0, 0xbe33deca, 0xbc46ec47, 
    0xb9efd3cf, 0x3d4849bf, 0xbddb84cc, 0x3e224696, 0x3dcb3cf9, 0x3c87fda9, 0xbbad4561, 0x3e9c25af, 
    0xbcf3c32d, 0x3bc05b82, 0x3e1bd30c, 0x3d9e5f6d, 0x3e0c6414, 0xbc973f0e, 0xbb9c3d22, 0x3d4591ea, 
    0xbd99e327, 0xbd2ce915, 0x3c85c318, 0xbdb5d822, 0x3e8d937d, 0x3e7937fc, 0xbdde3382, 0xbcf451fb, 
    0xbca8fcf1, 0x3d080d41, 0xbdcab90f, 0x3de9812f, 0x3da005e6, 0xbc84e700, 0x3cdcc378, 0x3eb1b25b, 
    0xbced7fad, 0xbcac863a, 0x3e05641d, 0x3daa09e3, 0x3dd20824, 0xbd297ad6, 0x3c09b1c5, 0x3ab1a2f5, 
    0xbbce4b6c, 0xbd4863ff, 0xbda016bf, 0xbd318636, 0x3e492245, 0x3e418852, 0xbe2a7217, 0xbd228b47, 
    0x3d7c46bd, 0x3d01ec86, 0xbe04e4d7, 0x3dbf8c26, 0x3d71f67a, 0xbbb940ad, 0x3d78d61b, 0x3e7636c6, 
    0x3e798164, 0xbe7ab2fd, 0xbe7b56b5, 0xbe53ed0c, 0xbdd366e1, 0xbe277e6e, 0x3c9d2751, 0xbd3de2d4, 
    0xbe9ecb6d, 0x3dbc961f, 0x3d9d9ae6, 0x3d7d692c, 0xbd42311d, 0xbe8d224b, 0x3d3d595e, 0x3b008956, 
    0xbd7404ec, 0xbd887005, 0x3e97a41e, 0xbde02f18, 0xbe935f58, 0x3d84ea0b, 0x3e35ab28, 0xbe15548c, 
    0x3e940411, 0xbe0e88a1, 0xbdb13bf5, 0x3d5be179, 0xbddb358f, 0xbe7592b3, 0x3d9b2d78, 0x3e74d8d0, 
    0xbba7b7bf, 0x3e959f2c, 0x3f441caf, 0x3d8b8731, 0x3dd805d9, 0xbe95bdb2, 0xbd821245, 0xbd7f2b4b, 
    0xbe2eba71, 0x3d8d64ef, 0x3e9b21f5, 0x3c427318, 0xbe07dcc8, 0x3e0f05ac, 0x3e370095, 0xbe14129e, 
    0x3e815587, 0xbe4e7c99, 0xbe4b77dc, 0xbd087107, 0xbe394a74, 0xbd475f46, 0x3d5e4c75, 0x3e9062a9, 
    0x3ed2842a, 0x3e887793, 0x3ed4f354, 0xbe26f1ca, 0xbeb3e4c7, 0xbe896b24, 0x3c72d7c8, 0xbe64a950, 
    0xbde118fd, 0x3d07babe, 0x3e5e2a82, 0xbe462cdc, 0xbdc31307, 0xbbff79a4, 0x3da68491, 0xbd9e29bd, 
    0x3e55ccf2, 0xbcaf14bf, 0x3d87565f, 0xbeb30679, 0xbda3492f, 0xbb9fde9d, 0xbe6e3f26, 0x3e2d6c3d, 
    0x3ee2c804, 0xbb3c6e4a, 0x3e927fa9, 0x3dcba567, 0x3eb3e0d8, 0xbde5a8e8, 0xbd366ed3, 0xbe19f243, 
    0x3e422ab9, 0x3b3dc9f6, 0x3e80405a, 0xbdebbd41, 0xbdff3a66, 0x3e78bb9b, 0x3d280e13, 0xbe04aa7d, 
    0x3e2b06cc, 0xbdc02856, 0xbcbf1474, 0x3e62000a, 0xbe292ab3, 0xbd974edd, 0xbdfbfbbb, 0x3d1268cf, 
    0xbea73759, 0x3dab0045, 0xbddbdcbc, 0x3db939ca, 0xbd3a4d06, 0xbde4ac66, 0xbd9ae510, 0xbe136361, 
    0xbe6ced41, 0x3c3d8c07, 0x3e8c1798, 0xbe9f076c, 0xbdaa8d61, 0x3dd86bd7, 0x3d052333, 0x3cf8dd5b, 
    0xba0e5b13, 0xbe3b6030, 0xba3e1e2e, 0x3cc68f04, 0xbda28671, 0x3cb0b574, 0x3ceb72be, 0x3aa8ee78, 
    0x3d7a5c17, 0x37083437, 0x3daf1e14, 0x3d98919d, 0x3b2ebfea, 0xbe42af0a, 0x3d690b6e, 0xbda68b8e, 
    0x3d56f23a, 0xbd9cefea, 0x3c973697, 0xbc1d5dfd, 0xbcc8d5d4, 0xbd5f0951, 0x3e02b0ec, 0xbe2bfb2e, 
    0x3ce03d56, 0xbe45731b, 0xbaf7dedd, 0x3ce1a8af, 0xbd825cef, 0x3c725337, 0x3dbe034a, 0xbd37c70d, 
    0x3e3420f3, 0xbc290bed, 0x3df21c46, 0x3daa5e6d, 0xbcd7d1b5, 0xbe612001, 0x3d1cd9f4, 0xbdeb0a23, 
    0x3d5e24b6, 0xbc97a97f, 0x3d574b25, 0xbcfb3b75, 0xb89b0105, 0xbd74e0da, 0x3dc55059, 0xbe5f36b7, 
    0x3d14c055, 0xbe7b43a8, 0xbc63936e, 0xbc820513, 0xbdd006ad, 0x3d6809f7, 0x3c89748d, 0xbd803026, 
    0x3e5463c2, 0xbd6a3146, 0x3cba92b8, 0x3d25a901, 0xbd9d862e, 0xbe631bba, 0x3d4e8ecc, 0xbe011d60, 
    0x3cee92af, 0xbd8fc513, 0x3bdd3706, 0xbd65c1bc, 0xbc8d9908, 0xbd52ca85, 0x3dbd2b4e, 0xbe6d532f, 
    0x3d09a1d9, 0xbe677476, 0xbbd2241f, 0xbd016d30, 0xbd93686a, 0x3d7b70a2, 0x3d528f16, 0xbdb6b1d6, 
    0x3de1e5fb, 0xbdba9a59, 0xbd8a26cf, 0x3d40696c, 0xbd2dd16f, 0xbe5988cb, 0x3d7d7832, 0xbdca89d9, 
    0x3ce0ff72, 0xbe01846e, 0xbca490ca, 0xbd34e97a, 0xbbf06c87, 0xbcc72235, 0x3de1023a, 0xbe289ce2, 
    0x3d048511, 0xbe814fff, 0x3c63177e, 0xbd6d8746, 0xbdaa119c, 0x3c58656d, 0x3d57a948, 0xbd66a080, 
    0x3cb370e0, 0xbde1c367, 0xbd74fa65, 0x3d92de6e, 0xbdb7797a, 0xbe3a65a2, 0x3cf53e0f, 0xbdcb8640, 
    0x3c067dc1, 0xbe207856, 0xbc6b9bd6, 0xbce17334, 0xbd6a54a2, 0xbcd8cb30, 0x3db3d90e, 0xbe2d84e2
};

static const uint32_t _K35[] = {
    0x3ed5af80, 0x3ee3e303, 0x3e127886, 0x3ed34f40, 0x3f461e87, 0x3ea0f95e, 0x3fa1e520, 0x3ec95fc2, 
    0x3f4bd3dc, 0x3f164375, 0xbe3ec220, 0xc0258ee1, 0xbf0084c3, 0x3e5ada84, 0x3f815ccb, 0xbf8e4756, 
    0xbfa3a293, 0xbf854240, 0xbe250660, 0x3e16e76d, 0xbe99f00b, 0xbec9c381, 0xbf251495, 0x3f498fc2
};

static const uint32_t _K41[] = {
    0x3e274b8c, 0xbf2bb9e2, 0x3df8501d, 0xbd7d7134, 0xbdc6e80d, 0xbe9de4ce, 0xbdb84176, 0xbdc67ac9, 
    0x3f0db084, 0x3e95b184, 0x3e8415c8, 0x3f5e28c2, 0x3f111ddc, 0x3f87069b, 0x3f1a1dc6, 0xbe10525b, 
    0x3ecbca45, 0x3f5373e8, 0x3f34890e, 0x3e73f6ef, 0x3e986dbb, 0xbd0c141b, 0x3ea63211, 0xbeec8019, 
    0xbf74ccd0, 0x3e1beb7d, 0x3ea785f2, 0x3f20701e, 0xbfb33fc0, 0x3eadb417, 0x3e498692, 0x3ecf13db, 
    0x3e9d53cb, 0xc0033ea1, 0x3f23baee, 0xbfa38c91, 0xbeb7e331, 0xbf7f4016, 0x3f12de42, 0xbf057ace, 
    0xbf350a17, 0xbf9d3f18, 0xbfa2cf2b, 0xbed5ca0f, 0xbf8cf856, 0x3f3b3d8f, 0xbf6aefe1, 0xbf347bd5, 
    0x3f83d471, 0x3f485749, 0xbf081559, 0xbfcf9da0, 0x3e25f8e2, 0xc00e9b55, 0xbfd1da99, 0x3ed29279, 
    0xbfd98bf6, 0xbef4da15, 0x3ea9c1d5, 0x3f2802ba, 0x3f38d58c, 0xbe2b35d0, 0xbf367d69, 0xbf033bf3, 
    0xbfa14887, 0x3f507000, 0xbee1c41d, 0xbf958efe, 0x3f122fe8, 0xbd484432, 0xbf7a4995, 0x3f28dbda, 
    0xbf3e0718, 0xbed13f1e, 0xbfa3cc9b, 0x3e359802, 0x3dc8f41b, 0x3db71325, 0x3f6ecf97, 0xbf927973, 
    0xbf688a41, 0x3f179997, 0xbf92d5ac, 0xbef5987a, 0xbf71d5a0, 0xbf90b465, 0xbfb2229c, 0x3ef38f3b, 
    0x3ee20da9, 0xbecb3503, 0x3e2fff56, 0x3e2cc812, 0xbd08e337, 0xbea74555, 0x3f2fa726, 0x3e9ffc4a
};

static const uint32_t _K43[] = {
    0xbf3f722c, 0x3e7c4b38, 0x3ee808e6, 0x3ec74dc0
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[22] (88 bytes) 
#define _K18             ((float *)_K18)                     // f32[12,5,20] (4800 bytes) 
#define _K21             ((float *)_K21)                     // f32[12] (48 bytes) 
#define _K25             ((float *)_K25)                     // f32[24,5,12] (5760 bytes) 
#define _K28             ((float *)_K28)                     // f32[24] (96 bytes) 
#define _K32             ((float *)_K32)                     // f32[24,5,24] (11520 bytes) 
#define _K35             ((float *)_K35)                     // f32[24] (96 bytes) 
#define _K4              ((float *)_K4)                      // f32[512] (2048 bytes) 
#define _K41             ((float *)_K41)                     // f32[4,24] (384 bytes) 
#define _K43             ((float *)_K43)                     // f32[4] (16 bytes) 
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
#define _K30             ((float *)(_buffer + 0x00000b40))   // f32[30,24] (2880 bytes) 
#define _K31             ((float *)(_buffer + 0x00000000))   // f32[30,24] (2880 bytes) 
#define _K33             ((float *)(_buffer + 0x00000b40))   // f32[30,24] (2880 bytes) 
#define _K37             ((float *)(_buffer + 0x00000000))   // f32[30,24] (2880 bytes) 
#define _K39             ((float *)(_buffer + 0x00000b40))   // f32[15,24] (1440 bytes) 
#define _K40             ((float *)(_buffer + 0x00000000))   // f32[24] (96 bytes) 
#define _K42             ((float *)(_buffer + 0x00000060))   // f32[4] (16 bytes) 
#define _K44             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K5              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
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
    conv1d_flat_f32(_K15, _K18, _K17, 20, 1220, 30, 12, 40, 100);
    add_f32(_K17, _K21, 1, 1, 1, 30, 12, _K19);
    relu_f32(_K19, 360, _K23);
    conv1d_flat_f32(_K23, _K25, _K24, 24, 384, 30, 24, 12, 60);
    add_f32(_K24, _K28, 1, 1, 1, 30, 24, _K26);
    relu_f32(_K26, 720, _K30);
    conv1d_flat_f32(_K30, _K32, _K31, 48, 768, 30, 24, 24, 120);
    add_f32(_K31, _K35, 1, 1, 1, 30, 24, _K33);
    relu_f32(_K33, 720, _K37);
    maxpool1d_valid_f32(_K37, 2, 2, 24, 15, _K39);
    globav1d_f32(_K39, 15, 24, _K40);
    dott_f32(_K41, _K40, _K42, 24, 4, 1);
    add_f32(_K42, _K43, 1, 1, 1, 1, 4, _K44);
    softmax_f32(_K44, 4, data_out);
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

