/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:34 UTC. Any changes will be lost.
* 
* Model ID  2307b415-2867-4bd5-85f5-606c022927e7
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  34084 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-3
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [128]           float      dequeue
*    window_shape = [128]
*    stride = 16
*    buffer_multiplier = 1
* Hann smoothing                 [128]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [65,2]          float      dequeue
*    axis = 0
* Frobenius norm                 [65]            float      dequeue
*    axis = 0
* Mel Filterbank                 [10]            float      dequeue
*    num_filters = 10
*    sample_rate = 16000
*    f_low = 300
*    f_high = 6000
*    htk = True
*    librosa = False
* Clip                           [10]            float      dequeue
*    min = 0.000316227766016
*    max = 3.40282347E+38
* Logarithm                      [10]            float      dequeue
*    base = 0
* Sliding Window (data points)   [60,20]         float      dequeue
*    window_shape = [60,20]
*    stride = 660
*    buffer_multiplier = 1
* Input Layer                    [60,20]         float      dequeue
*    shape = [60,20]
* Convolution 1D                 [29,13]         float      dequeue
*    filters = 13
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = valid
*    activation = linear
*    use_bias = True
*    trainable = True
*    weight = float[3,20,13]
*    bias = float[13]
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,32]
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
* Dropout                        [7,32]          float      dequeue
*    rate = 0.05
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
* (ACC) Accuracy 83.646 %
* (F1S) F1 Score 83.004 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11205             3890             4186             3311
* (FN) False Negative or Incorrect Negative Prediction              851              444                4             3118
* (FP) False Positive or Incorrect Positive Prediction             1185             2176               53             1003
* (TN) True Negative or Correct Negative Prediction               13768            20499            22766            19577
* (TPR) True Positive Rate or Sensitivity, Recall               92.94 %          89.76 %          99.90 %          51.50 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.08 %          90.40 %          99.77 %          95.13 %
* (PPV) Positive Predictive Value or Precision                  90.44 %          64.13 %          98.75 %          76.75 %
* (NPV) Negative Predictive Value                               94.18 %          97.88 %          99.98 %          86.26 %
* (FNR) False Negative Rate or Miss Rate                         7.06 %          10.24 %           0.10 %          48.50 %
* (FPR) False Positive Rate or Fall-Out                          7.92 %           9.60 %           0.23 %           4.87 %
* (FDR) False Discovery Rate                                     9.56 %          35.87 %           1.25 %          23.25 %
* (FOR) False Omission Rate                                      5.82 %           2.12 %           0.02 %          13.74 %
* (F1S) F1 Score                                                91.67 %          74.81 %          99.32 %          61.64 %
*/

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[6308];
static int8_t _state[6044];

// Parameters
static const uint32_t _K4[] = {
    0x00000000, 0x3a2060a9, 0x3b20478a, 0x3bb4216b, 0x3c1fe331, 0x3c795d97, 0x3cb323ed, 0x3cf32edf, 
    0x3d1e53c1, 0x3d47afe8, 0x3d7591fa, 0x3d93ee9d, 0x3daf3913, 0x3dcc9745, 0x3debf6cf, 0x3e06a204, 
    0x3e183509, 0x3e2aa975, 0x3e3df3b8, 0x3e5207bd, 0x3e66d8ef, 0x3e7c5a43, 0x3e893f20, 0x3e949b85, 
    0x3ea03b30, 0x3eac16db, 0x3eb82717, 0x3ec46456, 0x3ed0c6ed, 0x3edd4719, 0x3ee9dd06, 0x3ef680d1, 
    0x3f019548, 0x3f07e929, 0x3f0e3815, 0x3f147e19, 0x3f1ab747, 0x3f20dfb8, 0x3f26f390, 0x3f2cef02, 
    0x3f32ce4d, 0x3f388dc5, 0x3f3e29ce, 0x3f439ee6, 0x3f48e9a0, 0x3f4e06ae, 0x3f52f2d9, 0x3f57ab0e, 
    0x3f5c2c57, 0x3f6073e1, 0x3f647efe, 0x3f684b26, 0x3f6bd5f7, 0x3f6f1d3a, 0x3f721ee1, 0x3f74d90a, 
    0x3f7749fe, 0x3f797038, 0x3f7b4a5d, 0x3f7cd746, 0x3f7e15f8, 0x3f7f05ae, 0x3f7fa5d0, 0x3f7ff5fa, 
    0x3f7ff5fa, 0x3f7fa5d0, 0x3f7f05ae, 0x3f7e15f8, 0x3f7cd746, 0x3f7b4a5d, 0x3f797038, 0x3f7749fe, 
    0x3f74d90a, 0x3f721ee1, 0x3f6f1d3a, 0x3f6bd5f7, 0x3f684b26, 0x3f647efe, 0x3f6073e1, 0x3f5c2c57, 
    0x3f57ab0e, 0x3f52f2d9, 0x3f4e06ae, 0x3f48e9a0, 0x3f439ee6, 0x3f3e29ce, 0x3f388dc5, 0x3f32ce4d, 
    0x3f2cef02, 0x3f26f390, 0x3f20dfb8, 0x3f1ab747, 0x3f147e19, 0x3f0e3815, 0x3f07e929, 0x3f019548, 
    0x3ef680d1, 0x3ee9dd06, 0x3edd4719, 0x3ed0c6ed, 0x3ec46456, 0x3eb82717, 0x3eac16db, 0x3ea03b30, 
    0x3e949b85, 0x3e893f20, 0x3e7c5a43, 0x3e66d8ef, 0x3e5207bd, 0x3e3df3b8, 0x3e2aa975, 0x3e183509, 
    0x3e06a204, 0x3debf6cf, 0x3dcc9745, 0x3daf3913, 0x3d93ee9d, 0x3d7591fa, 0x3d47afe8, 0x3d1e53c1, 
    0x3cf32edf, 0x3cb323ed, 0x3c795d97, 0x3c1fe331, 0x3bb4216b, 0x3b20478a, 0x3a2060a9, 0x00000000
};

static const uint32_t _K11[] = {
    0x00000002, 0x00000003, 0x00000005, 0x00000007, 0x0000000a, 0x0000000d, 0x00000011, 0x00000015, 
    0x0000001a, 0x00000020, 0x00000027, 0x00000030
};

static const uint32_t _K18[] = {
    0x3f6f6e83, 0x3f88345c, 0xbeaba9c2, 0x3e7de27f, 0xbfc6ff6a, 0xbec9a875, 0x3f699cad, 0x3d7caaaf, 
    0x3e255f18, 0xbec0b261, 0x3eee4f03, 0x3f21f000, 0xbe1446d3, 0x3eadbfd2, 0xbf86744c, 0xbcd3f324, 
    0x3f4ae345, 0x3e1353f1, 0xbda7174e, 0xbeb4e4bf, 0x3ea0957e, 0x3f5816d9, 0xbf130c73, 0xbdefc7f6, 
    0xbfb4d3b7, 0xbed591d9, 0x3f6cd213, 0xbd706bc0, 0x3bc1e112, 0xbda5b9f3, 0x3f043de6, 0x3f295488, 
    0xbe5061eb, 0x3dc6bc76, 0xbfaf71ff, 0xbd7c6440, 0x3f3e8018, 0x3e2297b5, 0xbe2c39e9, 0xbed180aa, 
    0x3f294697, 0x3f000686, 0xbe63e170, 0xbda0cd25, 0xbfb8c123, 0xbe895dad, 0x3f5867f4, 0x3de1d73e, 
    0x3e146b76, 0xbf028b42, 0x3f4584b1, 0x3f5df82a, 0xbf10dcc4, 0xbe0c38c9, 0xbfa303b6, 0xbf282dbf, 
    0x3f3f8bf7, 0x3ea6c776, 0xbcb0a9ca, 0xbdf79ac8, 0x3d286977, 0xbf41ae66, 0x3e53c604, 0xbe883f05, 
    0xbe8b5f2d, 0xbefe71bf, 0x3edec578, 0x3dc613ab, 0xbdc0b0d6, 0xbe1f75e6, 0xba06e130, 0xbf07ad3b, 
    0x3e0fadde, 0xbe137808, 0x3b820714, 0xbe881cbe, 0x3de5fef0, 0x3eb5561d, 0x3d6d5c90, 0xbe1d1100, 
    0x3e808942, 0xbea46e8d, 0x3e108114, 0xbdb33d3b, 0xbe57354f, 0x3c811d2a, 0x3e55456f, 0x3ec4d0ac, 
    0x3e796ae4, 0x3d119818, 0x3e13bc2f, 0xbecd5a11, 0x3e372caf, 0xbd076e4c, 0xbe702d9f, 0xbeaccc18, 
    0x3ec652eb, 0x3e819cad, 0x3e87abfe, 0xbe73f8ef, 0x3d3a2032, 0xbedba7e4, 0x3ef4e86a, 0x3dd9bad0, 
    0xbda843fd, 0xbe07f960, 0x3e82d848, 0x3e64c2dd, 0x3e627f4c, 0xbd840b92, 0xbe129ffa, 0xbf1aafd5, 
    0x3cd0474a, 0xbe022756, 0xbe215ac7, 0x3d9f2a99, 0x3ec317ba, 0x3f0dbe72, 0xbd10ba61, 0xbdf2b644, 
    0x3ec708ad, 0xbf869138, 0x3f56500c, 0xbf19d609, 0x3dad60f3, 0xbf5fe634, 0xbf968d88, 0xbe3b8dd3, 
    0x3f42e172, 0x3f0bd27b, 0x3e86de91, 0xbf7755d8, 0x3f82bf7d, 0xbf340ebe, 0x3ee40b8a, 0xbf26d834, 
    0xbf50a746, 0xbdef70f0, 0x3f553f3e, 0x3f0f40f8, 0x3e70987a, 0xbf6f5e1e, 0x3f8ae119, 0xbf0a8a89, 
    0x3e927657, 0xbf4c1212, 0xbf265ca2, 0xbe3f36aa, 0x3f59b411, 0x3f0a8f4a, 0x3ed11e59, 0xbf4fef99, 
    0x3f357aa3, 0xbf1b970b, 0x3f044542, 0xbef7e912, 0xbf87d0eb, 0xbe974839, 0x3f6d8311, 0x3f25d09b, 
    0x3ed1ed31, 0xbf275a52, 0x3f1bd42c, 0xbf05dc2c, 0x3ef4ad45, 0xbf33d197, 0xbf42cefe, 0x3ca90997, 
    0x3f6d1dc2, 0x3f311f13, 0x3ecdd7d6, 0xbf39cfb4, 0x3f839b2c, 0xbe803a43, 0x3e8943cf, 0xbef8edc2, 
    0xbf643e26, 0x3d7755fa, 0x3f382492, 0x3f2ba417, 0xbd99d643, 0x3cc9b8b4, 0x3f80dff1, 0xbe63eb6a, 
    0xbf5b8572, 0xbec05ff5, 0xbe8889aa, 0x3dc3e691, 0x3fa1cee1, 0xbf3ebd0e, 0xbd7cde44, 0x3d3d1e5a, 
    0x3f471329, 0xbec0fda2, 0xbf0c43d5, 0xbeee1a33, 0x3e4df056, 0x3eba3940, 0x3fc46e7d, 0xbf6cd28f, 
    0xbe67de3b, 0x3daa42e3, 0x3ef8ab4f, 0xbf31275a, 0xbf3f2643, 0xbe319578, 0x3e90f056, 0x3cd01cbe, 
    0x3fa010ce, 0xbef8db43, 0xbe896542, 0x3d62020e, 0x3f537084, 0xbef3185e, 0xbeb68c12, 0xbee2d485, 
    0x3e2a76ef, 0x3ddfc695, 0x3fb118e7, 0xbf1eb5a6, 0xbd990a35, 0x3b74573f, 0x3f52834e, 0xbf1957bf, 
    0xbf31ce43, 0xbe922297, 0x3e1d43e3, 0x3d3c7be6, 0x3fb043be, 0xbf163fd2, 0x3d186334, 0x3d0a5935, 
    0x3f83a28c, 0xbe6e34ad, 0xbf631cdb, 0xbe90c268, 0xbe13ed5e, 0x3e0e414a, 0x3fb82d43, 0xbf07a48f, 
    0xbf32bb2f, 0x3e19a5d6, 0x3f3a21af, 0xbf239d00, 0x3cfb3524, 0xbec71b62, 0xbf81816f, 0xbf708e39, 
    0xbd519a31, 0xbe9ae548, 0xbf025b4c, 0x3e8c579c, 0x3f2430e6, 0xbf517411, 0xbe0342a0, 0xbebf3bd2, 
    0xbf1b9272, 0xbf7592bd, 0xbdc6b99f, 0xbd9ad212, 0xbf02f969, 0x3f03b4b9, 0x3f47231a, 0xbf36120a, 
    0xbd86c575, 0xbf15bf6e, 0xbf589bb6, 0xbf36fb54, 0x3db0fc0a, 0xbc4835f1, 0xbeb90a2e, 0x3e99c8e6, 
    0x3f3fa29a, 0xbf456e11, 0xbd748ae8, 0xbf22e524, 0xbf438060, 0xbf3f0c5c, 0x3ec83e7a, 0xbeb9a79e, 
    0xbec35ec0, 0x3e99d53c, 0x3f38b2a0, 0xbf3a6cc4, 0xbecf38e1, 0xbf03e98c, 0xbf83f4c7, 0xbf44149f, 
    0x3e601d40, 0xbe36053d, 0xbf34d9d3, 0x3e6790b5, 0x3ec9f9fb, 0xbf2f428d, 0xbe8a3229, 0xbecd470e, 
    0xbf901d17, 0xbf5957c2, 0x3ef5c298, 0xbe1dd005, 0x3e95974f, 0xbf15a858, 0xbf61b647, 0xbf66ddb0, 
    0xbf6ff376, 0xbf07a1a4, 0x3f04f9fd, 0x3f0139e2, 0x3e92a8b4, 0x3f7b9201, 0x3f095dd4, 0xbf5da4eb, 
    0xbf81962b, 0xbf576320, 0xbf58deea, 0xbf1791b3, 0x3ec188d4, 0x3ee75aa5, 0xbdbac737, 0x3f5df5ac, 
    0x3e6c31e3, 0xbf107a16, 0xbf5eab4b, 0xbf2e9bea, 0xbf2baa3b, 0xbec8f249, 0x3f10ced3, 0x3e9293cb, 
    0x3d216d8f, 0x3f6255d9, 0x3e72965c, 0xbf48cce3, 0xbf1fb4e1, 0xbf4e6213, 0xbf3b9b1d, 0xbee5abc1, 
    0x3f0c2312, 0x3ee469f1, 0x3de11767, 0x3f7a72a3, 0x3ebf8861, 0xbefb5247, 0xbf5c8a0a, 0xbf09c576, 
    0xbf0ad67b, 0xbf2047bc, 0x3efe391d, 0x3f2421bb, 0x3e271747, 0x3f59f0af, 0x3e892a35, 0xbf43e06d, 
    0xbf88cad4, 0xbf63411d, 0xbf4b53e1, 0xbf0c7bc5, 0x3f07f9a7, 0x3f14b73c, 0xbca24a03, 0x3f7bdc12, 
    0xbe66230a, 0x3eea2085, 0xbf12b88d, 0x3fa382a7, 0xbf38492c, 0xbf1fa524, 0x3f202d6b, 0xbb26dc9e, 
    0xbf3cb2b8, 0x3ec2c81a, 0xbd7feabc, 0x3ef31202, 0xbe9f4e07, 0x3fb245f8, 0xbf835fe7, 0xbf347136, 
    0x3f365b97, 0x3db28b53, 0xbef80c4c, 0x3f34ba8c, 0xbed576ef, 0x3e1644a5, 0xbf1ab735, 0x3f94d4db, 
    0xbf2d04be, 0xbf3d6a3c, 0x3edf34b2, 0x3dba6786, 0xbf1975b7, 0x3e98717f, 0xbe8170be, 0x3ece9ef0, 
    0xbe989140, 0x3f9ac2b2, 0xbf41d37b, 0xbefa3495, 0x3f30fc97, 0xbe91e08f, 0xbf514798, 0x3f05f4c7, 
    0x3d8d4817, 0x3e74f519, 0xbef30906, 0x3fa4f313, 0xbf10a739, 0xbf0589d7, 0x3f027b60, 0xbe13e207, 
    0xbef1b8bd, 0x3eb894c9, 0x3ca3cabc, 0x3ebfb9d2, 0xbef66b7e, 0x3f990fe7, 0xbf7e390c, 0xbf18e182, 
    0x3f2553df, 0xbc3f7346, 0xbf06ff3e, 0x3f28a49f, 0x3d9e0e75, 0xbeb4a7b0, 0xbf193d2b, 0x3eefc05a, 
    0xbf299dda, 0xbd566f77, 0x3f6b1d02, 0x3f079bc5, 0xbeb0a8d8, 0xbedc2585, 0x3d61bbbe, 0xbe2141bc, 
    0xbee48f2f, 0x3f199052, 0xbec28dac, 0x3e435e6d, 0x3f4bfa2e, 0x3efa255b, 0xbeaa5e10, 0xbe1181fa, 
    0x3d3a1110, 0xbead2f7f, 0xbf2687a3, 0x3ea10912, 0xbeba2873, 0xbc07eb1a, 0x3f898560, 0x3f2784e1, 
    0xbeb082e3, 0xbe793032, 0xbb210ba0, 0xbeddf9a6, 0xbf0aecb9, 0x3e9d31fd, 0xbe920980, 0x3e91459b, 
    0x3f925978, 0x3ed5283f, 0xbeba6f94, 0xbe8f6b99, 0x3d0ea4a2, 0xbebb1651, 0xbeb91400, 0x3f256a1a, 
    0xbd059762, 0x3ea87dee, 0x3f94b2bd, 0x3e82c71a, 0xbe8f8e4c, 0xbeb0b2e9, 0x3ea9d184, 0xbeb3f1ef, 
    0xbe9579d9, 0x3eebd98a, 0xbdae00bc, 0x3caf1e48, 0x3f7bc1c3, 0x3f3c2aa4, 0xbf2fe3fc, 0xbecc8d02, 
    0x3e554057, 0xbefba77f, 0xbe5aca5c, 0xbf3caa87, 0x3e93ca58, 0x3f1a4e46, 0x3eaca1ef, 0x3f6f6c66, 
    0x3e532352, 0xbfa39962, 0x3e63e073, 0xbeca2fcc, 0xbe5bb8d2, 0xbf5535a7, 0x3f071b1b, 0x3f2a786b, 
    0x3e5a4bf7, 0x3f8299ef, 0x3eba8acb, 0xbfc2c7e6, 0x3e81c516, 0xbf0c2eb6, 0x3db049b7, 0xbf5a1659, 
    0x3f0d8701, 0x3f81f7ec, 0x3dfc3568, 0x3f713553, 0x3ec3e287, 0xbfc51e31, 0x3e81cce3, 0xbefd0ddf, 
    0xbe306a12, 0xbf596928, 0x3f1ffa20, 0x3f10e31e, 0x3e914fdc, 0x3f4586c5, 0x3ea2ce07, 0xbfb30d43, 
    0x3e98f176, 0xbebd63fb, 0x3d2c3482, 0xbf5b6520, 0x3ef46dea, 0x3f1909cb, 0x3f021b34, 0x3f38c606, 
    0x3eecfb09, 0xbfcde6d4, 0x3ed6ace5, 0xbf010f35, 0xbe322824, 0xbf1c2c25, 0x3eb7d5f6, 0x3f067bc6, 
    0x3f0c7409, 0x3f616a12, 0x3eb81963, 0xbfb0babf, 0x3f1b8204, 0xbceb70da, 0xbef10fd5, 0x3edffb57, 
    0xbe7f647b, 0xbe9bbb22, 0x3f09cb6d, 0x3e9421b0, 0xbf29feca, 0x3f01ed49, 0x3e947b6d, 0xbd81c07e, 
    0xbf07862c, 0x3e611f5b, 0xbe85d2ec, 0xbb8cc9ca, 0x3e81d655, 0x3ea32ecd, 0xbf24252e, 0x3d067c12, 
    0x3f1578a1, 0xbd59d784, 0xbed96fba, 0x3e56fe1a, 0xbed6d9b5, 0xbe0dc63f, 0x3ea936f3, 0x3e5c892f, 
    0xbf27440e, 0xbca57a62, 0x3e841222, 0xbe1ae9e0, 0xbf037457, 0x3f1ce90c, 0xbe70b4df, 0xba1c7117, 
    0x3e1d77f6, 0x3d508cb4, 0xbf07a759, 0xbc7ef3eb, 0x3e98a5d5, 0xbd55f9c2, 0xbf10db2e, 0x3eef0d29, 
    0xbe8b2b69, 0xbd571fe1, 0x3e851b71, 0x3e873f21, 0xbea4a7aa, 0x3e4873de, 0x3f200b24, 0xbe3baff7, 
    0xbf096ab8, 0x3dbee90d, 0xbf0a385a, 0xbe17b7fc, 0x3d5d4427, 0x3e44b43b, 0xbf38053b, 0x3d5dab47, 
    0x400040c9, 0x3f5ae17b, 0xbe4dd153, 0x3dd445f1, 0xbf41f0e4, 0xbd21fbba, 0xbe89cdf1, 0xbe3eea0a, 
    0xbe34c5bc, 0xbedbc922, 0x3fdd9e7d, 0x3f293ffb, 0xbe1cee2c, 0x3ede8ae5, 0xbed1d162, 0x3e29d9c0, 
    0xbe5dcf9b, 0xba17f846, 0xbdbd5243, 0xbefcedd7, 0x3fe30f67, 0x3eaa53ac, 0xbea74813, 0x3ea5becb, 
    0xbed9973d, 0x3d821951, 0x3d5b3935, 0xbe5d358a, 0xbea20a4f, 0xbee5e5b7, 0x3fe8d427, 0x3f13880e, 
    0xbdef6f1e, 0x3dac3337, 0xbefb6ca0, 0xbc1ca3b3, 0xbe4b3350, 0xbdaee761, 0xbdd9ea93, 0xbf109ac6, 
    0x3ff24d29, 0x3f2d73f1, 0xbeedd6ca, 0x3e0892a7, 0xbf16c332, 0xbe162cbb, 0xbe8dbd81, 0xbde8f5bc, 
    0xbda09570, 0xbf020d3f, 0x3ffce468, 0x3f2d142e, 0xbeb82a6e, 0x3d0714fd, 0xbf394084, 0xbe799c89, 
    0x3e0c90f1, 0xbd8efde4, 0xbdf973f1, 0xbea53ea3, 0x3f43c12c, 0xbe1301a5, 0xbf75d047, 0x3e577a98, 
    0xbf3b4184, 0xbdc98856, 0x3e5fe739, 0xbe3d7c50, 0xbf42b60f, 0x3f1e0f0f, 0x3f460fbc, 0x3e20f717, 
    0xbf02b9e9, 0x3f1f2c86, 0xbed0abbc, 0xbe03a371, 0x3e991e5c, 0x3d8fea01, 0xbf585789, 0x3f118918, 
    0x3f2d3d1a, 0xbe6fcc65, 0xbf66a1a8, 0x3eec533c, 0xbeebd79c, 0x3e3b6976, 0x3db3fdbc, 0xbddc29dd, 
    0xbf550f73, 0x3e653974, 0x3f0265cf, 0x3d814ab9, 0xbf7f85b2, 0x3ee9faa1, 0xbef53e83, 0x3c05f016, 
    0x3d71f9a7, 0x3e00fd19, 0xbf5c5645, 0x3f0bfa4a, 0x3f075971, 0x3dbb830c, 0xbf266db0, 0x3e9db557, 
    0xbf1b7a4d, 0x3d2d27c4, 0x3e1b8c89, 0xbddad398, 0xbefae4ba, 0x3f17bb94, 0x3f263dbe, 0xbd6a62d9, 
    0xbfa98c09, 0x3e889559, 0xbeaf3003, 0xbe83393a, 0x3d17f763, 0xbcdbe0ee, 0xbf0c24d8, 0x3e9315ba, 
    0x3f08e41a, 0xbfba0ad7, 0x3e3cc594, 0xbf2e449f, 0x3fa5bad0, 0x3e428980, 0xbf16e0fd, 0xbe711582, 
    0xbe3f7ce1, 0xbd6f3248, 0x3f15b1df, 0xbf8c9c9c, 0x3e37bf49, 0xbe9d8287, 0x3f92dce8, 0x3c03a6be, 
    0xbf5ba5cc, 0xbd65cbc9, 0xbd0a5e79, 0x3d1ae72c, 0x3eb717fd, 0xbf7dc451, 0x3ebf2822, 0xbeb4c1dc, 
    0x3fb5e595, 0x3e7b88bf, 0xbf3cfab8, 0xbe2f03ee, 0xbda496d9, 0xbccb2bda, 0x3eb2a158, 0xbf86b487, 
    0x3e3645c8, 0xbf1c1ac0, 0x3fbc16b6, 0x3e4e13b0, 0xbf82b0c3, 0x3e7cd8eb, 0xbe592831, 0xbdd511d1, 
    0x3eb0b4c6, 0xbf3df1d6, 0x3e9d5249, 0xbf010afd, 0x3faae314, 0x3dfec011, 0xbf54632b, 0x3ea134dc, 
    0x3b44d3d0, 0xbe0adf84, 0x3f1069f0, 0xbf928e84, 0x3e92f244, 0xbe741224, 0x3f9f4c96, 0x3e6c7d1c, 
    0xbf4362ba, 0x3e06f003, 0x3dab57fc, 0x3dbddfbf
};

static const uint32_t _K19[] = {
    0xbf67ff8b, 0xbfa3bb25, 0x3d720e9b, 0x3f535d66, 0xbebe0a2c, 0xbfb04450, 0xbf5b9cdd, 0xbdbb11d0, 
    0x3e991d24, 0xbf8874cd, 0x3dfa1796, 0xbf8fd22d, 0xbe9a4d27
};

