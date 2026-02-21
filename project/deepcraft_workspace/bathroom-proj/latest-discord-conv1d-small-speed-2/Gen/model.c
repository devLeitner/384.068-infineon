/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 18:58:06 UTC. Any changes will be lost.
* 
* Model ID  dbe58b44-d41c-4df6-8067-0cebae70b775
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  25380 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-2
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
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,16]
* Batch Normalization            [15,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [15,16]         float      dequeue
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
*    weight = float[3,16,32]
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
* (ACC) Accuracy 83.761 %
* (F1S) F1 Score 83.101 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11465             1996             4184             4978
* (FN) False Negative or Incorrect Negative Prediction              591             2338                6             1451
* (FP) False Positive or Incorrect Positive Prediction             1187              403               39             2757
* (TN) True Negative or Correct Negative Prediction               13766            22272            22780            17823
* (TPR) True Positive Rate or Sensitivity, Recall               95.10 %          46.05 %          99.86 %          77.43 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.06 %          98.22 %          99.83 %          86.60 %
* (PPV) Positive Predictive Value or Precision                  90.62 %          83.20 %          99.08 %          64.36 %
* (NPV) Negative Predictive Value                               95.88 %          90.50 %          99.97 %          92.47 %
* (FNR) False Negative Rate or Miss Rate                         4.90 %          53.95 %           0.14 %          22.57 %
* (FPR) False Positive Rate or Fall-Out                          7.94 %           1.78 %           0.17 %          13.40 %
* (FDR) False Discovery Rate                                     9.38 %          16.80 %           0.92 %          35.64 %
* (FOR) False Omission Rate                                      4.12 %           9.50 %           0.03 %           7.53 %
* (F1S) F1 Score                                                92.80 %          59.29 %          99.47 %          70.29 %
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
    0x3fff06e9, 0x3ecfda46, 0xbfe0de46, 0xbe684770, 0xbf525227, 0xbed08f6c, 0x3e02d8c4, 0x3ec2cca7, 
    0xbedd4b45, 0xbcfdc889, 0x3fdd23d6, 0xbe097a38, 0xbf8d14cc, 0xbe1dcec0, 0xbf618d2f, 0xbe8a783f, 
    0x3e4f4cf6, 0x3d1abbf3, 0xbf0afcad, 0x3d2d0e70, 0x3fcffd02, 0xbe519204, 0xbfa5b651, 0xbe0e202a, 
    0xbf13c635, 0xbc0e8b13, 0x3de5386f, 0xbd6f4e7a, 0xbefb1169, 0x3c10960e, 0x3fc931f0, 0xbe762a02, 
    0xbfa16b7f, 0xbde51df0, 0xbf4db44a, 0x3e19b206, 0x3e085ac5, 0x3e7879a1, 0xbef42dc6, 0xbe54d344, 
    0x3fd7b0f0, 0xbe4c29c4, 0xbf856f20, 0xbe86047d, 0xbf2a6b74, 0xbe9eab2e, 0x3cedda8a, 0x3e507f07, 
    0xbee68509, 0xbe4674ca, 0x40063e9a, 0xbe31c174, 0xbfe2cdc6, 0xbea1c031, 0xbf74f867, 0xbf0734cc, 
    0x3e348717, 0x3df3bfaa, 0xbf16ec7c, 0xbe08922d, 0x3f96b832, 0x3fd99cd2, 0x3f6c6759, 0x3cb0c900, 
    0xbf84d9ab, 0xbe60a8b9, 0xbf139eba, 0xbecebfaa, 0x3f5b172b, 0xbe38ce33, 0x3f414f6b, 0x3f8cfc87, 
    0x3f1ac961, 0xbea4d360, 0xbf7d3d05, 0xbea177aa, 0xbee6ce70, 0xbf3a8a20, 0x3f4a42d1, 0xbe432a12, 
    0x3f18a1ad, 0x3f91ab96, 0x3f414978, 0xbf1b6be5, 0xbf845f5f, 0xbeee1fcb, 0xbf105c60, 0xbef5fd3a, 
    0x3f323191, 0x3e7aec59, 0x3f281946, 0x3f56c115, 0x3f50df8e, 0xbf14366f, 0xbf62bf13, 0xbf06010c, 
    0xbecbb20c, 0xbf0fa8fa, 0x3f8bf27f, 0x3e6f2d8a, 0x3eee68d3, 0x3f415320, 0x3f421238, 0xbf1a9e34, 
    0xbf8eb33d, 0xbef2882c, 0xbf0d76a2, 0xbefc9158, 0x3f53ba4d, 0x3e729ce7, 0x3f91277d, 0x3fb35688, 
    0x3f81e530, 0xbd9000e9, 0xbf99240b, 0xbf07ba95, 0xbedd18a5, 0xbf14d1c7, 0x3f8602e1, 0x3cd9fe9b, 
    0x3e7822c8, 0x3f909e51, 0xbf4c7b35, 0x3e9fa4d9, 0xbf36658c, 0x3f4d9c2c, 0x3fda5f0a, 0x3f7cc53a, 
    0xbec82a7b, 0xbfa5d101, 0xbeb16394, 0x3f1a2c88, 0xbf87d66d, 0x3e1331db, 0xbe364c35, 0x3f70f87c, 
    0x3fbfca1d, 0x3f8af31f, 0xbe9c47ab, 0xbf9c3689, 0xbed372c2, 0x3e8d9ee1, 0xbf7456ec, 0xbe9aa2c8, 
    0xbcce9607, 0x3f873706, 0x3fab55e7, 0x3f4e3de3, 0xbf001b99, 0xbfbcc001, 0xbedddb31, 0x3e8551c1, 
    0xbf4160df, 0xbe9967d5, 0xbe0b2b4a, 0x3f88b39a, 0x3fa81725, 0x3f39a9f8, 0xbf04ffa9, 0xbfb85011, 
    0xbcb8f4b1, 0x3ec0bebd, 0xbf4fb9ac, 0xbcc12e87, 0xbe6cedd7, 0x3f50f2b4, 0x3fb7bb59, 0x3f05a9dd, 
    0xbf54c9d9, 0xbfb27ff1, 0x3e94d494, 0x3f021c6e, 0xbf67403a, 0xbdb53090, 0xbecd6a1c, 0x3f42dd5f, 
    0x3fd476f2, 0x3f233dde, 0xbf3090a6, 0xbfbf3936, 0xbf62e87d, 0xbf548c04, 0x3f2e0c37, 0xbdf62cb4, 
    0x3e8a5d15, 0x3dcca5db, 0x3e6aabc0, 0x3f039528, 0x3f2c40ca, 0x3f1e6fe3, 0xbf0bb604, 0xbf6372e5, 
    0x3ed6d49c, 0xbeaf53cd, 0x3e15eaa0, 0x3e0dd378, 0x3e6145e4, 0x3e9436fb, 0x3f1fc204, 0x3f3bc939, 
    0xbf34235e, 0xbf5a233c, 0x3f10e8d2, 0xbf0d1f33, 0x3e95d663, 0x3d57fe40, 0x3ed710a9, 0x3e95a4c0, 
    0x3f620070, 0x3f39d245, 0xbe2d6e49, 0xbf5e800b, 0x3e4aba27, 0xbf1d9bde, 0x3f02b0ec, 0xbe04b37e, 
    0x3e88a3f0, 0x3ed47b1a, 0x3f3aa833, 0x3f31c351, 0xbef8a9c2, 0xbeffe7e5, 0x3e8cf16a, 0xbf0b08bc, 
    0x3e9c426f, 0x3c892396, 0x3d8a12e4, 0x3efa6716, 0x3f0c4451, 0x3f0dcb25, 0xbefef136, 0xbeee0e6e, 
    0x3f0ed7b6, 0xbef120fe, 0x3e86eb65, 0x3ea28e43, 0x3ebb50f6, 0x3f2d7d6e, 0x3f047365, 0x3f4f3f37, 
    0x3f1f6503, 0x3fd8136f, 0x3ec57d48, 0x3f9eb351, 0x3e937744, 0x3f46ace2, 0xbee45415, 0xbf14b043, 
    0xbe4da794, 0xbf5b4a61, 0x3ec1e2d5, 0x3fb16fb7, 0x3ea337b5, 0x3fa232e3, 0x3e6a8b21, 0x3f452a46, 
    0xbec7af64, 0xbed8a713, 0x3d4a23ad, 0xbf87819e, 0x3ed642db, 0x3fc7893c, 0x3f172204, 0x3f93f7b3, 
    0x3debeaf7, 0x3f3f6b52, 0xbeb29cae, 0xbea0a1cf, 0xbdfadd81, 0xbf2b0dcf, 0x3f0cb275, 0x3fb2e3df, 
    0x3f219e73, 0x3f6ddc6c, 0x3e69b750, 0x3ebb8b2a, 0xbf1b0af9, 0xbf2d566f, 0xbd73883e, 0xbf731093, 
    0x3f0244cd, 0x3fac108b, 0x3f2dc445, 0x3f8d0c8c, 0x3eaa3b5c, 0x3f0a1fe8, 0xbe93bd9f, 0xbf1e2c36, 
    0x3de745d9, 0xbf6872b8, 0x3ed04d57, 0x3fbd93ff, 0x3f3eea87, 0x3f9d7797, 0xbcafb7cf, 0x3f20a931, 
    0xbf176173, 0xbf2e7900, 0x39f85397, 0xbf7922de, 0xbeb10db7, 0xbbf9ce38, 0xbf626bac, 0xbee9fcb9, 
    0x3f5e4a17, 0x3f3f7e54, 0xbf181237, 0xbf239baf, 0xbfbaec51, 0x3fa52dd4, 0xbe754f7b, 0x3ea8b450, 
    0xbf1a6435, 0xbe0883e6, 0x3f5db875, 0x3ec4fd16, 0xbf24ceef, 0xbf4adbb2, 0xbfbc06ae, 0x3fa77974, 
    0xbe27fe0d, 0x3f0f5bbb, 0xbe6d589e, 0x3d87c898, 0x3f3cca6e, 0x3ee7d61a, 0xbf00ed5c, 0xbf10fb45, 
    0xbfb6ed6d, 0x3fa343de, 0xbca7473a, 0x3ef5258c, 0xbeb288ca, 0xbd5c5cab, 0x3f690602, 0x3efefe54, 
    0xbf0f9fd1, 0xbf0d5f7d, 0xbfb3fc8b, 0x3fb83be8, 0xbe83df54, 0x3e9defe3, 0xbe904a92, 0x3d6e987d, 
    0x3f6d2518, 0x3f2bff34, 0xbeb1bf42, 0xbecc314f, 0xbfa64dc0, 0x3fcf31a3, 0xbf036681, 0x3d2e3648, 
    0xbec87a54, 0x3ea07955, 0x3f8ef9b2, 0x3f23a7c2, 0xbec8bed5, 0xbe96283f, 0xbf8dad91, 0x3fc20c8c, 
    0xbfa8a437, 0x3f481c62, 0x3ed7fd24, 0x3d160156, 0x3f821815, 0x3eeacc55, 0xbf4e6a85, 0xbf671e4d, 
    0xbf1036ba, 0xbf111bb5, 0xbf9e00cf, 0x3f521613, 0x3ea91b19, 0x3eae18e5, 0x3f1b3479, 0x3f2b0281, 
    0xbf21b665, 0xbf519370, 0xbeb6c276, 0xbf2471b5, 0xbf866d98, 0x3f56c65b, 0x3f32899c, 0x3e95f435, 
    0x3f267185, 0x3edd1817, 0xbf2a8683, 0xbf3c7953, 0xbf153cc7, 0xbf07acaa, 0xbfa99938, 0x3f66aaac, 
    0x3eaaa7ed, 0x3ed6a88c, 0x3f07ccf5, 0x3ea3067d, 0xbf0c1ae5, 0xbf253a42, 0xbf1b71b1, 0xbf3dd085, 
    0xbfb24f85, 0x3f476d59, 0x3f13c1d3, 0x3e94d583, 0x3f607044, 0x3f1cf5b3, 0xbf619240, 0xbf69c688, 
    0xbefc9f8e, 0xbf39c9e3, 0xbfca0bf8, 0x3f11f2db, 0x3f4d89d3, 0x3f034889, 0x3f494605, 0x3f46af28, 
    0xbf4c5b4b, 0xbf77a377, 0xbee31126, 0xbf3a6676, 0xbe1b13d1, 0xbf11d5b3, 0x3f812c9d, 0xbfaac40b, 
    0x3fad0e02, 0x3f433765, 0xbe31534e, 0x3eff5986, 0x3f781864, 0xbf9b3424, 0xbd7f491a, 0xbf0ed600, 
    0x3f5220b5, 0xbfc730e8, 0x3f89586a, 0x3f7272ee, 0xbd813c4b, 0x3ecd47dc, 0x3f8645b1, 0xbf81c5b8, 
    0x3ecc8fdc, 0xbe132946, 0x3f5aaa15, 0xbfb01181, 0x3f398a92, 0x3f45eff9, 0xbee3004a, 0x3dd02e5a, 
    0x3f60c61b, 0xbf9c409a, 0x3e9e1dfb, 0xbee7bfd1, 0x3ed517d2, 0xbfd62a58, 0x3f66511c, 0x3f0b4cf9, 
    0xbee80c8d, 0x3e097816, 0x3f871705, 0xbf82a6b1, 0xbe1498ff, 0xbeb6c757, 0x3ecbae17, 0xbfd1aba9, 
    0x3f4678d0, 0x3edc43ef, 0xbeec0808, 0x3e55988a, 0x3f7eb990, 0xbf9ab94d, 0xbe7fd305, 0xbedd6c0f, 
    0x3f3fc529, 0xbfe814fe, 0x3f3cf5f5, 0x3f4bbbde, 0xbf04eba4, 0x3e70b267, 0x3f86a202, 0xbfb33aae, 
    0xbd2f3253, 0xbf29b499, 0xbd5d7cbe, 0x3effae58, 0x3c9fd32c, 0xbd1a5431, 0xbea34b09, 0xbeef67cc, 
    0xbf69669c, 0x3faec468, 0xbd24c71c, 0xbddcb370, 0x3edc62e4, 0x3eb77434, 0xbe7c1894, 0xbe4f65b0, 
    0xbf0f7218, 0xbf410f3f, 0xbf4b4fc2, 0x3fac4bd9, 0x3ecdaf0c, 0xbdb969b8, 0x3ed4b7c3, 0x3ef7cdcf, 
    0x3d796c15, 0xbe97db17, 0xbe86b3e4, 0xbf27482f, 0xbf889b75, 0x3f8feeb5, 0x3e88bc08, 0xbe690271, 
    0x3cc1c230, 0x3f122658, 0xbe83fe8a, 0xbedd5238, 0x3cd678f1, 0xbf35ccfd, 0xbf832596, 0x3f97f375, 
    0x3e868fbd, 0xbf0e7ca6, 0xbe671976, 0x3f421462, 0xbe92a410, 0xbddcb1ab, 0xbdeffbff, 0xbed6ab89, 
    0xbf737db1, 0x3fcb849b, 0x3e0eb9b0, 0xbee73be2, 0xbe307a9d, 0x3f5452fe, 0x3d727e32, 0xbe521fbb, 
    0xbe5016b5, 0xbf0830b6, 0xbf4911bf, 0x3fdff32f, 0x3d150cdf, 0x3fac808b, 0x3ecc15e5, 0x3e991068, 
    0xbfe59f40, 0xbe0fa29b, 0x3f8e0ac4, 0xbd0de61f, 0x3f27340e, 0x3d088e5b, 0xbf02565e, 0x3fab4c37, 
    0x3de5d41e, 0xbddfb245, 0xbfe18120, 0xbeb3baeb, 0x3f398444, 0xbe08d1fa, 0x3f232b2d, 0xbe018deb, 
    0xbec2251d, 0x3f854c51, 0xbd19caa2, 0xbda6873f, 0xbfd3dc1a, 0xbdd47585, 0x3f6e3cc9, 0xbbb9aefb, 
    0x3f0ff58a, 0x3c75934d, 0xbeeeb7d9, 0x3f80f1ac, 0xbe08972b, 0xbe269407, 0xbfdc6d7d, 0xbf08bd7a, 
    0x3f7be3ab, 0xbe30bf8f, 0x3f1761ec, 0xbd3a709c, 0xbee87fce, 0x3f67a16f, 0xbb7e0318, 0xbde37105, 
    0xbfc0363d, 0xbeb50e9f, 0x3f41954b, 0xbdd30c20, 0x3e6f10bf, 0x3d7219ba, 0xbde8522a, 0x3f8c3c0a, 
    0x3e663f86, 0xbe18c9cc, 0xc00a670c, 0xbe8ff914, 0x3f63879b, 0xbe738f1e, 0x3e8a43fd, 0xbe925999, 
    0x3f91703f, 0x3f4dc061, 0xbf98dbf4, 0x3fd81e75, 0xbf1e6635, 0x3f1d55f0, 0x3fbc9719, 0x3f1ba2fe, 
    0xbf5a42da, 0xbf0f3900, 0x3f177a11, 0x3e753742, 0xbf81593c, 0x3fbb6833, 0xbeeafb68, 0x3ecdd86b, 
    0x3f9ab995, 0x3f505bcb, 0xbf2e0312, 0xbea1f423, 0x3e9e1dce, 0x3d1c1941, 0xbf985714, 0x3f98dadb, 
    0xbdb3c1de, 0x3ed2fbcf, 0x3f8f35c2, 0x3f1f5942, 0xbf636911, 0xbebad29a, 0x3e8c4e51, 0x3e0817d6, 
    0xbf954783, 0x3f869038, 0x3db385af, 0x3f29b875, 0x3fa827af, 0x3ea40a27, 0xbf5e433b, 0xbe3c0b04, 
    0x3f33ec49, 0xbe1ed3f5, 0xbf77276c, 0x3f7d4d89, 0xbe4f9887, 0x3f3e818e, 0x3fa71f08, 0x3ee0ff05, 
    0xbf5191c4, 0xbeb1c4e3, 0x3f98e24f, 0x3ec43f34, 0xbf88c6cd, 0x3fb2601b, 0xbe846b73, 0x3ec2df2e, 
    0x3fc2cbc7, 0x3f284f87, 0xbf69f1c6, 0xbebb6eef, 0x3f41aa3f, 0x3f528f77, 0xbfa021ce, 0xbe78a86a, 
    0xbec86ae5, 0x3ef9c8ad, 0x3f2f7186, 0x3cd59322, 0xbf22739c, 0x3e24f8e2, 0x3f18363e, 0x3f66d7b8, 
    0xbf00dae9, 0xbdbb6bfd, 0xbf3cff06, 0x3ee7143d, 0x3ec7de3d, 0x3e60c5f9, 0xbf1394d0, 0x3d3d9fae, 
    0x3e2657b9, 0x3f381799, 0xbf40a4bb, 0x3d1a2b3b, 0xbf332433, 0x3f0123c8, 0x3ec8d2f7, 0x3e1c75d5, 
    0xbf0f9650, 0xbe6e63b1, 0x3dd25bdd, 0x3f2cff0e, 0xbf0090b0, 0xbe01b95e, 0xbf678985, 0x3eb350a2, 
    0x3f0a6335, 0xbd3d26a6, 0xbf2136bb, 0xbe5a95aa, 0x3e4b860c, 0x3f035217, 0xbf35302d, 0xbcf607ce, 
    0xbf7bc2e6, 0x3d15f046, 0x3eeeb249, 0xbde725a7, 0xbf3a1494, 0xbe8a8982, 0x3e279cd9, 0x3dab3325, 
    0xbfa66d94, 0xbf23c485, 0xbf836312, 0xbe195ad3, 0x3f1ec79e, 0xbe66127e, 0xbf7400a5, 0xbe29b1de, 
    0xbeec4433, 0x3f67e601, 0xbf1784c1, 0x3f466add, 0xbfc69872, 0xbefb391b, 0x3fac5c36, 0x3c988600, 
    0xbf599c9c, 0x3f45d93c, 0xbf30a1cc, 0x3f5198c5, 0xbf3e3e56, 0x3f64ec45, 0xbf9aebda, 0xbf179b9b, 
    0x3f889b96, 0xbdd96d07, 0xbf30f8b2, 0x3f545ad1, 0xbf17367b, 0x3f8a154f, 0xbf23f778, 0x3f58ac40, 
    0xbfbce63f, 0xbf0cdca6, 0x3f8dd42c, 0x3db1bec3, 0xbf76f030, 0x3f4dd52a, 0xbf24de46, 0x3f528fb0, 
    0xbf32438a, 0x3f9ac8f2, 0xbfbf06b7, 0xbe887e2a, 0x3f8b8c57, 0x3e040fc1, 0xbf5c2475, 0x3f231efa, 
    0xbf56c86c, 0x3f233461, 0xbec9071b, 0x3f4cf1bb, 0xbf9a6090, 0xbe98cc57, 0x3faea23f, 0xbe430b1c, 
    0xbf643a41, 0x3ef32303, 0xbf32a439, 0x3f69a8de, 0xbf582599, 0x3f37212f, 0xbfa82e5b, 0xbf1452bd, 
    0x3f901033, 0xbe44b1de, 0xbf44ea11, 0x3f0ca0ba
};