static const uint32_t _K22[] = {
    0xbbe18626, 0x395d2c30, 0x3c04db91, 0x3814b2b8, 0xbbffd8f0, 0x3a05ba0d, 0xbbf476bb, 0x3abb921c, 
    0x3b4af510, 0x398f6a0a, 0x3b078dd3, 0xba53ae26, 0x3ba2936b, 0xbbe9a028, 0x3a90b58c, 0x3c330125, 
    0x3a2d7d41, 0xbc436535, 0xba12393d, 0xbc164ecc, 0x3b64a548, 0x3bcf1aac, 0xbb532c8d, 0xba00402b, 
    0xba9cb916, 0x3c28b7c1, 0xbc0cd58f, 0x3b12c237, 0x3c5bf140, 0x3b4144cc, 0xbc4fb9d6, 0x3aee2609, 
    0xbc1474d8, 0x3b90bd7a, 0x3bd4ad59, 0xbb6fe5f6, 0x3b016b7a, 0xbb30126d, 0x3bffec69, 0xbba1a143, 
    0xbb880acc, 0x37b0b3b2, 0xbbdeb916, 0xbb4061db, 0xba8dd448, 0x3bed900f, 0x3a2152a6, 0xbc289727, 
    0x38cc41b2, 0x39942665, 0x380aee87, 0xba355b9e, 0xbb713bf7, 0xbb6f0c62, 0xbb81bfa9, 0xbc1763a2, 
    0xbb8d2d05, 0xbacca458, 0x3c25c5a5, 0xbabaa81b, 0xbc69a019, 0x3ac0464b, 0xba6dc5fd, 0x3bae3c31, 
    0x3ac564f9, 0xbb1b557e, 0xba99be95, 0x3b4c0412, 0xbb03d66d, 0xbcc6e7fe, 0xbad363a7, 0x3c336230, 
    0x3bd0ec29, 0xbc1184a3, 0xbb182483, 0x3bc5307c, 0x38aa1578, 0xbb2e29fd, 0xbb2108b7, 0xbbe3b62c, 
    0x38e77e47, 0xba49f170, 0xbbfa7991, 0xbc4b5cef, 0xbaa2c250, 0xbbbd57bc, 0xbc836a1d, 0xbb8b6198, 
    0x3b6e60a7, 0xb9ffcd4b, 0xbb8c5fab, 0xbb671a54, 0xbba06704, 0xbc59f4f4, 0xbcc2c33b, 0x3c479564, 
    0x3a9dd86d, 0x3bd00f09, 0xbc3b4e73, 0xbc780f67, 0x3c07f892, 0xbbc7f2c7, 0x3c37b4bf, 0x3b7ccc66, 
    0xbbaffd69, 0xba18db50, 0xbc2733fa, 0xbce7eb56, 0x3c8a1b82, 0x3b423c28, 0x3bc99b10, 0xbc7da1a5, 
    0xbc8b58e2, 0x3bffba25, 0xbba6a203, 0x3c60e86a, 0xbb98bcbc, 0xbb1d9eb6, 0x3b1872c0, 0x3b298959, 
    0x3b2d4bd3, 0xbb6b40d3, 0x389c6740, 0x3c1419ba, 0x3b4384c6, 0xbb6681a0, 0xba823f24, 0xbc4f069f, 
    0xbb4b414f, 0xbb721461, 0xbbf6025a, 0xba403439, 0x3b8a5df6, 0x39039fdc, 0xbab62a0e, 0x3b3688dd, 
    0x3b9e9564, 0x39efd8d2, 0xbababf14, 0xb9a20bbb, 0xbc574681, 0xba9ac166, 0x3aaa3eac, 0xbc855e5b, 
    0x3bce2923, 0xb9642ea8, 0xbbbf2ecd, 0x3ab0ecc0, 0x3c4ae6a4, 0x3bd83d90, 0x3b486e43, 0xbaf73d3b, 
    0x3b4186c4, 0xbd2bf9dc, 0x39cbba2a, 0x3ba8ee93, 0xbc290a26, 0xba012bf8, 0xbc3a1bb6, 0x3b0cbeff, 
    0xbc2584b6, 0x3a99a8ba, 0xbc45d826, 0x3c293cba, 0x3cabcb18, 0xbc0774db, 0xbc6e21d5, 0xbc488979, 
    0xbb42eb57, 0xba004235, 0xba4eca27, 0xbca81c81, 0xba23a160, 0xbc322373, 0x3bca236a, 0xbc25a9c1, 
    0x3c05cb31, 0x3c706800, 0x3aafa324, 0xbc1f564b, 0xbb82936e, 0xbc2e6aee, 0x3b911962, 0xb91ccb65, 
    0xbcaabd7b, 0x3af1a3a5, 0xbca12cb3, 0x3b94e0f2, 0xbc1058fc, 0x3cb60c05, 0x3cec35bc, 0xbbb154d0, 
    0xbabd1eed, 0xbb7c73d8, 0xbbc31e69, 0xbc5312a6, 0x3c2001b7, 0xbbfd6f6b, 0xbb307895, 0x3c242b03, 
    0x3bfc2d41, 0xba1af407, 0x3a7d79d2, 0x3bf85860, 0x3b7a87ac, 0xbd38eecc, 0xb91cc72a, 0x3c146225, 
    0xba332772, 0x39cf50b7, 0xbb16f761, 0x399a80d3, 0x3b0c2c10, 0xbb9443b8, 0xbb641c38, 0x3ac9f881, 
    0x3c12f4d6, 0xba3a8fce, 0xbbcc5452, 0xbb9d9d45, 0xb9ef16a5, 0x3ba77984, 0xba88ee7a, 0xbbe306e4, 
    0x3b6b634b, 0x3b16127b, 0xbc233020, 0xbb2dc413, 0x3a4592d2, 0x3c426ef8, 0xbb03986f, 0x39a7e82e, 
    0xbb54eb4c, 0x39996e1d, 0x3bb302fb, 0x3b1f252e, 0x3bfbb3be, 0x3b2012c2, 0xbc2e45cc, 0x3cc7a361, 
    0xbb7a7be9, 0x3bf3373c, 0x3be082b4, 0xb9f6f46c, 0x3bd2b982, 0xba4e354d, 0x3baf6aa7, 0xbb1b2d71, 
    0x3c41442f, 0x3b9084f2, 0xbba902a8, 0xbbcb27d7, 0x3d2a900e, 0xbc3602f4, 0x3c1d28bd, 0x3c414984, 
    0x3b297f36, 0xbbeb9b83, 0x3b719b66, 0x3bea5c8a, 0x3b853cad, 0xbb1aed77, 0x3b6f6238, 0xb99e45a1, 
    0xbbc0dd79, 0x3ca2f1b3, 0xbbcbdcd8, 0x3bef4ba2, 0x3c3ba5cf, 0x3a7dcef9, 0x3b5e8e27, 0x3bca44c9, 
    0x3b9bf087, 0xbc171a8d, 0xbb8896a4, 0xbb20aded, 0xbb3b15f0, 0xbb726e65, 0x3930e705, 0x3c0884f4, 
    0x3b2c94ee, 0xbc2f7fa9, 0xbbe2eb27, 0xbc0fa56a, 0xbb4922d3, 0xbad3d79a, 0xbbae0fba, 0xbb23fb71, 
    0xbc1403e8, 0xbb8bb469, 0xba112a22, 0x3b04dc4d, 0x3b2c7173, 0x3ba5d5e1, 0xbb3d7c4c, 0xbb8e12c7, 
    0xbbb6ac8c, 0x3ae3fff8, 0xbb1f0cb2, 0xbbe1b74e, 0xbbd7604b, 0x3c0a63e7, 0x3c7b43c0, 0xbc25099e, 
    0xbcb41d46, 0x3c4cacec, 0x3a43c262, 0xbc9c2d78, 0xbcc8970a, 0x3ae83f40, 0xbce82eae, 0xbc26f0bb, 
    0x3bd58080, 0xb9e58090, 0xbc0a491b, 0x3b7590f7, 0x3ac7a52a, 0xbbf5d276, 0x3b5d64cf, 0x3bd001e3, 
    0x3c44f58b, 0x39991a9f, 0x3bdc221d, 0xbaac3058, 0xb9c2c8c5, 0x3c47a27a, 0x3aa0e24b, 0xbc144730, 
    0x394d35d4, 0x38c5dfc6, 0xbb9e0346, 0x3c05e282, 0x3b7b81ef, 0x3bc7045b, 0x3b488c6e, 0x3c10bfdb, 
    0x3ab88a81, 0xbbed4bbc, 0x3be9c1b2, 0x3a54e4c1, 0xbc549e09, 0x3bbcc02f, 0xb9e97386, 0xbc3215ae, 
    0x3b9ecb7b, 0x3bf3fa97, 0x3c35c865, 0xbb149aa3, 0x3b39c8e9, 0xbbb3a30c, 0xbc0a634b, 0xbb752b2b, 
    0x3ae28283, 0xbbacd93c, 0xba09d5e4, 0x3b58452e, 0xb9fd59a8, 0xba8725e9, 0xb74ff32f, 0x3bebb19d, 
    0x3b12c46f, 0xbc417383, 0xba96acd8, 0x3b1bb9e6, 0x3aa2bc43, 0xbb291b24, 0xbaf2604d, 0x3b0c0789, 
    0xba067687, 0xbbc2b16f, 0x3b3477db, 0x3b268cb3, 0x3b298f1b, 0xba2f3b23, 0xb8af26b4, 0x38dfc228, 
    0xbb48b12f, 0xbc106f9b, 0x3a194b6f, 0xbc017d3b, 0xbb7bbe56, 0x3b936c56, 0x3b648a04, 0xbb06a4c2, 
    0x3b3fd91c, 0x3c01d3fd, 0x3ad0e671, 0xbcb638d3, 0xba1a96b4, 0x3b95699e, 0x3b1578df, 0xbc8b9fc7, 
    0xbd19b5a3, 0xbc948651, 0xbbe742c1, 0xbcee3d1a, 0x3bad244e, 0xbb51a798, 0x3a8133b9, 0xb85617e9, 
    0x3c855b60, 0x3add8b85, 0xbafb2ce3, 0xbb6b24c0, 0xbb8cbcf9, 0xbce377ff, 0xbccb3e41, 0x3b38864b, 
    0xbbed2c1e, 0x3c5ebc36, 0xb9b8a40b, 0xbc33abc1, 0x3b82a088, 0xbb5773a6, 0x3c49aa0c, 0xbb2a5cf1, 
    0xbbb77a0d, 0xbbdd776d, 0xbceb6a3b, 0xbcb0a5c1, 0xbb0d47ea, 0xbc39633c, 0x3ba741ca, 0x3aab5fc9, 
    0xbc1026ee, 0x3b55bd30, 0x3b4eff7c, 0x3c4f01bc, 0x3ab3ab04, 0x3ada3580, 0xbb16ef7d, 0x3b9e6f79, 
    0x3bcc08e5, 0xba8ee1bd, 0xbb0448bf, 0xbbe40ee8, 0xbb65f790, 0x3b8fc160, 0xb9de9f2d, 0x3bb42ce6, 
    0xbad96cb3, 0x384d0da7, 0xba5cc45f, 0xbaf1897d, 0x3be42340, 0x3b7cf270, 0xbb146839, 0xbb1a3152, 
    0xbbc47404, 0xbafaa40d, 0x3bb8b32e, 0xbb6c1761, 0x3b638dc3, 0xbb57aafd, 0x3b8bf1ed, 0xbb5cec52, 
    0xbb66dc34, 0x3c286f54, 0x3c08ca80, 0xbba30051, 0xbb2a180d, 0xbc0eafb5, 0xbb1c72b7, 0x3b320307, 
    0xbba017c4, 0x3bb8edbe, 0xbb9d44f2, 0x3b4743a9, 0x3c14e40d, 0xbaf0e06c, 0xbbf2aefb, 0x3b20c504, 
    0xbc9a8683, 0xbb36e0c7, 0x3b88a6f2, 0x3c259f50, 0x3bd1b8eb, 0xbb4c596f, 0x3bece2bc, 0xbb01b761, 
    0xbb48a894, 0x3ad33521, 0x3b76a078, 0xbc4651a7, 0xbc15d684, 0xbb0076da, 0x3b8adf57, 0x3b980f5b, 
    0x3b0c61bf, 0x3b391add, 0x3b5f21ce, 0xbad36a59, 0x3b8b2d39, 0x3a8e044d, 0x3c3f1fbb, 0xbab4518e, 
    0xbc6ac7cf, 0x3a267702, 0xbcb31433, 0xbb28410f, 0x3b84fc8b, 0x3c1b4be8, 0x3bbad360, 0x3a881d3a, 
    0x3c44f366, 0xbb092fa2, 0xbbec54eb, 0xbb2af5cf, 0xbbbd4683, 0x3a8429e9, 0x3b5ea67b, 0xbb489c5e, 
    0xbc1aa9ca, 0xbc7345d2, 0xbb79c5fd, 0x3bc58e8a, 0xbbfa1177, 0x3be1ae23, 0xbc0672ec, 0x3b1156ee, 
    0x3be6a561, 0x3a821646, 0xbc1331fd, 0xbb232532, 0x3b26e1cb, 0x3b8c10d3, 0xbbe9d4de, 0xba963ea9, 
    0x3c162b4d, 0x39238d2d, 0x3b77cb49, 0x3ba1de35, 0x3b362880, 0xbb87f9f9, 0xbc4fa073, 0xbbed2089, 
    0x3c060c49, 0xbb4256e1, 0xbd1224bf, 0xbcb67c44, 0xba992ae4, 0x3c76ad50, 0xbb91901d, 0x3c0277f6, 
    0xbc21fd11, 0x3bb56417, 0x3c60d122, 0x3a97da3b, 0x3bc1cb17, 0x3c6340b1, 0x3c5a2aa2, 0x3bb6e66d, 
    0xbbea8d12, 0xbbf8df5a, 0x3c72939c, 0x3a693b5b, 0x3ba22300, 0xbb6b2bb7, 0xbb470f2a, 0x3c81204b, 
    0x3b45bdf0, 0x3b45c7f7, 0x3bf2dc04, 0x3c47a1dd, 0x3c6b42d9, 0xbc2cb04f, 0xbc053495, 0x3c7a2aeb, 
    0x3ba2efde, 0x3ac47f0f, 0x3b318864, 0xbb8d267e, 0x3cb52c91, 0xbb4d66ff, 0x3b15ccfb, 0x3ca12ac0, 
    0x3c7539bd, 0x3b7c9744, 0xbc7d03da, 0xbc09cd9a, 0x3c893d2f, 0x39777e0b, 0x3c039f77, 0xbbd262ea, 
    0xbbc8aa1e, 0xbbd5c301, 0xbb2d5575, 0x3b2ddc15, 0xbc16679b, 0xbb93dd8c, 0xbae0c306, 0x3c5c754d, 
    0x3b5ead1b, 0xbc4f47a7, 0x3b6fb60c, 0xbb493293, 0x3aee3115, 0x3b8334d5, 0xbb819653, 0xbae2c06f, 
    0xbbb13092, 0xbc6a80dc, 0xbb615ade, 0x3a631b3a, 0x3cad5fb8, 0x38b4c5b1, 0xbca58cd2, 0x3bbc6801, 
    0x3aac56a1, 0x3bf5dd04, 0x3b4d23ea, 0x3b149e5f, 0xb8b076f3, 0x3ac700d1, 0xbba576c6, 0xbcd986f9, 
    0xbab912b8, 0x3cb9797f, 0x3c229aa9, 0xbc4b41cf, 0x3ae94a71, 0x3c5777e5, 0x3b7c6433, 0xbb32f252, 
    0xbc93edd6, 0x3b9b66a2, 0x3cca9325, 0x3c8c6b82, 0xbcbf0ab7, 0x3c0d5a35, 0x3c567095, 0x3c821ae3, 
    0xbbe96f43, 0xbc6fd696, 0xbacbca68, 0xbbabe7c0, 0x3bacff9f, 0xbc3a6030, 0x3c7dc152, 0x3bbf3e67, 
    0xbb2fb806, 0x3c52eb7d, 0x3ca19ab2, 0x3c08dfb1, 0x3b961fa8, 0xbb8bbd0c, 0x3c41932c, 0xbc9b92bf, 
    0x3c592d92, 0x3b9bfd32, 0x3d39ae4b, 0xbbcaa519, 0xbc5247bc, 0x3cb98c89, 0xbc9d9cfc, 0x3b66f799, 
    0x3d3eb43f, 0x3c399eab, 0xbc9e70e8, 0x3c0f0e45, 0x3cd0ccc3, 0x3c1ded11, 0xbd5f50f4, 0x3c4fb6a4, 
    0xbaddbee6, 0xbc2e7ae5, 0xbc6ce48a, 0xbcd59676, 0xbb15a032, 0x3cc6f6b5, 0x3cdb65b6, 0x3be5be94, 
    0x3c555a24, 0x3cb676ca, 0x3c9c8c52, 0x3c700d71, 0xbb3e40b1, 0x3bd1c29c, 0xbbd8219f, 0xbcb5b2c3, 
    0x3b32b9bb, 0x3cae2fd5, 0x3cc0425e, 0x3c1747ae, 0xba350e50, 0x3c87edc5, 0xbb286ec6, 0x3cca562e, 
    0x3c48eb53, 0x3bc001d1, 0x3b6a2ee9, 0xbc0e8a2e, 0xbcbc74c6, 0xb9748209, 0x3c26bc1c, 0x3cc90aa4, 
    0x3c9b1138, 0x3b7e31e9, 0x3c92301d, 0x3b60fa47, 0x3c939251, 0x3cb564c0, 0x3c14ec98, 0xb9a1dc07, 
    0x3be6e525, 0x3b28c6fe, 0xbb60e3fb, 0x3bc38c95, 0x3c019ac2, 0xbbf67896, 0xbcba9fd9, 0xbb70ebc2, 
    0x3b6bb0ed, 0x3aa15928, 0xbc219bfd, 0x3ba95132, 0xbbaa43d8, 0xbb38b5bd, 0xbc13fe19, 0x3c08b4ca, 
    0x3bfc0707, 0x3c06d0c1, 0xbc126d89, 0xbcd42e59, 0x3b8e6cc9, 0x3a5ee65a, 0x3c2ae503, 0xbc3ccfb6, 
    0x3d2d3b24, 0xbb99ca8f, 0x3b064bb6, 0x39ff7951, 0xbc3856b6, 0xba31004e, 0x3cc4183b, 0xbb467602, 
    0xbd009f43, 0x389d92c6, 0x3cd517d9, 0x3bfed4cf, 0xbca473ac, 0x3b7aa6cf, 0xbb4da8e1, 0xbd00dfdb, 
    0x3ab164a1, 0x3b70ee25, 0xbb049ac7, 0x3c9d39cb, 0x3c327135, 0xbb939b52, 0xbaa3d9c4, 0xbc668a7c, 
    0xbbb0b427, 0xbca0f58f, 0x3cc975b0, 0xbb175d99, 0xbcec79b1, 0xbb1042d3, 0x38ce2cbe, 0x3c41a093, 
    0x3c783ce0, 0x3c504458, 0xb84ed04d, 0x3bb5137e, 0xbbad5d50, 0x3c2ab181, 0xbcca95bb, 0xbcdb2eea, 
    0x3bf135ff, 0x3b867d2f, 0x3cb4743d, 0xbc37de29, 0xbd3fc518, 0x3c96000e, 0x3c8a2165, 0xbc899b45, 
    0xbd1184c3, 0xbc89fd97, 0xbd89d065, 0xbc62ca75, 0xbc2fd113, 0xbb5f0567, 0xbb2355d6, 0xbb4f197c, 
    0x3a974d4c, 0xbc48e9bd, 0xbc3c63ab, 0xbbbec5c9, 0x3b625d01, 0xbbb127a6, 0xbabaaa32, 0xbb7019a2, 
    0x3c4dbfe1, 0xbb363463, 0xbbd48b79, 0xbb04473f, 0xba5bd947, 0x3bb51b19, 0xbc112419, 0xbbf45100, 
    0xbc2b1645, 0xb91ca06e, 0xba7204af, 0x3b18a8b6, 0xba2f5a0e, 0x3bc47e22, 0xbb861370, 0xbb858d0a, 
    0xbb352e3d, 0xbb741e30, 0x3c2b9870, 0xbbf79621, 0xbc666642, 0xbc6e28d4, 0x3b5b412d, 0xb95c5e48, 
    0x3b32e1e9, 0xba0cabca, 0x3bf137a5, 0x3b7a537a, 0x3aa3d407, 0xbca0ede1, 0x3ae22780, 0xba517d26, 
    0xbbf9066f, 0xbbe2861b, 0x3a49a996, 0x3c22339c, 0xbb1fb1f7, 0x3a939bf7, 0xb9d0c759, 0xbbac102c, 
    0xbb339d69, 0xbb989f32, 0xbd103e50, 0xbc9c0c68, 0x3c53054f, 0xbba82106, 0x3b34695e, 0xbb192679, 
    0xb9503e13, 0x3a29a2bb, 0xbc0e2069, 0x3a6a845e, 0xbb02af82, 0xbaa52709, 0xbb2086c4, 0xbd12760d, 
    0xbcb1763f, 0x3ca3d5fa, 0xbb9bd3fd, 0xba765320, 0xbbc031ed, 0x3abd3f19, 0x3bff2229, 0xbbb07fda, 
    0x3baeaf58, 0xbc01be87, 0x3c716930, 0xbb29d881, 0xbb3d9f80, 0x3b94cb5e, 0x3a881f04, 0x3c614d61, 
    0x3c1beaa6, 0x38291bbb, 0xbbea3868, 0xb8ca8c0f, 0xbb24daa9, 0x3b65b72d, 0xbc9a3ef1, 0x3cb7c3d6, 
    0xbb2e3d09, 0xbb481d03, 0x3b817de9, 0x3b89ff61, 0x3c5fe616, 0x3be5b109, 0x3b572dff, 0xbbc50d26, 
    0x3b7c3c49, 0x3b0a79f8, 0x3c10e1a9, 0xbc91c51b, 0x3c85afbc, 0xba63e9ba, 0xbb9717ee, 0x3ba14971, 
    0x3af26369, 0x3c3a4a90, 0x3c696a57, 0x3b144d31, 0xbbdf8754, 0x3af3dfbc, 0x3953dc46, 0x3b4cc279, 
    0xbc89d00c, 0xbc93c915, 0xbc120451, 0x3cae6235, 0x3c932a73, 0x3b8e317c, 0xbcd89c3a, 0xbc612a40, 
    0xbc1481a0, 0xbcc2d7ed, 0xbcabe1e3, 0xbbf66330, 0xbcfd27af, 0xbaed0a9b, 0x3bf37e7b, 0x3b7d9129, 
    0x3a669d44, 0xbc38f3d3, 0x3cbadb6e, 0x3c506aa9, 0x394c3ab0, 0xbc2f94c1, 0xbc904288, 0x3c64eda4, 
    0xbbfa5eab, 0x3bfe0e97, 0xbb0c03df, 0xbcd8b636, 0xbc750c8c, 0x3c982c81, 0x3c6e9ee3, 0xbb1ae602, 
    0xbd3e2909, 0xbabda603, 0xbc38d383, 0xbcba4d83, 0xbcb1c9de, 0xbc48c914, 0xbcdf3654, 0xbb73e422, 
    0x3cb13e03, 0xbcabcb61, 0xbcbe470e, 0x3b71a8f7, 0xbac6a97e, 0xbc8efb5f, 0xba26417f, 0xbb84007b, 
    0xbc6e8754, 0xbbc32a06, 0x3c8f4cc0, 0x3b2437be, 0xbcda8d24, 0xbc9ceb6a, 0x3c8290fb, 0x3bb7a5de, 
    0xbc7e0da8, 0x3c0b49c2, 0x3ca57499, 0x3a08b3ce, 0x3c361982, 0xbc4f9932, 0xbb2ec99c, 0xbc9b8b0d, 
    0x3c6ae93c, 0x3c0c1102, 0xbcd89276, 0x3a183e74, 0x3d1eafb2, 0x3b3c9659, 0xbc8242be, 0xbc8e8ddd, 
    0xbc465ff0, 0x3b31825c, 0xbc963265, 0xbc8facc1, 0xbc3f83ba, 0xbcb4b50c, 0x3c51663f, 0x3c4ecc9c, 
    0x3bd8606d, 0xbd062bb4, 0x3c815acd, 0xbbcd70dc, 0xbcfd9712, 0x3c2ed8c9, 0x3c8fcfa1, 0x3cb20785, 
    0xbbcc3075, 0xbbbc5ed4, 0xbcb66b52, 0xbd02b53b, 0xbba07f60, 0x3c717725, 0xbc13d364, 0x3b7d4ce4, 
    0x3c931736, 0x3b7e2b10, 0xb9fb85e0, 0x3b5462b7, 0x3c2de84b, 0x3b99a542, 0xbd3b8d4b, 0xbbb51ae3, 
    0xbb8db3f2, 0xbc4b8628, 0x3bd8e4d3, 0xbcc9e27f, 0x3cb9f246, 0xbc212d3b, 0xbc933491, 0x3c5ae689, 
    0x3c743da5, 0x3c420ed0, 0xbc9ea053, 0xbcebba2c, 0xbcff7e62, 0xbcadde2c, 0xbc14ffee, 0x3bfacf48, 
    0xbb9b875d, 0xbc11c075, 0x3c52a32e, 0x3bb8d86d, 0xbba9d4df, 0xbaa3cd27, 0x3c3d0076, 0x3baf5178, 
    0xbd0a2131, 0x3b023d3c, 0x3c4d75b3, 0xba908bbd, 0x3ad25048, 0x360ea045, 0x3b1749ea, 0x3978d137, 
    0xbc2b8ef7, 0xbbec8b2e, 0x3b0c53da, 0x3c19e740, 0xb9ff0638, 0xbb218efc, 0xbbd43528, 0x3b873e84, 
    0x3a32a542, 0x3a3d1827, 0xbb19ddae, 0x3b256b7f, 0xba604c54, 0xbbe65182, 0xbc2c8078, 0x3ab8f30c, 
    0x3c40ead4, 0xbb05bdf3, 0x3a234cac, 0xbada111e, 0x3bf1bb0e, 0x3c9c3f3c, 0xbba7f88b, 0xbb262e51, 
    0x3cece5b0, 0xbb934852, 0xbb834c83, 0x3bd573e4, 0xb8bc5777, 0x3af37c7d, 0xbc1641af, 0x3bfc74ef, 
    0xbbf54441, 0xbcd86106, 0xbb1e2298, 0x3bdb04ff, 0x3b4d0355, 0x3b46e615, 0x3b4702a6, 0x3c151cee, 
    0xbb2191fe, 0xbbfa9fbe, 0x39925097, 0x3b7ea10c, 0xbba91afc, 0xba42ebce, 0xba4d2c1e, 0x3c7ab8c5, 
    0x3990e402, 0x3b75072c, 0x3cc73a8a, 0xbc064780, 0xb9fea403, 0x3b4df084, 0x3aa83ebb, 0xbb1175a1, 
    0xbb8cc945, 0x3c3f4972, 0xbb8e046e, 0xbcb4c23a, 0xbafa7e4f, 0xbb7be813, 0x3c50c310, 0xbb9007a6, 
    0xbb8f8732, 0x39bae5b8, 0x3c465726, 0xbae318d2, 0xbcd4fb9e, 0xbb5b8602, 0x3c0cd310, 0x3b2dcfc1, 
    0x3baa757c, 0xbbfd5982, 0x3b486da7, 0xbb04f7e6, 0xbc852215, 0x3be7539d, 0x3c0ffdb5, 0x3c8fdf0e, 
    0xbc06daf2, 0xbcd77410, 0x3ba6b471, 0xbc249825, 0x3c36e671, 0xbb1248f8, 0xbb266e4d, 0xbbb84f23, 
    0xbba07359, 0xbc405729, 0x3bb9fa42, 0x3b3bf262, 0x3c9970c7, 0xbbad73a0, 0xbcb9261d, 0x3be41841, 
    0xbc17b7a2, 0x3b8eee7f, 0xbbb6ee67, 0xbba8ab7a, 0x3ad542e8, 0x3bd541ae, 0x3c0405ec, 0x3b23d92a, 
    0x3954a7f2, 0xbc463c51, 0xbb7853a2, 0xb9b5de4b, 0xbbfb5485, 0xbba69611, 0xbc0c730c, 0xbb7b3a9f, 
    0x3a31c7bd, 0x3b6e0a27, 0x3c0b3b99, 0x3b919e6b, 0x3b46dd35, 0x3af9ca7f, 0xbc4e9745, 0xbb8b5107, 
    0x3a36ac71, 0xbbbc35ed, 0xba9cb2d0, 0xbacdc980, 0x3add0db5, 0xbb7fa906, 0xbb2e0b00, 0x3c87b530, 
    0x3caf1946, 0xbc977c01, 0xbc05ab85, 0xbbc9670e, 0xba6f9d5b, 0xbc09d0ce, 0xbcce6ff8, 0x3ab930b4, 
    0xbcc56e6d, 0xbba9ad1b, 0x3adf8bfb, 0x3a8d95f8, 0xba1761ce, 0xbb2ba88d, 0x3b3eb225, 0x3c2a5248, 
    0x3ba3c362, 0xba27c186, 0xbbb515e1, 0x3b34b560, 0xbbe58a5b, 0x3b289adb, 0xbbfd45ac, 0x3a80c572, 
    0x3b134d11, 0x39e32d4f, 0x37fad2d2, 0x3b2f2ee7, 0x3c81842d, 0x3b68149f, 0xba095fac, 0xbbc014bf, 
    0x3ae903f0, 0xbbbc1a4e, 0x3b3bd910, 0xbb8a3756, 0x3b3da64a, 0xb597d41d, 0xbab33619, 0xb9617062, 
    0x3a8d3798, 0x3c17eeaa, 0x3bede6da, 0xba103754, 0xbbfabc43, 0xb99d511d, 0xbabb9673, 0x3b1874bf, 
    0xbc099309, 0xbb69c1ed, 0xbba035e4, 0xbca4ea46, 0xbc15bdb7, 0x3a6a801a, 0xbc7b5210, 0xbc7271f5, 
    0x3ad9b158, 0x3cf5d773, 0x3b1954a5, 0x37c42507, 0xbba7960c, 0x3c6ca56a, 0x3c169805, 0xba2a19b8, 
    0xbd04fb2a, 0xbbd46463, 0x39c974e7, 0xbbe87591, 0x3b3334c0, 0x3bcbbdd1, 0x3ca8331a, 0x3b92f814, 
    0x39fda0f7, 0x3bae8828, 0xbbb7e7a5, 0x3a9e57a9, 0x3b9cb925, 0xbcc245d9, 0xbb2f28f3, 0x3a9cde99, 
    0xbbc64cff, 0x3a1928fc, 0x3c0ad60e, 0x3ccb948c, 0x3bc9712f, 0xbb38b116, 0x3b1496ac, 0xbacbacd7
};

static const uint32_t _K25[] = {
    0x40117941, 0x40114dea, 0xc0330b4a, 0xc03e14d8, 0x3fe41a93, 0xc0583982, 0xbff7ee2e, 0x3e5f79e8, 
    0x3ff3185e, 0xc01a21d6, 0x3f999215, 0x3fd4d8a5, 0x404e777d, 0x40084cf3, 0xc027ce1e, 0x40057475, 
    0x3d6f7660, 0xbf4dd5a8, 0x3f39ea5f, 0x3f664d19, 0xbe9434c3, 0xc08b12a5, 0xbf98db35, 0x3e025770, 
    0xbe3502b8, 0xbf96f353, 0xc027f050, 0x3fb21cb6, 0xc02f5bc5, 0x3fca7cfa, 0xc0255864, 0x3e9b7a7a
};

static const uint32_t _K29[] = {
    0x3f3af121, 0x3d1d861e, 0x3eb88c6e, 0x3ebf3251, 0xbe477bc2, 0xbdacdfdd, 0xbf010d46, 0x3f9764d6, 
    0xbe0cc3be, 0xbf3e582d, 0x3d85fe3c, 0x3e9c8675, 0xbe126695, 0x3e2b7faf, 0xbf7bdf61, 0xbda87beb, 
    0xbf225755, 0xbd9605f0, 0x3e95574b, 0x3f1195a1, 0xbf84ca2c, 0xbe55e922, 0xbe944972, 0x3c97f205, 
    0xbe451e72, 0xbef267fb, 0x3d0129ef, 0x3e147fa5, 0xbf0ecae7, 0x3eaad444, 0x3e08e0e1, 0xbf201e60, 
    0x3f609630, 0xbf379866, 0x3f70b9a8, 0x3ef22059, 0xbeaa3f12, 0xbed47d47, 0x3e12bba8, 0xbf87580a, 
    0xbeeee1cc, 0xbf48e8ee, 0x3f86ae94, 0x3e4f4aa9, 0x3f047723, 0xbeb31007, 0xbee53da9, 0xbf38ad85, 
    0xbddbad62, 0x3ecca2a4, 0xbec2e11c, 0xbfb305b9, 0xbe92f90e, 0x3e754621, 0xbe73d481, 0x3d0e262b, 
    0x3f4ce574, 0x3f5a712b, 0xbdfb596e, 0x3f04e479, 0x3f312c8d, 0xbf62780d, 0x3de33b65, 0x3e679140, 
    0xbed4fc1f, 0x3ee77334, 0x3f9c2c6d, 0x3ea9e56f, 0xbdd9ece6, 0x3d6cb0b9, 0xbdf9e241, 0x3f8bf811, 
    0x3ee7d6da, 0xbe9a12de, 0x3ffd2e09, 0xbe831133, 0x3f22ab27, 0x3ec968f5, 0xbe5feb1a, 0x3f29c738, 
    0x3f2650d4, 0xbeb3d746, 0x3f4db05b, 0xbe3c2ec2, 0xbdbff44f, 0x3e9a8805, 0x3eba8257, 0x3dbc768d, 
    0xbdfb0eef, 0xbf847830, 0xbe7855da, 0x3d83c789, 0xbf85b122, 0xbcace744, 0x3f5220cd, 0x3eb4549a, 
    0xbeb9baeb, 0x3dd39549, 0xbed424f8, 0xbf85212a, 0x3e50b9c4, 0xbfacf2fa, 0xbf50d2f3, 0xbf696908, 
    0x3f1d5350, 0xbf66978c, 0xbee5b4f9, 0xbe2ccce2, 0x3ea73703, 0x3da948e7, 0x3ef4c46a, 0x3e5ee323, 
    0x3da9244a, 0xbd6a49bb, 0xbe9789e8, 0xbe97d417, 0x3ee86820, 0xbf2e8351, 0x3e40ea8f, 0x3e9c97bc, 
    0xbf68a044, 0xbe42dd58, 0xbfb5dd60, 0xbcdc37db, 0xbc804cbf, 0x3eeb8ec0, 0xbe284e37, 0xbd8acc06, 
    0xbeb61374, 0x3f04b3a1, 0xbeef285a, 0xbf687abd, 0x3ea2a38c, 0xbfba12ad, 0xbf99bb90, 0x3f2f4f4e, 
    0x3f8486da, 0xbf57cd0f, 0xbf06c462, 0xbe7ff9d0, 0x3f48b0c2, 0x3f545a84, 0x3f4cd70b, 0x3f53a6da, 
    0x3fa48593, 0xbeabacee, 0x3e0b5f43, 0x3e6c6942, 0x3eb21137, 0xbedbe68a, 0x3e852496, 0x3f771782, 
    0xbea0b773, 0xbea165f4, 0xbfb82043, 0x3ed205e2, 0xbe75bd7b, 0x3f1e8df1, 0xbf00067a, 0x3db9b87d, 
    0xbf0d5165, 0x3e0b74d3, 0xbf139509, 0xbf199116, 0xbe817868, 0xbfb2e7d1, 0xbf7fb6f6, 0xbf51e674, 
    0x3ede3965, 0xbf57821f, 0xbf755018, 0xbe801232, 0x3e99815e, 0xbd17bece, 0x3f13b6a9, 0x3cc3d56d, 
    0xbdbfde61, 0xbe56fad3, 0xbece7917, 0xbdf49668, 0x3ec7ec10, 0xbf861d89, 0xbdb72ee2, 0x3dfa0898, 
    0xbd96f6fb, 0xbe91abde, 0xbf99ebf9, 0x3edf54d9, 0x3e81d4a1, 0xbdd1df73, 0xbeecbfbc, 0x3e3977ce, 
    0x3cd7df1e, 0xbf109da0, 0x3e9ea105, 0xbe1f40c4, 0xbeae74dc, 0xbeeef2e8, 0xbeecdb3d, 0xbef0d1ee, 
    0xbe7ac9a4, 0x3eaa37e7, 0xbd94aa99, 0xbe7b8ce3, 0xbd42c89e, 0x3e98fb7b, 0x3f44d549, 0xbf39967a, 
    0xbf018268, 0xbf9ccc10, 0xbed10cfe, 0xbf0a3ffa, 0x3f238c33, 0xbf8eb620, 0xbea69d2a, 0xbf258189, 
    0x3e872cff, 0xbe055566, 0xbf3ea2cc, 0xbeccb75b, 0x3e98dd24, 0xbefbad81, 0x3e16a2b7, 0xbea3abe9, 
    0x3e5fc69b, 0x3d3f9b3d, 0xbd7c3165, 0xbe4d1ba6, 0x3ef0e980, 0xbdb34bca, 0xbeb8d4eb, 0x3f9c758a, 
    0x3e9e8aa4, 0x3f0d8f8c, 0xbeabc31d, 0x3e611a98, 0x3e46ca7e, 0x3f83f10a, 0x3f89e26e, 0x3e3bdbd4, 
    0x3f454e66, 0xbfbd17d3, 0xbf0ca9e9, 0x3d8c6aae, 0x3ee25b1d, 0xbfaa17e2, 0xbe45b186, 0x3e61256b, 
    0xbcb847a0, 0xbe11c2ec, 0xbefc07c9, 0x3e17c6aa, 0xbed22bc3, 0x3e2e2a0c, 0x3e7aea63, 0xbf162b47, 
    0x3ed0a5c0, 0xbe51d837, 0x3e96770c, 0xbe8997a8, 0x3f5d1b40, 0xbea0fb49, 0x3edb1fb8, 0xbe9a4b0a, 
    0x3ea34db8, 0x3ecc012d, 0xbf2202b7, 0x3e9908c1, 0x3f45cc05, 0x3ec5ec9a, 0x3f955df7, 0xbecc76ee, 
    0x3f7ace6b, 0xbfdbb78b, 0xbecd8568, 0xbf3d5011, 0x3f0b4c23, 0xbfc0d75e, 0x3cfafb79, 0xbf441745, 
    0xbf30af04, 0xbe7329ee, 0xbe69f607, 0x3f474ba0, 0x3ee9ffa4, 0xbd901ffc, 0xbd4f0106, 0xbe817fd7, 
    0xbac02dc0, 0x3f0c96ec, 0xbf534f85, 0xbec085ba, 0xbd6b8cfe, 0xbf42628b, 0xbf02c023, 0x3e42c4b3, 
    0xbe4166b7, 0xbea3ee99, 0xbdc399bd, 0x3e27487b, 0x3ef75218, 0xbee8dee0, 0xbd53b500, 0x3ec3204a, 
    0xbf03493c, 0xbee3f0fc, 0xbeee644e, 0xbe68ad40, 0xbe86add7, 0xc02841a5, 0xbdb90f70, 0xbe8e5035, 
    0xbdc0c2f4, 0xbef14097, 0xbf85cd0e, 0xbb6fba22, 0xbcdd66b5, 0x3ebeb064, 0xbf633f50, 0xbe13fc5d, 
    0x3f1cb094, 0x3f898e29, 0xbf6a1a4c, 0xbf0ce883, 0x3eedc456, 0xbf082813, 0xbf2ac646, 0x3fb4cbde, 
    0x3e2a86de, 0xbeddbe47, 0xbf237d22, 0x3ef642d5, 0x3f7bf7dc, 0x3deab498, 0xbdc8a57d, 0x3f919516, 
    0x3f1235a6, 0xbf0cd0ae, 0xbf089fdf, 0x3e93398c, 0xbed6769e, 0xc00e435d, 0xbebeadd7, 0x3e0b715c, 
    0xbe1f332f, 0x3dd40dc7, 0xbf91b48f, 0x3f095f61, 0x3eb52203, 0x3f4f2489, 0xbf98a382, 0xbebaafa5, 
    0x3f174011, 0x3f4e00f9, 0xbf439d21, 0xbf0c2857, 0x3f151a3e, 0xbf6df2fb, 0xbf339a03, 0x3f9c91e9, 
    0x3d3fb9a6, 0xbeeec3c7, 0xbf6ed68c, 0x3f0876cc, 0x3f888c22, 0x3def3f37, 0xbdd2c5ae, 0x3f8e14ae, 
    0x3f57e084, 0xbf03dd95, 0xbef547cf, 0xbdae0d56, 0xbf21d575, 0xc025caf5, 0xbe8be6bc, 0xbe60f0da, 
    0x3dc09142, 0x3ebfd035, 0xbf61b9bb, 0x3f48a94c, 0x3f8a3cdb, 0x3f3e0e7f, 0xbfa067df, 0xbe682cba, 
    0xbe0a7063, 0x3e00d75b, 0xbd815eff, 0xbf51150a, 0x3e7a85ee, 0xbfbba0c1, 0xbf089425, 0xbf3041f0, 
    0xbe1fbfc7, 0xbf7be822, 0xbe937cbc, 0xbd4a961b, 0x3f11a815, 0xbdfa8fe2, 0x3e02d12a, 0x3e9e2935, 
    0x3ef08b63, 0x3ebc7570, 0x3ecc5f3e, 0xbe7120d4, 0xbe384866, 0xbeab728e, 0x3f1f8a6d, 0x3ec7a7de, 
    0xbf56f15b, 0xbef760a5, 0xbf935de2, 0x3e617c07, 0x3f21d22a, 0x3ee8af50, 0x3e67f00a, 0x3e98e8e0, 
    0xbf1fe96a, 0x3ee6f680, 0x3cbcbf5c, 0xbf27637e, 0x3f028c19, 0xbfb5dd19, 0xbf0aa07c, 0x3cf43b1c, 
    0x3ee11a39, 0xbf56fbe6, 0xbda51fb6, 0xbe944d6b, 0x3f90e539, 0x3e17f6dd, 0x3f164b80, 0x3f0d0be4, 
    0x400de2a1, 0x3eb8063e, 0x3fae5a87, 0xbecb0f5c, 0x3e75b0a8, 0xbe8ea7ee, 0x3f47c0de, 0x3f1506ac, 
    0xbf099468, 0xbeb14f25, 0xbfa2e531, 0x3f47c64a, 0x3f4798d2, 0xbbe68b13, 0x3def5fbb, 0x3f09c9b4, 
    0xbf54136a, 0x3ea53e4c, 0xbecd3252, 0xbf103756, 0x3df2050e, 0xbfac51a6, 0xbf0fe6df, 0xbf441ac5, 
    0x3e672061, 0xbf4c2853, 0xbed439f4, 0xbf0eae47, 0x3f285ae2, 0xbe902a0e, 0x3ef33437, 0x3e2f3923, 
    0x3ea8e819, 0x3e920d8c, 0x3f777f60, 0xbebf1526, 0x3ecd824a, 0xbf8cbb2f, 0x3f7397ad, 0x3deaa8d1, 
    0xbe1026fc, 0xbf740729, 0xbf7ddbde, 0x3eeff3a7, 0x3e8f94fb, 0xbe580a13, 0x3ea1c9bb, 0x3eb02ce0, 
    0xbef56e33, 0xbea741b5, 0xbfa3b945, 0xbf78c00c, 0x3d042f41, 0x3e7ab3c9, 0xbf52fbdb, 0x3da1513c, 
    0x3eefad34, 0x3f2d5e15, 0x3ea160f1, 0x3e92b398, 0x3fcc8bea, 0xbe733223, 0x3f0559ba, 0xbf0c6857, 
    0x3f98b557, 0x3f5d9330, 0x3ea62900, 0xbf1fa056, 0xbc88c3fc, 0xbee2d779, 0x3e58964f, 0xbf457c78, 
    0x3ff7e9d5, 0x3f9f9199, 0x3e00f066, 0x3fd6601f, 0x3f450315, 0xbf8bad72, 0xbefe2936, 0x3fc0d612, 
    0xbe8d7b52, 0xbf306e26, 0xbf420d93, 0xbe02d40e, 0xbe000ab7, 0x3f12e82c, 0xbd4b0979, 0xbe455b9c, 
    0x3e3ec68e, 0x3ef461b0, 0xbe8a71b1, 0xbcfbf363, 0xbf7fcffc, 0xbe019418, 0xbd6a3f73, 0xbf0cc7c7, 
    0xbf79e202, 0xbfbee335, 0xbf0c959b, 0x3f7c1e3a, 0x3f0c2fa5, 0xbf5ae0ff, 0x3ca4204f, 0xbf1ca607, 
    0xbf480918, 0x3e909eba, 0x3e165788, 0xbf2571bf, 0xbf225b75, 0x3f2ca208, 0xbe9e795d, 0xbe65380d, 
    0x3e05ef50, 0xbe2dc86e, 0xbf0a8107, 0x3e20c9c5, 0xbe9777ee, 0xbea8b7da, 0x3ebea7b5, 0x3fa5a7c3, 
    0xbecc188d, 0x3f27ed0f, 0xbe90bb51, 0x3ecf1907, 0xbefd52c4, 0xbe9918e8, 0x3efee755, 0xbdd666c3, 
    0x3d32d156, 0x3ead416c, 0xbf2fb096, 0x3ed91e49, 0xbe3d81e4, 0xbf345073, 0x3e2ffd29, 0x3e4c71ac, 
    0x3f1af0c8, 0x3f6cb2b3, 0xbec4a061, 0x3f5aa32c, 0x3e583a90, 0x3f0ae740, 0xbe76a19f, 0x3dd6a7a7, 
    0xbf34d9e6, 0xbf07dc74, 0x3e089a07, 0x3f185d1c, 0x3e95a916, 0x3f7ddc2d, 0x3ddd58c2, 0x3eee0aeb, 
    0xbe66ffbc, 0x3f781c33, 0x3f23ce27, 0xbfc10a99, 0xbd137ce9, 0xbf4736e1, 0xbfc0b361, 0xbd7db265, 
    0x3f954340, 0xbcd4b4da, 0xbec819ff, 0x3e46c19c, 0xbeade27f, 0x3f0c01f0, 0x3c299292, 0xbeba9178, 
    0x3e49adb6, 0x3f956221, 0x3f606248, 0xbd859ce9, 0x3d9f8f1c, 0xbed95fa2, 0x3e215e7e, 0x3fafdc83, 
    0xbf41c570, 0xbf1a5066, 0x3ea6fbed, 0x3f3c988c, 0x3e65c3b9, 0x3f8e8461, 0xbe40fe0a, 0xbfd7ae8b, 
    0xbe8afb97, 0x3f39bee0, 0x3fa77511, 0xbfa1cb15, 0x3ea67c74, 0xbf856e15, 0xc001ade7, 0xbe85fe20, 
    0x3ef3ef9e, 0xbe82e942, 0x3e43a52b, 0xbf10aa1e, 0xbe40fd33, 0x3f1c3590, 0x3da8a937, 0xbf198845, 
    0xbf421ff0, 0x3f073789, 0x3f3fe7bc, 0xbf0492c6, 0x3f0bc888, 0xbec8d2b5, 0x3ebe2690, 0x3f8f39f0, 
    0xbee014ba, 0x3f6f0916, 0xbdb66633, 0x3f237bbb, 0x3eefbb94, 0x3fa83489, 0xbed5f925, 0x400dbf0b, 
    0x3e1923f3, 0x3f6e9c40, 0x3f492ca8, 0xbf39921b, 0x3e929093, 0x3ef0cb62, 0xbfa7d0da, 0x3f80ef59, 
    0x3fa7116c, 0xbeb201ba, 0xbd978811, 0x3fb84554, 0xbe9377d0, 0x3ee86c5a, 0xbd078437, 0x3f8b2fd7, 
    0x3f454ad1, 0x3f2a5875, 0x3f047f65, 0x3c0609c2, 0xbe0556d0, 0x3f6080a7, 0x3ec0082a, 0x3fa1d60c, 
    0x3f918920, 0x3fac6e01, 0xbfac8379, 0x3e86c015, 0x3ec41196, 0x3e37613f, 0x3f634e67, 0x3f00d8c3, 
    0x3e4d83f8, 0x3e18252a, 0x3c76d5a0, 0x3f964e57, 0x3ee3dc91, 0x3e459b4e, 0x3e9a1249, 0x3f894051, 
    0x3e685b8b, 0x3fc7ba1f, 0x3f055409, 0x3f14516b, 0xbf29027c, 0x3f31dfde, 0x3ef5aa1a, 0x3f4b1f14, 
    0x3f38b9cb, 0x3e868215, 0x3ed8fabe, 0x3f6abdba, 0xbe63a77f, 0x3fc54d7b, 0xbe821121, 0xbe97e5b0, 
    0xbe9dc7be, 0x3e944961, 0xbe1aaad2, 0x3ed1521f, 0xbe05667d, 0x3e2392bb, 0x3f010484, 0x400825b1, 
    0xbeacd7d8, 0x3e95ab92, 0xbdae4e78, 0xbc956ab9, 0xbf5096ee, 0x3e0db715, 0x3ed9c7f8, 0x3efab0c3, 
    0x3e259b32, 0x3fb6c49a, 0x3e57e554, 0x3ff6e86a, 0xbf61e4fb, 0x3fb70860, 0x3e7ddd58, 0x3fb6fe28, 
    0x3dea503d, 0x3f828f45, 0x3f33f719, 0x3c5d7c85, 0xbf2060a2, 0x3f4b55ea, 0xbb82c40c, 0xbe9f7af2, 
    0xbf81a3d3, 0xbf7b3640, 0xbf61e74c, 0x3ef7233d, 0xbf39fcaf, 0x3eb0783f, 0x3ef2f017, 0xc01235d8, 
    0xbed57487, 0x3e07bcad, 0x3f5f0e7c, 0xbf8dac32, 0xbf5822c7, 0xbf7c5dbf, 0x3e25bf3e, 0xbf3b8a6b, 
    0xbf296827, 0x3fe7b264, 0x3f7305ee, 0xbf83925d, 0xbe24d780, 0x3f8caf68, 0x3f5bb5e7, 0xbf42d766, 
    0xbf48a8fe, 0xbecfcdea, 0x3f866344, 0xbeb81cd3, 0xbf815447, 0xbfbabb9f, 0x3e2e34e6, 0xbd0c91a7, 
    0x3f85da35, 0x3f4516f2, 0xbc9fc810, 0xbde3e6b7, 0x3f26b951, 0xbeb7ca48, 0xbddd2f1f, 0xbf916624, 
    0xbe04374a, 0xbed22163, 0xbec12965, 0x3eccc7ee, 0x3eb2999a, 0xbdf5251b, 0xbf4916c8, 0x3efbe3e0, 
    0xbe98a1a5, 0xbe8fe043, 0x3e8a05db, 0xbf18d517, 0xbebd5c28, 0x3fc5fc59, 0xbe12189a, 0x3e919509, 
    0xbe815a8a, 0xbd6b6b93, 0x3e4afbfd, 0x3e831dec, 0xbd899013, 0x3edfe679, 0xbedccea6, 0xbef756d3, 
    0xbe413f11, 0x3d88e337, 0x3f22aeae, 0xbd991010, 0x3d8b0d48, 0xbdc2d8a2, 0xbea0e7fd, 0x40014db9, 
    0x3e0204d4, 0xbd67c06f, 0x3e7c64f0, 0xbeb10da3, 0xbe72c09f, 0x3dab8c9c, 0xbf2303a8, 0x3eb46937, 
    0xbea33644, 0x3eb7269d, 0x3d5f2408, 0x3fbe369c, 0xbf3babc5, 0x3fe7b419, 0xbeae69ac, 0x3f40464e, 
    0x3efc5e95, 0x3f0687de, 0x3ec4237b, 0xbd7e8de8, 0xbdf89eb3, 0x3e82c539, 0xbe18a530, 0x3e8d97e0, 
    0xbf13a8d8, 0xbf1fec51, 0x3e816d7b, 0xbec7a7ee, 0x3e2a7048, 0x3ea39639, 0xbf131496, 0xc0055fc8, 
    0xbe2f1efe, 0xbf30a557, 0x3f379393, 0xbf6dd668, 0xbdd9d552, 0xbf569cb0, 0xbecdbc63, 0xbf0e1d80, 
    0xbef686d7, 0xbeab1b7c, 0x3f2e2cf6, 0xbf2f565b, 0xbdc5113e, 0x3fcaebad, 0x3df33cde, 0xbf4ebf1c, 
    0xbf293984, 0xbf26f048, 0x3f34f0a1, 0xbf47dc05, 0xbed6507c, 0xbf52db6d, 0x3df8be04, 0x3e61cf27, 
    0x3e24f63a, 0xbe8c0ff4, 0xbe387bee, 0x3f30a529, 0xbeeac781, 0x3f862487, 0x3cfa2923, 0x3ea2af64, 
    0xbeaf0b99, 0x3f2991b2, 0xbdce3d79, 0x3e031f35, 0xbf251b96, 0xbe6002ee, 0xbebb946e, 0xbc52f605, 
    0xbf261a16, 0xbd7fdd59, 0xbeedde2a, 0x3f119384, 0xbdd86320, 0x3b88471f, 0xbf794a99, 0x3dd5f3d1, 
    0x3f806262, 0x3f858c39, 0x3f387795, 0x3e18b865, 0xbf346aea, 0x3df6aece, 0xbeac4b3f, 0xbf1a8fb3, 
    0x3f2686d9, 0xbf0b182c, 0xbe12cb52, 0x3f40ad28, 0xbf1b13ad, 0x3f83644b, 0xbd256904, 0x3f35c26d, 
    0xbeecaaf4, 0x3f1f1eef, 0xbcd2d770, 0x3ec45c3b, 0xbf74f192, 0xbe942853, 0xbeae95c8, 0xbf0bb29c, 
    0xbff30645, 0xbe41da63, 0xbf9fe708, 0x3f3d1213, 0xbe1c864e, 0x3ea566ab, 0xbf8fc096, 0x3e33c576, 
    0x3f96f2b7, 0x3fadca61, 0x3f68b193, 0xbe4224dd, 0xbf1cc477, 0x3ecf78c7, 0xbeb3bb79, 0xbf328b0d, 
    0x3f29dc80, 0xbe0f16b0, 0x3e8f971b, 0x3f3dd914, 0xbec8ceba, 0x3f8e0f3a, 0xbe3210e4, 0x3f8b8068, 
    0xbf02fae3, 0x3f458620, 0x3e94db6c, 0x3e9c16a1, 0xbf23917a, 0xbe586098, 0xbec16c52, 0xbdb3c44c, 
    0xbe8344ce, 0xbe1e1bcf, 0xbf5a4c7a, 0x3f3e3426, 0xbe475a25, 0x3e7c87d9, 0xbf984881, 0x3e8441a3, 
    0x3ea47e42, 0x3f922ce8, 0x3f720470, 0xbd9562c0, 0xbf39e2d0, 0x3f4a930a, 0xbe5f2d4f, 0xbf253520, 
    0xbebd1be3, 0x3e8a2ea4, 0xbf02ce36, 0xbf0525a8, 0xbdb12d0e, 0xbf540ff8, 0xbec250b4, 0xbeb588e2, 
    0x3ddee7a2, 0xbf421215, 0x3cb694a7, 0xbdcf5b4e, 0x3e901315, 0xbdedb432, 0x3da6ac56, 0x3ee295c4, 
    0x3f02e4e8, 0x3eaf88c2, 0xbddf78a0, 0xbea2ffd6, 0xbc5b267d, 0xbfb09dfd, 0x3ebd53ec, 0x3e844668, 
    0xbf655929, 0xbe198a30, 0xbf6e7712, 0xbe679a40, 0x3ee3da54, 0x3e9af58d, 0xbe72dac7, 0x3f181ae3, 
    0xbf246798, 0x3f51bb41, 0xbf52d8ef, 0xbf53ffba, 0x3e309b44, 0xbf576231, 0xbf50281d, 0x3ee4e089, 
    0x3f20ffc6, 0xbf2794a9, 0xbee26901, 0xbe4c416f, 0x3f807e77, 0x3efe5f2f, 0x3eb09195, 0x3f8d9ba1, 
    0x3fe41954, 0x3e822cfa, 0x3f222a73, 0x3e3d8ca9, 0xbdd2241e, 0xbf9a3652, 0x3ee521bd, 0x3ed0430b, 
    0xbe72429a, 0xbecc2bbe, 0xbfa5d11f, 0x3ebea60a, 0x3ea6d1d2, 0x3e87b4fe, 0xbeabbad0, 0x3f2cd964, 
    0xbf4c7a68, 0x3c444e2e, 0xbf81d380, 0xbf006216, 0xbebd502f, 0xbf797552, 0xbf3d94d2, 0xbdb87725, 
    0x3ca6cdda, 0xbf2befcf, 0xbf7ce430, 0xbe8a8da9, 0x3ee5c2de, 0xbefa5987, 0xbd6a289d, 0x3d42d710, 
    0xbe08a20b, 0x3de56049, 0xbea109d9, 0x3e4e4a5a, 0xbde367b7, 0xbfbb1f11, 0x3e2836c3, 0x3d17ddc3, 
    0x3d4aa23e, 0xbd1ccaaf, 0xbf82b833, 0x3ed88e5c, 0x3f23cb1d, 0xbe9fd31b, 0xbf25f1d7, 0x3e91cbc6, 
    0xbf8d6752, 0xbec25aa7, 0x3f1da5bd, 0xbef54412, 0xbf432f36, 0xbe8ef307, 0xbfcc3568, 0xbee19ab3, 
    0xbe89efaf, 0xbf2c7c6e, 0x3e8224e3, 0xbf89b9b8, 0x3e67e990, 0xbf74fb38, 0xbfae3053, 0xbe9a5540, 
    0x3e3cad00, 0xbeee09a5, 0x3e9088c9, 0xbf3eef7a, 0x3ebf9ef0, 0x3f20967d, 0xbe512415, 0xbeec03b9, 
    0xbf0ba46f, 0xbe55e923, 0xbe71d964, 0x3e2c7ab0, 0x3edf03ef, 0xbf35dd10, 0x3e3a189a, 0x3efb3f00, 
    0xbe9df8c7, 0x3e16944f, 0x3ea6bbfc, 0xbebd9bcc, 0xbf64ad03, 0xbc6ea4a4, 0xbfb96387, 0x3f2a29a5, 
    0x3eb4773d, 0xbf4c047e, 0x3e14d711, 0xbeac631b, 0xbea3230e, 0xbe9b02c4, 0xbf9852c3, 0xbcbcbe49, 
    0xbf4fa88a, 0xbf8f0389, 0xbe5e6ad0, 0x3f675791, 0x3dff4ccb, 0xbcde0782, 0xbf17edd3, 0xbd7a65be, 
    0x3e8e477e, 0xbf057825, 0xbe644aee, 0xbd5c76eb, 0xbee2d241, 0x3f422d8b, 0x3e8ddac9, 0xbdc1457c, 
    0x3f0a8f8d, 0x3f7cfed2, 0x3f1bca0c, 0xbe298b97, 0xbe2c4ac2, 0xbe0b3118, 0xbf887ee7, 0x3fc03a40, 
    0xbeae85c9, 0xbf4438da, 0xbe04cce7, 0xbd59cb41, 0xbde70994, 0xbf0e2fb8, 0xbfc144f5, 0x3f4a3c05, 
    0xbd99f389, 0xbe8529c2, 0xbed9e840, 0x3f7668c0, 0xbf2e877a, 0x3f1a68bb, 0xbf51235e, 0x3ee2c716, 
    0x3e6edbaa, 0xbd68c803, 0xbeab4795, 0x3eac9c68, 0x3e0d7873, 0x3faac8a7, 0x3e1df6f7, 0xbeae5dbd, 
    0xbf418ad0, 0xbd3a13e2, 0xbc22d7dd, 0x3e6ea13a, 0xbfb28fa7, 0x3f31f709, 0x3f978a1c, 0x3e5be0e8, 
    0x3ee755a2, 0x3d21dc1a, 0x3aaa70e2, 0xbe59029f, 0xbf285318, 0xbe21043c, 0xbf53048c, 0x3ed28c18, 
    0x3d008165, 0xbe1eaa97, 0xbf19986b, 0xbe49415c, 0x3f4b0f03, 0x3e864d6b, 0x3f1853e4, 0xbe08d48e, 
    0xbf634b60, 0xbfb79c88, 0x3eb23e71, 0xbf6b7385, 0xbe505fdc, 0xbf1958fa, 0x3f4a413a, 0x3f8c4828, 
    0x3cc631a3, 0x3d8911f1, 0xbf33a483, 0xbc509bf9, 0xbfa7f657, 0x3e55e5cf, 0x3e797c6d, 0x3f29c1e9, 
    0x3ebb4953, 0xbea43d9b, 0xbf9b2e34, 0x3f10b3cc, 0xbf0224b6, 0xbeeba6dc, 0xbf3dbc00, 0x3e7669f1, 
    0x3a44f438, 0x3f3d1cbf, 0xbf49249d, 0x3f543b16, 0xbe55bd0a, 0x3eb0454a, 0xbe748e16, 0x3d415c9b, 
    0x3f970861, 0x3ee2ab86, 0x3c72dff8, 0xbcb3e5eb, 0xbc0d1335, 0x3bff7a47, 0xbe00e455, 0x3f41a020, 
    0x3dc3b2fd, 0x3effa431, 0xbf3d6a6e, 0xbddfe0a3, 0xbf5e46fe, 0x3e84ac6d, 0x3ea817d8, 0x3ea7fdec, 
    0x3eba86b1, 0xbe88da43, 0xbf9df8d2, 0x3ef8174b, 0x3f053c8d, 0xbcb1271d, 0xbf954850, 0x3f5d712f, 
    0x3fcc3aee, 0x3f405060, 0xbf47ec3a, 0xbf395acf, 0x3ca80d52, 0x3eddfd45, 0xbe83f4a5, 0x3e1def20, 
    0xbe872b21, 0xbcf5d85e, 0x3eba35b6, 0xbd1a53a3, 0x3e0e1d9b, 0xbe22bbcc, 0x3de1aa1d, 0x3f90a10a, 
    0x3e679a04, 0xbe89f53f, 0x3f171798, 0x3e002e26, 0x3dae53ed, 0x3ec703c2, 0x3eb3d38a, 0xbea6931a, 
    0x3f00743f, 0x3d5b9783, 0x3e08f4f9, 0x3e06c239, 0xbe4a7c42, 0x3f013ca1, 0x3e178463, 0xbe6b207a, 
    0x3f86c29b, 0x3d0388d0, 0x3d949621, 0x3e832076, 0x3e6916a4, 0x4005f4a5, 0xbe1df5d3, 0x3eb0cc9f, 
    0xbe006e07, 0xbd82d9fa, 0x3f2e372f, 0x3e18d811, 0xbeb9430f, 0xbbc40308, 0x3ed5af79, 0x3e430246, 
    0xbe716f5d, 0xbf4e34d2, 0x3ee74a98, 0x3d90de83, 0xbeb6b157, 0x3e541d99, 0x3f0735f5, 0xbffb00cc, 
    0x3ea92dab, 0x3e7a0cb7, 0x3eafefb0, 0xbeb4dd6d, 0xbe5c3dd5, 0x3c9796b7, 0x3ec207c1, 0xbf36517a, 
    0x3e341d3d, 0x3e80cba9, 0x3e559d42, 0xbf01f642, 0x3f0d6c64, 0x400906d9, 0x3ea2366a, 0xbe085333, 
    0xbe5c5fa5, 0xbe53ff7f, 0x3f25db76, 0xbd4c6fd2, 0xbf2ff419, 0xbf2d5a3d, 0x3f469eba, 0x3eaab877, 
    0xbe8920bb, 0xbf3cfad1, 0x3eedad23, 0x3ce434a7, 0xbedd9bbe, 0x3ea81ed2, 0x3f034ba9, 0xbfb0f194, 
    0x3eca6902, 0x3e80ff32, 0x3f0ad8db, 0xbe109ef9, 0xbf0ed632, 0x3e2367fe, 0x3e95d361, 0xbf5b891a, 
    0xbf2d299c, 0xbc219ac5, 0x3da488db, 0x3dfbdfd0, 0x3f26c9ae, 0x401a2b5e, 0x3e5c3680, 0xbc0cf5b2, 
    0x3d762ce8, 0xbe3641f6, 0x3f17dbd5, 0xbdff07ba, 0xbf8fd1f5, 0xbeabe8a8, 0x3f7ab4d8, 0x3ecf5973, 
    0x3f0dce5d, 0x3deba30e, 0xbea2b777, 0xbf5692a7, 0xbf11382a, 0xbe6d5078, 0x3eb5e33f, 0x3eb9cff5, 
    0xbe623a74, 0xbec30cea, 0xbfb3f3f7, 0x3f3a05a6, 0x3ec4d8a1, 0x3eb41d9a, 0xbed71523, 0x3f01a683, 
    0x3fc1b3c7, 0x3f967786, 0xbe9ca344, 0xbd54beeb, 0xbf39dd06, 0x3f890182, 0xbf7fe5e2, 0x3f32feee, 
    0x3f39c275, 0x3f879935, 0x3dda4f5b, 0x3f0af38e, 0x3eb48f52, 0xbef7bbf8, 0xbf2683fa, 0x3e51d699, 
    0xbe9a3672, 0xbf32caf2, 0x3bda3d38, 0xbf368c36, 0xbed1f45a, 0xbdafbc9b, 0x3f7cb066, 0xbfdd69be, 
    0xbcc3d8b5, 0xbe0219d8, 0xbec0011e, 0x3d51a9b7, 0x3f3c7c14, 0xbe8911e2, 0xbea24c04, 0xbe930b70, 
    0x3f1fa5cf, 0x3e9efebd, 0xbdc43050, 0xbfce395e, 0x3f7a0f2e, 0x3f824964, 0x3d9718a6, 0xbf1950bb, 
    0xbcac0560, 0x3ec1c176, 0x3e2fca88, 0x3dbefa8c, 0x3fbe76fe, 0xbfa407c3, 0xbed5dbd2, 0x3f77a848, 
    0xbf1bc30e, 0xbe9caf24, 0xbcaa819e, 0xbdab8ff7, 0xbfda81a3, 0xbbea2a6d, 0x3f822261, 0x3fa1d954, 
    0x3f2ae24f, 0xbdb16861, 0xbd9efb27, 0x3e3e5aaa, 0xbf5f8066, 0x3eab3067, 0x3e4e81e1, 0xbe4aaad4, 
    0xbf6de52d, 0x3f0f46bc, 0xbf386065, 0x3fc1dcf7, 0x3eac6846, 0x3fa23363, 0xbe69e8e1, 0x3ef023d3, 
    0x3f97368d, 0x3e9f18f2, 0xbe9ec517, 0xbedddbec, 0xbf015838, 0x3e40c3f3, 0x3d83ed3d, 0x3f156600, 
    0xbe2319a5, 0x3e479ba2, 0x3deed807, 0xbf1d141a, 0x3f08ac63, 0xbf9ffe7d, 0xbe9b835a, 0xbef10137, 
    0x3e6e2838, 0xbf2f5a19, 0xbe2171b0, 0xbe28b2c5, 0x3ebbbf71, 0xbd8a12bd, 0x3ef8d87a, 0x3e28c142, 
    0x3f13ad98, 0x3c8f0b46, 0x3e6e2fe7, 0xbeeab25d, 0x3de9748f, 0xbe661868, 0x3f73f428, 0x3d4b3542, 
    0xbf1337cb, 0xbf100846, 0xbf94e860, 0x3f18b1fa, 0x3f07ca20, 0x3f003ac8, 0x3eee9b69, 0x3eeac99f, 
    0xbeebb19c, 0x3e987a2a, 0xbe36c266, 0xbf15fa22, 0x3f44a9fe, 0xbfa31dcb, 0xbed7554d, 0xbe08f1a4, 
    0x3ed355a3, 0xbf0ec765, 0xbe3c4c36, 0xbe523eec, 0x3f745d3d, 0x3e33080f, 0x3f56c8f9, 0x3f0f319a, 
    0x4005d02d, 0xbde36c58, 0x3f947a95, 0xbec53b0e, 0x3eb01537, 0xbf0adc0d, 0x3f5da897, 0x3d5752a1, 
    0xbfa06f8e, 0xbf23586e, 0xbf9c489e, 0x3f5bc02d, 0x3e297696, 0x3e953883, 0x3e8c0772, 0x3e80f1a6, 
    0xbf04004a, 0x3ed0c67e, 0xbeb40903, 0xbf22775c, 0x3edd6b0c, 0xbf8d4fe7, 0xbe400f4f, 0xbe59edba, 
    0x3edd8a80, 0xbf37cedd, 0xbea9431c, 0xbd4b6068, 0x3f7218ec, 0x3e4e48dd, 0x3f8630df, 0x3eb342df, 
    0x3fe5c5cf, 0x3e61a554, 0x3f889d3b, 0xbed96933, 0x3ed7ec19, 0xbf494a2b, 0x3f744bc8, 0x3dffc45f, 
    0xbe5582e7, 0xbf680ea8, 0xbf899b5b, 0x3f97d8b2, 0x3e1de509, 0xbdcf3572, 0x3ec9e95f, 0x3ebf2d33, 
    0xbe9f4f44, 0x3e01f256, 0x3e3a67ca, 0x3e738ea5, 0xbf76a685, 0x3f05d617, 0x3e8dc99d, 0xbda7b1d9, 
    0x3e803364, 0x3d97ed14, 0xbcb1a47d, 0xbdf6011d, 0xbf0f0bbc, 0x3ed06f92, 0x3ee5fad4, 0x3e1a69ec, 
    0x3eb23e4b, 0xbf7de092, 0xbf099439, 0x3e43201b, 0x3eafda3a, 0xbf2fd422, 0xbe7bb32e, 0xbf14ca4f, 
    0xbf80dcbb, 0xbf02dde0, 0x3e87ecc2, 0xbf83a0ed, 0x3eb252f1, 0xbeefb360, 0xbe612dfc, 0x3e712695, 
    0x3e14ca40, 0x3eae1470, 0xbedeb512, 0x3e05309c, 0xbf2ef760, 0x3f15248d, 0x3f1e5f44, 0xbe4abc46, 
    0x3d86770c, 0x3eac2fa7, 0xbf44360a, 0x3f14895f, 0x3e0cba7e, 0x3e9fbe65, 0x3ec421bd, 0x3bcb435d, 
    0x3dd1a816, 0xbf355e76, 0xbf7a96ac, 0xbdd6bb63, 0xbdb31f5f, 0xbf43adcb, 0xbe353b46, 0xbf1c8393, 
    0x3f4bab55, 0xbe407819, 0x3e5300b0, 0x3e592325, 0x3e593341, 0xbeb05243, 0x3d108127, 0x3ead196e, 
    0x3f19a167, 0x3e1d92ea, 0xbe5ec83e, 0x3e96a7ba, 0xbf03187d, 0x3ef811f2, 0x3f680989, 0x3ec6760e, 
    0x3e5cc8f1, 0x3ec42c1a, 0xbe919d23, 0x3f261a2e, 0x3ecbf78f, 0x3f210b4f, 0x3ed65c57, 0x3d096d60, 
    0x3f031fb2, 0xbf533a3d, 0xbfbed5eb, 0xbe29f2d3, 0x3ec0b894, 0xbf398dea, 0xbe49697a, 0xbece4411, 
    0xbef1ddc8, 0x3e7ada55, 0x3ecab5a3, 0xbdab33b6, 0x3f1b70ca, 0xbe7b6f5b, 0x3cba14c5, 0x3d78ce8a, 
    0x3eb04787, 0x3f0727ef, 0xbee0481f, 0x3e32e489, 0x3f91a0d2, 0x3eec9c16, 0xbe3129a8, 0x3df8d657, 
    0xbdd7db52, 0x3f8ab2b7, 0x3ea9b9f1, 0x3e1ff9cd, 0x3eafb03c, 0x3ec6368e, 0x3f0c1e67, 0x3eb9479f, 
    0xbf22bfe8, 0x3c89aebd, 0x3e0f8b03, 0x3ebcdfd0, 0xbe654d51, 0xbf5aab86, 0xbd8d3612, 0x3f421698, 
    0x3edfdc53, 0xbd7527d0, 0x3ec2ef72, 0xbc46de29, 0xbdd7e388, 0x3ec6fa14, 0xbee19f8d, 0xbef4a47d, 
    0x3d57d6e7, 0x3e81e69d, 0xbe545a1b, 0x3ea1c768, 0x3faf4939, 0x3ea7dd56, 0xbd859884, 0xbe655f3f, 
    0xbea0f64e, 0x3f99a36a, 0x3e94a595, 0xbeed9f39, 0x3eb52b15, 0x3c9f5b64, 0x3f198bf3, 0x3ed62081, 
    0x3f0ba2d0, 0xbda14f32, 0x3f385c08, 0xbed7344e, 0xbe76fd80, 0xbf596d42, 0x3edc1b70, 0xbccb60ca, 
    0xbe6306f3, 0xbe4f7b65, 0x3ed4656d, 0x3e431d7d, 0x3f00d13f, 0xbf0462ec, 0xbe8cce66, 0xbd8eb506, 
    0xbee26ff3, 0xbf179587, 0xbe6b9fba, 0x3eeff0ef, 0x3f34c2d3, 0x3f103dce, 0x3dda588f, 0xbf99bf15, 
    0xbea29488, 0x3f536809, 0x3f1a806f, 0xbf226c07, 0xbe11917a, 0x3b616289, 0x3f2c0e60, 0xbf3d47f5, 
    0xbf46ee66, 0xbf99d1aa, 0xbdb10ad5, 0xbe171af5, 0x3e82572d, 0xbf8e25de, 0x3ea30349, 0xbeb7b85c, 
    0x3d4cfaf1, 0x3e17babc, 0x3f352ebc, 0xbe88bc5b, 0x3f080f17, 0xbf181f22, 0xbf038335, 0xbea2ae31, 
    0xbe182c53, 0x3f0db074, 0x3ee00758, 0x3d08d355, 0x3ea7a7a7, 0xbe4f78b7, 0x3e68fed5, 0x3f05afca, 
    0xbf60382d, 0xbf13c282, 0xbf44352e, 0xbe159c59, 0xbf04529b, 0xbf9cf820, 0xbfb048df, 0x3f40c4cc, 
    0xbe9e1fd0, 0x3f32355e, 0x3ea189ab, 0x3e146ea1, 0xbe21e960, 0x3f4828a3, 0x3e0d650d, 0x3f883efb, 
    0xbef3128a, 0x3e8327e9, 0x3e7ed05f, 0x3dbe3987, 0x3e7a4459, 0x3f282472, 0x3ec1853a, 0xbf006daa, 
    0xbf55c4a8, 0x3effade1, 0x3f5140a1, 0xbc1d57c6, 0xbd93804c, 0xbe944a7e, 0x3dd3043e, 0xbf3b8169, 
    0xbf54a2a8, 0xbef03c44, 0x3a8bc56a, 0xbf3b4d11, 0xbecca2e7, 0xbf916015, 0xbfc969a9, 0x3ee3fb13, 
    0xbf339671, 0x3f789f3f, 0x3ec6a24b, 0xbf426f36, 0x3e374378, 0x3f43768c, 0x3eb9161e, 0x3f2aac0e, 
    0xbf46d0bf, 0xbe9a996d, 0x3e357533, 0xbf287123, 0x3f22c07b, 0xbda735ce, 0x3eed0ca6, 0xbe5447dd, 
    0xbf91ad7c, 0x3faab69b, 0x3f4c94c6, 0xbe3fc133, 0xbe3b0cea, 0x3c80e90b, 0xbe91fbcd, 0x3ff35a32, 
    0xbea70ebe, 0xbe8d781a, 0x3e068f2f, 0xbf340c95, 0x3e4b65ff, 0xbe46c532, 0xbfbd9f85, 0x3f8f7dce, 
    0x3dd59a25, 0x3fddca6f, 0x3f14109b, 0x3f608b0a, 0x3e2c8ad8, 0x3f975471, 0x3f1f152a, 0x400032c8, 
    0x3f1f442a, 0xbe94d480, 0xbdd21b84, 0x3d4de339, 0x3eb3bb0f, 0x3f1562fc, 0x3f3c3d09, 0x3e37101f, 
    0xbe84ee3a, 0x3ea92439, 0x3d32d64a, 0x3ef5e426, 0x3ed9376e, 0x3f14c26b, 0xbc4ff83f, 0x3f673001, 
    0xbfa66800, 0x3e946cdb, 0x3d57c9b6, 0xbe49072a, 0xbe8501d7, 0xbfa00d69, 0xbf6f94b8, 0x3e3b246e, 
    0xbeddd7c7, 0x3d25b393, 0xbd26911b, 0xbe508a51, 0xbf2977a0, 0xbfb6d85b, 0x3e52bf8d, 0xbef03210, 
    0xbe450a16, 0xbf06535c, 0x3dd3b1b9, 0x3d98a04c, 0x3f300dbe, 0xbea892df, 0x3e968d27, 0x3ea36c42, 
    0xbdac693c, 0x3ec90500, 0x3da7c3eb, 0x3f011c80, 0x3f18b864, 0x3ed1e3e3, 0xba4a75e6, 0x3f82d224, 
    0xbfbd0f74, 0x3e6c19ae, 0xbd001c2d, 0x3d3ca051, 0x3c0552dc, 0xbfb2d1cf, 0xbf890710, 0x3ea5d5b2, 
    0x3daf9bec, 0x3e7617c8, 0x3ef0276d, 0xbcbbc784, 0xbf449efe, 0xbfafeb83, 0xbd56e798, 0xbf1d8290, 
    0x3ee39101, 0x3d38a908, 0x3e07baf0, 0x3d7c136f, 0x3f89d8d4, 0x3d548541, 0x3eb07eaa, 0x3d22a0c4, 
    0x3d847570, 0x3edb6488, 0x3e3c1c75, 0x3ee78f4d, 0x3f2c3ae7, 0x3ee55634, 0x3c596696, 0x3fbf76da, 
    0xbf7ef1ab, 0x3edf84d3, 0xbe4e4dd0, 0x3d04c0bd, 0xbde808f1, 0xbf55681d, 0xbf4a0755, 0x3efb819b, 
    0xbdeee383, 0x3e131993, 0x3e5f2747, 0x3de942ee, 0xbf04e939, 0xbfdc4198, 0x3e8686c4, 0xbea8e0a5, 
    0x3ecb8101, 0x3df19e5d, 0x3e4abb4f, 0x3db031ed, 0x3fb9a835, 0xbce30a04, 0x3e7e341b, 0xbc92d116, 
    0xbeafaf23, 0x3c883504, 0xbf1e7227, 0xbe88d421, 0xbf8a12c4, 0xbd70763d, 0xbf046483, 0x3e39a3c1, 
    0x3e7cb44e, 0xbe3ba9ca, 0xbc039790, 0xbc1799d2, 0xbe711316, 0xbea1cd65, 0x3e8a735c, 0xbd3bcd17, 
    0xbf5a4578, 0xbd586317, 0xbdc6ae99, 0xbda5f3b6, 0x3e347a17, 0xbfece2e0, 0xbed29026, 0x3d9ee943, 
    0x3d1fe89e, 0x3ce744b9, 0xbf2965dc, 0xbd7933a5, 0xbda66e1d, 0x3d457977, 0xbf300fed, 0xbe845404, 
    0x3ec3f43a, 0x3e3c1a4c, 0xbf49e135, 0xbedcd5dd, 0xbf6db7ce, 0xbe7d881a, 0xbf2f5f29, 0x3f8c300c, 
    0x3e02b7f4, 0xbedde489, 0xbee85289, 0x3f22163d, 0xbe83e350, 0x3e0ae0d0, 0x3dc970f7, 0x3e33f280, 
    0xbf96c378, 0xbde23c9a, 0xbf3aa89d, 0x3f383024, 0xbe246da3, 0xbff6a6bb, 0xbf3a979c, 0x3e65d053, 
    0x3ea271a4, 0x3d9fd902, 0xbf193cc8, 0x3ea3ec18, 0xbed6c714, 0x3f6592e0, 0xbf82cabd, 0xbf281260, 
    0x3ef51c16, 0x3f0c3c01, 0xbf7352a3, 0xbee55124, 0xbf01075e, 0xbef00369, 0xbf56f1e8, 0x3fae33ae, 
    0x3eb3d334, 0xbed9f6d8, 0xbf5ac270, 0x3f0eb41c, 0x3d92953f, 0x3c466f8b, 0x3db4bbab, 0x3eb6b93c, 
    0x3d56b1a2, 0x3e412678, 0xbf2b8fef, 0x3ed1f667, 0xbf216a7a, 0xc0081933, 0xbf3fd7a1, 0x3f278af3, 
    0x3ef7935e, 0x3f70cedb, 0xbf5de713, 0x3f405deb, 0x3f3b3963, 0x3f6e994c, 0xbf9be250, 0xbf26d151, 
    0x3ed2699d, 0x3da1eebf, 0x3d311666, 0xbf0b3c8b, 0x3e046163, 0xbf4cae87, 0x3eea6890, 0xbede3532, 
    0xbd95fb64, 0xbf0605ea, 0xbf96584f, 0xbdea9ad3, 0xbe8f555f, 0xbe3a564e, 0x3d5edbef, 0x3ef3ec65, 
    0x3fbbdbdd, 0x3c34d785, 0xbd1ca2a9, 0xbd1281db, 0xbbad8529, 0x3fa7d19a, 0xbe5a0637, 0x3eee1655, 
    0xbf840b69, 0x3f42b86a, 0xbec625d4, 0xbe39e090, 0xbd9753b1, 0x3ecd49d2, 0x3e1b8777, 0xbe59d4ca, 
    0xbea2ba74, 0xbdbdc456, 0xbe2948a3, 0xbee22eb8, 0xbeb079da, 0xbf62d2d1, 0x3dd611fd, 0xbf17e811, 
    0x3ead0166, 0xbe638318, 0xbef17789, 0xbeb0e001, 0x3d53d1d6, 0x3efd2c13, 0x3d7a9903, 0x3ea94a94, 
    0x3f4f7655, 0x3eed4d92, 0xbe945a16, 0xbf4a5cbc, 0x3ea4a4d5, 0x3f964c05, 0x3e7b37d0, 0x3f2893f3, 
    0x3d089947, 0x3db4369f, 0xbe80b42f, 0x3dc6e340, 0xbd226a70, 0xbe3e8af3, 0x3ba16604, 0x3ed2a949, 
    0xbf2868b6, 0x3ca69426, 0xbe91fd8f, 0xbe4dec50, 0xbf01b62e, 0xbee08ec9, 0xbe27e6f6, 0xbefec628, 
    0x3eac3f13, 0xbef168f7, 0xbe593e8a, 0xbf16f410, 0xbd023fc1, 0xbcb69282, 0xbcaf28cf, 0x3c637ba3, 
    0x3dc75cd2, 0x3ef34070, 0x3dc70be5, 0x3efc93fe, 0x3ee8c721, 0x3fa0d3c0, 0x3c3e8057, 0x3e2feb55, 
    0x3d5fcbc3, 0x3e1d0d0b, 0xbe7288b1, 0x3c0d017c, 0xbf135255, 0xbd5ad0f4, 0x3de36d58, 0x3ec6e614, 
    0xbf7e18d8, 0xbf00d1a9, 0x3f6e493a, 0x3eafdbc4, 0xbefbe8e2, 0x3e2e24a6, 0xbe5db306, 0x3f3870a5, 
    0xbf210a68, 0xbe10f6a8, 0x3f0a83ba, 0xbf674bbd, 0xbe8751c3, 0xbf5694ba, 0xbeaa778a, 0xbf321da0, 
    0xbf532d68, 0xbeacc841, 0xbd7829be, 0x3aef81a8, 0x3ebab909, 0xbfaa45e3, 0xbeaa7519, 0xbee5dd91, 
    0xbdf68b32, 0xbf114add, 0x3c7761fe, 0xbe9c14b5, 0x3ed03554, 0xbf415160, 0x3f0ff508, 0x3e973759, 
    0x3d88b27e, 0x3e722176, 0x3ea7298c, 0xbc59e864, 0x3ee7fafb, 0x3eb300d3, 0x3c5b967c, 0xc014a88a, 
    0xbdbfee08, 0xbf0d3014, 0x3dcd9d18, 0x3dbca5fe, 0x3ea9b91f, 0xbf40b7e7, 0xbf31c7a8, 0xbeaad204, 
    0xbf08a2ca, 0xbf925305, 0x3e3da165, 0xbfaaf42b, 0x3ea23a78, 0xc0092270, 0x3e807ba2, 0xbfb24005, 
    0xbf62ae0a, 0xbfc34b9c, 0x3d4aa2a9, 0xbe44ab16, 0x3ea75b6e, 0xbe9266de, 0x3ec81566, 0xbec6e2d2, 
    0x3f77b785, 0x3f69d783, 0x3f8d9705, 0x3e880d70, 0x3d8006bb, 0xbe8e287d, 0x3cc718ea, 0x401620b7, 
    0x3da9ec2c, 0xbce3c8fd, 0xbe880db4, 0x3f9608ae, 0x3e5b2623, 0x3f3d1d9e, 0xbe990724, 0x3f178da5, 
    0xbc9ede18, 0xbe5f186a, 0xbf38d907, 0x3f8a7b22, 0xbe34699b, 0xbfabeb7c, 0xbe950f1e, 0x3f9c8225, 
    0x3f11dc50, 0xbda12040, 0xbf7cac1b, 0x3f25cbb6, 0x3f71a475, 0x3f988566, 0x3e5b2230, 0xbea9f840, 
    0x3ec348f7, 0xbe564c78, 0x3eae0dbe, 0x3ec9967e, 0xbf4b1ad8, 0xbf0949c4, 0xbf1c580e, 0xbc9cbbd6, 
    0xbf23d188, 0xbf4fddd7, 0xbe7e397d, 0x3ea0f721, 0x3df2c5af, 0xbd644246, 0x3ef34b9f, 0xbed2fe1d, 
    0x3f61e7ff, 0xbdb561e0, 0xbd890492, 0xbeced475, 0xbe26bfb6, 0xbd84d945, 0xbdd741f5, 0xbf1abea0, 
    0x3fa6b926, 0x3f8996e5, 0xbe991c8f, 0x3f583704, 0x3dc8bbf3, 0xbe4740f3, 0xbd3710f6, 0xbe9578d1, 
    0x3f541bf3, 0xbe0169f5, 0x3eebda1c, 0x3ecb14d7, 0xbefc1c6a, 0xbe7244c1, 0x3eb1d8c2, 0x3dafb2ee, 
    0xbb28ff20, 0xbf056be4, 0x3e8563c2, 0x3f2ac3ad, 0xbde86e83, 0x3efb5f62, 0x3f084878, 0xbded7c8f, 
    0x3e3e00b6, 0xbf6dbb19, 0xbf3cc40f, 0xbe377d71, 0x3e90cfeb, 0xbe8383a6, 0x3ca069dd, 0xbf921fec, 
    0xbf2ed782, 0xbeffa22d, 0x3db2d443, 0x3ce9a070, 0xbf2fec48, 0x3ec9f233, 0x3f014cd7, 0xbec9c913, 
    0x3f48d085, 0x3ee9071a, 0x3f4463d4, 0x3ebe6043, 0xbf75af98, 0xbeccae5d, 0x3eec9809, 0x3f74951f, 
    0x3cff9c84, 0xbf1a70c6, 0x3e876f2f, 0x3f02fb55, 0xbe089c6c, 0x3e865bdc, 0x3f62fb8b, 0x3eef9c64, 
    0x3f3e6b86, 0xbe951983, 0xbecef4ea, 0xbe4977f7, 0x3dc8e795, 0x3e48e886, 0x3e7d7a0b, 0xbf5f3a33, 
    0x3e2afe9f, 0xbd05e18a, 0xbf1ffbc1, 0x3e4084f6, 0xbf9e8e3c, 0x3ed2ceb0, 0x3f2128d5, 0xbf03a0ef, 
    0xbf4b00f6, 0xbe812dff, 0xbf104d13, 0xbeefa19f, 0x3de60850, 0x3eba5883, 0xbda086ee, 0xbf481573, 
    0x3f5e4615, 0x3f67de04, 0x3ec83ca6, 0xbf024c77, 0x3e0eda94, 0xbbac26cb, 0xbd1f7797, 0xbddd0cfb, 
    0x3d31c56e, 0xbf49722f, 0xbef149b8, 0xbf42f33e, 0x3f6b0c03, 0xbf61baa4, 0x3f0007fe, 0xbf061a4d, 
    0xbf36da07, 0xbf82193d, 0xbe6385f1, 0xbf0e2974, 0xbd529515, 0xbe22ee2b, 0xbd9ff09e, 0x3f2734b3, 
    0xbedaf484, 0x3e0ebd1b, 0xbf03ac40, 0xbe7d83ba, 0xbf19e8bd, 0x3cc95f47, 0xbf49a4bb, 0x4010e875, 
    0x3e984e75, 0x3f81fe50, 0xbf5d5198, 0xbebd0251, 0xbedaddc9, 0x3f00998d, 0xbab34ed4, 0x3dd8937b, 
    0xbd87e6c2, 0xbd946c14, 0xbf7c0e7f, 0x40086bff, 0xbefc2f64, 0xbf3fb161, 0xbed33cdb, 0x3f928e8f, 
    0x3fb48be8, 0x3f76d764, 0xbea6cf11, 0x3dd3ec94, 0x3d92567f, 0x3f823323, 0xbf4eb4c8, 0x3d3d07c9, 
    0xbda2c837, 0xbda3a1fb, 0xbf5067f4, 0xbe9e6a42, 0x3f857afe, 0x3ea4b5a1, 0xbc041cab, 0xbf941730, 
    0xbe6ea5d1, 0x3f724f5c, 0xbf66f788, 0xbf092cba, 0x3f39569e, 0xbf062fc4, 0xbe3876d0, 0x3e215f34, 
    0x3fc066c3, 0xbf854912, 0xbe4dbe91, 0xbfbdf23d, 0x3eabd424, 0xbfb89900, 0xbd4fb820, 0xbf6b97f9, 
    0xbfb3654e, 0x3daa7f98, 0x3f173cbc, 0x3f0fa328, 0x3f5eeedb, 0xbeebb1f1, 0xbefe2287, 0x3eac06d4, 
    0x3d0f5fd8, 0xbf36c2fc, 0x3e22c291, 0xbdc41e97, 0x3e38ec0c, 0xbf84ff47, 0xbef4e95d, 0xbe8f7648, 
    0xbee37714, 0xbed0150d, 0xbdcd02a7, 0xbc76b5f9, 0xbb0c1483, 0x3d8f1fce, 0x3fa2d20d, 0xbf554074, 
    0xbe88b2c0, 0xbec6d58c, 0xbe201ebe, 0x3e076c52, 0x3ead7699, 0xbfa877c9, 0x3dbcba5b, 0xbe17616e, 
    0x3efb81c5, 0xbdc3ef30, 0xbf9cd358, 0x3e850da2, 0xbdddc1d4, 0xbda9289a, 0x3ec8efc9, 0xbef1e3cd, 
    0x3d2efb34, 0xbea2e3d4, 0x3d1daeba, 0x3c11ed16, 0x3f3a392d, 0xbf87998c, 0xbe7e7d5b, 0xbf9f091e, 
    0xbe08437e, 0xbe5aee1e, 0x3e17891b, 0x3da8a219, 0x3f23835a, 0x3e6f09a0, 0x3fac1615, 0xbe451180, 
    0x3f5e2765, 0xbf5f71b3, 0xbe24901f, 0xbfae3c5e, 0x3f53a5e7, 0xbfb16083, 0x3e90504c, 0xbeb1fee0, 
    0xbfb42833, 0xbf409e44, 0xbf9384f7, 0x3ecb2899, 0xbea2d3b0, 0x3ddd6b89, 0x3e7be608, 0xbecae930, 
    0x3e0b8172, 0x3ea68466, 0xbe399694, 0xbc1e17e7, 0x3f2293cf, 0xbf6ca98a, 0x3cf14b66, 0x3f51be59, 
    0x3ec77116, 0xbd77711b, 0xbf1051d2, 0x3d9f66f0, 0x3f31a6c0, 0x3f62956f, 0x3fda4e7f, 0x3dddb4f6, 
    0x3f9f6505, 0xbf00d1e8, 0x3f0ea423, 0x3ebe1161, 0x3ec21698, 0xbfba2b13, 0x3ee88293, 0x3f142619, 
    0x3e2adb3c, 0xbe184170, 0xbfbd5f5a, 0x3fa2a0be, 0xbdb11f4b, 0x3f2b0703, 0x3da5c774, 0xbe5dba38, 
    0x3e96d503, 0x3f27e95d, 0xbfcdad39, 0xbd7f8a10, 0xbd084a53, 0x3e17e0e2, 0x3f168cf6, 0x3f17d704, 
    0x3f0be198, 0xbe192104, 0xbd8496be, 0x3f9023c2, 0x3e7f7850, 0x3e093e4e, 0x3eee05d5, 0x3f44e066, 
    0x3eebae50, 0x3fc88ede, 0x3f3f6309, 0x3e7b3483, 0xbf13eacf, 0xbe916c61, 0x3f1542ec, 0x3ea9a2d3, 
    0x3f0fe489, 0xbe54f201, 0x3e094f59, 0x3f2fb0ea, 0x3d980fdf, 0x3f806ba5, 0xbf2e367e, 0x3db7903d, 
    0xbd516a5b, 0x3e30364a, 0xbf920215, 0x3e53f7dc, 0xbf4603a3, 0xbd738621, 0x3f2f0a92, 0x3fec7666, 
    0xbdcae126, 0x3e2f8e07, 0xbf26746a, 0x3f09c1f8, 0xbf25fd94, 0x3dc3cf20, 0x3ed18ef7, 0x3e84f673, 
    0xbe86c366, 0x3fe2c446, 0xbce74b20, 0x3fbbefd5, 0xbf41452a, 0x3e93fe8d, 0xbc27e8f1, 0x3fb28142, 
    0x3faaf207, 0x3fa1f062, 0x3dde22bb, 0x3e79dbd2, 0xbe920821, 0x3f287c77, 0xbf3fc478, 0xbe80b047, 
    0xbf40f13c, 0xbf6fa5e1, 0xbfa8fdd9, 0x3f02cb0b, 0xbf6e571b, 0x3e82ea54, 0x3f1a1039, 0xbfd0fe59, 
    0xbe7ad395, 0xbe404094, 0x3e8de51b, 0xbe9fc76d, 0xbf2d437b, 0xbf1d09eb, 0x3dbfa994, 0xbf12fd0a, 
    0xbef047a2, 0x3fd1ff0c, 0x3e4ad52b, 0xbf172daa, 0x3c47edf9, 0xbe4c38d9, 0x3deb079d, 0xbe4f8c30, 
    0x3bf6e043, 0x3eaf4783, 0x3f0470c3, 0x3e18baa1, 0xbf109c8d, 0xbf3e6b0c, 0xbe8cb2bd, 0xbe949161, 
    0x3e7ac351, 0xbe2dce3c, 0xbef27578, 0x3ea4e306, 0x3ef2b0e1, 0xbdcf0f1c, 0xbe3a6ad9, 0x3ca8b030, 
    0xbe43f4c5, 0x3ebfdffb, 0xbe884728, 0x3b564514, 0x3e71e303, 0x3daf2e16, 0x3fc909fe, 0xbf1307bd, 
    0x3e9b0e75, 0x3ef51764, 0x3f1c8d01, 0x3e5885b8, 0xbe402d4f, 0xbe4cdd0c, 0x3e32fcd9, 0xbf1455c8, 
    0x3fd03a4e, 0x3f952e85, 0xbd1e56ed, 0x3f828acf, 0xbe978494, 0x3e8d12a4, 0x3e0aad95, 0xbf455a99, 
    0x3f662f31, 0xbf220017, 0xbd034ab1, 0x3f1eb110, 0x3e79d0ce, 0xbdc27854, 0x3ec62dea, 0xbf0c8709, 
    0xbe9afcef, 0x3e60201d, 0x3e170c93, 0x3d1e7574, 0xbf41fbcb, 0x3dce4014, 0x3f95bbdd, 0xbf2d66b6, 
    0xbeada8ec, 0xbe2de0c6, 0xbe8102d5, 0xbe276c3c, 0x3ee155ed, 0xbed40cd3, 0x3e5e12a3, 0xbee8c359, 
    0xbf378505, 0x3eee808f, 0x3d07dea8, 0x3b1ef9ba, 0xbf4edfba, 0x3f4222e1, 0x3eadc292, 0xbf8050c5, 
    0x3f264963, 0xbe0ccf21, 0x3e3476a9, 0x3edcde48, 0x3e8c35ce, 0xbdb1c19c, 0x3f054e45, 0x3ed41197, 
    0x3ddc419f, 0x3f079351, 0x3ecfd755, 0x3dc25035, 0x3e96af20, 0x3f802f62, 0x3fe85246, 0x3dc0a75a, 
    0x3f8b633a, 0x3f2a8222, 0x3e832687, 0xbf24634e, 0x3eecfb19, 0xbd9bb78f, 0x3f3ec1de, 0x3e771cb6, 
    0xbee24942, 0x3daf0a2a, 0xbcc122f6, 0x3f6a3d3a, 0xbf1c147d, 0x3f11fa83, 0x3ed7b8d5, 0xbf0f2bab, 
    0x3e8713be, 0xbee65876, 0x3db84189, 0xbf062d96, 0x3d216299, 0xbf1a8790, 0x3d69444c, 0xbed52bf7, 
    0x3e36497d, 0x3cf238e9, 0xbd663d8e, 0xbdd5bc91, 0x3e95d62e, 0x3ebfb956, 0xbdd74ead, 0x3d864884, 
    0x3fa90868, 0xbf301f32, 0xbecdc2bb, 0x3e2754b4, 0x3d1e5dc5, 0x3f5f17b8, 0xbebe10f6, 0xbd50d35f, 
    0xbeeb866e, 0x3f1743bc, 0xbef5f11b, 0xbf255054, 0xbe62813f, 0xbee68cd9, 0xbe100d58, 0x3f0c8bd3, 
    0xbee6cac1, 0xbe8c08e7, 0xbe7dd46b, 0xbf5b406f, 0xbdbfdcf1, 0xbedad9b2, 0xbf007291, 0xbfa453b4, 
    0x3f302eaa, 0x3dd69177, 0x3e7a5a49, 0xbeb65e7b, 0x3ef67275, 0x3f1cd2c3, 0x3cddd9f5, 0xbe494de6, 
    0x3f9262e2, 0xbf6684e7, 0x3c95c7e7, 0xbec46ed6, 0x3d569b80, 0x3f517080, 0x3cff619e, 0xbe35c7c6, 
    0xbf191887, 0x3de7ae81, 0xbe8a7186, 0xbe6e7528, 0x3d30d725, 0xbf016116, 0xbea74643, 0x3f698ceb, 
    0xbe9bc456, 0xbea6e986, 0xbf0c8d94, 0xbed1177e, 0xbeaff57d, 0xbef59367, 0xbf23e57a, 0xbe887808, 
    0x3f0a3835, 0x3de37fc3, 0xbeb1b1d5, 0xbd88252f, 0x3d3fb56d, 0x3e857de7, 0xbda4940c, 0xbec286f4, 
    0x3ddcdd80, 0xbfc2b172, 0xbed91601, 0x3f02624c, 0xbe7597db, 0x3f2891ec, 0xbf010e37, 0xbe8eb4b2, 
    0x3e45d81a, 0x3e0b58eb, 0xbe977ebb, 0xbe39507e, 0xbe0499ba, 0xbe094fc6, 0xbf261aa0, 0x3f4a6d88, 
    0xbebc825f, 0x3eec4e1b, 0xbdb11cec, 0x3dd06f2a, 0x3f38f1c8, 0x3f394d2d, 0x3f843f99, 0x3e43027c, 
    0x3f8d9787, 0x3eea350e, 0x3f079daf, 0xbd3f834f, 0xbd0a453f, 0x3e8ca7b5, 0xbdd442f5, 0x3f4dcdfa, 
    0x3d8f12c5, 0x3ea4a504, 0x3e230dec, 0xbd02bc21, 0x3ef5363c, 0x3f63ca04, 0x3f142828, 0x3f64e047, 
    0xbfb89816, 0xbf13fac9, 0x3f60fb86, 0xbf4c981a, 0xbeec9261, 0x3edbd89d, 0xbd129f24, 0x3eb87133, 
    0xbf7a7d9e, 0x3f30f8fc, 0xbf973827, 0xbd024a25, 0xbe36cd62, 0x3f1badb7, 0x3e9fb68e, 0x3ec72943, 
    0x3ebbdbc2, 0x3ee7c5bf, 0xbed4e7e3, 0xbed2484c, 0xbe72eb74, 0xbe6d0dfa, 0xbd2560d4, 0x3f054cad, 
    0xbf384f7f, 0x3f9b66fd, 0x3ee76071, 0x3f4ab2a7, 0xbe7b47f3, 0x3f5a6874, 0x3ef190e0, 0x3ed8b455, 
    0x3f4400f7, 0xbed5d921, 0x3ee3e49a, 0xbeb3ba39, 0xbe7172fe, 0xbd82677b, 0xbdeed111, 0x3d697290, 
    0x3eb54c48, 0x3e5ddefb, 0xbfacf715, 0x3e8764d8, 0x3e4e9b2f, 0x3f27e79a, 0xbe88720e, 0xbf2180a6, 
    0xbf488325, 0x3e045704, 0xbfa524b0, 0xbe621266, 0xbf424b25, 0xbf3f1b0f, 0xbe9204b8, 0x3e05fe09, 
    0xbf99f83a, 0x3f7f295d, 0x3e6096b9, 0x3f02e1bd, 0xbf22035c, 0x3f86d41e, 0xbea31a64, 0x3ecc9bea, 
    0x3ec0063d, 0x3f9c29ba, 0x3f627f96, 0xbfa3900b, 0x3f26aba5, 0xbe82eed9, 0xbf49325a, 0xbecfe1c7, 
    0x3ecf5b59, 0xbdcff99a, 0x3e10ad2a, 0x3ee01816, 0x3f28a46d, 0x3e1ad9d0, 0x3f46bd10, 0x3e3c8e3d, 
    0x3d53e032, 0x3e948ce1, 0x3cf1fd86, 0x3e8036d9, 0xbdf3dc3a, 0x3f1c7255, 0x3cc92aa8, 0xbd83213c, 
    0x3f2a4cbc, 0xbd506791, 0x3e287e70, 0x3e5b5b82, 0x3d61eb6d, 0x3fc9ada2, 0x3f0a2941, 0xbdc930fe, 
    0x3eafcf3e, 0x3dc1c06c, 0x3f094bf9, 0xbe6fa39a, 0xbdd9641b, 0x3e2e3c96, 0x3f251ac3, 0x3edf37fc, 
    0xbc9b65ea, 0xbf0888f9, 0x3eeadb52, 0x3e9cd6a6, 0x3f13c433, 0x3e40b092, 0x3f2a646f, 0xbfba140e, 
    0xbeb300dd, 0x3ec05b3b, 0x3e64b966, 0xbde48287, 0xbe9023a4, 0x3e5ab529, 0x3d630656, 0xbeda09e3, 
    0x3f22cddb, 0x3e2368ff, 0x3ee6e640, 0xbf13f995, 0x3e8bdf51, 0x3feb4339, 0x3f15bf20, 0xbeede769, 
    0xbf1fba70, 0x3e0288da, 0x3eec0c9c, 0xbf051585, 0xbed6846c, 0xbf1273f6, 0x3f4c7495, 0x3ebddb16, 
    0xbbadd239, 0xbe5e3b7a, 0x3e890b9f, 0x3ea9932d, 0x3f40680c, 0x3eb17799, 0x3f06342d, 0xbf6f235f, 
    0x3e7af668, 0x3f0218e3, 0x3f0e588a, 0xbe98ae8a, 0x3e0a8274, 0x3eb81b3a, 0x3ec6d317, 0xbe88c73f, 
    0x3f61f292, 0x3dcabd72, 0x3f950a5e, 0xbf1ebb56, 0x3ef0645d, 0x3ff8e0bd, 0x3f70f644, 0x3ba0da74, 
    0xbe3207cb, 0xbec63fe9, 0x3f1adb2a, 0xbe5e4c35, 0xbf3e99d3, 0xbea295f0, 0x3f83bf31, 0x3f0e10af, 
    0xbacb44b7, 0x3ea42dd0, 0xbede75b4, 0x3dd74cc7, 0x3f186763, 0xbecc5bc1, 0x3db7bc7d, 0x3f19572d, 
    0xbf176b6e, 0xbac29971, 0x3c85a588, 0x3d929457, 0x3edc3ef9, 0xbf522894, 0xbe9945d2, 0x3e02b8a3, 
    0xbe843cd2, 0x3e888ff2, 0x3e2d5ad1, 0xbee7442f, 0xbf496cda, 0xc0022580, 0x3e9c2b9f, 0xbf6e65ea, 
    0xbebda78f, 0xbeca58be, 0xbf2e260d, 0xbd8ea09c, 0x3f56565f, 0xbec6c87f, 0xbe95eceb, 0x3eb5b858, 
    0x3ec86cf1, 0x3f25b2c1, 0xbf3f811a, 0xbb164ece, 0x3f6b4172, 0xbe7affd1, 0xbc32c7b6, 0x3f3c6103, 
    0xbf35d021, 0xbea85946, 0xbf13785f, 0x3e54657a, 0x3f219c94, 0xbf2aa933, 0xbebff77c, 0x3f282cca, 
    0x3f4fc44b, 0x3e3df920, 0x3e8de0d5, 0xbee4f30c, 0xbf53b7ee, 0xc0098c0d, 0xbccac360, 0xbf208431, 
    0xbe88953e, 0xbea6fbc6, 0xbf467d5c, 0x3e5283ca, 0x3f796266, 0xbdaa39b7, 0xbe65f391, 0x3dcb3e22, 
    0x3e986286, 0x3f046b6a, 0xbf254afc, 0xbe46fd2f, 0x3f5855cf, 0xbedd2e11, 0x3dca2693, 0x3f656247, 
    0xbf0055bb, 0xbe629b3f, 0xbf5e73c2, 0x3e3bb46a, 0x3f1924a0, 0xbf24a199, 0xbdb03854, 0x3ec0cf0a, 
    0x3eca3e3e, 0xbe0b49f6, 0x3d967aa5, 0xbf1a4b18, 0xbf2e166c, 0xc01f2591, 0xbd6ef72e, 0xbf424f36, 
    0xbdf2c8f7, 0xbe837ef1, 0xbf2d0a57, 0x3e32e9cb, 0x3fa168f1, 0xbe0a2940, 0xbf08794b, 0xbe2d3c6d
};