static const uint32_t _K19[] = {
    0xc00fa3f5, 0x3f85a8d0, 0x3e3940d0, 0x3fb2da35, 0x401346f0, 0x3e19add3, 0x400473d8, 0x3f61301f, 
    0xbf97d75e, 0x3f007947, 0x3f1469c4, 0xc00d941c, 0xbfb56f20
};

static const uint32_t _K22[] = {
    0x3be2444b, 0xbbaa274c, 0x3c61fb80, 0xbb942506, 0x3ad223de, 0xbc0a42ae, 0x3a7588ef, 0x3c0c3d20, 
    0xbbde22fd, 0xbb9becec, 0x3bfa2978, 0x3b3e6a55, 0xbbca3e21, 0x3c3069cd, 0xbbc22cf9, 0x3cae882d, 
    0xbbb51780, 0x38cd5f72, 0xbcc69d15, 0xbad6518e, 0x3ba5ad32, 0xbba8a0c2, 0x3b943e96, 0x3bf9e02f, 
    0x3b94ef8d, 0x3b3e3926, 0x3c351bbd, 0xbb43a5da, 0x3cc5ebb5, 0xbbc2cbe3, 0xb935efd9, 0xbca5c534, 
    0xba6ffbbc, 0x3bce86be, 0xbbdcf5a6, 0x3b579dcf, 0x3c2ed0dd, 0x3b408a6b, 0xbb50c108, 0xbba6d170, 
    0xbbc83371, 0x3ca879b8, 0x3c2bdf0d, 0xbacd5bd6, 0xbb358f44, 0xbb541bf6, 0x3c13a869, 0xbc447816, 
    0x3b37228a, 0x3c1727cc, 0xbbbe66f9, 0x3b40d5fc, 0x39a19f86, 0xbc60695a, 0x3c4f1797, 0xba9552d7, 
    0xbb9eb3ff, 0x3b85419c, 0x3a1c892b, 0x3bd964fc, 0xbb8936be, 0xba761dae, 0xb9aee31a, 0x3c1cc794, 
    0x3c5023fe, 0x3ad0838a, 0x3b13bba2, 0x3cda18ae, 0x3bb8c65a, 0x3be65387, 0xbb6eca02, 0xbc1eab0d, 
    0xba185be5, 0xbb398896, 0x3becbc56, 0x3cff21f7, 0xba8183a7, 0x3ba025fd, 0xbadb075f, 0xbb549787, 
    0x3c4ce645, 0x396eb4e5, 0x3b5a7a00, 0xbbcb188c, 0x3b74dea6, 0x3c89ff05, 0xbc111c71, 0x3b61c30d, 
    0x3b40c8cd, 0x3b16ed67, 0xb7ca4289, 0x3afac754, 0xbb910c24, 0x3c2cc8bc, 0xbc041d43, 0x3b8684a3, 
    0x3c3b25d4, 0x3c89f9ef, 0xbba0a9fd, 0xbbaa8028, 0x3a535e2b, 0x3b96ef58, 0x3bfad650, 0x3c3cc7f7, 
    0x3bb8de7b, 0xbb15a162, 0x3bf26d2a, 0xbca56b90, 0xba983df1, 0x3c09cd8d, 0x3cdca05f, 0xbc038006, 
    0xbb7572e6, 0x3b17d5af, 0xbbbb5a03, 0x3c8a10f0, 0x3c7978ab, 0x3bdc2040, 0x3b8d9d1c, 0xbb503a65, 
    0xbb35a0dc, 0xbbd95809, 0xbba154f8, 0xbb3346f5, 0xbc00aaa4, 0x39fe13ee, 0x3b90baf4, 0xbb6d8727, 
    0x3b5330e9, 0x3bf49b34, 0x3c54c6c5, 0x3af90826, 0xbba8b586, 0xbaf6bda9, 0xbc01c08b, 0xbb8bdf80, 
    0xbaedc3bf, 0xbbb2c5d5, 0x3aad8323, 0x3ba72c07, 0xbb8154f1, 0x3ba0d891, 0x3bc46856, 0x3c23f022, 
    0x3b591eb6, 0xbbe3f8e7, 0xbafbdba2, 0xbba86c7d, 0xbab4f16a, 0xbb4ce156, 0xbbd629e0, 0x3a685e26, 
    0x3b84fff6, 0xbb83ca4a, 0x3b262dc1, 0x3ba35dab, 0xba8082af, 0xbbef0686, 0xbbce55db, 0xbb38524f, 
    0x3a2d50c9, 0x3b028123, 0xbb44bc2b, 0xbce6c2d0, 0x3b5238c0, 0xbc08fca9, 0x3c152ade, 0xbbaf8deb, 
    0x3c0dac03, 0x3abe4f9d, 0xbc0e4790, 0xbc3cc296, 0xbb85610c, 0xb98b585b, 0x3aa6a810, 0x3adbd533, 
    0xbc9d1045, 0x3b8b949f, 0xbc1c7bf2, 0x3b871a5c, 0x3b20291c, 0x3c370034, 0x3b26325f, 0x3b8e1905, 
    0xbaec8d42, 0x3bfc6089, 0x3c253178, 0xbbe52425, 0xbc9641cd, 0xbd0c9fd5, 0x3c1e6e08, 0x3aaa2b33, 
    0x3d21bd69, 0xbc696806, 0x3bf30b66, 0x3b1341f8, 0xbbb301fd, 0x3baba75c, 0xbc1393a4, 0x3c39e5e0, 
    0x3c98bd7c, 0x3c2cfca8, 0xbbb416cd, 0x3b5d96cb, 0xbc321d06, 0x3c0de7e3, 0x3bafc9db, 0xb719eaef, 
    0xb9ab0ecb, 0xbc04a88b, 0x3c304643, 0xbc3773f7, 0x3bcbd46e, 0x3cc155f0, 0x3c9474cd, 0xbc93b850, 
    0x3c00275a, 0xbbe64e39, 0x3c2a0847, 0x3b0d10fd, 0x3c3af33b, 0x3befdc75, 0xbbd99b63, 0x3c24d116, 
    0xbc286237, 0x3c550933, 0x3ca3cbbd, 0x3c83267b, 0xbc901b71, 0x3c037403, 0xbbe0e071, 0x3c665f5b, 
    0x3bced441, 0x3bdf7247, 0xbc1ad34e, 0xbcde7fba, 0xbacd8f4c, 0xbac9902f, 0xbc8cf80f, 0xbaa0dd0f, 
    0x3c82bbb2, 0x3c47a9d8, 0xbb3d0228, 0xbc014ce8, 0xbc5f73ca, 0x3b83f4d9, 0x3baf5c7f, 0xbbcf812b, 
    0xbae8fd3e, 0x3b98aa6a, 0x3ac015fb, 0x3aa036cd, 0xbc08e4b9, 0x3ba393bb, 0x3c0871fb, 0xbb3417f0, 
    0xbabf0698, 0xbb20ddae, 0x38d38488, 0xbb72fcbe, 0xbbb56d23, 0xbb54d81b, 0x3975230e, 0x39f94c93, 
    0x3b0d8e6d, 0xbc0b564c, 0x3b99e737, 0x3bd4470d, 0xbadee8fc, 0xbb427cc2, 0x3a55c059, 0xbb55d928, 
    0xbb8a6920, 0xbd32329a, 0xbc043034, 0x3d180dcc, 0x3c65b66c, 0x3bb418a3, 0xbcc43e65, 0x3bb2ef6d, 
    0x3c6ce423, 0xbc9b11b0, 0x3c7c701b, 0x3c3ec04a, 0xbc433461, 0x3c4abcb4, 0x3ac9e054, 0xbc4c6bfb, 
    0x3b28e642, 0xbbdd48fd, 0xbc744e4f, 0xba942ee1, 0x3c64c0bf, 0xb8d366b4, 0x399a394b, 0xba4c3009, 
    0xbc8d2c52, 0x3c6f668f, 0x3c83ddc0, 0xbcd2e4d1, 0xbbcce7bd, 0x3c60c887, 0x3bb1497f, 0x3b63286e, 
    0xbb2a3bd9, 0x3c413e34, 0x3b810395, 0xbbcda13b, 0x3c25a4f9, 0x3b899a65, 0xbc012988, 0x3c42adce, 
    0xbcc9a869, 0x3c4d0d26, 0xba3be84e, 0x3ae48e81, 0x3b3e9ebd, 0x3c298a74, 0x3ce6fe75, 0x3c581658, 
    0xbc182cfc, 0x3c646030, 0xbc3f8605, 0xbbbf2d11, 0x3c2ddee5, 0x3c819cea, 0x3b897054, 0x3c444615, 
    0xbc38c8a7, 0xbbc0984f, 0x3bef81fd, 0x3c177403, 0xbb9c728e, 0x3be3a9f7, 0x3c72837e, 0xbc643a93, 
    0x3c9dd090, 0x3cb629b1, 0xbd862d48, 0x3c90fc4e, 0xbc80a173, 0x3d01a7b9, 0x3cc44142, 0x3c68288b, 
    0x3c26349a, 0x3b8c8daa, 0x3bd3db90, 0x3c8d88ab, 0xbb215083, 0xbd110125, 0xbb78de82, 0xbaa339e4, 
    0x3c72cd49, 0x3b191606, 0x3add7ac1, 0x3b278cab, 0xbb269527, 0xbbc03989, 0xbca82b9b, 0x3aa2f328, 
    0x3cada23d, 0x3b8a99ec, 0xb8389e58, 0x3c9e1437, 0xba211394, 0x3b0f2763, 0xbbf6515f, 0xbb3cb73a, 
    0xbbf504c0, 0xba4ee3a1, 0x3ad4bf81, 0xbc3e2148, 0x3bc548e3, 0x3bfe7cf7, 0xbbf10e58, 0x3bc3b8aa, 
    0x3ccadc5f, 0x3ba9aed1, 0x3c9a7005, 0x3ae34692, 0x3b400072, 0x3bc8b160, 0xbb7c92c4, 0xbc3aef79, 
    0xbca4acbe, 0x3bce5393, 0x3d0a02c4, 0x3c2fc5db, 0x3baab875, 0x3cb82501, 0xbae69402, 0x3b3c87e5, 
    0xb9ac55cf, 0x3b892a02, 0x3b377c32, 0xbb0cc645, 0xbb133bf4, 0x3bd9b832, 0xbb2ad4c6, 0x3b75ea31, 
    0x39543e58, 0xbbaee909, 0xbba949aa, 0x3a0c4d24, 0x3b3738b1, 0xb9c32b40, 0x3b01775e, 0xba8e0b08, 
    0x3a44a5a5, 0xb84b5b9b, 0x3bff0d61, 0xbb3f9274, 0x3ae5ffd0, 0xbb55d49f, 0x3a4e5814, 0xbc088b6d, 
    0xbb933220, 0x3bd80e6d, 0x3b24ffe0, 0x3bec0ecc, 0x3b8fd00e, 0xbbb9d57a, 0xbbc6dfca, 0x3c1afae6, 
    0xbbb3111f, 0x3bf33629, 0x3b2caf64, 0xbc0c6fc3, 0xbc0ec346, 0x3bd47fc2, 0x3c2b21bb, 0x3ca1f04e, 
    0xbc11fc25, 0x3c9b28f5, 0x3bf11404, 0xbb11177e, 0xbce27034, 0x3c37d6a0, 0x3c9f1b36, 0x3c923042, 
    0x3b13fe20, 0x3cae6187, 0x3a0cf049, 0xbcb1f8f1, 0xbc821e33, 0x3c3bf58b, 0xbc6d1faa, 0x3b9729ea, 
    0x3b9c4c9d, 0x3b62807a, 0x3c915f5d, 0xbc1ca50f, 0xbc7f916a, 0x3b623dd9, 0x3c0bf5a1, 0xbcc28d9c, 
    0x3a315ec3, 0xbbf917d2, 0x3c992d81, 0x3c176cbb, 0x3c965eea, 0x3b5d2e04, 0x3c553099, 0x3c7e110d, 
    0xbbefe4b9, 0x3b65a275, 0xbc84d9d0, 0xbcb8e86f, 0xbb6667cf, 0xba9c4746, 0x3ae3ef2c, 0x3b542857, 
    0x3987800d, 0xbb7648d5, 0xba73da26, 0xbac0fd25, 0xba89ae29, 0x3b2e68c4, 0x3b0d660c, 0xbaf5ede7, 
    0x3b7408b6, 0xbbb47717, 0xbb89dffc, 0xb988cd16, 0x3ae9d96c, 0xbbb0f5d8, 0xbae2a2e7, 0x3a571f58, 
    0xbbbae84d, 0xbaa559eb, 0xb9f88414, 0x397a5ecb, 0xba9f443e, 0x3b6790ec, 0xbba915d5, 0xbcc184cf, 
    0xbb9d1637, 0x3b1042c8, 0xbcbebd1f, 0x3bb84f2d, 0x3b8949da, 0xbb84a2d4, 0x3b424ac2, 0xbc023715, 
    0xbc0c1fe4, 0x3a3443c0, 0x3c12e7c0, 0x3a980cff, 0xbb68f5f2, 0x3ab9ff40, 0x3b977bf6, 0xba6666a1, 
    0x3b191ef3, 0xbb6ce6de, 0x3b9694ef, 0x398b79c6, 0xbb697537, 0x3b466651, 0xbae7c42f, 0xbbd94192, 
    0x3ab12fab, 0xbb882735, 0x3b41d4e0, 0x3bb95f06, 0xba5cf89b, 0x3b8f1880, 0xbb93468f, 0x3b44718e, 
    0xba7da40d, 0xbbec9a2c, 0x3baa79f6, 0xbb3ebdc4, 0xbc258cad, 0xbad4f742, 0xbb729a98, 0x3b50eb97, 
    0x3c0ce943, 0x380f83f4, 0xb993f9e8, 0xbbc1f60f, 0x3c0cf74c, 0xbb8a5c25, 0xbafa9fc7, 0x3bba8445, 
    0xbb958ac5, 0xbc39071c, 0xbbeba3c4, 0x3b5e1fce, 0x3b996efd, 0x3af1b50f, 0x3c65350f, 0xbc4d31aa, 
    0x3ae72472, 0x3c4e16a9, 0xbc342766, 0x3b545cce, 0x3b4200b3, 0xbb9b4954, 0xbc6e833b, 0x3b9a9140, 
    0x3b637177, 0xbbb539de, 0xbbf4d062, 0x3af8c88a, 0xbc15a5e2, 0x3b9a6fab, 0x3bfeb87a, 0x3b459e69, 
    0xbb823c6b, 0xbbb4282d, 0x3b35c885, 0xbbefff94, 0x3b11cc65, 0x3c1314ad, 0x3bc39506, 0xbc372b99, 
    0x3c4aa67e, 0xbc7a4024, 0x3c58a68f, 0x3c2468d9, 0xbc735450, 0x3a9b0a9c, 0xbb3e384e, 0x3afa8ec8, 
    0xbc43102d, 0x3c3eabc5, 0x3a1c5db4, 0x3c0c57d8, 0x3b9c3873, 0xbbda9f29, 0x3b89e440, 0xbc6f8622, 
    0xb8fb8aa3, 0x3aa5554b, 0x3a8a19d6, 0x3bbd3371, 0x3b1a1e0a, 0xbad8159d, 0x3c05581a, 0xbc03d3bd, 
    0xbadbc1a8, 0x3a2509e4, 0xbca468b1, 0x3b11d1e2, 0xbc11df4e, 0x3bc08279, 0xb840522b, 0xbbdab75c, 
    0xbb3a0d38, 0x3bb774e5, 0x3afa13df, 0x3c200543, 0x3a21690a, 0x3badecb0, 0x3aba9a39, 0xbc0784bc, 
    0x3a9b1892, 0xbc5fac02, 0x3a517f8d, 0xb9b20cbc, 0x3b24bc92, 0x3b704708, 0x3ab9c43d, 0x3aa1a5ff
};

static const uint32_t _K25[] = {
    0x3f61a3d5, 0x403753a4, 0xc06cfe24, 0xc0324989, 0x403ba08c, 0x3eed0274, 0xc0728a6f, 0xbf40dc1c, 
    0x3f444173, 0x3f93235d, 0x400382e3, 0xbe69c658, 0xc0417e15, 0x4002ad10, 0x3fcfbfd4, 0xbfde086d
};