static const uint32_t _K31[] = {
    0x3b598560, 0xbbbd8416, 0x3ae84357, 0xbae575d0, 0x3afcdbff, 0xbb9985a1, 0xbbd92fe2, 0x3b15cbbe, 
    0x3c270f99, 0x38a06069, 0xbafdcba2, 0x3b02f70e, 0x393eefbc, 0x3ae83fb8, 0x3920eb2e, 0xbb9f506b, 
    0x3b08c8bd, 0x3b162600, 0xbbafc998, 0x3c56985c, 0xbbcd67e4, 0x3a0ff750, 0xbc2e4a96, 0x3b4fa559, 
    0x3bb93f62, 0xbb8a1010, 0x3b2f4090, 0xbc36f66b, 0xbaa700f7, 0xbbe527aa, 0xbb97c542, 0x3c495531, 
    0xbab66497, 0xbc2f4648, 0xbb437138, 0xbb7bca33, 0x38e5a99f, 0x3b59588a, 0xbbde1356, 0x3baa7999, 
    0x38434ccf, 0xbaf05753, 0xbbc65039, 0x38b5d2d9, 0x3b818c81, 0x3b43f77d, 0x3bcc49b0, 0xbb7cc151, 
    0xbb1ad7a7, 0x3bf6e2a5, 0x3ba22740, 0x3cc4795e, 0xbbfc6881, 0xbb27496b, 0x39c75138, 0x3bb3fda9, 
    0xba98abcb, 0xbb3d7c65, 0x3a3ad4cf, 0xbc0dcfe3, 0xbbafab75, 0xbc01d3e7, 0xba68c70f, 0x3c5ad0a9, 
    0xbac38ff4, 0xbc4066a3, 0x3b859f44, 0xbaf4fd48, 0xbc0671c5, 0x3bc2bf5a, 0x3c67f2da, 0xbcc67833, 
    0xbc7ab3b4, 0x3ae52065, 0xbc00427a, 0x3c48a23d, 0x3c210921, 0xba8cc95f, 0x3c194a8c, 0xbba793c6, 
    0x3c8d3a7f, 0xbc395eaa, 0x3c8a46cb, 0x3cb3a759, 0x3b0f5170, 0xbb1dd10b, 0x3d1690a5, 0x3c36b55e, 
    0xbc02833f, 0x3b99fdf7, 0xbca6c7e4, 0x3b6a9ab8, 0xbb5cf54a, 0xbc3fe13b, 0xbb557276, 0x3c2ebcaf, 
    0x3cb37445, 0xbc4f9e2d, 0xbc2605e3, 0x3b6e06a3, 0x3b404dd4, 0xbc3561a6, 0x3bcb97f6, 0xbbb0aa25, 
    0x3aec74a9, 0x3a202b95, 0xbb8c61b3, 0x3bfde71f, 0x3a940cfa, 0xbbde9f36, 0x3c1f5361, 0xbb6fbc72, 
    0xbc4206d7, 0xbc0e3c6f, 0x3ca5c7c9, 0x3d01a8af, 0xbb0b758e, 0x3b249e5d, 0x3c11f174, 0xb63aa986, 
    0xbbb7a4fe, 0xbb2bb37a, 0xbbe18445, 0xbae05b6d, 0xbc26289e, 0x3a494ca8, 0x3a9ac841, 0x3c98d48a, 
    0xbc6d5074, 0xbbd2a902, 0xbbeed3ca, 0x3b633a59, 0x3b83b251, 0xbbe3b55e, 0xbb508342, 0x3cbfacc8, 
    0x3c945063, 0xbb822e78, 0x3b6e0185, 0x3b43f831, 0x3bc9bbbc, 0xbc2d115e, 0xbc15a780, 0xbb8e1fec, 
    0xbc8871ca, 0x3bfb761e, 0x3c0e37c6, 0x3d0fc6d7, 0xbbdd66e3, 0xbbd095a0, 0xbc2cfb39, 0xbbff3ccb, 
    0x3bce258b, 0xbc7b1bb8, 0x3c8165f5, 0xbc797a60, 0xbc28822e, 0x3c55d65d, 0xbb997e4c, 0x3cc56f2f, 
    0x3b95b265, 0xbc83cdd5, 0xbbe05d0e, 0x3a8bc4ac, 0xbc07681b, 0xbaf77c4c, 0x3c384035, 0xbcad52ec, 
    0xbb6ecb30, 0x3aa430ce, 0xbbf6f8ff, 0x3c824dac, 0x3c14581f, 0xbbeaadc5, 0x3b9d3417, 0xbbb00a2d, 
    0x3b14fb74, 0xbc22d16a, 0x3d0c4868, 0x3d18f0fe, 0xba7bd140, 0x38e6047f, 0x3d0491d5, 0xbb94fd4b, 
    0xbc1f0736, 0xbb986881, 0xbc463c2e, 0xbb9335c6, 0xbc305163, 0xbaa644ba, 0xbbcad48e, 0x3cae01c2, 
    0x3ce05b4d, 0xbb061962, 0xbbffb749, 0x3c61a428, 0xbbf2557a, 0xbb4517a4, 0x3c9ed6d4, 0xbcd9137d, 
    0xbb712890, 0x3c86a200, 0xbb8b0d8d, 0x3c9ef862, 0xbcdc7671, 0xbc3c0eed, 0xb98b1b3b, 0xbc1034fc, 
    0xbc1b819b, 0x3bd5f451, 0x3c8b4edf, 0x3c1b0209, 0x3c34e242, 0xbba67ebc, 0x3cb17d0c, 0xbc3786e2, 
    0xbca89ed1, 0x3b460322, 0xbcc114a1, 0xbbbdbe02, 0x3b376a7e, 0xbc0a9bbb, 0xbc05f45a, 0x3b743bed, 
    0xbb8dbc05, 0x3bbf98ab, 0x3a70c865, 0x3c5ccfd3, 0xba8e2531, 0x3b27f1aa, 0x3b3c6441, 0x3c167a18, 
    0x3cba39be, 0x3c5a00d4, 0x3ba21003, 0x3c92ddca, 0xbc995731, 0xbc7d750c, 0xbcdad2c4, 0xbbb2e130, 
    0xbc8b3f34, 0x3bd3508d, 0xbb8dffdd, 0x3c072caa, 0x3c469db8, 0xbc191128, 0xbbd1d28b, 0xbb83b748, 
    0x3c203019, 0xbc16c343, 0xba952796, 0xbbadb45a, 0xb8ae21f0, 0xbb6b7838, 0xbc5266fa, 0x3bc14b75, 
    0x3ba9ee4b, 0xba365779, 0xbc88f0c7, 0x3bc30270, 0xbb85d27e, 0xbc0e80c1, 0x3bbc8028, 0xbb755e0f, 
    0x3c1a699a, 0x3c243d4e, 0xbb81abee, 0x3ca137d1, 0xbc4cc42e, 0xbc40bbf6, 0xbcc84b4f, 0xbc55bd3b, 
    0xbb8b0fc8, 0x3c0b9702, 0x3be5ef90, 0x3c4e10d6, 0x3bc601f0, 0xbc1324c2, 0x3bdbb650, 0xbc008bfa, 
    0xbaac2a07, 0xbc85c615, 0xbbdf1e79, 0xbc70cbcf, 0xbb2d36a4, 0x3bb31cf2, 0xbc904a4f, 0x3be5328a, 
    0x3ce4abbe, 0x3c3a63d2, 0x3b13d14b, 0xbc8819ac, 0x3bec6221, 0xbcb1ddf9, 0xba0e7a8b, 0x3c3dd383, 
    0x3d18b9dc, 0xbac0638c, 0xbbad5df9, 0xba80d471, 0xbb1745ad, 0x3c750b29, 0x3c8c617d, 0xbb8f1c7e, 
    0x395a22c2, 0xbb78b26c, 0x3c2e22fe, 0xbcb9f463, 0xbc8314b6, 0x3cdaea17, 0xbd1d9a2c, 0xbbe53043, 
    0x3bb6f413, 0xbc82e026, 0xb88804d0, 0xbc48ef36, 0x3c93b1b6, 0xbcab8c05, 0x3b6311b2, 0xbd259887, 
    0xbc2c9890, 0x3bfb4e73, 0xb9a713ab, 0xbc86fc4e, 0xbc4d2d7b, 0x3bc6a92a, 0x3c5ffcc0, 0xbca6aa7a, 
    0xbb44dea5, 0x3b4ee787, 0xbb1262bc, 0x3ccc57a7, 0xbbf267f6, 0x3c779237, 0x3cb5eeed, 0xbbf838df, 
    0xbbceb50a, 0xbc1a3c58, 0x3bbff367, 0xbca9dd10, 0xbb8a65d4, 0x3c3b2f19, 0x3c2cb5e1, 0x3bae1460, 
    0xbcd06dce, 0xb9a22159, 0xbcfa327b, 0xbc6dd60e, 0x3ccf8d70, 0x3bfe4dd9, 0xba683f15, 0xbcf27240, 
    0xbc8c75ab, 0x3b62c334, 0x3a27c98e, 0xbc28ad81, 0xbc7ed37d, 0x3be4ba1a, 0xbb83a328, 0xbbfeb851, 
    0x3b29d1cc, 0x3b82c3b9, 0x3a9f2a67, 0x3d08fc15, 0x3c9fde5c, 0x3bb0a032, 0xbc971beb, 0xbc4a5fcf, 
    0x3c48b478, 0xbc83f200, 0xbc548bb1, 0xbc86431a, 0x3c0f1d9b, 0xbc20b42f, 0xba478553, 0xbb9c37eb, 
    0x3caf61eb, 0xbcbca26a, 0x3a55d70b, 0xbc3c94ba, 0x3ba3bd60, 0x3c9bbeba, 0xbb1996a2, 0xbcc545e8, 
    0x3ba8d7a1, 0xbb558720, 0x3c6e1fa7, 0xbbfd44c5, 0xbbff299e, 0xbc427f12, 0x3a1df18d, 0xbc646707, 
    0x3be1f6c0, 0xbb55105a, 0xbbc0e826, 0xbbb3d4b9, 0xbc392d4b, 0x3b909d89, 0xbc4f1fbb, 0xbc4266a5, 
    0x3c7a226d, 0x3c54282c, 0xbcb8532f, 0xbad29c8e, 0xbc793578, 0x3b0e5a37, 0xbc31a222, 0xbc06aaa0, 
    0x3c6cedf5, 0xb9377ab8, 0xbc667745, 0xbc528bdd, 0x3c8490c4, 0xba5e4372, 0x3bb6a15f, 0x3b9c6f69, 
    0xbbad61d8, 0xbc7460c4, 0x3b54a569, 0xbbb277b1, 0xbc57d3ee, 0x3c84e81d, 0x3af141a5, 0xbc290d47, 
    0x3a75598f, 0xba92bc72, 0xbc3697b3, 0xbc50dcf8, 0xbbf270f4, 0x3c09a234, 0x3a015b66, 0xbc2519b9, 
    0xba9d7d38, 0x3c74d3e7, 0xbcb9acc7, 0x3b1bad7d, 0xbc8bf1e6, 0xbc614ee2, 0xbb8fea5c, 0x3b5b0d56, 
    0xb9b4af8e, 0x3a109f85, 0xbcac5de4, 0xbad44fe4, 0x3c1c4418, 0xbb8132a3, 0x3c7d1563, 0x3c0b28f8, 
    0xbc58d4c3, 0xbc23a166, 0x3cae04af, 0xbb47b00c, 0xbcb3e35c, 0x3b35fbb4, 0x3c9d5ee1, 0xbd3625e5, 
    0xbc39b1b8, 0x3b48d064, 0xbc63c9bb, 0x3bd2bf72, 0x3aec25f3, 0x3b32b8d2, 0xbb4cf49a, 0xbc24086b, 
    0x3cece1cc, 0xbc00a3a9, 0xbca17975, 0x3b24ffcc, 0xbbc3e9f1, 0xbbb59f12, 0x3d15f84a, 0x3bef7479, 
    0xbb497d75, 0x3c33a87b, 0xbd3fafa0, 0x3c0c7b72, 0x3c68a9ff, 0xbca0991c, 0x3b588baf, 0x3b3ae738, 
    0x3c96629f, 0x3b9b4b74, 0xba77234a, 0xba4cd4ab, 0x3cbd58dc, 0xbcb3503d, 0x3cd70507, 0xbb8e131f, 
    0x3c05cef1, 0xbca2002e, 0x3b18e5a7, 0xbb55fcc5, 0x3b92153b, 0x3b432b14, 0xbb54622a, 0x3c75b968, 
    0xbba0852d, 0xbae828fe, 0x3c952b8d, 0x3b4c6d2a, 0xbc282b69, 0x3c388b0f, 0xbb331632, 0xbc728eb3, 
    0x3b57348f, 0x3b8dac29, 0xbc7d8037, 0xbc1716df, 0x3c4aed61, 0xbc791f9b, 0x3c26313d, 0xbb795c2e, 
    0xbc295c20, 0x3ca52379, 0xbc29d5fa, 0xbc048ef3, 0x3d0556fc, 0xbbe58cff, 0x3caa4e9d, 0xbb8131db, 
    0x3bb0c6de, 0xbcd3d5b7, 0x3d13816d, 0x3c4ef688, 0xbbfce2f5, 0x3c23fe5c, 0x3c7c08d8, 0x3c273e68, 
    0xbc5623cd, 0x3bec9261, 0x3b96e30c, 0xbbc821e4, 0xbc406beb, 0x3c7509d8, 0xbb1b0332, 0xbc08fe09, 
    0xbbce9080, 0xbba7f5d9, 0xbbfd2648, 0xbc9d63c2, 0x3cc99043, 0x3c57b062, 0xbaf64c72, 0xba977db2, 
    0xbc813e95, 0x3b57c73d, 0xbc484c71, 0xbbc0ef82, 0xbb0bf3d1, 0x3ce5baa1, 0x3c10bd36, 0x3a1e311d, 
    0x3a991784, 0xbc004fc4, 0x3b8bc1f1, 0x3cf4c9e4, 0x3c7aa25c, 0x3bc3e977, 0xbbeef799, 0xbc1a4454, 
    0x3a67c0d2, 0xbbf6dd40, 0xbaa9eb10, 0x39e25fea, 0x3b1708ac, 0xbba82fe0, 0x3adadb77, 0xbb9e4a0a, 
    0x3cb1d541, 0xbca9a02e, 0x3bc9b007, 0xbbd50822, 0xbb204309, 0x3cc18f24, 0xbb81e59b, 0xbb5718cc, 
    0x3c459fba, 0xbc274d12, 0x3a812268, 0xbd19d6ef, 0x3b0d6f6b, 0xbba57e2e, 0x3b0525d9, 0x3c1b1d6c, 
    0xbbe0cf95, 0x3bf7d494, 0xbc8e569b, 0x3acb40db, 0xbc1c0e08, 0x3c6c0ad0, 0xbb439b5f, 0x3aebfb07, 
    0xbb80c03f, 0x392e7c2e, 0x3c62604a, 0xba307c41, 0xbcd9dacb, 0x3c033068, 0xbbdffdd4, 0x3c04b445, 
    0xbac3b1dd, 0x3bc124e7, 0x3b47cae7, 0x3c98f174, 0xbc582d05, 0xbc2a1c07, 0x3c82c0a3, 0xbc91e8b6, 
    0xbaab28cf, 0xbc39e0a2, 0xbbefae65, 0xbcb2e4f3, 0x3ad37e3c, 0x3a0dd7da, 0x3c4c7741, 0x3a19613f, 
    0xbb071f63, 0xb9d36525, 0xbc6dc611, 0x3b876110, 0xbc6ce0f1, 0x3bfad34a, 0xbbe3130f, 0x3b74c720, 
    0xbc439ea6, 0x3b0793ee, 0x3ca772b1, 0x3b858e9b, 0xbc77fcb4, 0x3af6b01c, 0x3be1778c, 0x3c2064a1, 
    0xbce5545e, 0x3c19a167, 0xbc031bcc, 0x3c560e3b, 0xbc8268ed, 0x3aa7fdd2, 0x3c9507b5, 0xbc35b096, 
    0xbbea0bbf, 0xbb230efc, 0x3a18f477, 0xbc86cca9, 0x3a877b07, 0xbc9a7e7c, 0xbad824a8, 0x3c1872f4, 
    0x3ae1ed5c, 0xba5507e8, 0xbb43aca7, 0xbb951301, 0x3b490b47, 0x3c2f9ad3, 0xbcd7d063, 0x3b32d224, 
    0xbc155de2, 0x3bc0896e, 0x3c073b50, 0x3b8e1d93, 0xbc897375, 0xb92bcd6c, 0x3a40ae8c, 0xbc690103, 
    0x3bc8b46b, 0x3ac0e5c3, 0xba4c2973, 0x3bbc5b98, 0xbc5c6a70, 0x3ca61d7b, 0x3c4556b2, 0xbc37cce1, 
    0xbbc54fd3, 0xbb89d9de, 0xbc182d10, 0xbc4ff6b7, 0x3b96010d, 0x3cf65b1e, 0x3d593628, 0x3bd29edc, 
    0x3be0bfa6, 0x3cad046c, 0xbba5cc17, 0x3b6cd458, 0xbc96b286, 0x3c529d7d, 0x3c18084f, 0x3a81ea1e, 
    0xbcb08237, 0x3bd1a224, 0x3baad0ab, 0x3a667c8a, 0xbca6fe1a, 0x3c040284, 0xbc9af6c7, 0xbc5fda63, 
    0x3c175ff2, 0x3a28bbfa, 0x3a52978a, 0x3bf61567, 0x3c38be65, 0xbb6d2802, 0x3c8905d5, 0xbc02b6db, 
    0xbc293a8a, 0xbc40da56, 0xbc7110d5, 0xbcac02e5, 0xbcad5cd0, 0x3c96c77c, 0x3d85da09, 0x3bbdc6d3, 
    0x3bb99a95, 0x3d0ce762, 0xbbfe5b8a, 0x3c191cac, 0xbcb66121, 0x3c2f4411, 0x3aa5a4b3, 0xbc8bfbf0, 
    0xbcaf2740, 0x3b805845, 0x3c08e711, 0x3bb29ca2, 0xbc8433a8, 0x3b35ce00, 0xbbd53bc1, 0xbc69ddad, 
    0x3b19cb65, 0xbc1ba4e3, 0xbaad2003, 0x3bd66d6c, 0x3bdecf7d, 0x3b7e1cfa, 0x3c110d85, 0xbc83c8d0, 
    0xbbda8067, 0xbbc0be16, 0xbb0d422a, 0xbc532511, 0xbbcfc769, 0x3bd43e81, 0x3d3bfe16, 0xbb8d9927, 
    0xb91ce8ef, 0x3cd9dcf9, 0xbc0f4c29, 0x3c41364d, 0xbb6f76f3, 0x3bad7431, 0xbd0c242e, 0x3c18350a, 
    0xbcc0d034, 0x3b09efba, 0x3c5e69d9, 0x3bd773a9, 0xbc0e30e7, 0x3b13dcff, 0xbb621b15, 0xbcaacbb6, 
    0x3d0a0975, 0x3b148628, 0xbc2a4122, 0x3c46fce4, 0x3bc4a8e9, 0x3be66912, 0x3ca5ee7c, 0xbbb99ff7, 
    0x3c2319b5, 0xbc496bdb, 0xbc8d9df3, 0xbba6378a, 0x3b76c7b3, 0xba43e0ae, 0x3c60fb97, 0xbbb427bd, 
    0xbc3bf0ba, 0xbb636fdc, 0xbb89e0cb, 0x3c036f64, 0x3c68b1c1, 0xbb46fd06, 0x3c2adc07, 0xba929cc1, 
    0xbba931d6, 0xbc4ada29, 0x3d2a4b21, 0x3c28e59e, 0x3b8b5c1f, 0x3a996050, 0x3c5e7737, 0xbbc35fb7, 
    0xbc296b1e, 0xbadb89cd, 0xbb72d8a7, 0xbb8f9d4c, 0xbc53efe7, 0x3a9e70b9, 0xbb1fbc73, 0x3a966fda, 
    0xbc0301b8, 0x3a99b498, 0xbc222148, 0xbb9a5463, 0x3c1182f5, 0xbba30fd4, 0xbab47d18, 0x3c83df02, 
    0x3abb43d0, 0xbbcc8b6c, 0x3c44ff49, 0x3bcd9105, 0x3ba5f6f9, 0xbb8ec583, 0xbaa3cb9c, 0xbbde704d, 
    0xbbdc842a, 0xbba34d41, 0x3c364eb5, 0x3b95aa34, 0x3ab4c0a1, 0x3a3e4033, 0xbb7edee2, 0xbc46d982, 
    0x3bbf8a39, 0xbcac2ebc, 0x3cac3929, 0xbccb6dfa, 0xbbe73ca3, 0x3c34de62, 0xbc193a69, 0x3b0e3cdc, 
    0x3af3ee44, 0xbc25c36a, 0xbc955365, 0xbc04fc4b, 0xbb3ab63f, 0xbbd7516c, 0x3bc8af84, 0x3ba8adec, 
    0x3abcc870, 0xbb8de9cd, 0xbb18124e, 0x3c37a7e3, 0x3c75d1d2, 0xba07ce81, 0x3c3b9916, 0xbc01f720, 
    0xbae51042, 0xbc3a3fbf, 0x3cea9dbc, 0x3c451846, 0x3b3bc64e, 0x3b2dec6f, 0x3b893999, 0xbc518930, 
    0xbb567243, 0xbc952091, 0x3bed2113, 0xbcc0d529, 0xbc0aa172, 0x3c276011, 0xbc02f588, 0x3afe32c0, 
    0xbbfeb9a8, 0xbc71fb5b, 0xbc9d558f, 0xbc6facf4, 0xbb132abc, 0xbb132d4c, 0x3b055d6b, 0x3cc4dacb, 
    0x3a41c790, 0xbbce1b2f, 0xbbb677e1, 0xbc2c3718, 0x3c3edb6f, 0x3c296d24, 0x3bf0163f, 0x37bdf380, 
    0x3b8ecbc6, 0xbb87d570, 0x3c694235, 0x3bdcc8c9, 0xbc9278c7, 0x3a15c43c, 0xbb809cac, 0x3bf2a3ab, 
    0xbc4f71e3, 0xbc7dba10, 0x3c63619e, 0x3b6fb588, 0xbc0d21a2, 0x3c396c16, 0x3c797713, 0x3a767ccf, 
    0xbb38b160, 0xbc83372c, 0xbcf8d105, 0xbc938fb1, 0xbb938db1, 0x3af6086b, 0x3b520f93, 0x3cc1760a, 
    0x3ae8768d, 0xbba8192c, 0xbae0efb0, 0xbbda9790, 0x3cad3760, 0x3c2941fd, 0x3c1ab031, 0xbb444fc3, 
    0x3b363b8a, 0xbc4715cb, 0x3c405fd2, 0xbb075639, 0xbc44038a, 0x3bdec764, 0xbbcd880f, 0x3c120e10, 
    0xbc67ff86, 0xbc9fbc75, 0x3ca2a2bd, 0x3b287b86, 0xbc21de7c, 0x3c3b9c92, 0x3c56053f, 0xbb47d39a, 
    0x3b6001e7, 0xbc056868, 0xbcd9f313, 0xbc278d94, 0x3b3844b7, 0xbb782cdd, 0x3b5e3505, 0x3ca57c2e, 
    0xbbcb160b, 0xbb3dfa00, 0x3aefaa51, 0xbb3ce45a, 0x3ce02268, 0x3b942aa5, 0x3c8137af, 0x38cecbbe, 
    0x3bb3e760, 0xbcc1f1b0, 0x3cc68053, 0xba9d91de, 0x3994d805, 0x3c0d1a35, 0x3b0e4e32, 0x3bb469e3, 
    0xbc2ad025, 0xbc0e15ef, 0x3c6b8e4d, 0xb960c5c1, 0xbba41bb5, 0x3bd0e63d, 0x3b5a9e83, 0xbbb5ea99, 
    0xbc6db80b, 0xbca174e8, 0x3b6ce068, 0xbb11bd64, 0xbd56f621, 0xbc91fe78, 0x3be4eef3, 0xb92fbdaf, 
    0xbb9f1f0a, 0x3c89e979, 0xbc3773fe, 0xbc47102f, 0x3cae327e, 0x3aae1ed8, 0xbc639709, 0xbce836cb, 
    0x3c91550b, 0x3c0ea507, 0x3c0cce80, 0x3be22bdc, 0xbbda07fd, 0xb9f94a8b, 0x3c49fd33, 0xbc5c8498, 
    0x3bbadfb9, 0xbc1c2a7f, 0xbc3ecb68, 0xbc2199d2, 0x3a169f5e, 0x3c8c8462, 0x3c1894b3, 0xba0c69b4, 
    0x3c6a4dc1, 0xbc9cbe26, 0xbbaed2a6, 0xbb533207, 0xbd0db810, 0xbcaaa2b3, 0x3c695edb, 0xbbd9636a, 
    0xbb41e146, 0x3d07d797, 0xbc6b4a8d, 0xbbc6ed4c, 0x3ca96552, 0xbb05c88d, 0x3c0b1d7d, 0xbd131f24, 
    0x3c9ab03d, 0x3beb3fb5, 0xb9eb0fd7, 0x3c79959c, 0xbbc25171, 0xb8bca33d, 0x3b30b74d, 0xbc5314cd, 
    0x3c44de34, 0xbc9f8fda, 0x3b654bb2, 0xbc7f177a, 0xbc0c03d5, 0x3ca46972, 0xbb8a12ac, 0x3af01bcd, 
    0x3b41a4b0, 0xbd047b64, 0x3ba2ab6c, 0x3aaf03aa, 0xbcca4b26, 0x3c4645ad, 0x3c81d2c2, 0x3acf7cf1, 
    0x3b3d41e1, 0x3ca920fe, 0xbc9b115c, 0xbae1b649, 0xbaa2891a, 0xbbdaea45, 0xb9d82e84, 0xbb9628a5, 
    0xbae70337, 0x39ce9f90, 0x3c412688, 0x3c56acdd, 0xbba9f357, 0xbba74b19, 0x39cb447e, 0x3c5194ae, 
    0x3b4b9114, 0xbb7428dc, 0xbb7349e3, 0x3c2f8142, 0xbc5cba7b, 0xbba6d9db, 0x3bfcb245, 0x3ac5d6dc, 
    0x3c762ffe, 0x3b79587d, 0x3ac9c2f2, 0xbb34ef61, 0x3b201380, 0xbc2d7a85, 0xbb448d09, 0xbcb2f916, 
    0x3ba174f1, 0xbb0c7c18, 0xbc2b297a, 0x3c1d58a8, 0xbc61ef60, 0x3bbadeea, 0xbbf86d6e, 0x3c0d73e9, 
    0xbc5b40c5, 0xbc6158be, 0xbad3a321, 0xbbc464ac, 0xbc221b9c, 0x3b9cabde, 0x3b4f7e84, 0x3c5a5249, 
    0xbbf6f8e4, 0x3c0ee4de, 0xbc9fb360, 0x3bff5732, 0x3b21d03b, 0xbc89e4eb, 0x3c3e20dd, 0xbba8c4fd, 
    0x3c17664a, 0x3b92b37d, 0x3c660629, 0x3b80167c, 0x3bbd0141, 0xbc3f04fa, 0xbb788e5c, 0xbca7171d, 
    0x386124fe, 0xbc0b87a1, 0xbb9f0098, 0x3c4207ac, 0xbc53ccfe, 0xbb501af3, 0xbc90a778, 0x3c8f94d4, 
    0xbc433ff4, 0xbc398fc2, 0xbbaf73d6, 0xbc1e9da1, 0x3a167f34, 0x3b8b6ab1, 0x3c0bea80, 0x3cb8962c, 
    0xbb95d4fa, 0x3c874ef2, 0xbcd36fae, 0x3c892b29, 0x3b77fdf9, 0xbcc85743, 0x3bd3cd91, 0xba0f1b9f, 
    0xbb148d59, 0x3c54641a, 0x3ca69d5f, 0x3bd910ec, 0x3c5de6c9, 0xbb5e6e41, 0xbbf376de, 0xbc891aaf, 
    0xbb140d86, 0xbc71e0a2, 0x3bacd753, 0x3c40c2e8, 0xbca84818, 0xbae28333, 0xbc3c0b2a, 0x3cae6e20, 
    0xbc39e963, 0xbb93397d, 0xbc4a0646, 0xbc00bbff, 0xbac68ea3, 0x3c3df593, 0x3b955061, 0x3cb60595, 
    0xbb93cdf2, 0x3c863443, 0xbc96837f, 0x3c393daa, 0x3bee1807, 0xbcd8d6f8, 0xba6b4d09, 0x3a79b8b6, 
    0x3c8703cb, 0xbc055352, 0xbc6abfa1, 0x3bde16a8, 0x3abb9c9f, 0x3ad21c78, 0x3c5f990f, 0xbbc1a5f7, 
    0xbc076b38, 0xba5d2ae1, 0xbb8cb0a9, 0x3c079121, 0x3b8d6ec4, 0xbc4c978e, 0x3b22eba3, 0x3bff7d66, 
    0xbc111a30, 0xbbca4939, 0x3ccb442a, 0x3c312aa9, 0x3aad40f0, 0xbb12bee7, 0x3c6fea2e, 0x3b38305b, 
    0xbc385726, 0x3b732e2f, 0xbbdf8f22, 0x3b6f9d39, 0xbc2600c6, 0x3b43bf80, 0x3b18706a, 0x3c242eee, 
    0xbba20747, 0x3bed1538, 0xbb0f38a9, 0x3c5589a1, 0x3c297be8, 0xbc51ed55, 0x3a8852de, 0x3c17103f, 
    0x3c392b66, 0xbb1ef39f, 0x3c4345b8, 0x3b80fbfd, 0x3b30f3a7, 0xbc805141, 0xbc456263, 0x3b0b8884, 
    0xbb9d444a, 0x3bd88a7e, 0x3c0eac08, 0x3bf4d2fe, 0x3a98b375, 0xbb85ec93, 0xbbc063a9, 0xbc0a397b, 
    0x3b3e3fa0, 0xbc15f15b, 0x3b83cdf1, 0xbc2fc3a7, 0xbbc761ed, 0x3c31f469, 0xbb978bae, 0x3c40d17a, 
    0x3bf008c2, 0xbaa50352, 0xbc2b2210, 0x3be8370e, 0x3ac9e709, 0xbc7ea64a, 0x3c302060, 0x3adddda9, 
    0x3be2fdce, 0xbb035bc3, 0x3b93751a, 0x3b81e442, 0x3b82a328, 0xbc16f460, 0xbb93edeb, 0xb97bae9d, 
    0xbadfe181, 0x3aa57ab9, 0x3c94822c, 0x3c60aba6, 0xbb2fd433, 0xbae8572a, 0x388e168a, 0xbc1e1b97, 
    0x39083a23, 0xbc3cd5cb, 0xbae4eb4b, 0xbc31f7cd, 0xbb547273, 0x3bd7a317, 0xbb4a6a27, 0x3c401891, 
    0x3be8a52a, 0xba9e6930, 0xba54243a, 0x3b6439c7, 0xbc0eff11, 0xbb710b0c, 0x3b6a6773, 0xbc7af568, 
    0xbbfed860, 0x3cb4285f, 0xbb062998, 0x3c320b05, 0x3b74dd5b, 0xba0d50b9, 0x3b435141, 0xbc161d4e, 
    0x3bad3067, 0xbba4d127, 0x3c0c2d3d, 0x3a9fb355, 0x3c7cf752, 0x3b4c66aa, 0x3c181338, 0x3bc17127, 
    0xbc2965ee, 0x398cffd1, 0xbc03188a, 0x3a50c4e5, 0xbb39ede6, 0x3b47c4cc, 0xbbf0212e, 0xbbbcb244, 
    0xbb4afa8e, 0x3b26777b, 0x3acf09d7, 0x3ba58023, 0xbc1abe3a, 0x3c06df9d, 0xbb93f096, 0x3c470a16, 
    0x3bbed72d, 0x3cefb992, 0xbb370b59, 0x3c23da2b, 0xbb843ac8, 0xbb96ffe3, 0xbab861b7, 0xbc293ad8, 
    0xbbc89608, 0xbbccd59c, 0x3a0cec20, 0xbbd19b32, 0x3c9c487d, 0x3b3a3aaa, 0xbbf1b56a, 0x3c0b3a24, 
    0xb86b9b5a, 0xbbb42ef3, 0x3c253048, 0x3bb07a5f, 0xbafc8ddd, 0xbad1143d, 0xbc480f7e, 0xbba5ce4b, 
    0x3b8a8f3c, 0x3b5b2e51, 0x3aa50b1d, 0x3be295a2, 0x37eedb44, 0xbc1101bc, 0xbb6cf74c, 0x39430418, 
    0x3b06b528, 0x3c84dc03, 0x3a00d722, 0x3c092d8a, 0x3b7bddd3, 0xbba8e9a4, 0xbc22e05f, 0xbb0e4ef9, 
    0xb96582d0, 0xbbe81deb, 0x3c04b70b, 0xbb0fae22, 0x3c5c2244, 0x3a8a1390, 0xbaaed28f, 0x3c0416ea, 
    0x3bb9e052, 0x3ac26bf3, 0xbb20f44e, 0x3b79ac53, 0xbb23b482, 0xbacbc439, 0xbbd248bc, 0xbb493bf3, 
    0x3abcdda7, 0xbc3d5aab, 0xbaabb81e, 0xbc28928b, 0xbacc2b09, 0x3b6607c4, 0xb9e426ae, 0x3c5563ce, 
    0x3c4816b8, 0x3bc2be27, 0xbc60e233, 0xbbd6013e, 0xbc8ce897, 0x3b1e407c, 0x3ae87140, 0xbb3969b6, 
    0xbc3a4fd4, 0x3c27c88d, 0x3b676e4c, 0x3bd9b23a, 0xbca2eba5, 0xbb82bf93, 0xbbfbaa5f, 0xbb0271c4, 
    0xbc0ae770, 0xbabe8760, 0x3b488a01, 0x3c437bc8, 0xbbd00027, 0xbb95f799, 0x3c390c07, 0xbb5f3356, 
    0xbc27ead9, 0xbc7a4f6b, 0xb8bc0034, 0xbc501b50, 0xbc73e2b4, 0xbbd83a47, 0xbb66dbdc, 0xba23363b, 
    0x3bc09fc6, 0x3bb576c9, 0xbcbb3594, 0xbada6648, 0xbc61e584, 0x3baf0200, 0xbc12e418, 0xbc6c6926, 
    0x3b96614d, 0x3c3e58fc, 0xbaa51202, 0x3bdf4e18, 0xbc86cef1, 0xbbbd5a3a, 0x3c49413b, 0xbb564306, 
    0xbc82c944, 0xbbd0c451, 0xbc49442c, 0xbb8c9fd5, 0xbb47e88e, 0x3c116477, 0x3bbc8f6a, 0xbb90f055, 
    0x3c086f77, 0xbc91f173, 0xbb571069, 0xbbdd921a, 0xbc223ab9, 0xbc54c867, 0x3c36fa56, 0xbbedad85, 
    0xbb59c73b, 0x3bad802d, 0xbcef7ff4, 0x3acbb242, 0xba728e47, 0x3a0bfbb0, 0xbcb44684, 0xbb91e47b, 
    0xbb53f7ba, 0xba452a1b, 0x3c370ebc, 0x3bf12baf, 0xbbd3e242, 0xbbc8039e, 0x3c19a44c, 0xbb13a2c2, 
    0x3a0fe9ff, 0x3b97ddcf, 0xbc856b7c, 0x3bae732e, 0xbc35c0dc, 0x3b9c4cd6, 0x3c5e157e, 0xbb4340c3, 
    0x3c4c9366, 0x3a6d87ac, 0xbb0072a0, 0x39062a9d, 0xbbda3185, 0x3c05fed7, 0x3c435f26, 0xbd03939d, 
    0xbc8fb6ef, 0x3b858511, 0x3ab26093, 0x3cf745c1, 0x3c37cd80, 0x3b8168b4, 0x3cb41cda, 0xbbd8d3d2, 
    0x3be4e8de, 0xbcb0dd13, 0x3c237fd6, 0xbb8a76a1, 0x3c76b794, 0x3b99ceb5, 0x3ce3b298, 0x3c3a4899, 
    0xbc999eed, 0x3c5d878b, 0xbc89e1ca, 0xbb0fd095, 0x3c02d1a2, 0xbcd86e8a, 0xbc231520, 0xbbb4e87a, 
    0xbc101599, 0x3c3e1ee2, 0x3bacf796, 0x392e83ad, 0x3aca1fcf, 0x3c11aaae, 0xbca00f8e, 0x3b97a6c8, 
    0x3c3e4a98, 0x3bd76321, 0x3bee94d8, 0x3cb9d8e1, 0x3c5f5f59, 0xb954b667, 0xbc26e67d, 0xbc206358, 
    0x3b064009, 0xbc405ac9, 0xbb95b347, 0xbbe58666, 0x3c254a4f, 0x3be07805, 0xbbd16534, 0x3b43a687, 
    0x3cbba52f, 0xbb73da5b, 0x3bd2010b, 0xbc54124f, 0x3bb675fa, 0xbbe08dd0, 0xbc8a29a1, 0xbc071f0a, 
    0xba8abb04, 0x3a20eda5, 0xbc126409, 0xbb9bc02e, 0xbb6ad331, 0xbc6b95b0, 0xbc320a18, 0xbbacc018, 
    0x3bad3644, 0x3be4c164, 0x3b75ab45, 0x3c92259b, 0x3cbb8536, 0x3c031463, 0x3be6dd2f, 0xbc41fbc2, 
    0x3bee3d9b, 0xbc4d4f2e, 0xbb60d44b, 0xbb0d4ad8, 0x3be03594, 0x3b3dee71, 0x3b30f45c, 0xbbbc2708, 
    0x3a314bb2, 0xbc583cfc, 0x3a244e19, 0xbccb675d, 0x3bb0da81, 0xbbd2fe3e, 0xbc65413b, 0xbbb8e615, 
    0x3c49553c, 0x3bc21d0c, 0x3bddc81d, 0x3ca2b143, 0x3a7adce4, 0x3c9f4858, 0x3cd34a8f, 0xbd848330, 
    0xbd02e9d8, 0xbb528e75, 0x3b878a1b, 0x3cd6a42b, 0x3c6dda09, 0xbc315548, 0x3b86cf5a, 0x3c4010a6, 
    0x3aeb7cfb, 0xbc9c5476, 0x3c9af1b7, 0x3aa20688, 0x3c8e4ec5, 0xbc3b053f, 0x3d4ef5a9, 0x3c13656f, 
    0xbb67ba8b, 0x3ccf45e6, 0xbd23f00f, 0x3bb4aff2, 0x3b18a56b, 0xbcacd23d, 0xbc44eec3, 0x3c096276, 
    0xbc196328, 0x3cafd2c3, 0x3c61bda7, 0x3c9e6d41, 0x3c21aa04, 0xbc2ac27c, 0xbc8812e9, 0x3b1e0cef, 
    0x3c976ab2, 0xbbcd9591, 0x3c344aaa, 0x3bf836f7, 0x3b7f3b1c, 0xbc62afed, 0xbc9aa463, 0x3c0e1167, 
    0x3abe7755, 0x3b18cc7e, 0x3ad28d0b, 0x3bde96f3, 0x3bbed74c, 0xbafaa451, 0xbbb9e632, 0xbbb8b6c3, 
    0x3cc73423, 0xbb9fc4a8, 0x3abb35de, 0xbc8a1fda, 0xbbca52d5, 0x3c2ca4ba, 0xbc7820dc, 0x3be73030, 
    0xbae511f5, 0xbc09f1e4, 0x3aa9298e, 0x3bdd5999, 0xbbc5db7c, 0xbc87137c, 0xbc2463bc, 0xbbdd7061, 
    0x3c82223f, 0xbba75e53, 0xbc279825, 0xbba5529d, 0x3b242e0b, 0xbbb0c50b, 0xbc4bcc37, 0xba4e7cb0, 
    0x3c190738, 0x3c651521, 0xbba2c653, 0x3c8d3f50, 0xbc004b74, 0xbc71c9ca, 0x3bec75bd, 0xbc1e388c, 
    0x3b8dd468, 0xbc1207b6, 0xbc556a28, 0xbc74f435, 0xbc113a58, 0xb8e76df7, 0xbb26b13f, 0x3c6b05c1, 
    0xbb9cb954, 0x3b1c842d, 0xbb4c4204, 0xbd0ca684, 0x3bdbc76f, 0x3a80100c, 0xbc071103, 0x3c67d882, 
    0x3c0ac7ce, 0xbae7a534, 0xba9342c4, 0xbb36089e, 0xbbb845fe, 0x3c98301f, 0x3b19bed2, 0x3a11a5b7, 
    0xbb956130, 0x3b844e9a, 0xbb6259c1, 0xbb06cb0e, 0xbc2ecb03, 0x3b6d9ad0, 0xbc84718a, 0xbbfeb184, 
    0x3b9d4e7a, 0xbb3758d0, 0x3c6248ce, 0xb9fbdc0f, 0xbb11949a, 0xbabb2376, 0x3b576e3f, 0xbc0d8689, 
    0xbc21fcdf, 0xbaced9a9, 0xbba5bb4b, 0xbd83d0b0, 0x3a603c16, 0x3c08a7ec, 0xbbd23ddf, 0x3c381c4c, 
    0xba01f25d, 0xbb93d0dc, 0xba9de65e, 0xbbc992f5, 0xbbbc109a, 0x3d016622, 0x3ac97608, 0x38f6433f, 
    0xbb88eb10, 0x3b86281a, 0x3b061678, 0xbad0703f, 0xbc1c4b5a, 0x3b3c1f21, 0xbbc50f5e, 0x3a9be978, 
    0xbb806461, 0xbb0657a2, 0x3c099410, 0x3b20350b, 0x3a137e47, 0x3bb1192b, 0x3bf08b9a, 0xbc55ceaa, 
    0xbbe02a2c, 0xbb586d39, 0xbc121c9e, 0xbcb22bbb, 0xba6bd3ae, 0x3bc9d5c0, 0x3b8d9cc4, 0xbc19229e, 
    0xbc4a902d, 0x3b10efa5, 0xbb14c82c, 0x3c04aa6b, 0x3c678e05, 0x3c381093, 0x3c2daede, 0xbb8027cd, 
    0x3ba2d4c3, 0xbc5343e8, 0x3c045eaa, 0x3a716595, 0x3bd5ab77, 0x3b6a5416, 0x3c6375ca, 0xbbcff770, 
    0xbc286fc7, 0x3c11b11d, 0xbb500660, 0xbb1e9047, 0x3b73eb5b, 0x3c35f000, 0xba98c76f, 0xbc90c81e, 
    0x3ce1219b, 0xbb0ddcda, 0x3c76344e, 0x3c4008c1, 0x3c96fb2e, 0xbca2d02c, 0x3cef7ba1, 0xbccc638e, 
    0xbaa31fb7, 0xbc9584a2, 0x3ba273cb, 0x3c03998c, 0x3c9b87d9, 0xbbf9de5a, 0xbc848280, 0x3ce14ee3, 
    0x3aaa99e2, 0xbc5d0ed1, 0x3ae21cf1, 0x3bd9eb33, 0xbb83a476, 0x3bc7b889, 0x3b847450, 0x3c2ee86a, 
    0x3c4ca668, 0x3c900ef9, 0xbcea8ad1, 0x3bd781f7, 0x3bcaca72, 0xbd0fefd6, 0x3c35b077, 0x3c02f265, 
    0xba3f0899, 0x3c233ce1, 0xbb810236, 0x3b1561df, 0x3cc2608e, 0xba4ec7d6, 0x3cb15125, 0xbbdbb926, 
    0xbaf37cbd, 0xbccb4e7d, 0x3cefb0b6, 0x3bf2ec27, 0xbc4367ac, 0x3bb89316, 0x3cb61bbc, 0x3ce5d56d, 
    0xbb0cd37c, 0x3b6b4744, 0xbc59c09b, 0xbaae3a5d, 0xbc65803c, 0x3c28fce7, 0xba29147c, 0x3c06cf51, 
    0xbc2bcb02, 0xb95ff2d6, 0xbc305fc1, 0xbc4155b9, 0x3cc0e9e5, 0x3b65c4bc, 0xbb85e512, 0x3b36cf20, 
    0xbc5fa857, 0xbc1fbddf, 0xbbb5806b, 0xbb8228db, 0xbc934cfc, 0x3ccb970c, 0x3bb5ba7a, 0x3bdb4215, 
    0x3c80a7b1, 0xb68b9173, 0xbbcf52ad, 0x3cb4019f, 0x3c7f6bf3, 0xba1f1af7, 0xbc63639c, 0xbc3260f4, 
    0x3bd878b5, 0xbb99466b, 0xbcad4339, 0x3c3d7a11, 0xbbbe495c, 0xbc64ac4a, 0xbc414235, 0x3c6d11a4, 
    0x3cce51dd, 0xbcea61cb, 0x3c3133bc, 0xbb44ad84, 0xbc1236a9, 0x3c85cf6c, 0xba42c56b, 0x3b6b4665, 
    0x3caf2b20, 0xbc73bd0b, 0x3c9823af, 0x3c411230, 0xbc37a3b4, 0x3c2b6684, 0x3c9e00c1, 0xbceb045a, 
    0xbcbada15, 0x3b101621, 0xbca817d6, 0x3cabd52b, 0x3cac5f91, 0xbc5c2db4, 0xbcf4af70, 0x3c7d844e, 
    0x3c8b6b6f, 0xbc90376a, 0xba2ee706, 0x3bd0da8b, 0x3c74d265, 0xbc8dd8a2, 0x3ce82002, 0x3cd72503, 
    0x3c40bcda, 0x3c90e6af, 0xbcd5f36d, 0x3cac8b77, 0xbc269c87, 0xbd250e61, 0x3b727bd5, 0x3be85638, 
    0x3b13afef, 0x3bcd82b6, 0x3c8c7749, 0x3c503308, 0x3c685473, 0xbcbfb91a, 0x3bae9272, 0xba9e4434, 
    0xbb452618, 0xbc83c5d1, 0x3c69b83d, 0xbb19f696, 0xbb6276e7, 0xbbfa5023, 0xbc71830c, 0x3cb60a2c, 
    0x3c5fb190, 0x3c11b979, 0xbc4e5182, 0x3b3dc7ea, 0xbbe1ad7a, 0xbb4823f3, 0x3b536098, 0x3c514103, 
    0xbbc08171, 0x3bb2ac9a, 0xbbe36d95, 0xbbb765d7, 0xbad51fcc, 0xbc4c8def, 0x3a52ff10, 0x3bd313b6, 
    0x3c09856c, 0xbc8e4639, 0xbbba5d6b, 0x3916d0be, 0xbc56497f, 0x3beca9c0, 0x3c03ef4c, 0x3b2b55d1, 
    0x3b3d89a3, 0xbba87606, 0xbc3d6956, 0x3b451c3d, 0x3c28e794, 0x3b8725e4, 0xba92068d, 0x3a15e60f, 
    0x3c4c04d1, 0xbb847059, 0xbb92245d, 0x3c33a69d, 0xbbad1f92, 0xbc0a675d, 0x3b7e3c3d, 0x3c009203, 
    0x3b814132, 0xbc7e591c, 0x3b34b842, 0xbba8eff2, 0xbba834c8, 0x3a7d507f, 0xbb176eb6, 0x3bfe9253, 
    0xbbea38e2, 0xbbb67ea5, 0x3c085b45, 0xbb316614, 0xba99d1c7, 0xbb22d93a, 0xbbcbedce, 0x3b4d7ac0, 
    0xbaab7411, 0xbae6b059, 0xbb4688bf, 0xbb9f85bc, 0x388105eb, 0xb962ac7e, 0xbc2b311d, 0xbb9b34c5, 
    0x3a5991e9, 0x3b9f8df8, 0xbc4d35eb, 0x3c8cc279, 0xbbf0d6a2, 0xbb4083a0, 0xbb985371, 0x3b8769e6, 
    0x3be8623f, 0xba938427, 0x3b5caeed, 0xbbac1ff2, 0xbb655a73, 0x39ad0293, 0x3b43e12c, 0x3c6c6ed5, 
    0x3c44977e, 0xbcca78bc, 0xbc493f35, 0xbc03814c, 0xbc603cf8, 0x3ca599b8, 0x3cbd2f1d, 0xbc088e5d, 
    0xbc1ddc93, 0x3b5c1468, 0xbc7d1f17, 0x3b05982a, 0x3a68b683, 0x3b29f106, 0x3cbf4bb3, 0xbbd28d12, 
    0xbba1479b, 0xbbf618b0, 0x3cf8c2f6, 0x3cab0adc, 0xbbe50930, 0xbbe8e4fb, 0x3cce4da4, 0x3bb823e6, 
    0xbcb356ca, 0x3bf71083, 0xbc86fdfc, 0x3c57e2fd, 0xbba3bf3a, 0xbbf80311, 0x3c0e881e, 0x3bf40b9c, 
    0xbc9b7be5, 0xbb0a1851, 0x3c80ee82, 0xbb0c3145, 0xbb58ccb9, 0xbc73e622, 0xbbc7e7ed, 0xbbe43220, 
    0xbb961978, 0x3bb4d159, 0xbb91b92a, 0x3c414659, 0x3c1354d7, 0xbb9dbd38, 0xbc25e33b, 0xbbd5463e, 
    0x3c5c8177, 0xbc275aef, 0x3b35e38a, 0x3c8176e2, 0x3ad37726, 0x3c0b0b7f, 0x3ace916e, 0x3b45f0e5, 
    0x3b7fc797, 0xbb2255e4, 0xba512544, 0xbb5c149b, 0xbc2a491c, 0xbb096893, 0xbbb825e3, 0x3bda76c9, 
    0x3b3173ea, 0x3c267792, 0x3be85dbc, 0x3afd8822, 0x3a325d04, 0x3c0853c3, 0x3ba8f3d1, 0xbcec3b32, 
    0xbb96afd2, 0x3abf9baa, 0x3b09f95d, 0x3c3f29b9, 0xbc54223a, 0xb8990762, 0x3c9dbe37, 0xbb9ce32a, 
    0xbc09554c, 0xba06fee6, 0x3c23bb85, 0xbc6c1d4b, 0x3c16981b, 0x3c022cb0, 0x3c6d994a, 0xbbaa926e, 
    0xbc388295, 0x3c176209, 0xbc5ab7ee, 0xba9bda6d, 0x3c1479ca, 0xbc8a6c35, 0xbc20bd66, 0xbc235ae0, 
    0xbb6fce4d, 0x3c94c172, 0x3c37638c, 0xbb5eafb6, 0x3a999137, 0xbaad969e, 0xbbad683a, 0xbb0dea3b, 
    0x3c39e80e, 0x3b21c94d, 0x3b3021a2, 0x3be79758, 0xbbcff491, 0x3b056c66, 0xbb6e42ba, 0xbc279b8a, 
    0xbc3a89a1, 0x3b4c3a50, 0x3b144258, 0xbc3e6ab4, 0x39305796, 0x3c0c225a, 0xbc300aa2, 0xbce4fa0b, 
    0x3ccf37dd, 0xbbe1b8a6, 0xba96bd51, 0xbc94a756, 0x3bd927d7, 0x3a341968, 0xbb89e03a, 0xbc7931b0, 
    0xbbfd0015, 0x3b72cb27, 0x3bb019e6, 0xbbb65357, 0xbb56e6cd, 0xbbd0cb5f, 0x3b52f276, 0xbc985f00, 
    0x3b598bad, 0x3b39eb29, 0xbb06b756, 0x3c18a7b6, 0xbab05b1b, 0x3b484d04, 0xbb0b134f, 0xbc1603f3, 
    0xbb9c2f1c, 0x3bc9678e, 0x3b52abe5, 0xbb08d74c, 0x3987dccd, 0xbb1effd6, 0x3c0c08e8, 0xbcee4034, 
    0x3c48986b, 0xbb884874, 0xbc8756b2, 0xbca57fd6, 0x3c3cd1c4, 0x3a892ad6, 0xbaf5bc49, 0xbc343fb6, 
    0x3b8021ff, 0x3ba84397, 0x3b7e9abf, 0x3bc1caf1, 0xbb22bdae, 0x3cadbb4d, 0x3ca8805b, 0xbce51fb0, 
    0xbd22507f, 0x3c5290f8, 0xbae75f47, 0x3ccd2a64, 0xbc2ada70, 0x3b4935b4, 0x3caedada, 0x3b369103, 
    0x3ab499cc, 0xbc031c80, 0x3ca3dde9, 0xbbc147f1, 0x3c687e2b, 0x3bd953c0, 0x3ce127a6, 0x3c10ebba, 
    0xbcd8a1c1, 0x3cc919b6, 0xbcc12354, 0x3c5e8186, 0x3bbd50e8, 0xbca8d430, 0xbbd5737a, 0xbc54585d, 
    0xbcaea7d2, 0x3c7401c0, 0x3c4d833d, 0x3b804db0, 0x3af007bd, 0x3bf55b35, 0xbc16eb07, 0x3c8bacdb, 
    0x3c723059, 0x3c5fd3e8, 0x3c1f8a93, 0x3ca94323, 0x3ac2a306, 0xbb76f371, 0xbc8a5b70, 0xb907b563, 
    0xbb241e9e, 0xbc0684b9, 0x3b24a1b4, 0xbbd004ee, 0x3c84270a, 0x3c0abcce, 0xbc89c4ad, 0xbb67b69a, 
    0x3d0c477a, 0xbae082d1, 0x3c336a92, 0xbb1e1755, 0x3af2f35f, 0x3b8e321b, 0xbc6e3ecd, 0xbc62ba44, 
    0xbb0d9c0b, 0x3afefcbc, 0xbbed6880, 0xbba674e5, 0x3963202b, 0xbc6db33d, 0xbb2e59e9, 0x3b61700b, 
    0x3baf5768, 0x3bfaf3c5, 0x3ba9e9b0, 0x3c1fb507, 0x3ba9ee4f, 0x3b62a6f7, 0xba425f37, 0xbb8835a3, 
    0x3aa4361f, 0x3b95a44f, 0x3bdcb9d2, 0x3b08abae, 0x3b7a43a7, 0x3bb2b4c6, 0xbba3b426, 0xbc00ef7c, 
    0x3afba99f, 0xbbfa5b1c, 0x3a257937, 0xbc494314, 0x396fb8eb, 0x3bf1cd8c, 0xbc630dcd, 0xbc546384, 
    0x3c1037bd, 0xbc4a7a19, 0xbbf62210, 0xbc1b1591, 0xbc62e14f, 0xbc8d933c, 0x3bc62287, 0xbc964040, 
    0xbba3cf6f, 0x3c8ec4d9, 0xba820dae, 0x3bdcd6f2, 0x3cf88c75, 0x3bbeecd6, 0x3c1d61c5, 0xbd2a6961, 
    0x3c4fcfff, 0xbc7764b2, 0xbbc7b718, 0x3af111ce, 0x3b08b69a, 0x39ea093e, 0x3b6d03a8, 0xbbf83559, 
    0x3bd8e6e7, 0xbcad6bd0, 0xba82559b, 0xbc9aeb68, 0x3bd6d205, 0x3bb627ed, 0xbb7d102d, 0xbad13647, 
    0xbaa7688f, 0xbc31ab15, 0xbc4dba77, 0xbc4a7bc7, 0xbd045a71, 0x3cba9fc3, 0x3ba0c7c5, 0x3c5f8db5, 
    0x3c1fb23c, 0x3cc7107d, 0xbc038de0, 0x3b9729fd, 0x3bbfe398, 0x3b4579f8, 0x3c7c19f3, 0xbd4b2f2e, 
    0xbb98d212, 0xbb3956ab, 0xbb9f3e8c, 0xbabeb3bb, 0x39d457f2, 0xbb6361b5, 0xbb8a286c, 0x3b87ec4a, 
    0xbbcdbc3d, 0xbcd02695, 0x3c02733b, 0xbc298f9c, 0x3bd2164f, 0xbc2846b6, 0xbb8a055d, 0xbbd51c3d, 
    0x3c329ccb, 0xbc62d48d, 0xbbde7e2b, 0xbb75fd31, 0xbcc22410, 0xbc15c870, 0x3cb56f25, 0xbc11736d, 
    0xbab1061c, 0x3c87389f, 0xbc350fba, 0x3c6be60f, 0x3cab0b1e, 0xbb0aa52c, 0xbb852645, 0xbc9a64fa, 
    0x3c150cb0, 0xbc618f85, 0x3ba34127, 0x3b7cfbf8, 0xba65ec10, 0xb9b9d6f9, 0x3b9db5a0, 0xbb28a7c3, 
    0x3c2a402a, 0xbbb46325, 0xbc2442da, 0xbc85350d, 0x3bcd6bfe, 0xba7ad7bb, 0x3a81da8d, 0x3ab10fa0, 
    0x3c30841b, 0xbb018c74, 0xbc8320f2, 0x3c98c8ca, 0x3b3f9c7b, 0x3c634bd5, 0x3d25c83c, 0xbcbdb26c, 
    0xbcc95046, 0x3b9faefd, 0x39be2934, 0x3c688214, 0xbc0feef0, 0xbc89c147, 0x3ca6686a, 0x3c0341fc, 
    0xbc03bedb, 0xbabf9a00, 0x3d07d1ca, 0x3c8de65e, 0x3bd59bad, 0x3933d9b1, 0x3cd5810e, 0x3c48b5cf, 
    0xbd0e0a5d, 0x3c137e5a, 0xbc731bb1, 0x3c3e83df, 0xbbd19d3a, 0x3b1286de, 0xb9f5785b, 0x3bd1f0be, 
    0xbc1195eb, 0x3c66032b, 0x3b259e6c, 0x3cbfab0f, 0x3b70fa9b, 0xbc05e7c3, 0xbb17b635, 0x3cb8a3dd, 
    0x3ccf4630, 0x3c11df5b, 0x3c5a361e, 0x3c597d15, 0x3bbb46b1, 0xbcc5c148, 0xbd0f4e3d, 0x3ada201b, 
    0xbbc0a8cc, 0xbb096b88, 0x3bc1f13d, 0x3c62669e, 0x3bd4aa1c, 0xba84e1b2, 0xbcb22a07, 0xb99ade5c, 
    0x3d2ceea7, 0xbc984a35, 0x3c432d70, 0xbb584948, 0xbc14ed50, 0x3c5a87df, 0xbc56f75d, 0x3bd3f240, 
    0x3b9cffc2, 0xbac8d90b, 0xbc8cb5e2, 0x3c5fb35f, 0x3bfada91, 0xbca3d397, 0x3c328368, 0x3c8e89c3, 
    0x3c95fc8f, 0x3af274d2, 0x3bf34c8c, 0xbb76a3f2, 0xbbb89b33, 0xbc941a48, 0xbc07307c, 0x3b76df15, 
    0x383cc250, 0x3c872016, 0x3caef08f, 0x3cb5d6e5, 0xbbf6da78, 0xbb87b374, 0x3a9d6323, 0x3b155b99, 
    0xbc375b3b, 0xbc747a00, 0xbb7f6135, 0xbc1c843e, 0xbc629231, 0x3c23fe02, 0xbb1b5049, 0x3c40267d, 
    0x3a3ed48a, 0xbbf5a54e, 0xbba3e995, 0xbc1f353a, 0xbbb1bfd8, 0x39238d33, 0xbb7fe077, 0x3c269a81, 
    0x3c0d8627, 0x3aa84bb2, 0xbbaa9507, 0x3a313668, 0x3bebad54, 0x3b152978, 0xbb9ef6c4, 0xbaa0a404, 
    0x3bf0f1f2, 0x3b069cca, 0x3b9b1324, 0x3ad2b8db, 0xbbb2cce6, 0xbb67df31, 0xbae37b6c, 0x3c1ac997, 
    0x3b14b35c, 0xbc6c0960, 0x3baad814, 0xbaec92c1, 0xbb65795b, 0xbb719114, 0xba8e02e1, 0xbb5126cb, 
    0x3c8c2bab, 0xbc1e919e, 0xbb8d46b4, 0xbca28743, 0xbae2a00e, 0xbc56314d, 0x3b19d01c, 0x3c1a0901, 
    0x3c08ec28, 0xba5d0dba, 0xbc2836c0, 0xbbad091f, 0x3c0fce2d, 0x3c4e5b97, 0x3ba25b7a, 0xbb730674, 
    0x3bae45e4, 0xbb23e7aa, 0x3bf29e70, 0x3b8003ce, 0xbc7a9147, 0xba849b52, 0x3abaa37b, 0xbb31c849, 
    0xbb52bdaa, 0xbc319c63, 0xbb736ac4, 0xbc126057, 0xba78c336, 0xbc327736, 0x3c2b69a1, 0xbbf63643, 
    0x3c180c33, 0xbc2e7cd5, 0xbc63e894, 0xbcb20fe7, 0xbaeb6833, 0xbae64ad1, 0x3c0e46ff, 0xbb84b88f, 
    0xb9e89139, 0xb89f4489, 0xbc04531b, 0x3be06b55, 0x3b7f5148, 0x3c5d7237, 0x3c8ab2a4, 0xbb966370, 
    0x3abbb121, 0xbc021789, 0x3c104098, 0xbab2237d, 0xbbaeb9a6, 0x3aa2aa11, 0x3be992f7, 0x3bdf08d3, 
    0xbca4e742, 0xbb8f5fe4, 0xbc2e8a0a, 0xbbafd70f, 0x3b43ab2f, 0xbaedeff1, 0x3b4a9dd5, 0xbc4e0a08, 
    0x3cab59b7, 0x3c059c7e, 0xbbb94384, 0xbce16b12, 0x3c3d0290, 0xbc8782a7, 0x3aa8cdaf, 0x3c91b7d7, 
    0x3d03b60d, 0xbbb46501, 0xbb26ba24, 0xbbc8e1eb, 0xba62b004, 0x3cb56690, 0x3bfdd161, 0xbba1634d, 
    0xbc5253c8, 0x3bf11400, 0x3cb7b95d, 0xbc7f51f4, 0xbca7ba96, 0x3cb92732, 0xbcea6323, 0xbbe52b55, 
    0x3bb8ac96, 0xbc37a004, 0x3ab59f5b, 0xbc6a1e86, 0x3bcec55a, 0xbc369ae5, 0x3bf2d0bb, 0xbd1c64d1, 
    0xbc190c11, 0x3b847d3c, 0xbc740de9, 0xbc93480f, 0xbb31554b, 0x3bd5147e, 0x3ce0361c, 0xbcbba34f, 
    0xbc16868f, 0x3a93eff1, 0xb7f87a58, 0x3cca3af2, 0xbba9794d, 0x3c4f7164, 0x3c52a93e, 0xbc14ccd9, 
    0xbbbaaa84, 0xbc27129f, 0x3c8869f6, 0xbc561170, 0x39e3f35c, 0x3b3af93f, 0x3c84286c, 0x3a522b43, 
    0xbcd53f41, 0x3aff3dd6, 0xbcdad007, 0xbc91d4ce, 0x3c87ada5, 0x3c6ea63b, 0xbb9f413e, 0xbcf00911, 
    0xbc76d7fb, 0x3b64b739, 0x3a9db2fd, 0xbc07976b, 0xbc352d75, 0x3abb6b81, 0x3abc47a8, 0xbb9de839, 
    0x3bb1936b, 0x3b9514d6, 0xbb2363b8, 0x3d270e72, 0x3ccfa559, 0x3ba5f165, 0xbd15f9d6, 0xbc16761a, 
    0x3afbed43, 0xbbda886f, 0xbb9b34fc, 0xbb8c5629, 0x3b9ff560, 0xbc969ff5, 0xba8f89ce, 0xbcb259e6, 
    0x3ce5c5b3, 0xbcdd1c06, 0xb8cc9c72, 0xbc9a5e45, 0xbb4417e1, 0x3cd1ea66, 0xbb8cdef2, 0xbcc789cc, 
    0x3b855d0b, 0x3b470317, 0xbbd7d842, 0xba6f1280, 0xbbbc376f, 0x3aa2ba8b, 0x3c50f6cf, 0xbceb74c8, 
    0xbc4db5cb, 0x3cbfacf6, 0x3b2adb49, 0x3d022085, 0x3cdab99f, 0x39aaabab, 0x3c7e07c1, 0xbc3907d1, 
    0x3c23830f, 0xbcbb75df, 0x3be49c21, 0xba1c8f21, 0x3cb4d156, 0x3b8ff409, 0x3c808f9b, 0x3b332545, 
    0xbbb49f35, 0xba0174cd, 0xbc1421e4, 0xbc273653, 0x3b08f3f9, 0xba322eb9, 0xbc5ca131, 0xbc260711, 
    0xbc599cd4, 0x3bdcc740, 0xbb90ce15, 0x3a6d035f, 0xbbf774f4, 0x3cb4b517, 0xbbfb800f, 0x3ca37d36, 
    0x3c616eaf, 0x3ced9ab3, 0x3bbea0d7, 0x3ca5e4fd, 0x3c1974e2, 0xbb1c5b48, 0x3b8c6818, 0xbc898264, 
    0xbbfd320f, 0xbc4a562a, 0xbbb32767, 0xbbb505ae, 0x3ca617f5, 0x3b2335e0, 0xbc8531c7, 0x3c2ee923, 
    0x3b0ef76c, 0xbc3e3605, 0x3cbf4ed3, 0x3a86d835, 0x3b164782, 0xbc104f4b, 0xbc8c5d13, 0xbc3b7811, 
    0x3b601349, 0x3b88128f, 0xbac73aff, 0x3b19a78c, 0xbb4416b0, 0xbc3c6b0d, 0xbbafa577, 0xbb9301fc, 
    0x3bd14acb, 0x3cc2465d, 0x3a9472e9, 0x3c90db86, 0x3c9fa1ca, 0xbb4efad8, 0xbbbe21bf, 0xbc128b2c, 
    0x3c1ad840, 0xbc7434ef, 0x3b7fbc54, 0xba93adf9, 0x3c0618de, 0x3bb6ec0b, 0xb9f80c54, 0x3bf595a8, 
    0x3c041db3, 0xbc023ed8, 0xbb006a7a, 0xbc3a10aa, 0x3b893416, 0xb865dc74, 0xbbfa9faf, 0xbbfd8896, 
    0x3ca13e1e, 0xbb88a1aa, 0x3b72608f, 0xbc25fc43, 0x3a8d19e1, 0xbc9aafe8, 0xbbfad60c, 0x3bf6de97, 
    0x3c57bc12, 0x3ba6a69e, 0xbc108679, 0xbb7e8b92, 0xbc3fd465, 0x3bb54fbc, 0x3c0ea890, 0xbb9bd47b, 
    0xbbae99f1, 0x3c151d7f, 0xbb593a85, 0x3b4ab7c9, 0xbc4a2f80, 0xbc0dc3e2, 0xbb970d67, 0x3bb2d76f, 
    0xbbc71c57, 0xbbff48d3, 0x3b8b88d7, 0xbb8f0bf2, 0xbbd8baa1, 0xbc9257b5, 0xbb768631, 0xbba1104b, 
    0x3bf27b52, 0xbca6d468, 0xbc3411f9, 0xbcdcda19, 0xbc3fd3f6, 0x3bb71d31, 0xbbdca5d2, 0x3c05cf91, 
    0x3c290d0c, 0x3b25a7ab, 0xbca3a22b, 0xbade9fa3, 0xbcbaed5c, 0x3c5af861, 0x3c42254b, 0xbc6c92c0, 
    0xbc0898f3, 0x3bbde7a4, 0xb9f70830, 0xb8bd7f12, 0xbc738955, 0xbc3c143c, 0x3c2482cc, 0x3c8164ca, 
    0xbcf4072b, 0xbc035b3c, 0xbb64a894, 0x3ba60a7f, 0xbbbeb20a, 0xbc145f85, 0x3a5182b8, 0xbc01d453, 
    0x3c3afcab, 0xbcc25aa3, 0xbaf986e1, 0xbc53fdee, 0xbc9cd71c, 0xbc18e930, 0x3ba3ad33, 0xbc812452, 
    0xbb2e40fe, 0x3c0c7c95, 0xbce5402a, 0x3c1c1a73, 0x3b2d59b0, 0x3bdb39ad, 0xbc6d1623, 0xbc698580, 
    0x3b2276f6, 0xbc3e667d, 0x3c1f17dd, 0x3c04d3f8, 0x3a918c2a, 0xbc718d32, 0x3c91145e, 0x3b493114, 
    0xbc592348, 0x3b6edf9f, 0xbc94369a, 0xbb98d347, 0xbb74ca9d, 0x3b9057b1, 0x3b2876b8, 0xbc2413f7, 
    0x3c01c97d, 0xbc006d1f, 0xbcc606aa, 0xbc6d90f1, 0xbb98b2bc, 0xbb7de22b, 0x3c3e41a8, 0x3c26764d, 
    0x3cab7448, 0xbb145974, 0xbb819cb2, 0x3b2693ab, 0x3b791317, 0x3c20d33e, 0x3c6b06ad, 0xbc01f658, 
    0xbb8dce99, 0xbb2c325a, 0x3c844aa7, 0xbbb4b629, 0xbc627fb3, 0x3c3a8107, 0xbc29d2a2, 0x3b697861, 
    0xbc1705a0, 0xbca5adac, 0x3b5b0d18, 0xbbae4250, 0x3ab812d8, 0x3b9591b7, 0x3b17aff0, 0xbc233e56, 
    0x3ca702f5, 0x3ac6535d, 0xbc868b02, 0xbc822369, 0x3c52a434, 0xbc9060be, 0x3cb9f165, 0x3c412c3e, 
    0x3bff187b, 0xbc5c9bf0, 0x3b71527d, 0xbaef59b2, 0x3c373d3a, 0x3c251e41, 0x396135cb, 0x3aa580f5, 
    0xbbea6cc2, 0xbbaca199, 0x3cd41abf, 0xbbb8f40b, 0xbc9054d0, 0x3c56448a, 0xbc3fb4e4, 0xbc6a3d47, 
    0xbba5caa3, 0xbbf1dcc9, 0xbaf0099a, 0xbc527bdc, 0x3bca539d, 0xbbe9e36f, 0x3c42cea0, 0xbbfee3ba, 
    0xba2e91f4, 0xbadb3c3e, 0xbc82b598, 0xbc300218, 0x3ba90674, 0xb89d790f, 0x3c8fa071, 0xbb9cf6e4, 
    0xbb2a1bfc, 0xbc08110d, 0x3bdbd6dd, 0x3c9c7871, 0x3a907e65, 0x3c36775e, 0x3ca21531, 0xbb5461a8, 
    0xbbe5e036, 0xbbfa42b4, 0x3c84f3f1, 0xbb960879, 0xbb977174, 0x3c821be1, 0x3b7339d2, 0xbb1d2b0e, 
    0xbc5f21fc, 0xbbfe9e03, 0xbba92285, 0xbcbb3e5d, 0x3c0a25e7, 0x3c36d2d4, 0xbb3dbce9, 0xbc2a142f, 
    0x3c172281, 0x3b9c452a, 0xb9c90025, 0x3c69a76a, 0xbb5fc3fc, 0x3c86da89, 0x3c96eab8, 0xbd72fe4d, 
    0xbd4389de, 0x3c29c90d, 0xbb5ff2ea, 0x3caabfae, 0xbb8f204e, 0xbbfd5410, 0x3cdb44d7, 0x3c0d86dc, 
    0x39d7ac34, 0xbc9b97a7, 0x3ca05a6e, 0xbc823ec3, 0x3ceaea58, 0x3c076a65, 0x3d2b3d60, 0x3c7df57b, 
    0xbd0a4111, 0x3d0209d1, 0xbcf3281b, 0x3c9c6ab7, 0x3b1f5ac8, 0xbc435a0d, 0xbc1409ff, 0xbc6031ea, 
    0xbbe4965f, 0x3c962eb8, 0x3c9b5049, 0x3c9a3ee0, 0x3b45557d, 0xbc5819dc, 0xbcc81228, 0x3c231e43, 
    0x3c4322d5, 0x3bbf1987, 0x3b7626b2, 0x3bc08ffe, 0xba5dcc19, 0xbc84c432, 0xbcc8b9a9, 0xbaada5e1, 
    0x3b35fbdf, 0xbc04d6aa, 0x3a8a79bf, 0xbc2dd39f, 0x3c8dd3e8, 0x3bc5555d, 0xbc63ca73, 0xba5eb9da, 
    0x3d0a347d, 0xbbe943f8, 0x3c106d93, 0xbb81bcef, 0xbbd31122, 0x3c9d123e, 0xbc6d611b, 0xbbd18cfc, 
    0xbc20f1f1, 0x3b2c1c07, 0xbaa3b9a0, 0x3ba2f94c, 0xbc0d1e22, 0xbcd18ce8, 0xbc5a7dad, 0x3bd28fc9, 
    0x3c655c27, 0x3ba0305e, 0xbaa7d338, 0xbc81a1aa, 0x39c9c4b1, 0xbb05a897, 0xba064607, 0xbb9ad840, 
    0x3b486a62, 0x3c65f6ae, 0xb86f8ef6, 0x3ba0fa89, 0x3b3b105d, 0xba6f6150, 0xbbd5d18f, 0xbc3ada51, 
    0xbc263180, 0xbc5a439a, 0xba31d836, 0xbbefa604, 0xbc1aa893, 0x3c56e5e6, 0xbbe72e5f, 0x3b6294fb, 
    0x3bcddd33, 0xbc0a76e9, 0xbc59080b, 0xbb8ee4c9, 0x3ba1b90b, 0x3acc574a, 0x3c3c6424, 0xbb030e31, 
    0xbc0c075c, 0x3ada9b60, 0x3a61425a, 0x3c483765, 0x3c48876b, 0xbb7eda57, 0x3b704a33, 0x3b14f02e, 
    0xbaf2336b, 0xbc760dce, 0x3cf27e4d, 0x3bf0acb3, 0x3b10592f, 0x3a9442be, 0x3bedc784, 0x3a7e4874, 
    0xbc312b00, 0x3a91b2ae, 0x3ae91459, 0x3a54370e, 0xbc045568, 0x3adcc13c, 0xba3ed753, 0xbb1c1c1e, 
    0xbba1a71d, 0x3a0697a8, 0xbbe7cbf2, 0xba5fa9ff, 0x3bb56d82, 0xba93e601, 0x3a2b6c25, 0x3c4218a0, 
    0x3ae334e3, 0xbafdd249, 0x3c140157, 0x3bf57d2e, 0x3c0893e3, 0xbb41ae31, 0xbb40fec6, 0xba7722ab, 
    0xbb94098c, 0xbbdda524, 0x3c166551, 0x3b2c9eb3, 0x3b39f1d6, 0x3b5a1f5e, 0xbb438cd0, 0xbacee03b, 
    0xb98f055a, 0xbc1f4ca4, 0x3c3f449d, 0xbc2c0a12, 0xbb2e6555, 0x3ba49fc5, 0xbbdd49dc, 0xbb067d35, 
    0x3b2eff76, 0xbb942623, 0xbc6acb92, 0xbbf9d270, 0x3adbbd22, 0xbae7b12b, 0x3b37348e, 0x3ba34c6c, 
    0x3ae4cf50, 0x3b02a372, 0xb9e94a77, 0x3c44fa06, 0x3c3e93ee, 0xba2190f7, 0x3ba9716d, 0xbb69aeb8, 
    0xbb48c041, 0xbc3915c9, 0x3c90ea22, 0x3bac72e2, 0x3b7d3a6f, 0x3b85e77b, 0x3aeaff4b, 0xbb28933d, 
    0xbbf6130e, 0xbc0e4ad0, 0x3be0db41, 0xbc23d05b, 0xbb0f64dd, 0x3b737019, 0xbba3ad5d, 0xbb7cf0db
};

static const uint32_t _K34[] = {
    0x3f419e7a, 0x3e9ac416, 0x3ee379b3, 0x3f2ccc68, 0x3f5f9367, 0xbe299c31, 0xbf8e10d0, 0xbe55271f, 
    0xbe3aac29, 0xbeed7963, 0x3f1b257f, 0xbf97c424, 0xbd36dda0, 0x3f1a2b18, 0xbe72a478, 0x3f67b093, 
    0xbe7ff386, 0x3e25c2bc, 0xbeea4226, 0xbee4a032, 0x3f28ae62, 0x3ebaf9be, 0x3ee92d0e, 0x3fa4f2e7, 
    0xbf99f03a, 0x3d89678f, 0x3f000031, 0x3f9d0e32, 0x3e555f9e, 0xbe128c2e, 0xbecbe8e6, 0xbe404656
};

static const uint32_t _K40[] = {
    0xbe8cab2a, 0xbe61df95, 0xbf84e45f, 0x3e7078e9, 0xbd7c820b, 0x3eb7fbee, 0x3f85f3f1, 0x3e57d824, 
    0xbec343f6, 0xbe8a40f8, 0x3ef9f31e, 0x3e2687fd, 0xbedf330e, 0xbe65d294, 0x3ee15ea3, 0xbd884871, 
    0x3eed644e, 0x3ed248dc, 0x3e689b44, 0x3e58d2b9, 0xbd912a55, 0xbd8e930f, 0xbe909458, 0x3e970997, 
    0x3eb16279, 0x3ed1f715, 0x3f186af7, 0xbe148a58, 0x3f4d01b8, 0x3e954a34, 0x3e60ed87, 0xbebb5ce9, 
    0x3dede7b1, 0x3eafc1ac, 0x3e1d11fb, 0xbfe2b64a, 0x3ec73c93, 0xbf813558, 0xbefc33ca, 0x3f04f05c, 
    0x3e0fcc46, 0xbf9c545f, 0x3ec1a178, 0x3f15fc2b, 0x3d662792, 0x3edc8490, 0x3ecd9546, 0x3eac31e9, 
    0xc00339fc, 0xbfc2b4c8, 0xbf710a4c, 0xbf43e139, 0x3eb9168c, 0xbfb09f7b, 0xbe841a7d, 0x3ef44e36, 
    0xbe994b71, 0xbf19210b, 0xbfe0e872, 0x3ecb8d3f, 0x3d062530, 0xbf9b3dab, 0xbfe3cb5f, 0xbcfc6dc7, 
    0xc029d836, 0xc00db019, 0x3f181925, 0xbe205db7, 0xc0167e13, 0x3dd4793b, 0x3ef62bdf, 0xbf1fc351, 
    0xbf876d43, 0x3f6bd683, 0xbf84bb1b, 0xbf8b6f47, 0xbe7c6e10, 0x3eaa7900, 0x3e1359fc, 0x3f1166dd, 
    0x3f62bd17, 0x3f904985, 0xbf35a8d9, 0xbed360df, 0xc00da285, 0xbc43c606, 0x3f493a02, 0xbf6b905b, 
    0x3f47d60e, 0x3f09a566, 0x3d028222, 0x3eecfb96, 0x3e9f24f5, 0x3de92e4f, 0x3f403a19, 0xbf357fc1, 
    0x3bc8a7aa, 0x3f04148c, 0x3ebaea7c, 0x3e903dac, 0x3ec8e8df, 0x3ed0ed98, 0xbfa97bf5, 0xbfea604a, 
    0x3f2f19f8, 0xbe1ad771, 0xbf7fee87, 0x3d005b60, 0x3f465545, 0xbf124cb2, 0xbf99be59, 0xbf651b3c, 
    0xbdf43b75, 0xbe902c04, 0x3e604043, 0x3ee3d80d, 0x3e7a3506, 0xbf0aa612, 0xbf964d7d, 0xbf983b2a, 
    0xc0020b16, 0x3c7856ff, 0x3eb0e45f, 0xbf74b460, 0xbf76c32d, 0x3ed2ac92, 0xbf9d660b, 0x3f046522
};