static const uint32_t _K29[] = {
    0xbd890d88, 0x3f0b1c7f, 0xbfdb8eb5, 0xbf36a2a6, 0xbf5e69aa, 0xbeffadc7, 0xbc8cb4c7, 0x3f233b16, 
    0xbe881aec, 0x3d171c63, 0x3f4e5a02, 0x3f0ed0d2, 0xbe73ca3d, 0x3ef6be78, 0x3e47111d, 0xbf7e7c56, 
    0xbde67e29, 0x3f19b6ab, 0xc00a58e2, 0xbf18f2d8, 0xbe327dbc, 0xbe9cf9fe, 0xbe6b0adf, 0xbdbb02bd, 
    0xbddf09c9, 0x3e8180b9, 0x3f29c616, 0x3e90b343, 0xbea1a7dd, 0x3e97c503, 0x3ebb3f91, 0xbf2de638, 
    0xbf32704c, 0xbd962871, 0xc01f5a77, 0xbf06b4bc, 0xbf83df1d, 0xbf03a97a, 0xbe062a6a, 0x3e127945, 
    0x3eda7854, 0xbe629a0e, 0x3f40126a, 0x3f9a6942, 0xbcc7e338, 0x3dab49d5, 0x3f84e458, 0xbf3a30c2, 
    0x3e13818e, 0x3e823e17, 0xc01f5eed, 0xbf1e8802, 0x3f50c561, 0xbf4aca6b, 0xbf9854ed, 0xbea3c572, 
    0xbf384842, 0xbeaefa38, 0x3f3522eb, 0xbeb57ed3, 0xbf757282, 0x3eb856fd, 0xbd36d7ad, 0xbf18ae0e, 
    0xbe6d85a0, 0x3f4a3e5a, 0xc01501ef, 0xbf8612f4, 0x3fc16e80, 0xbfae5935, 0xbf9b8bf0, 0x3e85e8ab, 
    0x3f0b025c, 0xbe459fe5, 0x3f9617e1, 0x3e80cb10, 0xbf4a858f, 0x3f00951d, 0x3edd3b55, 0xbf3dc62d, 
    0xbedd57f3, 0x3f08214c, 0xc02e6b5e, 0xbf335ded, 0x3fa10b6e, 0xbf93d15c, 0xbf952cc1, 0xbdc808dd, 
    0xbf214e56, 0xbf159b64, 0x3f1fab24, 0xbed2cef2, 0xbf380244, 0xbda47939, 0x3f09970a, 0xbf1b6f0c, 
    0xbeed792f, 0x3f856819, 0x3b2c8d87, 0xbdaa79df, 0xbf822388, 0x3e81a8c2, 0xbf9475db, 0xbe3228e3, 
    0xbf75424f, 0x3eab5822, 0x3f1b2b7d, 0x3fc3fa03, 0xbea99275, 0xbe1a5ddc, 0xbdc7850c, 0xbed7265d, 
    0xbf9ca593, 0x3ef593ac, 0xbebe86e6, 0x3e0054db, 0xbeca84e5, 0x3f36dee4, 0xbf784713, 0x3e1b0f88, 
    0x400a986c, 0xbf1e42a5, 0x3f0bdbca, 0xbfdba37d, 0xbf07997d, 0xbf65be9f, 0xbf249d1f, 0xbffb7cad, 
    0xbf6541e9, 0x3f764cbf, 0xbf02c159, 0x3e5ae9ca, 0x3ec84bde, 0x3ef654df, 0xbf901bcd, 0xbfb86e9c, 
    0xbf51f717, 0x3f663781, 0xbee77baf, 0xbf964a6d, 0xbf59e39d, 0xbebcd80b, 0xbfceb589, 0xbeb9f9b6, 
    0xbc0a702e, 0x3f0bb947, 0xbdfd3e83, 0xbf3796ba, 0xbe77052a, 0xbefcfe63, 0x3f89deb9, 0x3f43a0f1, 
    0x3e810b4d, 0xbefa9471, 0x3f991f9a, 0x3fa6c7a4, 0x3ec22d5d, 0x40188c88, 0x3f74142e, 0x3f679a88, 
    0x3f203c33, 0x3f95769c, 0x3f215016, 0xbe556ff8, 0xbe383b1d, 0x3e461b29, 0x3f1b266f, 0x3ed1a1c9, 
    0xbf70af1f, 0x3ebc1a5f, 0x3e5e1976, 0xbf54c6c5, 0x3f5b110c, 0x3e99a02b, 0x3fcf2d12, 0x3ef40b33, 
    0x3f9aa2db, 0xbdc08f05, 0xbf82948e, 0xbea9f26d, 0xbfed4739, 0x3f6751ea, 0x3fc8753c, 0xbfaf5890, 
    0xbfb01972, 0x3ef86af3, 0xbf957d13, 0xbf480fb9, 0x3f07dce5, 0xbfaffd48, 0x3f61b338, 0x3f86aa4c, 
    0x3e226d04, 0x3e8f9248, 0xbf73994c, 0x3f870a78, 0xbf5687f1, 0x3e58cd3a, 0xc003d54d, 0xbe90f458, 
    0xbe41f25e, 0x3f3bcfd9, 0x3e114238, 0x3dd7e4e9, 0xbf4c569a, 0xbe8b2204, 0xbf018c7c, 0xbef9ed64, 
    0x3e448be2, 0x3f321f9a, 0xbf87b4cb, 0x3f8f6faa, 0xbe2f06a5, 0x3f0133c4, 0xc01c0bbb, 0xbf58e627, 
    0xbe8705c3, 0x3f13d2dd, 0x3f055ad8, 0xbfd0f10a, 0xbf70349b, 0x3de2adb7, 0x3e1c709c, 0xbe91511d, 
    0x3c3aa291, 0x3f9cb9a2, 0xbf843313, 0x3f95b6ed, 0x3f3d58da, 0x3e2f287a, 0xc01d6a40, 0xbf4fa3c2, 
    0x3f8d1d50, 0x3fc75d61, 0x3f409e9b, 0x3e61b3f5, 0xbf65dc8b, 0xbbb6388e, 0x3f07b37d, 0xbf0eb832, 
    0x3ea9727e, 0xbe5a5568, 0xbfafe0a6, 0xbe912575, 0x3ef250a2, 0x3deca177, 0x3eb0eb98, 0xbedbfb67, 
    0x3ce2f8db, 0xbec8c1cd, 0x3e425cba, 0xbf89fe2c, 0x3e0c9e19, 0xbed20b54, 0xbf4d8987, 0xbe576cae, 
    0x3e8229f5, 0xbe5d8c94, 0xbfc80670, 0xbececfd2, 0x3f7880a6, 0xbd179611, 0x3f0f6190, 0x3e24055d, 
    0x3eb6ebb9, 0x3e8d856a, 0x3ddac6a9, 0xbd106427, 0x3ec0a5d3, 0x3c655276, 0xbf873adf, 0xbeb2ecf1, 
    0x3ebff9c5, 0xbef69119, 0xbfc04eb5, 0xbea1b03c, 0x3dcf6766, 0xbeac8613, 0x3f1218f0, 0x3ec2d880, 
    0xbfd0380b, 0xbe2f2f38, 0xbeb76d28, 0xbe695ecb, 0x3ebbcd42, 0xbc9b9330, 0xbfae96bf, 0x3eec5aa3, 
    0x3d0d8a74, 0x3e816919, 0x40056162, 0x3f1f5a87, 0x3f4fbe89, 0xbd6df223, 0x3cd44c80, 0x3f6825a2, 
    0x3e031f64, 0x3dc19e3d, 0xbdc15878, 0xbe13df8d, 0x3eade53b, 0xbf0ee075, 0x3e53843b, 0x3f2cd4ce, 
    0x3ed62ead, 0x3e59e6ca, 0x40159002, 0x3f33f8fe, 0x3e95ef1d, 0x3eb0fe2e, 0xbe12f80b, 0x3f2d6697, 
    0x3d3545f1, 0x3e92ec69, 0xbf4a8c09, 0x3f58b7bc, 0x3e9a35fd, 0xbfa4c868, 0x3e02ec2f, 0x3f009524, 
    0x3f7b0b3c, 0xbdbc6caa, 0x40115469, 0x3f33ee6a, 0xbef750fc, 0x3f651a03, 0x3e1d3019, 0xbf34fee0, 
    0xbfbf5c1a, 0x3e8ff80e, 0xbff0a0c0, 0xbfb9145d, 0x3e9edb60, 0xbffcd55f, 0xbf1e58da, 0x3f1ddabe, 
    0x3f058a3b, 0xbdffdce9, 0x3fcdaf99, 0xbe86e854, 0xbdb0616a, 0x3f59fd2b, 0x3f3b0d53, 0x3f7950dc, 
    0x3cfc8209, 0x3eb65da4, 0xbf5367d3, 0x3f5e4039, 0x3f71ccfd, 0xbf3333e9, 0xbdf7c57d, 0x3fa48354, 
    0x3f01c6fc, 0xbe20a71e, 0x3f8f5497, 0xbe753e24, 0xbdec26c9, 0x3f918d29, 0x3f9e0b04, 0xbf43abdc, 
    0xbf59b39b, 0x3ed57019, 0xbf8dc434, 0xbfbf0ba0, 0x3f25aea6, 0xbf4b89f0, 0xbfb7a702, 0x3f6393c3, 
    0x3f5ce96b, 0x3df9c3fa, 0x40048fda, 0xbee8c0e6, 0x3f6bb7b6, 0x3e6ace70, 0x3f4c583c, 0x3efc7118, 
    0x3f624609, 0x3ebd3f4d, 0xbe57f082, 0x3f0d0462, 0x3ecda5f7, 0x3baccb6c, 0xbfe6f398, 0x3d9e6fb5, 
    0xbf4109a1, 0x3f7f4484, 0xbfddc4c5, 0x3f446e0d, 0xbecd5ef6, 0x3d649ef3, 0xbe899991, 0xbf7d48cd, 
    0x3ee2e180, 0x3ebc192f, 0xbc0ce239, 0x3f93fd5f, 0xbe0ab4fa, 0x3f9e9f85, 0xbecf4ccb, 0xbda64ab2, 
    0xbfccbdcf, 0xbbf64d85, 0xbf849ed6, 0x3f2676a7, 0xbea99045, 0x3e686a9f, 0xbe7147fc, 0x3fe8c11d, 
    0x3fbc600c, 0xbf44b62a, 0x3e2c27df, 0x3f2bbb66, 0x3ee7c9ed, 0x3f99b19b, 0x3f1eddb5, 0x3d2fbdac, 
    0xbf1ed170, 0x3f84d40b, 0xc013f684, 0x3fca214a, 0xbe4d6863, 0x3f06f1e4, 0x3e03a2a5, 0xbf989549, 
    0xbfc2ed39, 0x3f5ffab2, 0xbf5288f8, 0xbfdb09d5, 0x3dea61ec, 0xbe152264, 0x3f8037d1, 0x3f2956fe, 
    0xbf2173f3, 0xbf67fe80, 0x3f53ffc7, 0xbf7475b0, 0xbf14d36d, 0x3e58bf5a, 0x40125510, 0x3ee66204, 
    0x3e570f8f, 0xbf5f047a, 0xbe3337ee, 0xbda607b5, 0x3f8a7ac4, 0x3f040e3d, 0xbe330400, 0x3ea0b320, 
    0xbf2c9683, 0xbf8e5397, 0x3f52a26b, 0xbf809371, 0xbf87c4fc, 0x3e94412f, 0x40151128, 0x3f600ec0, 
    0xbe427a5f, 0xbf95fc06, 0xbe969ea9, 0x3fbde98e, 0x3f6b1491, 0x3f182ce4, 0xbe9bb12a, 0x3f08f312, 
    0xbf52fbc3, 0xbf2c150a, 0x3f62f01d, 0xbf7761a2, 0xbf1044fc, 0x3ebb7077, 0x4010821f, 0x3fb12e47, 
    0xbe299c13, 0xbfdac88a, 0x3eaa1ed3, 0x3f0d6d73, 0x3f8f3891, 0x3f57c653, 0xbdd872f4, 0x3ee5a4bf, 
    0xbfbd65a0, 0xbea71160, 0xbdbaf33f, 0xbfa9755e, 0xbf8f3e68, 0xbdc0a5eb, 0xbe7b8f15, 0x3faa4add, 
    0xbfb779e5, 0xbf29fa0f, 0xbd93e8fb, 0xbf3f0479, 0xbcf1bb9b, 0x3fc263f7, 0xbf07f315, 0xbe682650, 
    0xbe9116c2, 0x3fc33940, 0xbdce71c6, 0xbed4c2ad, 0xbdaf6ec8, 0x3fd31807, 0xbe6bdc24, 0xbecac0c9, 
    0xbfbb6fc9, 0x3cd88024, 0x3d974335, 0xbf5f500c, 0xbeef3d28, 0xbd9fad24, 0x3f8d5137, 0xbde0ce01, 
    0xbf15208b, 0x3f8a07b3, 0xbf3355a8, 0x3eb36b9b, 0x3e8c7d1f, 0x40292cb8, 0xbe3e0194, 0xbfe1ceaf, 
    0x3ea1ff55, 0xbebd4953, 0xbf02da09, 0xbdec90b0, 0xbec3093f, 0xbfa839c4, 0x3f461a65, 0xbf6fd36a, 
    0x3c10456d, 0x3de78447, 0x3fc7ea6c, 0x3e3514a7, 0x3f2a0fbb, 0xbdbaede3, 0xbf337af4, 0x3d96d0b0, 
    0x3e5f99b3, 0xbf4b0b17, 0xbdfca748, 0xbe2d644c, 0xbf15b7dc, 0xbe0422cb, 0x3f7b2c99, 0x3f42735b, 
    0x3ea12992, 0x3ea5d6f1, 0x3fb5ebd6, 0x3e792794, 0x3f360400, 0xbef4f892, 0xbf5057c2, 0xbf21bbc6, 
    0x3e2c0d75, 0xbf113bc5, 0xbf671248, 0xbf276c5d, 0xbf36dca0, 0xbf9faf04, 0x3f476ca7, 0xbed4a0d3, 
    0xbd37532a, 0x3e89ad36, 0x3fa396d9, 0xbe976357, 0x3e957d2c, 0xbf55af08, 0xbf88e6c3, 0xbf332529, 
    0x3db512b3, 0xbf6070e1, 0xbf3876c4, 0xbe7125de, 0xbf3b58cb, 0xbe9f4a6e, 0x3eff7a04, 0x3ddbc57f, 
    0xbf75f1f0, 0x3f56521b, 0xbf14a5fa, 0x3e59752b, 0xbf8d431f, 0xbe056508, 0xbd2802f7, 0x3eb677df, 
    0xbd946846, 0x3f91d4a5, 0xbeb1675e, 0x40101d56, 0x3e96e762, 0x3ec59c0e, 0xbb8f4988, 0xbeb39853, 
    0xbf8a2ab4, 0x3efffbb6, 0xbf283581, 0x3f507e0f, 0xbf750fdc, 0x3da7a685, 0x3ddd24ea, 0x3fadbf15, 
    0x3e4c16a6, 0x3e55e7b0, 0x3d2ee2f3, 0xbe9f3208, 0x3ec1c117, 0x3f51a74a, 0xbe52afe5, 0x3e3065d1, 
    0xbfa4bc47, 0x3f6fdb7a, 0xbf5db264, 0x3ffb2ed5, 0x3f1f78fc, 0x3d4060ca, 0x3d6bcf63, 0x3c94f1e3, 
    0xbdd17948, 0x3f522ddc, 0xbd324fdb, 0xbf2996a8, 0x3ea14c12, 0x3ee5d02e, 0xbeafcfac, 0x3e38074b, 
    0x3f2e159f, 0xbdbdb89b, 0x3ed2ba88, 0xbf90c730, 0x3ef397d7, 0x3e2f38dd, 0x3f495af3, 0x3faf1615, 
    0xbeb3b2e9, 0xbeb284c0, 0xbf2eac6d, 0xbeebada8, 0x3e8129c1, 0xbfa89127, 0xbd9e21a1, 0xbec0a9fa, 
    0x3eaa8f9c, 0xbe666d8d, 0x3dfc109e, 0xbf9cee6e, 0x3ef11520, 0xbda86994, 0x3f81b917, 0x3f160d6d, 
    0xbf3212c8, 0xbead9a3a, 0xbebde4d8, 0x3f019335, 0x3c9bc302, 0xbf5aa9f1, 0xbdd10a83, 0xbf09fc41, 
    0xbdb98e24, 0x3eed6441, 0x3f049538, 0xbfdffe7c, 0x3fbf7798, 0xbee5c21e, 0x3f4adaa0, 0x3f3d1e38, 
    0x3eb95472, 0xbf563e50, 0x3d49d658, 0x3eec7747, 0xbe14f2ec, 0xbf6d3135, 0xbe554edf, 0xbfad00aa, 
    0x3dfbd135, 0xbd8f8f19, 0x3e7481ca, 0x3f047577, 0xbd7f7d72, 0x3e547771, 0xbfcf4908, 0xbeac67e9, 
    0xbe46d128, 0xbf50a042, 0xbe89e817, 0xbf88685c, 0xbef5524d, 0xbeb2e623, 0x3eb22738, 0x3ef4670d, 
    0x3f5511c3, 0x3f65289c, 0x3d765e76, 0x3f2d011c, 0x3eb9d6ee, 0x3e56669b, 0xbfde898e, 0xbfa9adea, 
    0xbf20de30, 0x3f080a55, 0xbb2cf01b, 0xbf1467c0, 0xbf415460, 0xbf1a4199, 0x3f463f77, 0x3ea0ac56, 
    0xbdf5138b, 0x3e715d20, 0x3ee6e018, 0x3e26d6dd, 0xbdd1d173, 0xbe9ba6bf, 0xbfebebef, 0xbf75afcb, 
    0x3f9fd059, 0x3de09302, 0xbd548e38, 0x3f03135d, 0xbefb0d9f, 0xbda12d1d, 0x3f2ad7e3, 0xbe88245c, 
    0x3f9bf672, 0xbf03ac56, 0xbfffb9a3, 0x3e9be6bb, 0xbe8a2f08, 0x3fb2dca4, 0x3f2bdd69, 0xbfefdfc8, 
    0x3f9c37d6, 0xbdd81ea7, 0x3f07614d, 0x3f44e4aa, 0x3e9d0288, 0xbf02f19a, 0xbd06ae59, 0x3f615177, 
    0x3c54ac7b, 0xbf89ec69, 0xbfcdfe98, 0xbf50e2b3, 0xbdb6f2aa, 0x3f2ec187, 0x3eb4fa1c, 0x3f1d3950, 
    0x3f8f9a5d, 0x3e534005, 0x3f22c3e3, 0xbf2d70f7, 0x3f53ee4f, 0x3f86efa4, 0xbf60d3fd, 0x3e28d5d7, 
    0x3f606dad, 0xbe24cd6e, 0xbfe5dc82, 0xbf84fb3a, 0x3eaef2d7, 0x3e75eecc, 0x3f1cabcf, 0xbc5d3ae9, 
    0xbfa598a9, 0x3fa3600d, 0x3d22cace, 0xbf859873, 0x3ecc4ba8, 0x3efe258b, 0xbd0356bc, 0x3f635497, 
    0x3f280615, 0x3f0fa61b, 0xc008441c, 0x3dfac10a, 0x3e0c144a, 0xbd3a0575, 0xbf55cd0f, 0xbe883131, 
    0xbe832090, 0x3e8821a2, 0x3e2ec476, 0x3f539817, 0x3e4316f0, 0x3de57234, 0xbf2e4954, 0x3ea9d114, 
    0x3f3d04d1, 0x3f5cabf0, 0xbffdedf2, 0xbd92b5c1, 0x3f87094e, 0xbe988a93, 0xbf0d2cfb, 0x3ea19ed4, 
    0xbe6ef933, 0x3f285f28, 0x3edf6e3e, 0xbf65a5ee, 0x3eaf39c9, 0x3f1442b2, 0xbf13a138, 0x3ea12b65, 
    0x3f280b9c, 0x3eff5342, 0xc00d18ea, 0x3e6f841a, 0x3f0f8c18, 0xbd45b8ac, 0xbf1a4d1f, 0xbe6b3125, 
    0xbf012e4d, 0x3f43a086, 0xbea21a71, 0xbee9081b, 0x3f04e3ea, 0xbde1f064, 0xbf005293, 0x3f14db58, 
    0xbd80c813, 0xbe0d6618, 0x3f54c7c8, 0xbf2e7019, 0x3ec13d64, 0xbf1143c8, 0x3feafb3b, 0x3f9e32cc, 
    0xbf213e01, 0x3f2b20d0, 0xbf25e996, 0xbef4ab76, 0x3eaabcfd, 0xbe5b13d2, 0x3f233cb5, 0xbf738588, 
    0x3dcdd49d, 0xbb99054a, 0x3f2ae67c, 0xbe4ade6a, 0x3e4d7f6c, 0xbecacfb1, 0x3fad9649, 0xbf1b4ba4, 
    0xc016b27d, 0x3f37ae3e, 0xbf2bf367, 0x3fa51f74, 0x3e85dfab, 0x3e4d1764, 0xbc8a2623, 0x3fad8f61, 
    0xbf315387, 0xbf3efeb9, 0x3f8aa3bb, 0x3dbff270, 0x3c7da14c, 0xbe112a93, 0x3f906262, 0x3f72a9ed, 
    0x3f941a72, 0xbfc9fdb9, 0x3f332147, 0x3fc8b6d5, 0x3f613c07, 0x3eb66343, 0x3f82e6aa, 0x3f4a26a0, 
    0x3e9c5129, 0x3e082303, 0xbe86f516, 0xbec24200, 0x3f94d6b9, 0xbeee1b83, 0xbee135ab, 0x3f2c3572, 
    0xbe498b98, 0x3ef115dd, 0xbf65b41a, 0xbefc0d3b, 0xbdafcf8b, 0xbfa76962, 0xbd76437a, 0x3d63493b, 
    0xbf6e00b5, 0xbf3879ce, 0xbf1080c3, 0xbddef4dc, 0x3fa07dc1, 0xbf27a972, 0x3da5bc89, 0x3f7debea, 
    0x4010fd73, 0x3d1c565e, 0xbf52c198, 0x3f8d6d93, 0xbd2d0257, 0xbf629c37, 0xbf809f3e, 0xbe5a0790, 
    0xbf78358f, 0xbf28e69e, 0x3e5cc7cd, 0xbe661010, 0x3fb9a993, 0xbf9b67f5, 0xbda51c60, 0x3fd6434a, 
    0xbd16916f, 0xbed7c2be, 0xbf331192, 0x3d4146ee, 0xbe6d4cdc, 0xbe427d32, 0xbf307ac1, 0x3f5e27f6, 
    0x3c6c4264, 0x3ecd890f, 0x3feda8da, 0x3ee17f85, 0x3debbd7c, 0x3e5e4caf, 0x3d1d13e9, 0x3eb1caf5, 
    0x3f85dbbc, 0x3e9e7bed, 0x3f045836, 0x3fcbe551, 0xbd9cb21c, 0x3d31ef6d, 0x3fd81f27, 0x3e3048db, 
    0x3d8d6aea, 0xbbe8c913, 0x3ff9818d, 0x3e7ef8ab, 0xbf06f94d, 0x3ef24bb2, 0xbee3b13d, 0xbd64a071, 
    0x3f833459, 0x3e49644d, 0xbe0b86a6, 0x3f09cb95, 0xbda9297c, 0xbed0af18, 0x3fa746c4, 0xbe214256, 
    0x3e0c27d5, 0xbeb87731, 0x3ffb095a, 0x3e53badf, 0xbf8670ff, 0x3e855f7f, 0x3b7ebd9c, 0xbd18723d, 
    0x3eb32942, 0x3ee3d7c1, 0xbe112e14, 0xbdbba9ac, 0xbe7cc9fd, 0xbebb8d34, 0x3f9ab136, 0xbee77075, 
    0x3ef441fb, 0xbe4a13fe, 0x3f546373, 0x3dd45432, 0x3f0beaaf, 0x3d81345e, 0xbf6b8d81, 0x3ec22619, 
    0x3d8ed427, 0xbf2432cb, 0xbf2f438e, 0xbfbe8fc1, 0x3d256916, 0xbf7dd666, 0x3e71e19f, 0x3f24aa27, 
    0xbdf9ddb6, 0xbf002485, 0x3f072c6c, 0xbd9ade75, 0x3eeb1d1a, 0xbe94fb06, 0xbf4a342f, 0xbc1e9f53, 
    0x3f091ab2, 0xbdacb040, 0xbecd6eb9, 0xbf3611a7, 0xbeb04bbf, 0xbf571142, 0x3cd612c5, 0x3eb95458, 
    0xbe495f15, 0x3ec70567, 0x3f876d47, 0xbf4298a7, 0x3fa73588, 0xbf674af4, 0xbfae7fa0, 0xbd93828a, 
    0xbdeb80e5, 0xbf200de7, 0x3dd913fc, 0xbf118ada, 0xbe6390c7, 0x3d32934d, 0x3ebba360, 0xbdd67a3e, 
    0xbf636313, 0x3eca1a33, 0x3fff79d7, 0x3ea71b10, 0xbe3f4e3e, 0xbe53dd9e, 0x3e22355d, 0x3f5419b1, 
    0x3edc0163, 0x3e1e2291, 0xbf0307e1, 0x3ef54fa8, 0x3e48b8a9, 0x3f194f13, 0x3dd7033c, 0x3e984f09, 
    0xbe7826bf, 0x3eb257f1, 0x4012e163, 0x3f4b1686, 0xbf782125, 0x3e8d38c0, 0x3e7cf94a, 0x3def28b1, 
    0xbf590799, 0x3e691d53, 0xbf1422fa, 0x3f73c7bb, 0x3e2db470, 0x3d7e33b8, 0x3efb5904, 0x3f634fbd, 
    0xbde64cf2, 0x3f66f56d, 0x400e0c71, 0x3f5774e8, 0x3d1c4e74, 0x3f3a67ec, 0x3dd0dbc8, 0xbebd19e0, 
    0x3d618078, 0x3eed65a6, 0xbf0c6cce, 0xbf3bf796, 0xbd82addc, 0xbe15d242, 0x3da687f4, 0x3cb897b0, 
    0xbf325142, 0xbf4c8170, 0x3f573b0c, 0xbed0b6ba, 0xbe78890e, 0xbdc3fb06, 0x3faf1fd1, 0x3ec61a80, 
    0xbe4cf881, 0x3e494771, 0xbf9110bd, 0x3e2c3ec0, 0x3e116b55, 0x3e1389f8, 0x3e433223, 0x3f704cd4, 
    0xbf73aaa2, 0xbfca6c26, 0x3d891c5c, 0xbb835d98, 0xbf8533cb, 0xbd91f041, 0x3fe881d2, 0x3e703aa4, 
    0xbf23112c, 0xbf967fda, 0xbf222e4c, 0xbf1ef04e, 0x3e8734ea, 0x3f37d5ad, 0xbe3f6f3b, 0x3fff252b, 
    0xbf0933c3, 0x3ea89d8b, 0x3f928fbb, 0x3f4bd0e9, 0x3f9ee169, 0xbe4fe836, 0x3f97eba9, 0x3eea2e46, 
    0x3fa0d409, 0xbebe5899, 0x3f41cdc4, 0x3de70bd5, 0x3ed29763, 0x3f5dad61, 0x3f8c3f89, 0x3fb90968, 
    0x3f074bb4, 0x3e4377d4, 0xbfb4bf7d, 0x3ec627c2, 0x3d2efe51, 0xbd64733c, 0xc001fb2a, 0xbf5f9603, 
    0xbec18d69, 0x3d919605, 0xbd346010, 0xc00ad713, 0xbf7a704e, 0xbeb03d9d, 0xbe9d1a9f, 0xbf0322fd, 
    0x3f0180f2, 0x3f918dbf, 0xbfba95ae, 0x3f0a58d3, 0x3f86215b, 0xbe9e1631, 0xc018f542, 0xbf60f081, 
    0x3d036966, 0x3f25be41, 0x3e876ae4, 0xbf8d6bc7, 0xbfa0f36e, 0xbee4ad4d, 0x3f0b8f94, 0xbef349c4, 
    0x3e9ee4ee, 0x3f959406, 0xbfad0f6e, 0x3f130a4e, 0x3f5b4fe7, 0xbe5e500b, 0xc01a3e34, 0xbf934b55, 
    0x3e19c1a5, 0x3f626990, 0x3e511403, 0xbe4b90d9, 0xbf9833d4, 0xbf1a4733, 0x3f10f7d7, 0xbf2089cc, 
    0xbe9e73f6, 0x3e9f576d, 0xbfcd1fd2, 0x3fb97f7e, 0xbd85c812, 0xbece0a45, 0xbf76e789, 0xbec7e0a8, 
    0x3f9903f1, 0xbf28c99d, 0x3f91aac3, 0xbf3344fa, 0xbed728a0, 0x3fa26f31, 0x3f312f97, 0x3f22114d, 
    0x3e596182, 0x3e908d6d, 0xbf845cef, 0x3fb29d45, 0x3f27a2a7, 0xbe82dc3e, 0xbfbc152b, 0xbe54f9d8, 
    0x3f524933, 0x3f4eac7c, 0x3daff9a0, 0x3e958e46, 0x3b98fe5c, 0x3d222fbc, 0x3f2f90f1, 0x3ea0ba6c, 
    0x3ef6a21b, 0xbf3aaad7, 0xc012de23, 0x3f63da75, 0xbfc5e132, 0xbe58cec3, 0xbf5ea58f, 0xbf41881f, 
    0xbfc7fff1, 0x3e6d2697, 0xbfc75ea5, 0xbf8fdd5e, 0xbedde950, 0xbe11d344, 0x3cd2fd6f, 0x4001457e, 
    0x3f1d0c45, 0xbf25d448, 0xbfea8660, 0xbf38b14e, 0x3e7aeaf5, 0x3e1649ad, 0x3d4f37e4, 0xbec6e449, 
    0xbe5545dd, 0xbf235812, 0x3ce50537, 0xbf978e8e, 0xbd9c7b6b, 0xbf84e868, 0xbec7e7af, 0xbf49cacd, 
    0x3ca80ab7, 0xbf1478df, 0xbfdb9e0d, 0xbfa424b5, 0x3f48eadd, 0xbf073a54, 0x3e399dcf, 0x3e588281, 
    0x3f5e348e, 0xbf2472dd, 0x3f15829d, 0x3eb34ddb, 0xbedb0d63, 0xbf2d23b2, 0xbdfd5e16, 0xbf84c88f, 
    0xbe6bd608, 0xbd8c6dcf, 0xbfe402d1, 0xbfaeab8e, 0x3f709742, 0xbecf2109, 0x3debb0c2, 0x3eda5d66, 
    0xbe8cb895, 0xbf13f98e, 0x3e984d9b, 0x3d27224f, 0xbe2d98cc, 0xbe291631, 0xbe8aaf3f, 0xbf2461ff, 
    0xbf782027, 0xbfbdd0b8, 0x3eb59c9b, 0x3e82cd19, 0xbf3788fb, 0x3f2dcd40, 0xbf790337, 0x3f09ade0, 
    0x3e089950, 0xbf38d261, 0xbf4dd7c0, 0xc01af83b, 0x3ecf7515, 0xbee607ba, 0xbfae45d2, 0xbe869811, 
    0x3ee180c7, 0x3f1a54e5, 0xbf37c1e5, 0x3f8489dd, 0xbe73f644, 0x3f491afc, 0xbf4da949, 0xbfb23ccc, 
    0xc0101221, 0x3ef96025, 0x3e29934a, 0xbe22b9a3, 0xbf653eb7, 0x3f0ad931, 0xbe278467, 0x3f5333fb, 
    0xbf5f521c, 0x3e906684, 0x3f6a10c2, 0x3fb0efa1, 0x3f70467b, 0x3f2254f2, 0xbfaf5494, 0x3ecd21be, 
    0x3ff61c5a, 0xbd93d727, 0x3fbdba76, 0x3fbdd157, 0xbf2ed177, 0x3f503625, 0xbf4a461e, 0xbfec565c, 
    0xbe927967, 0x3edffaa2, 0xbedfbf26, 0x3f63d756, 0x3eed8950, 0xbef8a2af, 0xbf901186, 0x3e1e103f, 
    0x3db21baf, 0xbe03f171, 0xbf3e98b8, 0x3fc09bb0, 0xbe45ae95, 0xbdd93d56, 0xbc04a819, 0x3eaa4714, 
    0xbeee8302, 0x3e40d91f, 0xbe8420c3, 0x3f162061, 0x3d8f81d6, 0xbf668f72, 0xbfba72ae, 0x3f2fa34c, 
    0x3f4fa110, 0xbf6d0740, 0xbe7da3ba, 0x3f9fc75b, 0x3d2c7f6a, 0xbda23d78, 0x3f9e945c, 0x3e6cf33f, 
    0xbee82f36, 0x3f6c1b38, 0xbf41aaac, 0x3eafb2b6, 0xbd04596e, 0xbf6ee7d9, 0xbf9b963c, 0xbf0dfec4, 
    0xbe29872b, 0x3e49e478, 0xbea018fd, 0xbf77dae7, 0xbdc48276, 0xbe32981c, 0x3fa864d8, 0x3d25fd2c, 
    0xbf24a206, 0x3d9a2789, 0xbfcb0026, 0x3cb98aaa, 0xbfbe2bd7, 0x3f518b9f, 0xbe9c4348, 0xbf3f3da8, 
    0xbf43d786, 0x3f1877dc, 0xbf898f09, 0x3ff5bbb6, 0xbd82cb59, 0xbea7e5a6, 0xbded695e, 0x3eb790b6, 
    0xbf3bf47e, 0x3f2befdd, 0xc00960da, 0xbd2b859d, 0xbed9a0c0, 0x3f8b96a5, 0xbe79593b, 0x3e1d6b75, 
    0x3f0d26b1, 0xbf064b6a, 0x3e46f633, 0xbff5e3fd, 0xbdf316f3, 0x3f2901e5, 0xbdf6ef2c, 0xbd6a46c9, 
    0xbf80126c, 0x3f9b65a0, 0xbfbd8830, 0x3f257aa7, 0x3f8c0a3f, 0x3fa0afa8, 0xbf019154, 0xbf5b5055, 
    0x3e9bf532, 0x3ed78276, 0x3d1dddcb, 0xbf4fe96e, 0xbe8bf989, 0x3f08350a, 0xbf0081a0, 0x3d96eeb0, 
    0xbf912377, 0xbf10672f, 0x3f736c8b, 0x3edc954e, 0xbed036f5, 0xbdea87aa, 0xbebae932, 0xbc872de2, 
    0xbf3116ab, 0x3ee79532, 0xbf945ed6, 0x3efa9572, 0xbf6a915d, 0xbf0587cf, 0x3ebd6419, 0xbf21a44a, 
    0xbf6116cd, 0xbed23123, 0xbf1b3885, 0x3f75bb54, 0xbf5a278d, 0x3eab5aed, 0xbe44d5fe, 0xbff5e742, 
    0xbfdd2437, 0xbf59ec9e, 0xbf4ca273, 0xbfa33239, 0xbf88e11c, 0x3f0fd0f8, 0xbcfa1d6c, 0x3f2e60e5, 
    0xbf8b75a2, 0xbdeb1f38, 0x3f1ba718, 0x3fb9edb7, 0x3f2212d3, 0xbe99496f, 0xbfa0a0af, 0x3f3063cf, 
    0x4014a01a, 0xbf81fb0c, 0x3ff4ef97, 0x3fedbe03, 0xbe947e0b, 0x3ffaf089, 0x3f42e172, 0x3f026d36, 
    0xbf077a4c, 0xbe792b3a, 0x3f7f3e14, 0x3db32ff5, 0x3e9acc7a, 0xbf1b1f84, 0x3e8e417b, 0xbf4535f4, 
    0x3ee220e6, 0x3dcf314c, 0xbe29fcb8, 0x3ee835bc, 0xbf8aeefd, 0xbec60060, 0x3f598a16, 0xbf114c48, 
    0xbf4b4ce4, 0xbf989517, 0x3f4a69a7, 0xbef8d5ac, 0xbfb75d63, 0xbf770f25, 0x3eec575d, 0x3eb12bf3, 
    0x3f221381, 0xbfb76214, 0x3e4b0f97, 0x3f8f16cf, 0xbf734e15, 0x3df85f63, 0x3f285f01, 0xbe88eaa0, 
    0xbe954243, 0xbf42d78a, 0x3f0160e4, 0xbed92008, 0xbfaa50f2, 0xbf63276f, 0x3e91e226, 0x3f00f610, 
    0x3e86548f, 0xbf3c2f6d, 0x3ed86fbb, 0x3eca0edd, 0xbf6022e1, 0x3ed4d0b5, 0x3f6d9927, 0xbe1098a0, 
    0xbf044de3, 0x3f0962c5, 0xbf7ee9ef, 0xbf111c2e, 0xbf9636d4, 0x3c6d41a9, 0xbf58ca3a, 0x3f5848c4, 
    0xbf2230aa, 0xbf9edb60, 0xbe977550, 0xbfd9b202, 0xbe84f0be, 0x3d8f5a77, 0x3e0217c2, 0xbf5a1a1f, 
    0x3e5ca55c, 0x4023f2ae, 0xbf8bf112, 0x3cb00b38, 0x3f91edf8, 0x3f94aa9a, 0xbf8f7f5a, 0xbfae0593, 
    0xbddcfc6c, 0x3f703247, 0xbed87ccd, 0xbefc0d61, 0xbf585bac, 0xbf707a4e, 0xbe3cad3d, 0xbfa1eb30, 
    0xbfd306cd, 0x3f005201, 0xbfca087c, 0xbeb6f6e5, 0x3e2dfca5, 0x3f91ab3f, 0xbf5cc9f3, 0xbf59f8c5, 
    0x3f29c68a, 0xbf6d88f3, 0xbf6b1154, 0x3f0f06b4, 0xbf1d3d02, 0xbefb6179, 0xbfacfd8f, 0xbef22067
};