static const uint32_t _K42[] = {
    0xbf18b7c4, 0x3e23f37b, 0x3dc7b8dd, 0x3ef66d40
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[12] (48 bytes) 
#define _K18             ((float *)_K18)                     // f32[13,3,20] (3120 bytes) 
#define _K19             ((float *)_K19)                     // f32[13] (52 bytes) 
#define _K22             ((float *)_K22)                     // f32[32,3,13] (4992 bytes) 
#define _K25             ((float *)_K25)                     // f32[32] (128 bytes) 
#define _K29             ((float *)_K29)                     // f32[32,3,32] (12288 bytes) 
#define _K31             ((float *)_K31)                     // f32[32,3,32] (12288 bytes) 
#define _K34             ((float *)_K34)                     // f32[32] (128 bytes) 
#define _K4              ((float *)_K4)                      // f32[128] (512 bytes) 
#define _K40             ((float *)_K40)                     // f32[4,32] (512 bytes) 
#define _K42             ((float *)_K42)                     // f32[4] (16 bytes) 
#define _K16             ((int8_t *)(_state + 0x000002d0))   // s8[5008] (5008 bytes) 
#define _K3              ((int8_t *)(_state + 0x00000000))   // s8[720] (720 bytes) 
#define _K7              ((int *)(_state + 0x00001660))      // s32[13] (52 bytes) 
#define _K8              ((float *)(_state + 0x00001694))    // f32[66] (264 bytes) 
#define _K10             ((float *)(_buffer + 0x00000000))   // f32[65] (260 bytes) 
#define _K12             ((float *)(_buffer + 0x00000104))   // f32[10] (40 bytes) 
#define _K13             ((float *)(_buffer + 0x00000000))   // f32[10] (40 bytes) 
#define _K14             ((float *)(_buffer + 0x00000028))   // f32[10] (40 bytes) 
#define _K15             ((float *)(_buffer + 0x00000000))   // f32[60,20] (4800 bytes) 
#define _K2              ((float *)(_buffer + 0x00000000))   // f32[128] (512 bytes) 
#define _K20             ((float *)(_buffer + 0x000012c0))   // f32[29,13] (1508 bytes) 
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K23             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K27             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K28             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K30             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K32             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K36             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K38             ((float *)(_buffer + 0x00000780))   // f32[7,32] (896 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[32] (128 bytes) 
#define _K41             ((float *)(_buffer + 0x00000080))   // f32[4] (16 bytes) 
#define _K43             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K5              ((float *)(_buffer + 0x00000200))   // f32[128] (512 bytes) 
#define _K6              ((float *)(_buffer + 0x00000400))   // f32[65,2] (520 bytes) 
#define _K9              ((float *)(_buffer + 0x00000000))   // f32[128] (512 bytes) 

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
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K3, _K2, 16));
        hannmul_f32(_K2, _K4, _K5, 128, 1);
        rdft_ndim_f32(_K5, _K6, 1, 128, 1, _K7, _K8, _K9);
        norm_f32(_K6, 1, 2, 65, _K10);
        mel_f32(_K10, _K11, 65, 1, 10, _K12);
        clip_f32(_K12, 10, 0.000316227766016, 3.40282347E+38, _K13);
        loge_f32(_K13, 10, _K14);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K16, _K14));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K16, _K15, 66));
    conv1d_flat_f32(_K15, _K18, _K20, 0, 1200, 29, 13, 40, 60);
    add_f32(_K20, _K19, 1, 1, 1, 29, 13, _K20);
    conv1d_flat_f32(_K20, _K22, _K21, 13, 390, 15, 32, 26, 39);
    add_f32(_K21, _K25, 1, 1, 1, 15, 32, _K23);
    relu_f32(_K23, 480, _K27);
    conv1d_flat_f32(_K27, _K29, _K28, 32, 512, 15, 32, 32, 96);
    conv1d_flat_f32(_K28, _K31, _K30, 32, 512, 15, 32, 32, 96);
    add_f32(_K30, _K34, 1, 1, 1, 15, 32, _K32);
    relu_f32(_K32, 480, _K36);
    maxpool1d_valid_f32(_K36, 2, 2, 32, 7, _K38);
    globav1d_f32(_K38, 7, 32, _K39);
    dott_f32(_K40, _K39, _K41, 32, 4, 1);
    add_f32(_K41, _K42, 1, 1, 1, 1, 4, _K43);
    softmax_f32(_K43, 4, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K3, data_in));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K3, 4, 128);
    fixwin_initf32(_K16, 40, 120);
}