static const uint32_t _K31[] = {
    0x3b769558, 0x3b87d024, 0xbc88f4cc, 0x3ccdddee, 0xbbb0bc1f, 0xb9bae1ca, 0xbb3d946b, 0xbb23f307, 
    0x3c31e138, 0x3b2dd3dc, 0x3a4ad164, 0xbad40143, 0xbb4aef18, 0x3b0a8ae4, 0xbbc96744, 0x3c8500e2, 
    0x3c231991, 0xba850dd4, 0xbcce382d, 0x3bcce41f, 0xbbe33370, 0x3b7c57a1, 0xbc17ccea, 0xbb8a242e, 
    0x3b4e3924, 0xbb99cf70, 0xbc56e44b, 0x3a068a29, 0xbc38fd2c, 0xbcf0e168, 0xbc353a9d, 0xbbc27722, 
    0x3bc60929, 0x3b660d4b, 0xbca382db, 0x3d2e386c, 0xbc253e5d, 0x3ba0dda3, 0x390b3f06, 0x39f9d3e2, 
    0xb988a23b, 0x3bd1fd02, 0x3bdeb9db, 0xb997b905, 0xbc335ef3, 0x3b37bf9d, 0xbba6c24d, 0x3b2c0988, 
    0x3bffe412, 0x3c21362a, 0xbcb6d74f, 0x3b45c301, 0xbc1401fe, 0xbab32021, 0xbc4803c8, 0xbbd21a99, 
    0x3ac57cb9, 0xbba3bf69, 0xbcaa537c, 0xbb87ce52, 0xbc6ca222, 0xbcc54c00, 0xbc358067, 0xbb3a7c68, 
    0x3b39eab5, 0x3b7c8b1e, 0xbc4832ef, 0x3c8b538b, 0xbbb0c7c3, 0xbb337836, 0xbbd9ff6f, 0x3acd86eb, 
    0xbb44499c, 0x3c07fb08, 0x3c6b3324, 0xbb149ddf, 0xbc0c6ed9, 0x3c299349, 0xbbb0347c, 0xbbd58ba3, 
    0x3b7e0e5f, 0x3c0e21ca, 0xbcac4f42, 0xbb9ca850, 0xbbb0c202, 0xbb5ded58, 0x3b6bffa8, 0xbbae315c, 
    0xbc87bd72, 0x3b123765, 0xbab84f40, 0xbbb2a78e, 0xbabd4b6d, 0x3a33c5ef, 0xbc05888f, 0xba567bb2, 
    0xbbf9ae7f, 0x3b366516, 0xbccb05d9, 0xbd4c31b9, 0xbc7c6850, 0xbad52ef0, 0xbb69d96c, 0x3c632a28, 
    0xbc9ea4e5, 0x3cc89920, 0x3c014714, 0x3b8a3ac1, 0xbbdec036, 0x3d6353b5, 0xbb541268, 0xbce9612a, 
    0xbc021b03, 0x3d016798, 0x3ce655ad, 0xbbff6dd0, 0x3c3a4e48, 0x3b327349, 0x3bb8f419, 0xbc387423, 
    0xbd06c614, 0x3c55a569, 0x3d3b835c, 0xbbd60e8b, 0xbb6cacfd, 0x3c47f8a8, 0xbc4ee384, 0x3cbd142f, 
    0xbc82c5f7, 0x3c16b8ff, 0x3c7cff43, 0xbc8cd7fc, 0xbc69bf8a, 0x3bf2f725, 0x3b9c82bb, 0x3bb47641, 
    0x3bedd043, 0x3bd4bfd9, 0xbb8456e0, 0x3c2658e4, 0x3bb6a8ce, 0x3ccee532, 0xbc9a426e, 0xbc8d291e, 
    0x391f3d21, 0xbb96f6fb, 0x3d3c7823, 0x3a8416d7, 0x3bdf3525, 0xbb903a9b, 0x3baac2bf, 0xbc807097, 
    0xbc86ee43, 0x3c63e0fd, 0xbc6406bb, 0x3c38df2d, 0x3c1e750c, 0xbbfa1a8a, 0xbbc4ea4a, 0x3c2af587, 
    0xbb96e8d1, 0x3b4f9cec, 0x3c76970d, 0xbc88e598, 0xbcce94ac, 0x3c22b83d, 0x3c9a51ff, 0xbb1b06fb, 
    0xbbe543c8, 0x3c6dfd16, 0x3c8a9438, 0x3c918eee, 0xbc354650, 0x3d14656c, 0xbc8679af, 0xbd0904fa, 
    0xbc47eea0, 0xbae53112, 0x3d1893b8, 0xbba9536a, 0x3c79872e, 0xba949221, 0xbbcf4ead, 0xbc230f77, 
    0xbc2c061f, 0x3ca9cc68, 0x3c0bc665, 0x3b17cf5e, 0xbbb775ef, 0xbc1ee444, 0xbbf80839, 0x3ce08b4c, 
    0xbc9a81f9, 0xbcd6e44b, 0xbc976a1c, 0x3b8403b0, 0xbbaa5935, 0x3c22c54e, 0x3c2e418b, 0x3c1ac6a4, 
    0xbb8ed1f1, 0x3b147479, 0xbc45578d, 0xbc00602e, 0xbb825ee9, 0xbc235c4e, 0xbbc18253, 0x3ac77b70, 
    0x3b17d6ee, 0x3c334e0d, 0x3b044810, 0xb9daffb6, 0xbbc33810, 0x3b326b10, 0x3c45cabd, 0xbc6e82d7, 
    0x3b3b929c, 0xbc5b359c, 0xba60f7fd, 0xbc68ea17, 0xbcab4f05, 0x3b1f426b, 0xbc13cf80, 0xbcf00d3a, 
    0xbcb533aa, 0xbcf1b9e6, 0xbcbd541a, 0xbc6e660e, 0x3ab91ed0, 0x3bcee960, 0x3a1b6358, 0x3cf99350, 
    0xbc8b534a, 0x3a40a821, 0xbcb804f5, 0xbbf7539c, 0xbabd3ca0, 0xbb01117d, 0xb912ce34, 0x3c1487c4, 
    0x3b78ee88, 0x3bf424ee, 0x3b901e3c, 0xbb9284a3, 0x3b75950e, 0x3b3f3e30, 0x3c93243a, 0xbc2ff81f, 
    0xbb98aeb3, 0xbc1f91fc, 0x3c9e7d84, 0xbc23dfa7, 0xbb3eef51, 0x3c374403, 0xbc3cbf44, 0xbd0b62cc, 
    0xbca0d98c, 0xbc24c3ce, 0xbcbc419a, 0xbc15db40, 0xbbc1732d, 0x3c1a434f, 0x3c29d084, 0x3ae163b8, 
    0x3b88dca2, 0x3b21f815, 0xbd05c662, 0xbbd922fc, 0xbb46d435, 0xbc1149fc, 0xbc0bf318, 0x3c5b17f3, 
    0x3bd585a3, 0xbb62a795, 0x3c0c0d41, 0xba4fde5a, 0xbb4e9fb7, 0xbb309cd9, 0xbb098dd6, 0xbc1e8a96, 
    0x3bd089a0, 0xbbb248df, 0x3b1a8e81, 0xbba7cd1f, 0xbca4d57c, 0xbc65218a, 0xbbc85d3c, 0xbd08e3cc, 
    0xbb5a5a0f, 0xbc0f4adc, 0xbbaa1ea6, 0x3c604e81, 0xbc3984d9, 0x3a7ebc1e, 0x3ce5a737, 0xbbcf59b6, 
    0x3c33848a, 0x3b1952e1, 0x3bfd3f5f, 0xbb1d2aa0, 0x3bfd6ab7, 0x3ab6a7dd, 0xbbcdd4ab, 0xbbbbe92e, 
    0x3ad9e0ac, 0x3c2c1850, 0x3be4fd38, 0x3b9e9ff1, 0xbbc73dfd, 0x3c2aa951, 0xbb953442, 0xbc1c43b1, 
    0x3aa1d76c, 0xbb3d6b40, 0xbc2acb40, 0x3b12b86d, 0xbae03b1c, 0xbcabb170, 0xbbfc23f6, 0x3bc6e446, 
    0xbbe0aff2, 0xbd229ac3, 0x3c15a4b7, 0x3c444c99, 0xbb9b5537, 0x3ab30741, 0x3cbcc713, 0x3c9ff4af, 
    0x3a86e461, 0x3a5bdeb5, 0x3b2233e7, 0xba835307, 0x3a838250, 0xba564c0a, 0xbb98c60d, 0x3a4bc49f, 
    0xbb77b2ef, 0x3c0022f6, 0x3ac77bab, 0x3c05c15d, 0xbb2e9a80, 0x3c15d07c, 0x3ab0761f, 0xbc55202b, 
    0x3a03b849, 0xbc5a2543, 0xbc80ed3c, 0xbbbbe5fd, 0xba7e699a, 0xbb5a325c, 0xbbbba7db, 0xbb8c31a1, 
    0xbc325ce5, 0xbd05be29, 0x3b81539c, 0xbc88d76c, 0x3b2a6fe2, 0xbaad03c7, 0xb827184a, 0x3cd356e6, 
    0xbcd0f2c1, 0x3baebf34, 0xbc030daa, 0xbbbb1099, 0xbbf398cf, 0x3b7bf214, 0x3b84b59f, 0x3bfca3c4, 
    0xbbb16f9d, 0xbb6d2d04, 0xbb43665c, 0xba538e89, 0x3ad36c65, 0xbbe90188, 0x3b08c054, 0xbbb799b9, 
    0xbc55ed91, 0x3b4463e3, 0x3ca45706, 0xbc6cf283, 0x3b3b8211, 0x3c02f9d4, 0xbb08f56e, 0x3b60765e, 
    0xbc3d09d2, 0xbb9b4bd4, 0xbce440d8, 0x3b46899d, 0xbd458f5a, 0x3c0cef94, 0xba17a87d, 0x3c0f2549, 
    0xbc6261cf, 0x3d27b86c, 0xbaf38b05, 0xba087c12, 0xbcd65a0b, 0x3aaa64d2, 0x3be72f6e, 0x3c88475e, 
    0xb9a27937, 0xbb44ac4f, 0xbb855043, 0xbc015635, 0x3c35882f, 0xbb42f9bd, 0x3b13d51e, 0xbc518098, 
    0x3b1b68b4, 0x3c078eeb, 0x3c82273a, 0xbbac729b, 0xbbde8151, 0xbc2c2bef, 0xbbd7fe53, 0xbaa55491, 
    0xbc104812, 0xbbfe59e1, 0xba9319b1, 0x3c5e9ea6, 0xbd60ecc4, 0x3bf35268, 0x3a687b40, 0x3c968a70, 
    0xbc65322f, 0x3d465442, 0xbba9890b, 0xbaa5fadb, 0xbc1e2307, 0x3b85f970, 0xbc447c7a, 0x3c70ee0b, 
    0x3a309c0f, 0xba1567ec, 0xbb534399, 0xbbaa36a4, 0xbb6a1a76, 0xbbe0a1cd, 0x3c593571, 0xbd29a306, 
    0xbc21a006, 0x3acc368a, 0xbc6a40e7, 0xbcb243bc, 0x3ae6587f, 0xba383723, 0xba3ebf0b, 0xbc398b5d, 
    0xbbfd7af7, 0x3a47dadf, 0xbb21faa5, 0xbc0eaaa1, 0xbc19946f, 0x3c83a2be, 0xbbe29e3d, 0x3c617480, 
    0xbc30513a, 0x3d1116dc, 0x3b86f862, 0x3b36d373, 0xbc028b85, 0x3c9573f3, 0xbc09170c, 0x3c309501, 
    0x3ad62f95, 0x3becf6bc, 0x3c3e350e, 0xbc2ef635, 0x3c8180bc, 0xbbeac2ea, 0x3c9b10d1, 0xbc349cec, 
    0xbc54a620, 0x3c75d388, 0x3acf8811, 0xbc8456fd, 0x3b3e3e13, 0x3a5f3b9a, 0xbc337bb7, 0x3acbc050, 
    0xbb92472d, 0xbcdfe565, 0x3ca9683d, 0xbc10c24f, 0xbb8928d4, 0x3bfbf73b, 0xbb846d05, 0xbad5d313, 
    0x3c92b32d, 0x3cac99ba, 0x3b46d838, 0xbba400dc, 0x3bb4be99, 0xbc1d5d8f, 0xbc1e7152, 0x3b38dcd6, 
    0xbbe1c51f, 0xbc0a0de3, 0x3aac828b, 0xbb3497f4, 0x3afbd659, 0xba00055b, 0x3bbd1335, 0xbc62d8a7, 
    0x3ade7f2f, 0xbb1cb86b, 0x3bc31a37, 0x3ad1c987, 0x3cb6c15b, 0x3c6722be, 0x3b9b9ed4, 0x3bd9d5d8, 
    0xbc2582d6, 0xbd2ad842, 0x3bdd8a52, 0x3c6d6ef4, 0xbbd1f458, 0x3a98e853, 0x3c41ac97, 0xbc3b694f, 
    0x3cbde4c3, 0x3ce7a202, 0x3ce7abec, 0xbbe4adc3, 0x3c10d6e6, 0xbc773b05, 0xbbe50742, 0xbb88d2c6, 
    0xbc19f885, 0xbb602ae2, 0xbc7eb11c, 0xbb7fa494, 0xbc6a03f8, 0x3c6359a6, 0x3ba0fcc1, 0xbc897c6d, 
    0x3bcbf3ac, 0xbbf85229, 0x3c6106e3, 0xbb1461dc, 0x3c96d907, 0x3b88a983, 0x3aafa483, 0x3ca7f714, 
    0xbc0009c6, 0xbd3f883c, 0x3c373c6f, 0xbaa32c36, 0xbb22d48e, 0xbb7e03f8, 0x3b755da2, 0x3c869f8d, 
    0x3b9c8df3, 0x3caf03c4, 0x3c8d91be, 0xbb71c320, 0x3ca7a7bd, 0xbc41e4fb, 0xbb50bddc, 0xbc301932, 
    0xbc8433a3, 0x3c4f3366, 0xb9535e56, 0x3bb3cbf4, 0xbbc1a8da, 0x3c589d9c, 0x3cc58f23, 0xbcbaacf8, 
    0xbad94891, 0xbcbcd361, 0x3c2b05ea, 0xbc073cf5, 0x3c72110c, 0x3c9c6037, 0x3bc0dc9d, 0x3c1ef6c6, 
    0xba1d8b9a, 0xbc42a740, 0xbbe367a3, 0xbc2ada94, 0x3bcb5ad8, 0xb95e119a, 0x3ba3a41a, 0xbbb8fffc, 
    0xbacab71e, 0x3c8f2216, 0xbb59a413, 0x3aa5ccf3, 0xbc242f94, 0xbba7968b, 0x3bda8f52, 0x3bd136d2, 
    0xbc40a93a, 0xbc48ac1b, 0xbaf24f4f, 0xb989889e, 0x3bd0f556, 0xbb406a9c, 0xbb4e1b13, 0xbb863895, 
    0x3c3cab77, 0x3bba80ed, 0x3ca1b7d5, 0x3c130f9b, 0xbac87113, 0x3c0589a4, 0x3c9ee1b8, 0xbb69aa02, 
    0xba25919e, 0xbc7798f7, 0x3c08a8aa, 0x3c2d9409, 0xbbc53a99, 0x3ba00257, 0x3c16fc90, 0xbc0366e9, 
    0x3c2d2873, 0x3c7cb26d, 0xbbc0ddb3, 0x3b0d680f, 0xbbc2012f, 0xbc88ede1, 0xbb0a7709, 0x3c8dbf4b, 
    0xbbed5961, 0xbcc03636, 0xbbb08f52, 0x3bee13b0, 0xbc25693c, 0xbbd4511c, 0xbc80f9fb, 0xbc980fd6, 
    0x3cd6c610, 0xbb6e9e9a, 0xbc58df47, 0x3ab6b30b, 0x3b30f825, 0xbb8cfdac, 0x3ca69b45, 0xbba6df00, 
    0xbb1d93f5, 0xbc760aac, 0x3bb78dc9, 0xbc12536f, 0x3bcad008, 0x3a166559, 0x3b6e56f5, 0x3b0e2ebb, 
    0xbbd3603f, 0x3c93045c, 0x3bc3f7fd, 0x3b82963f, 0xbbbfda0d, 0x39bf8b3d, 0x3b132bfc, 0x3c1fadde, 
    0xbc08a3a6, 0xbc4ade6d, 0xbb923e88, 0xbb356d46, 0x3c0f6d6b, 0xbb1f9d3a, 0x3c35387c, 0xbbc1b4b5, 
    0x3b7a2658, 0x3beda3d3, 0x3c520970, 0xbb17fd67, 0x3bcb8f2d, 0x3c386003, 0x3c24f2c3, 0x39c50246, 
    0xbc1d2b64, 0xbc95f6ca, 0xbc011f2c, 0xbbc40634, 0xbabd42dd, 0xbc5f9ac5, 0x3c3098d8, 0xbb67c4da, 
    0xbba2b2ce, 0x3c2b315c, 0x3ca5fc60, 0x3c3a2462, 0xbb033ff5, 0xbb71029a, 0x3a242f1c, 0xbceccd89, 
    0xbca71b25, 0x3c301134, 0xbc694ba2, 0x3c073ea7, 0x3c1a4036, 0x3cb6ec81, 0x3c1bc4e2, 0xbc2493a1, 
    0xbc224004, 0xbc4ee9d6, 0x3c937038, 0xbb0bab8b, 0xbbda0b39, 0x3cf732f3, 0x3c764f32, 0xbbfd2399, 
    0xbb98552e, 0xbcc7263c, 0xbac74836, 0x3b5cdc2f, 0x3adf9dc6, 0xbc626764, 0x3c0a610e, 0xbbe126aa, 
    0x3bef7c8e, 0x3c43e292, 0x3cafffaa, 0x3bb94f25, 0x3bf46b9f, 0xbc4e5002, 0x3b95ae70, 0xbce5a15a, 
    0xbc9fbf41, 0x3c4b1f7a, 0xbbac80ec, 0x3c59bc02, 0xbbd99f52, 0x3cb58a08, 0x3be0acb8, 0xbc543e0b, 
    0x399f80c9, 0xbc998b86, 0x3c5ba121, 0x3b69c330, 0x3b4ad234, 0x3cab671d, 0x3bb0a173, 0x3c3348b6, 
    0xbc9eb237, 0xbc745c52, 0x3c9fd78c, 0xbcdb9069, 0x3c8e16a8, 0xbc80af81, 0xbc0d7eab, 0x3bcd2045, 
    0x3c23a742, 0x3b02756b, 0x3c191c7c, 0x3befa971, 0x3cfd3fb1, 0xb973f83c, 0x3c065072, 0xbc460c31, 
    0xbc2fcda1, 0xbb4843c7, 0xbb133335, 0x3b6d5c34, 0x3c4a684b, 0x3cfc94a0, 0x3cc187f9, 0xb985bd26, 
    0xbc6a55d8, 0xbc55ad5e, 0x3cd33113, 0x3bc304ea, 0x3ccee038, 0x3c989bd5, 0xbc3f87e7, 0x3c09ef02, 
    0xbbbc6eac, 0xba97e830, 0x3b9d6478, 0x3b831b8c, 0xbc866cb2, 0x3ce1747f, 0x3bd4a280, 0xbb8e74b4, 
    0x3c0cf664, 0x3c57b96c, 0x3a9a0750, 0xbbfbb3dd, 0xbbb15e41, 0xbb8065cc, 0xbbdc0fe9, 0x3c043c8f, 
    0x3add5c95, 0xbbeaecf6, 0xbb8fe176, 0xbc90cb94, 0xbb51acd3, 0xbaf7f43d, 0xbc8daddf, 0xbc11be9f, 
    0x3c08bd3f, 0x3bc6d2ca, 0xb82f5cd5, 0xbbe4b032, 0xbbeff617, 0xbc9ad60d, 0x3b8efda6, 0xba0f2f44, 
    0xbbf82cec, 0xbc199956, 0x3c10b59c, 0x3c9eeb1a, 0xbc936c7e, 0x3c9efa0d, 0x3c13f892, 0x3c3f8f04, 
    0xbc10e481, 0x3c467d5e, 0x3b47e44e, 0xbae42fa4, 0x3b1efa58, 0x3b3c57a3, 0xbc4cfaba, 0x3be17771, 
    0x3bc05e25, 0xbb9b4d5d, 0xbc5f92ef, 0xbc92930d, 0xbbb8ef48, 0xba9babd4, 0xbb58b533, 0xbc87c1fa, 
    0x3bd1183b, 0xbb64e9ef, 0xbc24f5dc, 0xbc833cf1, 0xbb31114e, 0x3ab02cd8, 0xbbb3ab0c, 0xbbee4ee8, 
    0x3aa123c7, 0xbb5fa7e5, 0xbc87f5aa, 0xbc8e69cc, 0x3964a0ec, 0xbb038eee, 0xbc1d7c5a, 0x3c352ec5, 
    0xbd002d7a, 0x3c805437, 0x3c6fb7f8, 0xbc197802, 0x3b9efd2f, 0x3b73932a, 0x3a6d725b, 0xbcee259b, 
    0x3a9c9b63, 0x3cfdc0ea, 0xbbfd38bd, 0xbd0b9b63, 0xbb1bc520, 0xbb754178, 0x3d012607, 0xbb4c9b78, 
    0xbcd29d4c, 0xb95cd06a, 0x3cfbee3b, 0xbbfa6839, 0x3b616d33, 0x3ce1c7ef, 0xbb2f11ff, 0x3bddecf6, 
    0xbc2b2c4e, 0x3ba0b4d8, 0xbb959adb, 0xbc528999, 0x3cdb3418, 0xbbcfab31, 0xbc8d16de, 0x3c4f6be5, 
    0xbb25475c, 0xbc378738, 0x3cc3b364, 0xbc9302c1, 0x3c8403d5, 0x3c1d83bf, 0x3b13c94e, 0x3c067f30, 
    0x3c7f5958, 0x3bd15bb6, 0xbc53c71a, 0xbc8f9dc9, 0x3bc1ce3a, 0x3b5147cb, 0x3c81f73e, 0x3c8a60b3, 
    0xbca6aba1, 0x3acb24cf, 0x3cc88fb0, 0xbb96f9b3, 0x3d376a8a, 0x3c701d68, 0xbcf157aa, 0xbc268b7d, 
    0x3af5868b, 0x3c283f22, 0x3c1eb621, 0x3c3f687c, 0x3a64b796, 0x3c1db2e8, 0xbaa63013, 0x3b2d3013, 
    0x3c11afef, 0xbb48a62a, 0x3cc3ad7c, 0xbbeb5c84, 0xbaacfd58, 0xbb5a0fd8, 0xbb2debce, 0x3c825d7e, 
    0x3c426498, 0x3be85cfb, 0x3aceef82, 0xbb06590c, 0xbb32e420, 0xbba7d08d, 0xbbeecb81, 0x3bd3c56f, 
    0x3c0b0b84, 0xbb5fa8d9, 0xbc09465f, 0xbbfab02d, 0x3c54eb4f, 0xbc376b75, 0xbd1ebaab, 0x3ced45ca, 
    0xbc32cba5, 0xbbb2b905, 0x3b58fd82, 0x3ba5c11b, 0xbbf00c8d, 0x3c33a59e, 0x3983ab71, 0x3c388577, 
    0x3bb1d072, 0x3c217647, 0x3cb3224b, 0xbc663334, 0xbb9530fc, 0xbb79d1e3, 0xbc377b8f, 0x3cb2cf33, 
    0x3bed3264, 0xb929f41d, 0xbbd16b60, 0xbc202af3, 0xbc0d8b5e, 0xbb86e6b6, 0x3b5da477, 0xbbe339e4, 
    0xbbd9dec7, 0x3b248790, 0x3b764263, 0xbce2b88a, 0x3c82f4cb, 0xbb31b375, 0xbc3f8a83, 0x3bcab085, 
    0xbb1d65ef, 0x3b1987c2, 0xbbb7d27a, 0xbbe49a55, 0xbbb639c9, 0x3b701968, 0xbc0336a5, 0x3b4f1e14, 
    0x3a8b373d, 0x3c25fb42, 0x3b22db70, 0xbbfc8d25, 0x3b133b74, 0xbb8ad4dc, 0xbbf5313f, 0xbba22919, 
    0x3a87f4ea, 0x3bbb2f93, 0xbbead1b7, 0xbc9ddd6a, 0xbbd9ae3c, 0x3b9a3698, 0x3c11c6a8, 0xbbc98842, 
    0xba77314d, 0xbb325dd1, 0x3c8f2771, 0xbc0ec475, 0xbb137979, 0x3c0e8656, 0xb8be5f41, 0xbb228bc1, 
    0xbbe6fc66, 0x3b853aaf, 0x3bf4a68b, 0x3c2e13c7, 0xbc2efaf6, 0x3ca6a860, 0x37b23baf, 0x3ad39854, 
    0x3c82cf87, 0x3bb43c9d, 0xbbdd8ce5, 0xbbbea7d4, 0x3b1ed20c, 0xbc3a69f0, 0xbc3186ae, 0x3c720a8a, 
    0x3c057c35, 0xbc3a39a7, 0xbb81878a, 0xbc716bf9, 0xbbe36439, 0xba352fcc, 0xba84dc0c, 0xbbd46930, 
    0x3c4d0933, 0xbbecb463, 0xbc45a872, 0xbbb2d42b, 0x3a4d6dfd, 0xbbea1dbb, 0xbbc7d7c8, 0xbb621dd7, 
    0xbb498d64, 0xb9d04df4, 0xbc6037b2, 0xbc22d957, 0x3ab71ad2, 0x3b42b081, 0xbc3a633e, 0x3c0b95bf, 
    0xbc2aa776, 0x3c394ce3, 0x3bd26656, 0xbc0d8524, 0x3889043e, 0xbbfe6bf6, 0xba42930a, 0xbc2c0d25, 
    0x3b8ff4e8, 0x3c40c70e, 0xbc814e04, 0xbcd522ff, 0xbbb8cb1e, 0x3ad4fcff, 0x3c9856cc, 0xbaf473a9, 
    0xbc166ab7, 0xbbb52494, 0x3cd6c671, 0xbc51fa2a, 0x3af62b9c, 0x3cb2c735, 0xbbbdedcd, 0x39f4cc97, 
    0x3be20a06, 0x3a063fb1, 0xbbbaba65, 0x3c8c5c44, 0xbb81d1ca, 0xbcd19141, 0x391ba1e1, 0x3b1d9b72, 
    0xbc38c8b1, 0x3b66fd81, 0x3d78fd9d, 0x3c92bb82, 0xbc4ac4cd, 0x3c9043af, 0x39580a94, 0xbcf81ce1, 
    0xbc9638ae, 0x3c8cb759, 0xbc576f54, 0x3cf536a6, 0x3a20c09a, 0x3b97a396, 0x3c1cdbaf, 0xb9c2fb9a, 
    0xbc325983, 0xba5c870e, 0xbc036b82, 0xbac1a731, 0x3b4d7ba0, 0x3c2b5389, 0x3b9e187c, 0x3c9bef77, 
    0x38f33931, 0x3abe7c5d, 0xbac53003, 0x3baee8d3, 0xbc83ba9c, 0xbc1c28ac, 0x3ace9670, 0xbb5dc532, 
    0x3bf28b68, 0x3be0d648, 0x3c5bf42b, 0x3c90b9fd, 0xbcd98a3e, 0x3cad11ba, 0x3b7226a1, 0x3c0c9753, 
    0xbc9a5f50, 0xbc7858e6, 0x3b4d4301, 0x3ca6a9f6, 0x3c0625cf, 0xbb4d85e3, 0xbc1b52c7, 0xbb622582, 
    0xbabb485d, 0x3c876d42, 0xbca0190e, 0x3c018891, 0xbab7a565, 0xbc78b1ad, 0x3c60d249, 0x3c9d0a5f, 
    0x39a62eae, 0xbb2c6370, 0xbc0fd63a, 0x3b4c9088, 0xbc1cff41, 0xbbe92261, 0xbbb2a175, 0x3b114d20, 
    0xbb6cb0d7, 0x3c3e38fc, 0x3ca1934e, 0x3bc0463b, 0xbc9684ee, 0x3cbf6474, 0xbadf8c3e, 0x3c65d5ea, 
    0xbc69aa76, 0x3b6f9364, 0xbc2921d3, 0x3c2d19e1, 0xbab99e4f, 0xba8c9ae6, 0x3bb20200, 0xbae57dca, 
    0xbc965067, 0x3c5feca7, 0xbb45b56d, 0xbbad9f4d, 0x3c488a69, 0xbb3cf9d4, 0x3c6900d5, 0x3c5600c4, 
    0x3c3b32df, 0xba8c2e62, 0x3b583ba4, 0xbc83c501, 0x3ccbb46d, 0xbcf59e42, 0xbcd5d107, 0x3bd79567, 
    0xbc70036d, 0xbaa0ad9f, 0x3cb3a012, 0x3c854a49, 0x3c167816, 0x3c776ba6, 0x3cab671e, 0xbd476edb, 
    0xbcca18f2, 0x3d104e07, 0xbc166788, 0x3c224f69, 0x3c91bb2f, 0x3c0eaa6a, 0x3cc6ef5e, 0x3c0b7bf0, 
    0xbcbf8e96, 0xbbc1d521, 0x3cb48e4e, 0x3c0c6b4a, 0x3c89dfe7, 0x3d7f21ca, 0x3c52c81b, 0x3cad3bd7, 
    0x3bbe9e37, 0x3c649f2b, 0x3d1eed8e, 0xbc2977bc, 0x399ff698, 0x3ae42562, 0xbb48fa2c, 0xbc9656c5, 
    0x3cd040c0, 0x3b040b70, 0x3aa982b2, 0x3c1b9640, 0x3b57e28b, 0xbc19b84e, 0x3b78dff1, 0xbbfc4ef1, 
    0xbc8ac261, 0xbd1fd852, 0x3c995fe4, 0x3b807bf4, 0x3bc23bb1, 0xbc23ea51, 0xbb30e838, 0x3bd1415c, 
    0x3b4072ef, 0x3ca59f6f, 0xbc7e01a6, 0x3c934705, 0x3c5e9243, 0xbbfbe554, 0x3c973b13, 0x3c3d248c, 
    0x3b95f19f, 0x3a47ac7b, 0x3bceb3d9, 0x3b84cdb8, 0xbc2a3860, 0xb9ae2d4e, 0x3a6241fd, 0xbbe03cce, 
    0x3b7a896b, 0x3c4e38f4, 0x3c94b78f, 0x3bf255bc, 0xbb0a238a, 0x3bcc18ec, 0x3b885cbc, 0xbc72ee5e, 
    0xbc31d707, 0x3b834403, 0xbbdcab3d, 0xbb8b262d, 0x3a8c1256, 0x3b3208de, 0xbababa24, 0xba70d25a, 
    0x3b35d925, 0x3bfdba0d, 0xbb3e2a04, 0x3bc3e6b7, 0x3bb4e244, 0xbc172a6c, 0x3c6dda4b, 0x3cbc2ba8, 
    0x3cbeae5f, 0x3c8989ce, 0x3b9c001d, 0xbc88c3d5, 0x3b8e78e9, 0xbbabfc10, 0xbd126a29, 0xba785333, 
    0xbbde51c1, 0x3c2d6496, 0x3cbf2938, 0xbca9725b, 0x3c7adf25, 0x3cb56992, 0xbc4cce63, 0xbc9baf61, 
    0xbb5e4e5e, 0x3c653dc6, 0xbbc38772, 0xbb886715, 0xbc77d1f9, 0xbb06186d, 0x3b64263f, 0xbaceba1f, 
    0xbd04ea73, 0x3c9a58a3, 0x3ce663ac, 0xbc1c02bd, 0x3b4aa2e8, 0x3c4507c1, 0xbbb2ef00, 0x3c9d8c8c, 
    0x3c6d5acd, 0x3c917e9f, 0x3d21e837, 0xbc1ba8c0, 0xbbf00d24, 0x3b938ef6, 0xbc50b4bf, 0xbc16ca93, 
    0x3c9ad22b, 0x3be71817, 0x3c054b6d, 0xbc38b386, 0x3c24e507, 0xbb83a6ae, 0xbcb6ba4a, 0x3ba2e924, 
    0xbb79df52, 0xbc9c50b8, 0x3c2aa54e, 0x3ae045c1, 0xbc7f13bc, 0xbc549821, 0xbc753674, 0xbc0c2fa4, 
    0xbc60cffe, 0x3c67cd63, 0xbc3954f0, 0xbbe9e9ed, 0x3c70a7cc, 0xbc7a9eb3, 0x3b047e1a, 0x3c3e19db, 
    0x3bdd57c7, 0x3bf1788a, 0x3c9f2fd1, 0xbcd9791b, 0xbc2cd9fb, 0x3c12434d, 0xbbbd2688, 0xb8d0a700, 
    0xbbfb9b3c, 0x3c8575f1, 0x3bac20ae, 0xbc5844d5, 0xbc13cf06, 0x3c9cdcfc, 0xbca36bcd, 0xbaf09257, 
    0xbc51fd10, 0xbc666aaf, 0xbaf33900, 0xbbf23634, 0xbb72084d, 0xbc12280f, 0xbc6ad1e4, 0xbbff88e5, 
    0xbc7f7f50, 0x3ceffde6, 0x3c8cff6d, 0xbc913733, 0x3a5c93d7, 0xbbfc2d65, 0x3b979e30, 0x3c9ae64f, 
    0x3b93992b, 0xba7ab83b, 0xbc005038, 0x3ad6e172, 0x3c49a738, 0xbb6f6e4f, 0x3b82632a, 0x39dfa0cb, 
    0xbba22273, 0xbc1f68bd, 0x3c9c555f, 0xbbef3982, 0xbc17951d, 0x3c858a00, 0xbb31f310, 0x3b1d28ed, 
    0x3b5617be, 0x3a5c4929, 0xbced6045, 0x3b726781, 0x38520721, 0x3b2b4b17, 0xba873392, 0x3c874fd7, 
    0xbca6b316, 0x3bb99b96, 0x3c0ecf69, 0xba8787d2, 0xbbbb8c61, 0x389130a5, 0xbb91479c, 0xbcda110e, 
    0x3c24a043, 0x3ba8d879, 0x3bad975d, 0x3d08ecd4, 0x3c4f6d15, 0xbbdfeeba, 0x3c721841, 0xbc39f5e9, 
    0xbc4b94a8, 0xbce33c7f, 0x3d48470a, 0x3c22f773, 0xbcb1a396, 0x3c903f29, 0x3c9204cd, 0xbbf8ca7b, 
    0x3b743db7, 0xbc381a79, 0xbcb6c204, 0x3bd7df7c, 0xbbdcbf2e, 0xbbd5e008, 0xbd6a7904, 0x3d042a90, 
    0xbbdee739, 0x3bc2ff06, 0xbb110e2c, 0xbb880d69, 0xbc079872, 0xbd091f13, 0xbc1d4e48, 0x3ce5f5a7, 
    0x3c121531, 0xbbe367f3, 0x3c47bc05, 0x398e15d8, 0xbae54d76, 0xbb34f2e5, 0x3c02d642, 0x3a8661e4, 
    0xbcfb837e, 0xbb18824e, 0x3cbedcc3, 0x3a713fa9, 0xbcd1138d, 0x3cd460d3, 0x3b33d7a3, 0xbc8454c6, 
    0xbc064ce7, 0x3c4a0e57, 0xbc0e4051, 0x3b49320f, 0x3a999735, 0xbc233e6e, 0xbcb13134, 0x3bb57233, 
    0xbc865760, 0x3c9e85f6, 0xbb880484, 0xbc8a44de, 0xbc6616bd, 0xbaa642e3, 0x3a1eb89e, 0x3cb8cb92, 
    0xbd0cf076, 0xbc150b74, 0xbbeb82ce, 0xbcb1d912, 0xbc020240, 0xbb49fc3b, 0x3c8c085b, 0x3b7aa65c, 
    0xbbff5525, 0x3b67ebf4, 0xbc890648, 0x3c7d0514, 0xbc1fe283, 0x3bb2b5dd, 0xbad9d97e, 0xbc24d6d1, 
    0xbc2a6fd2, 0x3b642bb9, 0x3c5a31e1, 0x3a8fa988, 0x3c78e336, 0x3baf6d7c, 0x3c406e93, 0xbbb999ee, 
    0xba0920bd, 0x3ae66c27, 0x3c3ba4b9, 0xba051570, 0xbc66589f, 0x3cb33698, 0x3c303364, 0xbc8e0650, 
    0xbd32a5ef, 0xbb72f4e0, 0xbb9a24d3, 0xbca5987d, 0xbc00936c, 0x3ad599f7, 0x3c875e94, 0x3c2c433d, 
    0xbc4eca3d, 0xbadca420, 0xbc6339a6, 0x3c8edd2c, 0xbc69cd9b, 0x3bfb5810, 0x39c1b49c, 0xbaed5844, 
    0xbc01f005, 0xbbb89000, 0x3c8ffdf6, 0x3a44d81a, 0x3ca7c90a, 0x3a7970c9, 0x3c11875b, 0xbb0024b2, 
    0xbb163464, 0x3bd33e42, 0x3c7b1e01, 0xb8b7c388, 0xbc3eeb0b, 0x3be7fbe7, 0x3ac394b5, 0xbc532a96, 
    0xbc98c754, 0xbb9ca2f3, 0xbc22f0f1, 0xbc2e6d2d, 0xbbfe02ce, 0x3b4d8cb2, 0x3c18dfab, 0x3ba14ff0, 
    0xbca15788, 0x3aafb053, 0xbc2fc1a4, 0x3c724752, 0xbc93f680, 0x3c1d3be8, 0x3b67f1f5, 0xbc1b1acc, 
    0xbbf16024, 0x3a1c179c, 0x3c2b4b9a, 0xb9c9cbf6, 0x3c346404, 0xb99b2627, 0x3bb4b9f9, 0xbab99012, 
    0xbb9a535f, 0x3bb092e9, 0x3c32f7e1, 0xbb7fc8ac, 0xbc40062b, 0x3bad35dd, 0x3bcd4771, 0xbaf49308, 
    0x3a082078, 0xbc14a751, 0xba090ddd, 0x3c882e2e, 0xbc57609b, 0x3961b469, 0x3d0f7a3b, 0xbbaed082, 
    0xb98a0934, 0xba3d7e84, 0x3c377279, 0x3b81a674, 0xbb30d45c, 0x3b379ae3, 0xbbd014d9, 0xbc8df219, 
    0xbb004193, 0x3c07cd00, 0x3abb5cab, 0x3c206b67, 0xbc05886e, 0x3bebffd9, 0xbc76e714, 0xbc0f43c3, 
    0x3b85f386, 0xbb387747, 0xbc75d43d, 0x394a0d7f, 0xbcb0617c, 0xbcbe65be, 0xb9d02485, 0x3c00fe9f, 
    0xbc429d67, 0xbd119a66, 0x3c4646db, 0x3c060523, 0xbbb78188, 0x3b84bb86, 0x3d01333d, 0x3c63bf28, 
    0xbc5ab86c, 0xba26953e, 0x374a493b, 0x3b8f277f, 0xbc37f4ed, 0x3b67cdb1, 0xbb529e89, 0xbb81371a, 
    0xbc0f2f47, 0xbb9fe627, 0xba95c9db, 0x3c170161, 0xbacba85c, 0x3b2d92a7, 0xbc25d9d7, 0xbbf36a9b, 
    0xba416257, 0xbb9d5f46, 0xbc3b41b0, 0xbb507b91, 0xbbd8bd69, 0xba789e0d, 0x3b4e9896, 0x3afdfe6f, 
    0xbc1c9151, 0xbd0282af, 0x3ba1bcb7, 0xbc7a96f2, 0x3bbb716a, 0xba838f4f, 0xb8b064e6, 0x3c71cac7, 
    0xbcd337a1, 0x3a8310f5, 0xbc4a7633, 0xb808d80f, 0xbc88636b, 0x3b1c35ba, 0x3bd34dd7, 0x3a5e5c0e, 
    0xbc452f70, 0xbbc0e266, 0xbbe197af, 0x3b282864, 0x3b19ad31, 0xbc012954, 0xbacd853c, 0xbb8adce3, 
    0xbc071ccc, 0x3b931b9c, 0x3c951bef, 0xbc35287e, 0xb73dfffa, 0x3c175fb1, 0x3c1a835f, 0x3bbb5830, 
    0xbbdaf2a3, 0xbd6b3d7c, 0xbbee5039, 0x3c6a7fbc, 0xbb70b475, 0xbb8d3327, 0x3cb067c8, 0x3bc208a6, 
    0x3c08a93a, 0x3c05000c, 0x3c389ada, 0xbc3ba75d, 0x3c4b914d, 0xbaeb2b19, 0xbbd36ccc, 0xbc103444, 
    0xbbca07c9, 0x3c1ab307, 0xbb9623e2, 0x3c4be012, 0xbb96428b, 0x3d03ad52, 0x3bc0cb24, 0xbc855e28, 
    0x399093a4, 0xbc8ee3d3, 0xbb79fdb0, 0x3b75bbd3, 0xbbbcabba, 0xbc54c3d9, 0xbc13fb5c, 0xbb523e14, 
    0xbc830d78, 0xbd810163, 0xba979153, 0xbc00dc29, 0x3bbd76fe, 0xbc08fc4e, 0x3bf89dc5, 0x3d2b69c0, 
    0xbc2246a7, 0x3b4d2b34, 0xbbf20b49, 0xbbc0c1d5, 0x3c373880, 0x3aa764ac, 0x3b05aa9c, 0x3b7522e7, 
    0xba8d7a4f, 0x3b463aa6, 0xba16bcbd, 0x3c0355e5, 0x3a8dff0e, 0x3ca70fca, 0x3c1ec5b8, 0xbc6d2a56, 
    0xbc12394e, 0xbc91e04b, 0x3c36ac0a, 0xbc0a7b89, 0x3ac49b82, 0xb98b3dde, 0xbc9c6fec, 0xbb82d8ce, 
    0xbc951dd9, 0xbcd9ba27, 0x3bb784a4, 0xbc7558dd, 0x38b01426, 0x3abd3c44, 0x3c94cb55, 0x3c4a6208, 
    0x3b200fb2, 0x3c012db5, 0xbc92ef4f, 0xbbe3141e, 0x3c184720, 0xbba9d228, 0xbbe34931, 0x3c9851c7, 
    0xba2186d4, 0xbc155342, 0x3c21c652, 0x3bfbc7bc, 0xbaedc065, 0x3b64dd8e, 0xbbbad674, 0xbc511820, 
    0x3a4b01d3, 0xbbbb32a4, 0x3bbdabba, 0xbbbca719, 0x3b7f151b, 0xbc8f9cd1, 0xbcae5673, 0xbb83b73f, 
    0xbc8a503a, 0xbc19f23e, 0xbaa6483e, 0x3c5b5c1f, 0xbc4002fb, 0xbbede3d8, 0x3d462bb7, 0xbbebee53, 
    0x3cd2abad, 0x39131d09, 0x3ccf9d5a, 0x3bc2d582, 0x3be5b2ad, 0x3bfe81a1, 0x39c451f7, 0xbbc53c8e, 
    0xbbd92ba5, 0xbbc3aaf9, 0x3c3ed014, 0x3c2f3216, 0x3c1485a5, 0x3c99b5b3, 0x3b66e166, 0xbac0736e, 
    0x3be201f8, 0xbbae64ee, 0x3bac3fda, 0x3c65934a, 0xbc001c3d, 0xbcb93631, 0xbb801d00, 0xbb6f195a, 
    0xbc0dc6e5, 0xbc7f9410, 0x3a068f71, 0xbba62602, 0xbb7066d2, 0xbc6830d0, 0x3c8d4d24, 0x3ce009f2, 
    0xbce343e9, 0xbc1b34f0, 0xbacaee03, 0x3cb8df5c, 0x3973a438, 0x3c4a583a, 0x3c6e8d40, 0xbcf419fb, 
    0xbc337c46, 0x3ca832c8, 0x3c7e96b5, 0x3c84b831, 0x3c03b18c, 0x3c341e07, 0x3b1c18e6, 0xbbd184e7, 
    0xbb8f2bd3, 0xbc0a6c79, 0x3c65c058, 0x3aea1b98, 0xbb9214b8, 0x3c9ca921, 0xbb90a793, 0x3c58bbc7, 
    0xbcd86cac, 0xbbb7b4a1, 0x3c573947, 0xbd36dd32, 0xbc7ba95a, 0x3be94c0b, 0x3cc02d33, 0x3a973bf5, 
    0x3ae5673a, 0x3b25a4a4, 0xbd30267f, 0x3af3fded, 0xba095222, 0x3ada81a2, 0xbc079ac7, 0x3ca8dc54, 
    0xbbbc1b00, 0xbb9603fb, 0x3d181a29, 0x3a8e70e2, 0x3c84b964, 0xbbb4ff7c, 0xba83a4ed, 0xbb8f74c3, 
    0xbb8fd748, 0x3c420299, 0xbc8d579a, 0x3a835d31, 0x3a7e4318, 0x3a1128df, 0x3c38bd3e, 0xbc26ca50, 
    0xbbb4caa6, 0xbc66a3ab, 0xbb8e18c0, 0x3c9ef6d0, 0xbc290f09, 0xbc533bc9, 0x3c264579, 0x3ce1f2db, 
    0x3a1320b3, 0x3cf66b07, 0x3b4c88da, 0xbbc7d906, 0x3b8e1062, 0x3cafa262, 0xbc20d692, 0x3c228b8b, 
    0xbbbd3ed8, 0xbc32b723, 0xbbe552fc, 0x3c399a2c, 0xbc121bf4, 0x3c605df7, 0x3bd14d3c, 0xbce920b3, 
    0xbcbc6bdc, 0xbbc656c9, 0xbcb79177, 0xb9da78ee, 0x3b2c7be6, 0xbd01316b, 0xbbe15835, 0xbc593c81, 
    0x3be73de5, 0xbc15979d, 0xbd1fb9dc, 0xbb9be394, 0xbce9f587, 0xbc108855, 0x3ae5f283, 0x3b8c5359, 
    0xbc8c160d, 0x3d65113f, 0x3c25f6fe, 0xbc9bf718, 0x3b98a684, 0x3cc46e8d, 0xbc41498c, 0xbcb4d60e, 
    0xbbdfbada, 0x3d6acbf6, 0x3c4595cc, 0xb8b4a7dd, 0xbc96657f, 0x3c533cec, 0x3c059e7b, 0xbd0370ef, 
    0xbce9e11f, 0x3b3439c2, 0x3c6a29d8, 0xbc184caa, 0xbc11682b, 0xbbf63073, 0xbb69cb4b, 0x3c97e452, 
    0x3b692985, 0x3b980737, 0x3cf0a0e2, 0xbc2a73fe, 0x3ba81832, 0xbc03c9fe, 0xbbf5f6a2, 0x3cad84f3, 
    0x3cb45507, 0x3c3dd645, 0xbb2597b4, 0xbbb93198, 0x3cbcc781, 0x3cb22459, 0xbcba7214, 0x3c2b36b4, 
    0x3b97e6c3, 0xbc3b7fab, 0x3cadca52, 0xba00fb95, 0x3b1d6d9d, 0x3b354b51, 0x3c8c0604, 0xbc4466d2, 
    0xbcb32131, 0x3c0f3268, 0xbc3d586d, 0x3c840a05, 0x3cc292d0, 0x3abdc828, 0xbc16401c, 0xbc844ce0, 
    0x3c1a158a, 0xb984044c, 0xbcf0493d, 0xbcbf7cc7, 0x3c110ca7, 0xbc5c66c8, 0xbced8d96, 0x3bcd8c6a, 
    0xbd1f2149, 0x3c392db9, 0x3c65969a, 0xba0ed2cb, 0xbc9138c3, 0x3cb3f809, 0x3cbcf507, 0xbbb1f444, 
    0xbcbbae34, 0x3d069f59, 0xbbf9b539, 0x3ba94179, 0x3c0d301d, 0xbc0f7de5, 0x3c421011, 0x3b8064c7, 
    0xbcf8e90f, 0x3c6f1125, 0x3d0e76a9, 0xbbe01b0b, 0xbbbdc770, 0x3d0f9573, 0x3c7e68c1, 0xbaceb222, 
    0x3a379886, 0x3c08b2ee, 0x3d0af077, 0xbc1162c7, 0xbbcd06bf, 0xba64168a, 0xbac97121, 0xbbc4e719, 
    0xbc039038, 0x3b4ebf8b, 0xbc6137ea, 0x3c0f95a2, 0xbc6e277c, 0xbb5d7adf, 0xbba62c83, 0x3c964b21, 
    0xbc911ff3, 0xbcff0cd3, 0x3c700d08, 0x3c034e8b, 0x3bcb5e21, 0xbcaa7ece, 0x3af8cfed, 0xbbc33452, 
    0xbb1110f8, 0x3cd856a5, 0xbcd7bab3, 0xbb3b3d48, 0xbafdf1a3, 0xbc0ec509, 0x3cb84f5c, 0xbc9b221a, 
    0xbad3614f, 0x3b82a374, 0xbba71cbb, 0xbb9e89e3, 0xbcc1d490, 0x3c58ec28, 0x3b34984c, 0xba21fd6b, 
    0xbcfa0ab5, 0x3c87ebe3, 0x3a42e68f, 0x3a45dc21, 0xbd068364, 0x3c8d3dbf, 0xb9937251, 0x3c93f9cb, 
    0xbc8bc5bf, 0xbb6c3eea, 0x3b6e6ce9, 0xbb83bc21, 0x3bc01b9b, 0xbc848fde, 0xbc4c83ac, 0xbbf11ef1, 
    0x3b429d74, 0x3d040863, 0x3b8a1ba6, 0xbc8bde06, 0xbcc77200, 0xbca6bd97, 0x3c9491b5, 0x3bbdd5c5, 
    0x3c6bf1c0, 0x3c81c49c, 0xbc40002f, 0xbc98f1e9, 0x3d48bd1c, 0xbcb91ac3, 0xbd435d89, 0x3bd70bf8, 
    0xbc50d019, 0xbc19a7c6, 0x3c4e7cfe, 0xbb3f2fcb, 0x3c70f5e7, 0x3c5cc78a, 0x3c34bfb2, 0x3c32ce51, 
    0x3b61f492, 0x3cc46f06, 0xbca6cac9, 0xba321c08, 0x3c143c10, 0xbb78a0e7, 0x3d10aaeb, 0x3ca2fc2d, 
    0xbd536e1d, 0x3bf566b6, 0x3d01879a, 0x3b920315, 0x3d35ee38, 0x3d2f1db4, 0xba020e01, 0xbcce909d, 
    0x3c06f7bf, 0x3d04f9e1, 0x3c025675, 0x3c0dc4ff, 0xbc2c4e48, 0x3c55a186, 0xbbeba0e4, 0xbcee4f7c, 
    0x3c951ecc, 0xbb9f0a09, 0xbb83da72, 0x3b888ed3, 0xbb30d0f0, 0xbc3a1ad6, 0xbc030fd6, 0x3c15944b, 
    0x3bd9bb6d, 0xbc9c46f9, 0x3b960eb1, 0xbb40beb9, 0xbb6b2f6b, 0xbcb356b5, 0xbc01eb85, 0x3c623098, 
    0x3cac0236, 0x3ca50c54, 0xbc4475ee, 0x3b27012d, 0xbb8f81b7, 0xbc9d0c7d, 0xbbb0a9f2, 0x3c6ff020, 
    0x3bd96aa2, 0x3bf89f1e, 0xbc90b831, 0x3c6473e9, 0xbcbcf471, 0x3c7e0000, 0xba4bf134, 0xbb9567a2, 
    0xbb034c77, 0x3b4df931, 0xbb573d22, 0xbb2e86bb, 0xbc8bcae9, 0xbb12af3b, 0xbc2acc58, 0xbadd131c, 
    0x3ba05f99, 0x3cc38626, 0x3b328681, 0xbc3a7028, 0xbbe0df3c, 0xbc879367, 0x3a5bd397, 0xbb8ca053, 
    0x3cafc488, 0x3b770387, 0xbc4e428f, 0xbc7bafd3, 0xbce3c2f3, 0xbbf3da87, 0xbad7bd32, 0x39e71bd8, 
    0xba556d00, 0xbb5f0ee9, 0x3babcb44, 0xbc51667d, 0x3c96fdab, 0xbc174995, 0xbc2ab1e8, 0x3c48fe1d, 
    0xbb128f7b, 0xbb610dd4, 0x3cbd4934, 0xbb030ec7, 0xba9ead1f, 0x3c6c63b2, 0x38a26afe, 0x3a788f19, 
    0xbb6bfd83, 0xbc86c0eb, 0xbcb4cfd3, 0xbb875821, 0xbaf681cb, 0x3bcf7bbd, 0x3cbf2e3a, 0x3c37c2d8, 
    0xbcf66f81, 0x3bd2edfe, 0x3cb5b628, 0x3bf8bc90, 0x3c909007, 0x3c3482a0, 0x3c5a3de4, 0xbc9566fc, 
    0x3c12bf62, 0x3b98fa00, 0x3ce9897f, 0x3c4aecf3, 0x3b98dc43, 0x3ba95f4c, 0x3b42d146, 0x3ba8fadf, 
    0xbb37ffea, 0xbc655fff, 0x3cf7ccac, 0x3c20280b, 0xbb880cea, 0x3bb718d6, 0x3c19033a, 0xbb32e670, 
    0x3b575550, 0xbd02b4cc, 0xbb79d277, 0xba938484, 0xbb9aae63, 0xbb2aa62c, 0xbcef5053, 0x3ca745a0, 
    0x3c4c0bf8, 0x3bc7580d, 0x3bc28106, 0xbc4dceef, 0x3c4e5e45, 0xbcaddeab, 0xbc98597f, 0x3dbf028f, 
    0xbbf4ba33, 0xbc05940e, 0x3c2d10a7, 0xbc2f51b8, 0xbb95a7d9, 0x3c3b0360, 0x3b2cda54, 0x3c7b4fcb, 
    0xbbe7800e, 0xba8b16cc, 0xbbe8fb0f, 0xbbbe2846, 0xbbb5b0e4, 0x3bc047c3, 0xbc510738, 0x3b9e8207, 
    0x3b2e4b08, 0xbb749493, 0x3a8bb45d, 0xbc2f86ef, 0xbc046023, 0xbb824072, 0xbc2db5b9, 0x39fc8162, 
    0xbb99616a, 0x3c024c06, 0xbb5fab8a, 0xbcbb4f65, 0x3c1c6e9d, 0xbb72cd8e, 0xbb1b0389, 0x3c5623eb, 
    0x3c2ec3e8, 0x3aa48543, 0xbd035795, 0xbcce0311, 0x3c934cfb, 0xbc8739c2, 0xbd07c25d, 0x3b19ca50, 
    0xbce092f6, 0x3bc6e6f5, 0x3c02d297, 0xbbb8676b, 0xbb4dc822, 0x3c21a213, 0x3cafffa3, 0xbcd2ea55, 
    0xbc80cd18, 0x3d3d446c, 0xbbda0386, 0xba565ef0, 0x3b6cc24d, 0xb9d75ace, 0x3cac1d05, 0x3bb7cbe1, 
    0xbd01d0b6, 0xbb2df77a, 0x3ce22bac, 0xbb9caa5d, 0xbb5c0f7a, 0x3d4c0714, 0x3c2ec14f, 0xbae72d3c, 
    0x3991d661, 0x3c290f4c, 0x3d088212, 0xbc346765, 0xbb9fb583, 0xba194f6c, 0xbbf68791, 0xbc595983, 
    0x3c511365, 0x3b3dc4c8, 0xbca6b4d8, 0x3b29e34a, 0x3bf77872, 0xbc6c2932, 0xbc25ce2a, 0x3bb1ab5d, 
    0xbc43c0ba, 0xbca4e1e3, 0x3c906cf0, 0x3bef2fb4, 0xbb600b9d, 0xbc669c21, 0x3b72072a, 0xbb981280, 
    0xbbb5f09d, 0x3c21136b, 0xbcdf88e3, 0x3bbcdc9e, 0x3bad17c9, 0xbb9c867c, 0x3ca8bce1, 0xbc91f980, 
    0xbb2fb841, 0x3bd35ead, 0x3a0d902a, 0xbbf9ce4c, 0xbc8ac977, 0x3c1f7576, 0xbb894ba9, 0xbbb2ba09, 
    0xbc1f3338, 0x3c43853e, 0xbb142886, 0xbb533632, 0xbbed8469, 0x3bd90554, 0xbbd3d73d, 0x3c0347ee, 
    0xbc22d4eb, 0x3ab32abb, 0x3bba44bb, 0xbbec3e5e, 0x3ba74da5, 0xbc23fe20, 0xba46513d, 0xbbeac6f6, 
    0x3b79437a, 0x3cad66b4, 0x3bbab4fc, 0xbc122092, 0xbc6728ba, 0xbc09aa7e, 0x3c407f4c, 0x3b70585b, 
    0xba6ef885, 0xbb6e500c, 0xbc1fd303, 0x3c1ffebf, 0xbc48da42, 0xbba90470, 0x3c3c270b, 0xbb126151, 
    0x3c374b21, 0x3b9b442e, 0xbb6a8c89, 0xbb659fdf, 0x3ba54c7b, 0x3af396c1, 0xbb8b11d7, 0xba55bafa, 
    0x3ab5505e, 0x3bf37537, 0xbb2f73d3, 0x3c301852, 0xbc56d6cc, 0x3c0bc998, 0xbc51154f, 0xbc93929d, 
    0x3aad3b13, 0xbbe89986, 0xbc9e0c21, 0x3c85c4f3, 0x3a982b92, 0xbc9bb498, 0x3acd6545, 0xba1c27cc, 
    0xba599a97, 0xbc6f9607, 0x3c01c151, 0x3c6f5695, 0xbd04dbad, 0x3afa2322, 0x3bed48f3, 0x3c60165d, 
    0x3bdc47b3, 0x3cf66724, 0xbb0502ee, 0xbbad7ea9, 0x3c0398db, 0xba5a4071, 0xbca4d537, 0x3bc03cc2, 
    0x39b13a61, 0x3a8d7b86, 0x3b943f78, 0x3bf6aa3d, 0xbc86d6d0, 0x3b7b3d53, 0xb9d4dc3c, 0xbd866cc0, 
    0x3aba74fb, 0xbc079b31, 0xbcc98b06, 0xbc0a4ae9, 0x3c0bd368, 0xbbffd767, 0x394e43dd, 0xbb9941f5, 
    0xbbf150f9, 0xbbe2d63e, 0xba872626, 0xbc43eb19, 0xbb801710, 0x3b4158b2, 0xbb86d358, 0x3cd4d835, 
    0xbb9aae57, 0x3cf07538, 0xbad24460, 0xbb82835e, 0x3b316142, 0x3cbdee29, 0xbc396a95, 0x3bee68ab, 
    0x3b1e76dc, 0x3a8606cc, 0x3c3baf81, 0xbc24e0eb, 0x3c20d537, 0x3944beab, 0x3c8acdf5, 0xbc672b0c, 
    0xbc7debd6, 0x3bcdd2ad, 0x3bcfc067, 0xbc455f5e, 0x3c072962, 0xbab25c06, 0xbc6a799d, 0x3bb6273e, 
    0xbc914d35, 0xbca1e0aa, 0xbc292ffc, 0x3cbc6776, 0xbcce60a0, 0xbc15b602, 0x3d642b75, 0xbb8b9f07, 
    0x3c105293, 0x3c5e26a2, 0x3d2cab12, 0x3c5325ac, 0xbcbc0f35, 0x3c93890b, 0xbbadc216, 0xbc53ae7b, 
    0xbd33d149, 0xbaa25777, 0xbc54437b, 0x3c90a7ef, 0x3b3efdb0, 0x3cb9c8c2, 0x3b839ba5, 0xbbd88640, 
    0xbc08bd43, 0x3a034468, 0xbb3ba676, 0xb82787c9, 0xbcea32b9, 0xbcd4ad60, 0x3c66ced9, 0xbcb63e2d, 
    0xbc16d255, 0xbd10ec46, 0x3c3f90e8, 0xbad7ffe3, 0xb9098769, 0xbc86f874, 0x3c8291f5, 0x3cebb056, 
    0xbd30ac8b, 0xbb4b7e41, 0x3c948e72, 0x3cebc1a4, 0xbc7be178, 0x3c9b0b92, 0x3c6ef44e, 0xbd0562f3, 
    0xbd2464d0, 0x3c16f322, 0xbc97b9b3, 0x3ca5f8c1, 0x3b08bd0b, 0x3c7d7b5f, 0x3b59b293, 0xbbfc25da, 
    0xbc992660, 0xbb424212, 0x3c378187, 0xbc0c32c1, 0xb91651e3, 0x3c844d16, 0x3c31b1bd, 0x3c9271fc, 
    0xbc2801aa, 0xbc5a8440, 0x3c0c66d2, 0xbd170556, 0xbc408848, 0x3b4ab028, 0x3bc929c3, 0xb9551237, 
    0xbc437d4b, 0x3b922089, 0xbd1e6a12, 0x3c33b8ac, 0xbc9c31d6, 0x3c2a4019, 0x3a65625f, 0x3c5c76f8, 
    0xbcc88485, 0xbc0d60d2, 0x3becb8cc, 0x3c773617, 0x3b9704ab, 0xbb9b26be, 0xbc5f9c4a, 0xbb455389, 
    0xbc1d24d1, 0x3c3b8b54, 0xbb688c48, 0xbbb68eb3, 0xbc400200, 0xbbaaf668, 0x3cce450a, 0x3811778f, 
    0xbc1638ca, 0xb97844fe, 0x3c46b933, 0xbc9818ab, 0xb9e3f025, 0x3b7bdbee, 0x3ae5af72, 0x3cbb03b4, 
    0xbca16477, 0xbb9f2ee2, 0xbc172269, 0xbb122b09, 0x3b2499b6, 0x3c6f773d, 0xbbbfb842, 0xbb68f994, 
    0x3bdd990a, 0x3ba3d156, 0x3cffa6e0, 0xbca4435b, 0x3c5ba4ee, 0xbb443c33, 0x3c0484ed, 0x3b2be7c7, 
    0xbc44a8e0, 0x3c013bbd, 0x3b74ce14, 0xbc14272f, 0x3b418d20, 0x3bff38c8, 0xbbf95951, 0xbb8a4581, 
    0xbc3a7c0a, 0x3c05bcad, 0x3a9f32e8, 0xbc56390e, 0xbba66198, 0x3cfcfcd0, 0x3c003042, 0x3c1f8976, 
    0xbbe31e63, 0xbb4f53fa, 0xbac847b4, 0xbb378524, 0xbbd8273f, 0x3c10971e, 0x3a5b669f, 0x3c149fdd, 
    0x3c517c31, 0xbba58300, 0x3ccaf4f1, 0xbca68896, 0x3c115d04, 0xbc11984d, 0xbc5c5a24, 0x3c1175ef, 
    0x3ba90c97, 0x3c61e117, 0x3c0ee7f7, 0xbbc9ede0, 0x3b8af1b5, 0xbc9b54f4, 0xbc950450, 0x3cbc7b55, 
    0xbc4780d6, 0xbb0514d1, 0xbaeb9fb5, 0xbba51abe, 0xbb92ad56, 0x3cc34585, 0x3b2ab3df, 0x3c92c365, 
    0xbc1935e4, 0x3a0eacd4, 0xbc0c5db7, 0xbb957516, 0xbbafd23e, 0x3c1d3996, 0xbbfd449b, 0x3c83eece, 
    0x3c0621a9, 0x3afa6608, 0x3c5b1029, 0xbca633ae, 0x3bbd3c6a, 0xbc0aea57, 0xbac2ffd8, 0x38d0ca22, 
    0xbc07a7ab, 0x3b5aa5d2, 0xbba8236f, 0xbc7da0dc, 0x3ae5130e, 0xbaae2127, 0xbc34ab0d, 0xbab03f22, 
    0x3a18dd40, 0x3ba9b344, 0x3c42aee8, 0xbc85bffe, 0x3c914c19, 0xb9560fd2, 0xbc13bcc8, 0x3cd03110, 
    0xbc8adf9a, 0xbc0d9ad9, 0xbb2227cb, 0xbc3f6817, 0x3c39e661, 0x3cab7e7b, 0xbb9de764, 0xbbd51432, 
    0x3c1ae1f8, 0x3bbbfafd, 0x3a852b44, 0xbc9ca929, 0x3b9ee64b, 0x3ba60549, 0x3b929198, 0x3c1a9b36, 
    0xbcb7c1a4, 0x3b6df93e, 0x3c69a38d, 0xbb9e17ae, 0x3c45d330, 0x3bdc137a, 0xbc8f6ce6, 0x3afb42ab, 
    0x3be3a47e, 0x3c9cddbd, 0x3c768ea4, 0xba8cf15d, 0xb9167ab5, 0x3cd99063, 0xbac4c424, 0x387689cf, 
    0xba37532f, 0xbc08a552, 0x39b5cb7d, 0xbc51079e, 0xbac3e206, 0xbb5ebd6d, 0xbc21761f, 0x3b826ba4, 
    0x3c764e69, 0xbc26a07f, 0x3c06c6db, 0xbc53fb5d, 0xbbbcccaa, 0xbc2acf3d, 0xbcb17f69, 0x3bf49b23, 
    0x3aed3370, 0x3bdb83cb, 0xbb488511, 0xbc0a3d0d, 0xbb1aa88f, 0xbc9be139, 0xbc5dc1ba, 0x3c8dbd37, 
    0xbbb6d8ac, 0x3ba6402b, 0x3c9fc60f, 0xba62567b, 0xba9295b1, 0x3ccb00c1, 0x3b65c9dc, 0x3c3db7bb, 
    0xbc001aef, 0xbb2be18e, 0xb7ed34f8, 0xbc8d6fe9, 0x3ba47916, 0x3b8622fd, 0xbc6aa31b, 0x3bc200cb, 
    0x3c3945b3, 0xbc2041df, 0x3b844e1f, 0xbcb7a682, 0xbb9e118b, 0xba4c1488, 0xbb96fd66, 0xba7db264, 
    0xbc24ccf0, 0x3b51e4c5, 0x3b078a01, 0xbcf37c44, 0x3b26b4b2, 0xbc21ecaf, 0xbc4bffc8, 0xbb210eec, 
    0xbb8e343f, 0x3a3230ed, 0x3bcfc0ec, 0xbbaaf487, 0x3a628d1d, 0x3b04d893, 0x3afd9dae, 0x3c06cdd0, 
    0xbc08e333, 0xbb0a908a, 0x3b12dc26, 0xbb6f4df3, 0x3b8f3f32, 0x3bc7a6b9, 0xb94b60e9, 0xbb1d6a4c, 
    0x3b4534e9, 0x3aae6d04, 0x3c07ae40, 0xbc69bf93, 0x3b9970c7, 0xb97caaeb, 0x3b4634fa, 0x3b140a48, 
    0xbbca5601, 0x3b03597d, 0x3c02f185, 0xbb36182f, 0x3b02bd7f, 0xbaf01978, 0xbbe19bfa, 0x3a994396, 
    0xbb6c7458, 0x3a458505, 0x3c0416be, 0xbb003a5e, 0xbb6e5b9b, 0x3c5d342a, 0x3b93dc2f, 0x3c2c6a5a, 
    0xbc02521f, 0xbb3faf7f, 0xbbe7a40a, 0xbb04d4bb, 0x3abfb4b1, 0x3b72d234, 0xbb25ac04, 0x3bd44fa2, 
    0x3bcb9bcc, 0xba7bf030, 0x3c7def95, 0xbc047ce6, 0x3ba81d4e, 0xbb8addc8, 0xbb998e9f, 0xb9762079, 
    0x3812259b, 0x3b5bdd36, 0xbc093c74, 0xbbbdd3ba, 0xbb59d2df, 0xbc17db5b, 0xbc15484f, 0x3b838643, 
    0xbb9f2fab, 0xbb0113aa, 0x39c56684, 0xbc2b59a1, 0xba4a6478, 0x3bc663f1, 0x3a8b6e65, 0x3c3b5818, 
    0xbc6114a1, 0x3b07fab8, 0xbb943821, 0xbc332bd7, 0x3ac9edc6, 0x3a94cf28, 0xbad45680, 0xbaabdad2, 
    0x3b6ec096, 0x3bc1b8db, 0x3c108216, 0xbc8d0a63, 0xba4a4279, 0xbb768e84, 0x3b9bf69a, 0xbaf700d0, 
    0xbbfdd7f5, 0x3a63624d, 0x3bebeed1, 0xbc03a796, 0x3abafe1b, 0x3bb34432, 0xbb4e34d1, 0xb98b2a1b, 
    0xbb8a5b21, 0x3c10c447, 0x3bd47540, 0xbc60e8fc, 0x3c293d3f, 0xbaed2b32, 0xbb81eddd, 0x3c31db76, 
    0xbab8aaf4, 0xbc8ad74e, 0x3c05ad5c, 0xbacacf02, 0x3c0c4885, 0x3c8c6d39, 0x3aedfd44, 0xba9fc771, 
    0x3bb3bcae, 0xbb44443a, 0x3c1e9517, 0xbc1ff04e, 0x3c5be22d, 0xb93b89f0, 0x3c2457c1, 0x3c99f209, 
    0xbc9260d7, 0x3c4d5b62, 0x3c4874c6, 0x3be99161, 0x3c7decbd, 0x3a34f48b, 0xbc09cf22, 0x3b944f8a, 
    0x3b473a0d, 0x3c21336e, 0x3c2f0e35, 0xbb1ff794, 0xbbcda8d1, 0x3c39a96a, 0x3a0e8952, 0x3bcc44d1, 
    0xbb3715f6, 0xbc3ed9e0, 0xbb15b5cd, 0x3ba609f6, 0xbb61f6de, 0x3bcf77da, 0xbac95bd4, 0xb9c3ae13, 
    0x3c064ee4, 0x3928958a, 0x3c9201be, 0xbb0e485b, 0x3ba549d4, 0xbc3ebdc4, 0xbc2cb8c7, 0x3c2f1c80, 
    0x3ba2bcc8, 0x3c38aaf0, 0xbbc59ea0, 0xbad3278f, 0xbaa2cb3c, 0xbc03a4ad, 0xbc4f4438, 0x3cfe6dab, 
    0xbc48e175, 0xbb280b00, 0x3b6b4cbf, 0xbc21e5d4, 0xbc2fc28d, 0x3c526477, 0x3bd5f02f, 0x3be52607, 
    0x3b4be0c0, 0xb9cd0f66, 0xbbe42d9b, 0xbc1d73a6, 0xba8d6381, 0x3b8ac977, 0xbc5410ed, 0x3c0023bd, 
    0x3bb9d029, 0xba63dd86, 0x3c8ddceb, 0xbc448ed8, 0xbbbabcc1, 0xbb31e35d, 0x3abc1304, 0xbb0bb41b, 
    0xbaef004f, 0x3c18a645, 0xba31bdae, 0xbc094815, 0x3be8bd99, 0xbb34616d, 0xba8a975a, 0x3b49024f, 
    0xbc939b5b, 0xbc24562a, 0x3a9cba42, 0xb91c09af, 0x3c85d374, 0xbb883426, 0x3ce2270d, 0x3c7bc1fb, 
    0x3c6ce8c9, 0xbc015e10, 0x3c72bdc6, 0xbb78e036, 0x3c754aca, 0x3b9d1983, 0x3bdfa536, 0x3be7a12c, 
    0x3b928a86, 0xbc731d07, 0x3c03dbb3, 0xb9c279c1, 0x3c5c20f8, 0x3c68219e, 0x3c6ac077, 0x3bc864ec, 
    0xbac02b38, 0xbb8fc3a6, 0x3c8f94c1, 0x3c73c2b7, 0x3cb0d68a, 0xbb04a66a, 0xbc96f645, 0xbb7c17a7, 
    0xbb977220, 0xbbe9e530, 0xbbabece6, 0xbc0bda58, 0x3c05be46, 0xbbc203dc, 0x3bc13ac8, 0x3cabb6c7, 
    0xbcb13a71, 0xbc607459, 0xbbba1e79, 0x3c0963be, 0x3acf0d8e, 0x3b96278f, 0x3cbba63f, 0xbc4db029, 
    0x3bb41cbc, 0x3af3a62f, 0x3ca6f992, 0x3bc38dc2, 0x3c030657, 0x3bb9399e, 0xbbb115a0, 0x3b9c3e8d, 
    0x3a330956, 0xbb8c0e84, 0x3c5f6d58, 0x3ba8385e, 0xb98149cd, 0x3b1a5e3c, 0xbc9a8b1d, 0x3cccf38b, 
    0xbc3e290d, 0xbb9d57f0, 0x3c3ce895, 0xbd1e2e48, 0xbbcfb842, 0x3bbdbb8d, 0x3cb605ba, 0x3bb8c7de, 
    0x3af984b4, 0xbb3baa3e, 0xbd22c056, 0x3a856898, 0x3b92acf7, 0x3b8e7dd4, 0xbc59f4f9, 0x3c133520, 
    0xba1be86d, 0xbb69a108, 0x3d0404f0, 0xba94703b, 0x3c762f5c, 0xbb5fc2d2, 0xba8468ff, 0xbade304e, 
    0xb9df8c8a, 0x3c1051ba, 0xbc740b42, 0x3baac91a, 0x3ba54ce4, 0xbb6fd1ff, 0x3c03d6a6, 0xbbaab375, 
    0x3c59a55d, 0x3c2b5c89, 0xbc3a95e9, 0xbcec625c, 0x3c95123c, 0xbc56ce25, 0xbcd67efb, 0x3c7fc46e, 
    0xbc9aa966, 0xbbec390c, 0x3be17790, 0xbbdc0a65, 0x3c77180e, 0x3cd1c50d, 0x3b48ffe4, 0xbc7a9dc1, 
    0xb944d767, 0x3d057eb5, 0x3ca6805e, 0x3b986542, 0x3c0ffda5, 0x3accbbca, 0x3c479ac8, 0x3b5fd211, 
    0xbd407d5c, 0xbbd42c45, 0x3cc06ebb, 0xbbefff75, 0x3c6655f3, 0x3ca26ba0, 0xbc63fc38, 0x3c195c1d, 
    0x3af3ccea, 0x3ca4609c, 0x3ced1acd, 0xbc3a108b, 0xbc18f09a, 0x3c51a841, 0x3a936052, 0xbc66bd31, 
    0x3d0d99b7, 0xbb38e4eb, 0xbc34da27, 0xbc64c634, 0x3c51a76a, 0xbafc6b84, 0xbca8071f, 0x3c8e3e5d, 
    0x3b08945a, 0xbd254eb2, 0x3cfd0067, 0x3b207e0a, 0xbbd06476, 0xbc4d0a28, 0xbcaf5b45, 0x3ab9f6f5, 
    0xb9b2484f, 0x3cb06c94, 0xbc75047a, 0x3c2e3ad5, 0x3c3492a8, 0xbd05566e, 0xbb0e58bb, 0x3c371178, 
    0xbc14dfe8, 0x3b8cb068, 0x3c9c2a5c, 0x3b2621bf, 0xbc21c082, 0x3c636f8c, 0x3c54bb65, 0x3c5c7f82, 
    0x3b2fc6ae, 0xba1b6043, 0x3bc3e642, 0xbc3f94d3, 0x3c674801, 0x3c69906d, 0xbc9878c9, 0x3b5992fe, 
    0x3beccffa, 0xbbb09b63, 0x3c4d58b2, 0xbbdee743, 0xbbca7ded, 0x3c0548b8, 0xbc421fb5, 0xbba60f24, 
    0x3b9e3616, 0xbaccb34a, 0x3b3925b6, 0xbc7ba690, 0x3bd736dd, 0xbc94a5ab, 0xbc82b1ad, 0x3c884b38
};

static const uint32_t _K34[] = {
    0xbf1f6695, 0x3f7b8aef, 0xbee43762, 0xbeadb752, 0x3f9c8f68, 0x3dbdf98e, 0x3f10e4c9, 0xbf6de498, 
    0x3f950f97, 0xbf0334ac, 0x3e92d59a, 0x3e279a9f, 0x3e31b1c2, 0x3f465276, 0xbe4af1bc, 0x3ee4afc6, 
    0x3e421c0a, 0xbfa1d4f0, 0x3e54ced8, 0xbe014b7e, 0x3f9dc7f0, 0xbf538257, 0xbdefee62, 0x3f292d4e, 
    0x3e70ba40, 0x3f2f9efa, 0x3f0cb00a, 0xbf4e5d13, 0x3e9e1fd4, 0x3e91e110, 0xbf1bb718, 0xbf359e42
};

static const uint32_t _K40[] = {
    0xbc62996c, 0xbf24b8ac, 0x3a8c3cf5, 0x3ea5c308, 0x3f129ad0, 0x3eb1bc76, 0x3e5be10b, 0x3f198932, 
    0x3e044692, 0xbeef54c1, 0xbec5a1b7, 0x3f0433c2, 0x3e25ab39, 0xbfb41e5c, 0x3f592b1c, 0xbf4ae080, 
    0x3e957134, 0x3f505f79, 0x3eae314c, 0x3e3401f4, 0xbd97449a, 0x3f88a30e, 0x3e0b9f43, 0xbed8430e, 
    0x3e8d761d, 0x3e67d588, 0xbef9441e, 0x3fe9a72d, 0xbd071208, 0xbf135623, 0x3eb76003, 0x3e726204, 
    0x3ec7c947, 0x3f8d9338, 0xbfa5eedd, 0xbfa45953, 0x3f2a2a28, 0xbe8480d4, 0x3e9924e3, 0x3eb15804, 
    0x3f078600, 0xbf034eaa, 0x3eee0a20, 0xc0063ea8, 0xbfb90002, 0x3e4f501b, 0xbfa08881, 0xbf9573ff, 
    0xbfe0b3fa, 0xbf2ce607, 0xbfa997c2, 0x3f053186, 0x3edf35a8, 0xc01edd3e, 0xbfba72f0, 0xbe09cd34, 
    0x3f245f63, 0xc00d48e2, 0x3e0cd027, 0xbf8ba19a, 0x3e1a7aaf, 0xbf02bcec, 0xbfbeceed, 0x3e93d13a, 
    0xc016a70f, 0xbcff9e9f, 0x3fa94bb4, 0x3f242929, 0xbf5d1997, 0xbf3e37bb, 0xbe74f790, 0xbf443c2a, 
    0xc04e1ee8, 0xbe30af10, 0xc0246697, 0x3e82509c, 0x3f4a057b, 0x3f0274de, 0xbf699860, 0x3e483e35, 
    0x3f1487ff, 0x3f5f4def, 0xbeb0ca37, 0xbf24bbc3, 0x3f46c1ab, 0x3f8e304c, 0x3f8c25c4, 0x3f453380, 
    0xbfd1d960, 0xbebbdde1, 0xc016cef2, 0x3ed79978, 0xc0149193, 0x3d2649b8, 0xbd22e3f9, 0x3fd5a29c, 
    0x3e4f6900, 0xbf6bcf9d, 0xbe766a7e, 0xbe787687, 0xbfab7496, 0xbf9a2b0d, 0xbf66a43d, 0xbfaadbbe, 
    0x3ebc23cd, 0x3f6e6ed9, 0x3eb94322, 0x3e22d3ae, 0xbfc59e7a, 0x3ecc859b, 0x3e619c48, 0x3f1857cc, 
    0x3e2a9768, 0xbfc6a4e8, 0x3f2d46f4, 0xbfe7e16f, 0xbf928751, 0xbf3d46ee, 0x3e9c7d81, 0xbf98734b, 
    0xbf80dabb, 0x3f3ea391, 0x3f226b17, 0xbfa436e6, 0x3ed6b731, 0x3f30570f, 0x3eaffd92, 0xbfcc9b87
};

static const uint32_t _K42[] = {
    0xbf49635c, 0x3e893fb9, 0x3e1fdc25, 0x3ed2a92c
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[12] (48 bytes) 
#define _K18             ((float *)_K18)                     // f32[13,3,20] (3120 bytes) 
#define _K19             ((float *)_K19)                     // f32[13] (52 bytes) 
#define _K22             ((float *)_K22)                     // f32[16,3,13] (2496 bytes) 
#define _K25             ((float *)_K25)                     // f32[16] (64 bytes) 
#define _K29             ((float *)_K29)                     // f32[32,3,16] (6144 bytes) 
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
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[15,16] (960 bytes) 
#define _K23             ((float *)(_buffer + 0x000003c0))   // f32[15,16] (960 bytes) 
#define _K27             ((float *)(_buffer + 0x00000000))   // f32[15,16] (960 bytes) 
#define _K28             ((float *)(_buffer + 0x000003c0))   // f32[15,32] (1920 bytes) 
#define _K30             ((float *)(_buffer + 0x00000b40))   // f32[15,32] (1920 bytes) 
#define _K32             ((float *)(_buffer + 0x00000000))   // f32[15,32] (1920 bytes) 
#define _K36             ((float *)(_buffer + 0x00000780))   // f32[15,32] (1920 bytes) 
#define _K38             ((float *)(_buffer + 0x00000000))   // f32[7,32] (896 bytes) 
#define _K39             ((float *)(_buffer + 0x00000380))   // f32[32] (128 bytes) 
#define _K41             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K43             ((float *)(_buffer + 0x00000010))   // f32[4] (16 bytes) 
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
    conv1d_flat_f32(_K20, _K22, _K21, 13, 390, 15, 16, 26, 39);
    add_f32(_K21, _K25, 1, 1, 1, 15, 16, _K23);
    relu_f32(_K23, 240, _K27);
    conv1d_flat_f32(_K27, _K29, _K28, 16, 256, 15, 32, 16, 48);
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

