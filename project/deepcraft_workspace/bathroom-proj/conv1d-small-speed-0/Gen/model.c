/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:27 UTC. Any changes will be lost.
* 
* Model ID  471dc195-0993-4636-8e88-90f8e007ac5f
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  16516 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-0
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
* Convolution 1D                 [15,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,12]
* Batch Normalization            [15,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [15,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [15,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Convolution 1D                 [15,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [15,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [15,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,24]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [7,24]          float      dequeue
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
* (ACC) Accuracy 82.332 %
* (F1S) F1 Score 81.249 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11257             1499             4184             5297
* (FN) False Negative or Incorrect Negative Prediction              799             2835                6             1132
* (FP) False Positive or Incorrect Positive Prediction             1109               61               21             3581
* (TN) True Negative or Correct Negative Prediction               13844            22614            22798            16999
* (TPR) True Positive Rate or Sensitivity, Recall               93.37 %          34.59 %          99.86 %          82.39 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.58 %          99.73 %          99.91 %          82.60 %
* (PPV) Positive Predictive Value or Precision                  91.03 %          96.09 %          99.50 %          59.66 %
* (NPV) Negative Predictive Value                               94.54 %          88.86 %          99.97 %          93.76 %
* (FNR) False Negative Rate or Miss Rate                         6.63 %          65.41 %           0.14 %          17.61 %
* (FPR) False Positive Rate or Fall-Out                          7.42 %           0.27 %           0.09 %          17.40 %
* (FDR) False Discovery Rate                                     8.97 %           3.91 %           0.50 %          40.34 %
* (FOR) False Omission Rate                                      5.46 %          11.14 %           0.03 %           6.24 %
* (F1S) F1 Score                                                92.19 %          50.87 %          99.68 %          69.21 %
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
    0x40039a2b, 0xbf865a85, 0xc027cf91, 0xbe1151a5, 0xbeab91e3, 0x3d897193, 0x3e35e59d, 0x3f39b062, 
    0xbe990faa, 0xbd8592f1, 0x3fe14f23, 0xbf910421, 0xbfa90646, 0x3ef11801, 0xbcc458fd, 0x3d53b121, 
    0xbe4b234e, 0x3f2e6e3b, 0xbeca3ba6, 0xbed3e8ef, 0x3fa25345, 0xbf9c7aee, 0xbfadd856, 0x3d3fa10b, 
    0x3ec432f6, 0x3f0cb8bd, 0xbe5ce469, 0x3f7a541f, 0xbf31a679, 0xbf6369d3, 0x3fdd3082, 0xbf497d69, 
    0xbfc670fc, 0x3e4f13f7, 0x3e45f837, 0x3f55c952, 0x3e0c62f5, 0x3f98be6a, 0xbf04c4bc, 0xbf3b076e, 
    0x3feb588d, 0xbf28de8d, 0xbfae77d0, 0x3ebdb73b, 0xbeb414d9, 0x3e8ee75a, 0x3e485c85, 0x3f22915c, 
    0xbf3f8c59, 0xbf0547ad, 0x402d7933, 0xbf8b3118, 0xc0188120, 0xbe2b28af, 0xbf091bac, 0xbe8dce56, 
    0x3f20f6da, 0x3edd9082, 0xbfa99126, 0xbf5265ee, 0x3ea75674, 0xbd14c787, 0xbf244357, 0x3fef9678, 
    0xbfdbf842, 0x3e74705f, 0x4024ced4, 0x3f812622, 0xbe5dce47, 0x3f1549aa, 0xbec38bf6, 0xbeba0a61, 
    0xbf36b63d, 0x3f830f8e, 0xbf9fa9ce, 0x3ecbbfd7, 0x4009c8b1, 0x3f8c889e, 0xbe549da3, 0x3f4511ee, 
    0xbe1d89a1, 0xbe4e9840, 0xbf464f03, 0x3f4250ec, 0xbf53b481, 0x3e160ad6, 0x4025feba, 0x3f69adb7, 
    0xbf2f20c6, 0x3f7eb2db, 0xbec4b272, 0xbe9ec6ee, 0xbf3cad51, 0x3f7d0a73, 0xbf9a0bd0, 0x3dba3925, 
    0x40319e09, 0x3eb512a3, 0xbf9a66c7, 0x3f822f47, 0xbde4851c, 0xbeabdb3e, 0xbf0b64f6, 0x3f71eafa, 
    0xbf9f216f, 0x3e69b249, 0x4050164a, 0x3f2da6b7, 0xbf353622, 0x3fb6826d, 0x3f45c6bd, 0x3eaa617e, 
    0xbf3754a0, 0x3fd20a01, 0xbf7144a7, 0x3e8e83b9, 0x405ef92c, 0x3fdce2cf, 0xbe9b0646, 0x3fcfdd18, 
    0xbf1ba276, 0xbeedce3a, 0x3f0dbb70, 0x3f0706a2, 0x3f655188, 0xbe9ac21f, 0xbed27b52, 0xbf7aca74, 
    0x3f21c636, 0xbf3d091e, 0xbf0da30e, 0xbd4659af, 0xbf410667, 0xbe998fdb, 0x3f83f83f, 0x3f0fe858, 
    0x3d9df447, 0xbf8834ff, 0x3f89c832, 0xbe4cd2ce, 0xbcb1af4d, 0x3f308711, 0xbe8ce614, 0xbf8ebaa6, 
    0x3f480106, 0x3e2ed9e0, 0x3f03dc43, 0xbf748ddb, 0x3f8d1368, 0xbd3630cf, 0xbe95efaa, 0x3f434daf, 
    0x3e8bb513, 0xbfa56952, 0x3d5f71a7, 0xbf1e295d, 0xbc6ce2bc, 0xbf8117a2, 0x3f3d6bf2, 0xbedb2afd, 
    0xbd7325c4, 0x3fb3f42e, 0xbf00f4db, 0xbfa31232, 0xbe82f3e7, 0xbec2bb57, 0x3e0c4930, 0x3d88b6f0, 
    0x3f9a274f, 0xbe7e6d34, 0xbf452cf9, 0x3f87de13, 0x3eda4800, 0xbf143ac7, 0x3e6f03df, 0x3ea7c4ed, 
    0xbe27708d, 0x3f5487a0, 0x3fc3c61d, 0xbd76c22b, 0x3f587522, 0x3d7fb9d1, 0xbe809371, 0xbf6d5dfd, 
    0xbfeef3ba, 0xbfadc8b1, 0x3f568264, 0x3d36eabb, 0x3fc6b170, 0x3f6525d2, 0x3f6cae28, 0x3d0f7073, 
    0x3c42b35b, 0xbf93d0a9, 0xbfea027b, 0xbfc4112c, 0x3f775f31, 0x3e1515ec, 0x3fb15cc9, 0x3f20759a, 
    0x3f7e8b3e, 0xbe1bb4a7, 0xbdbb5131, 0xbfa8e7b8, 0xbfbfa40c, 0xbfb9e4d1, 0x3f734757, 0x3e054c4b, 
    0x3f9e2c6c, 0x3efead61, 0x3f8a8183, 0xbe84ccb6, 0xbe1620ed, 0xbf99631a, 0xbfe8d9ab, 0xbfad71e5, 
    0x3f79458b, 0x3e9930b0, 0x3fc49a0b, 0x3ef9cace, 0x3f88e5ca, 0xbe3c185c, 0xbe593327, 0xbfa2a62b, 
    0xc0060f7b, 0xbfe3c1c3, 0x3f363d8b, 0x3e523576, 0x3f9fc05f, 0x3e988c71, 0x3fc0c407, 0x3ddb15ae, 
    0xbf33bcfb, 0xbfe017d8, 0xc022e16b, 0xc00cccb2, 0x3e92b5d0, 0xbdd7cc0f, 0x3f6c9256, 0x3eae04a6, 
    0xbf4de28c, 0xbf81c030, 0x401a3d7a, 0xbe2ec754, 0x4003243d, 0xbf23fe6f, 0xc0000aa5, 0x3e8eebac, 
    0x3f4c3eb2, 0x3eabd578, 0xbeb52e76, 0xbf487a70, 0x3fcfdef8, 0xbdea0ffb, 0x3fa4591b, 0xbee76a7f, 
    0xbfd64f74, 0x3db96732, 0x3f3b0c6e, 0x3e9a91c0, 0x3e73a425, 0xbfae92e8, 0x3fc923e0, 0x3ee17d01, 
    0x3fb2ab59, 0xbf1b84db, 0xbff3db06, 0xbe8b872a, 0x3f5a41c1, 0x3ec9bf6a, 0x3e6fc25c, 0xbfcd0f6d, 
    0x3fa84a09, 0x3e12b821, 0x3fc87d05, 0xbf0bd2bc, 0xc019b64f, 0xbee1db00, 0x3f3bb484, 0x3e983d13, 
    0xbf1bba46, 0xbfb8c7e8, 0x3f57ea6d, 0xbe10e022, 0x3fb5a3c9, 0xbf1cad43, 0xc0193038, 0xbc320805, 
    0x3f571776, 0x3e66074b, 0xbfafc021, 0xbfdf70f9, 0x3fcfb7f5, 0x3e26fa21, 0x400ac2b6, 0xbdfb96dd, 
    0xc0195460, 0x3de2c760, 0x3fabe795, 0x3e967d9c, 0xbf962208, 0xbfffbe9a, 0x3fb1d274, 0x3f487c21, 
    0x3f0ca87f, 0xbfa22fd4, 0xbfb4822a, 0x3d303dc5, 0x3e24c2fa, 0x3fc336c3, 0xbf22b74a, 0xbfd02317, 
    0x3f8bdcc7, 0x3ed3ee39, 0x3ee71fc7, 0xbf9e9cde, 0xbf80b183, 0x3d7e310b, 0x3a879db1, 0x3faaa785, 
    0xbaec6d28, 0xbfd21429, 0x3f2e68ee, 0x3f2f621a, 0x3f7f32b1, 0xbf8a24bf, 0xbf44e378, 0x3dab728a, 
    0xbce05070, 0x3f8e6a3d, 0x3ef5839e, 0xbf91f31e, 0x3f465305, 0x3f4c84f4, 0x3f55f133, 0xbf99c379, 
    0xbf382259, 0x3edbc668, 0xbe09ef2a, 0x3f88d986, 0x3f2d4c9b, 0xbf07fb09, 0x3e25fa78, 0x3f382a39, 
    0x3ebea3c4, 0xbfaeae0e, 0xbf38ad9c, 0x3ec76cd4, 0xbda497d1, 0x3f38db04, 0x3ebc370c, 0xbe9068f4, 
    0x3f149395, 0x3f2d9e3f, 0x3d87b3c1, 0xbfaa088d, 0xbf71d3f3, 0x3e5e602b, 0x3e84f877, 0x3f5d81b9, 
    0xbf796d5b, 0xbfa4bebb, 0x3fd394fd, 0xc0002a4f, 0x401eb6d6, 0x3f783204, 0xbff8502f, 0xbf341515, 
    0xbd513421, 0x3e34c06e, 0xbee742a2, 0xbf91b427, 0x3f827e2b, 0xbffd1d8a, 0x4000802b, 0x3f8ded82, 
    0xbfc054f9, 0xbf1a96f4, 0xbd21ae8f, 0x3f084678, 0x3e5c0e40, 0xbfa2867c, 0x3f7e3e4c, 0xbfdd9d27, 
    0x400a1bdc, 0x3f8a4a8f, 0xbfc2b0f7, 0xbf3a6293, 0xbc77e43b, 0x3eb4eabd, 0x3dbe637a, 0xbf803782, 
    0x3fa29471, 0xbfca2c3b, 0x3ffc112f, 0x3f3790b7, 0xbfc13306, 0xbeca9517, 0x3e256d8d, 0x3eb4454e, 
    0xbe6850db, 0xbec7f2f4, 0x3f965e20, 0xbf9a92e5, 0x4014f0e9, 0x3f3b7032, 0xbfccb20d, 0xbe8ff693, 
    0x3e044610, 0x3ed38910, 0xbf3e50e5, 0xbedcebba, 0x3fd29c89, 0xbf32c318, 0x403aee8e, 0x3fd3f520, 
    0xbfab0205, 0xbe9d1e50, 0x3ec8e270, 0x3ec55d4c, 0xbf7f2267, 0xbedf7634, 0x3fd88f60, 0xbf8dbed7, 
    0x3eff29d7, 0xbd159d28, 0x3d987b2d, 0xbf66c1a6, 0x3fe690c3, 0xbf5ce3f5, 0xbefc49bf, 0x3e160d05, 
    0x3f5118cb, 0xbfbe5800, 0x3e9d47fc, 0xbcdde801, 0x3f18e30b, 0xbf8c8141, 0x3fce3474, 0xbf17c95f, 
    0x3df1821f, 0x3f28c4c4, 0x3fabfa79, 0xbfd4371f, 0xbd2f24fc, 0xbd8dc5f7, 0x3f140e0c, 0xbf8a1272, 
    0x3ff3bc1c, 0xbf096a13, 0xbe4e2ad6, 0x3f050d42, 0x3feb11cb, 0xbfc9ad5a, 0xbeaedcc8, 0xbec7716b, 
    0x3ebd868f, 0xbf4e770e, 0x3feec9ed, 0xbf6ad1cc, 0xbeb11323, 0x3f073623, 0x3fb67441, 0xc00529aa, 
    0xbea104f2, 0xbc4476e8, 0x3dd5befc, 0xbe351f75, 0x400368aa, 0xbf872304, 0xbf8e646e, 0x3e149cc2, 
    0x400ec05c, 0xc0049467, 0xbd5d9ebf, 0x3ea53555, 0x3d90aa09, 0xbcac0e16, 0x40180276, 0xbf678f35, 
    0xbe2dcfe6, 0xbfabe9be, 0x3f7abcfe, 0xbf7fc0ee, 0xbee032c1, 0xbf845ac8, 0xbf36023e, 0xbe905afe, 
    0x3fa8dea0, 0x400ffc86, 0x3e2485cb, 0xbf0f5d4a, 0x3fadd2b4, 0xbf879aa8, 0xbeac7175, 0xbfa14839, 
    0xbedcea5c, 0xbf0dd561, 0x3f5bee67, 0x4001d972, 0x3f4c9b32, 0xbf8196fd, 0x3f5bdfa6, 0xbf530bd4, 
    0xbec78147, 0xbf8b9a90, 0xbf1a6ced, 0xbf308f13, 0x3f46dca5, 0x4000d374, 0x3f47a5a4, 0xbf9280ea, 
    0x3f43c53f, 0xbf9a4d48, 0xbe8d6cba, 0xbf8727e5, 0xbf069209, 0xbe8c0b32, 0x3f990473, 0x3ffadbdb, 
    0x3e5bff21, 0xbf982190, 0xbcb77bb8, 0xbf9bec80, 0xbf2fdbca, 0xbfbb3f0f, 0xbf2c8dab, 0xbe802090, 
    0x3f89c546, 0x3fe5c57a, 0x3e93c231, 0xbf867af7, 0x3c693b4a, 0xbfe55a97, 0xbf59e055, 0xbfd3df08, 
    0xbf43d670, 0xbf23ec5d, 0x3f88cc78, 0x3ffced43, 0x404e77e7, 0x40252a2a, 0x3f80983c, 0x3fab9cdc, 
    0xbf292bf6, 0xbd2d74e6, 0xbfaa18da, 0xbf8495a9, 0x3e0d681f, 0xbf64ec6f, 0x40130311, 0x3ffb388d, 
    0x3f6b1719, 0x3f8703c6, 0xbef7766a, 0x3d822391, 0xbfa1fcdd, 0xbf3ff162, 0x3e755316, 0xbf76ba87, 
    0x401e24e9, 0x3fbbea1f, 0x3f379837, 0x3f528e2b, 0xbf2ff67c, 0xbe72884f, 0xbf8cd8a1, 0xbf62b859, 
    0x3e81ef29, 0xbf38ddac, 0x4018b03b, 0x3fb56c80, 0x3f3e48e0, 0x3f2cd8b1, 0xbf578995, 0xbead7a83, 
    0xbf99bc0b, 0xbf92f239, 0x3e8c88e0, 0xbf545747, 0x4021a9c8, 0x3fac0cbc, 0x3f917fe1, 0x3f8330df, 
    0xbf923c59, 0xbee67d49, 0xbf8b3e8b, 0xbfa12087, 0x3dc5704a, 0xbf25bf18, 0x4052e140, 0x3ff815eb, 
    0x3f4278d2, 0x3f9f97ec, 0xbf921aa1, 0xbf7b176f, 0xbfaaed97, 0xbf9fb5a3, 0x3e1f0b25, 0xbf5bcdae, 
    0x3f898ca8, 0xbef25d30, 0x3d7a7409, 0x3fb4905a, 0x3e8a6bca, 0xbe35de00, 0xbf4f3128, 0x3f998a02, 
    0x4018ed74, 0xbebae174, 0x3e4b2b9a, 0xbf89cc86, 0x3de26266, 0x3ebe039e, 0x3f5ffc90, 0x3f076534, 
    0xbe728698, 0x3fa377bf, 0x400f1db9, 0xbece8b82, 0x3f61e687, 0xbfacba78, 0x3df6b5f8, 0x3dc98ebe, 
    0x3f8e4986, 0x3f207c6a, 0x3e507c71, 0x3f3a8cbc, 0x4008a607, 0xbdd53261, 0x3f7a7375, 0xbfc7002b, 
    0xbe6d7db5, 0xbe81e343, 0x3f2f9c79, 0xbd4661fe, 0x3e07c445, 0x3ed2273d, 0x3fc28fc8, 0x3e258e0b, 
    0x3f817f41, 0xbf9b4ba5, 0xbf65ad25, 0xbe870d2a, 0xbf20ec86, 0xbdc70210, 0x3de0dee9, 0x3f1e82e6, 
    0x3fd1e3e9, 0x3e3a556b, 0x40009e0b, 0xbf5c2ff0, 0xbf91d389, 0x3e955af5, 0xbe7b214f, 0xbd915ac5, 
    0xbde4e65d, 0x3fa81f64, 0x3ff4bfe6, 0x3c92013a, 0xbe281598, 0x3ead5446, 0x3ec74c09, 0x4004b6a6, 
    0xbfa991a0, 0xbf389f17, 0x3f262742, 0x3fb59364, 0x3fa2e887, 0xc00be124, 0xbf1df523, 0xbe083b96, 
    0xbe5281bd, 0x3fbb89c9, 0xbf936d82, 0xbf2635aa, 0x3f511f8e, 0x3fabe085, 0x3fbfd6ad, 0xc0023c56, 
    0xbf1c0e53, 0x3e7573fb, 0x3d0ae163, 0x3fb6ad87, 0xbf0d3b0b, 0xbf4ea12d, 0x3fa184b3, 0x3f8a26a8, 
    0x3fd5cb45, 0xbfef433f, 0xbf1b3c67, 0x3c8fdde2, 0xbd24a6bd, 0x3fb5511d, 0xbf2328fa, 0xbf602e0d, 
    0x3f992d91, 0x3f0438b9, 0x3f9dfdd6, 0xbff709d1, 0xbed35e39, 0x3e8706d0, 0xbecde503, 0x3f1cf2a8, 
    0xbf3baab4, 0xbf15b136, 0x3f89974f, 0x3f3e5ea0, 0x3fa3790a, 0xbffa352b, 0xbf777565, 0x3ec7e39e, 
    0x3dbbd802, 0x3f810bef, 0xbf94c315, 0xbf16b056, 0x3f35138f, 0x3f89c31a, 0x3f874e14, 0xc009206e, 
    0xbee7bbf4, 0xbf7aba44, 0x3f61621d, 0xbf8c6fb3, 0x3f9162b4, 0x3f186a12, 0xbede2938, 0x3ef957b0, 
    0x3fd7a119, 0xc008cf38, 0xbe963935, 0xbf8ca798, 0x3f765ffe, 0xbf96f648, 0x3fa4766f, 0x3f7390be, 
    0x3e04cfa5, 0x3f347d03, 0x3fdefaad, 0xc00f71d2, 0x3ccf0960, 0xbf5c3d9e, 0x3fafbbcc, 0xbfd903e4, 
    0x3fbc555d, 0x3f86c2e6, 0x3c59a4c7, 0x3eb6a654, 0x4003b1ae, 0xc017f470, 0x3eaa6877, 0xbf128de7, 
    0x3f95d16a, 0xbfe82e39, 0x3faccfd8, 0x3f6f7150, 0xbbd16a62, 0x3f01e17c, 0x3ff124c8, 0xc01088e4, 
    0x3f26bb0b, 0xbed0416a, 0x3f2bb018, 0xbfcc12db, 0x3f667337, 0x3f539b89, 0xbdd62fe5, 0x3f23cb71, 
    0x3fd47a2e, 0xc0170d76, 0x3f4c65a6, 0xbf445141, 0x3f471c4c, 0xbfed8838, 0x3f8b536f, 0x3f79879d, 
    0xbe305a15, 0x3ecda6df, 0x3fc71afa, 0xc02b6f58
};

static const uint32_t _K19[] = {
    0xc090275c, 0x405f1dbf, 0x408a9362, 0xc0ccf132, 0x4040f6d8, 0x401f4f89, 0x4014208c, 0x402ca709, 
    0xbf6abf9c, 0xbf00a639, 0x40806349, 0x4050483b, 0x3f4a9119
};

static const uint32_t _K22[] = {
    0x3bbdc0b4, 0xbb2e15f5, 0x3a2460b3, 0x3b47d94a, 0xbb241b52, 0xbb975d1b, 0xbb629762, 0x3867dca9, 
    0x3ad1143f, 0x3b5362c8, 0x3aca9035, 0x3b353c34, 0x3998ef50, 0xba44b882, 0x3b9b98d2, 0x3bfb37c7, 
    0xbab4c117, 0x3bb9b4ab, 0x3b954a0b, 0x3c05fd5c, 0x3b5fd2fe, 0x3b00d429, 0xbb1f2e3f, 0x3c5c55d2, 
    0x3adcd6f8, 0x3c3b1524, 0x3b5ca32e, 0x3b878840, 0xbafe9910, 0xbb8ed263, 0x3c18e361, 0x3b1a7353, 
    0x3ba94faa, 0xbbc0d491, 0x3adc3ebf, 0xbbb963fc, 0x3cbb79a8, 0x3b180b01, 0x3c4cf4c3, 0xbc6ee68f, 
    0x3b52d51f, 0x3c952271, 0xb9e8d01e, 0xb64fbc64, 0x3c289eeb, 0x3bdf5e14, 0x3c846111, 0x3a38fc44, 
    0x3afc6121, 0xbb03e1dc, 0xb8ca10fe, 0xbbd53d91, 0xbbe70078, 0xbb901a81, 0xbc78bf4e, 0x3b69e26d, 
    0x3c5a19b8, 0xbba9c0e4, 0x3be638ca, 0xbb6d0f38, 0x3c3cfbda, 0x3b12acc3, 0xbbd86cac, 0xbc6cc945, 
    0xbcb5a9aa, 0x3ba6372e, 0x3c17ecd4, 0x3ad95c10, 0x3cae433e, 0xbccf7c57, 0xbba34373, 0xbce88e7c, 
    0xbbbe3493, 0x3b8d6713, 0x3cf76923, 0x3aea4729, 0xbb63b74c, 0xbd26a31c, 0xbb1dfeca, 0x3bc461af, 
    0x3a82dfa2, 0xbbc01e69, 0xbac26c0f, 0xbc29e160, 0xbb9b4f20, 0x3b161ee9, 0xbc8dc3f3, 0x3c4c1c34, 
    0x3bfff588, 0x3c42713e, 0x3ca18e6a, 0xbac91c90, 0xbb34edd7, 0xbb6232aa, 0x3b2bdc03, 0x3a9bc14b, 
    0x3c9a3ef0, 0x3c224adb, 0x3b41a807, 0x3c286df6, 0xbca6a754, 0xbbe7774d, 0xbb371991, 0x3a1ffd38, 
    0x3a580009, 0xbc19f5c6, 0xba2fbc21, 0xbb4f03a1, 0x3c027eb5, 0xbbfdeb26, 0x3bc80950, 0x3be04665, 
    0x3ba261a3, 0xbcfa74ef, 0xbc4a68b8, 0xbb7d138c, 0x3c03f522, 0x3be58c77, 0xba9c3528, 0x3b5adcb9, 
    0xbc526630, 0x3b84e340, 0x3b89e073, 0x3c24f5f7, 0xbb8cda4d, 0xbb96640a, 0x3a1fa98f, 0x384eee07, 
    0xbbd7e5d3, 0x3b2a5cf5, 0x3b2c884b, 0x39cb7781, 0x3884ac4e, 0xbc3f66bf, 0xbba5d259, 0xbb452a9c, 
    0xbb171cd9, 0xbc426897, 0xbc329230, 0xba90d48e, 0xbb5e1072, 0xbbee7319, 0xbc827c67, 0x3bbf15d9, 
    0xbae38b36, 0xbbd1eeea, 0xbc6bb549, 0xbbbb2a4f, 0xbb65da7c, 0x38dbee9c, 0xbc970090, 0xbc924ec3, 
    0x3bc8e135, 0xbba8fac1, 0xbc2dc6ed, 0xbc949e1f, 0xbcdf9179, 0xbb02e115, 0x3b998417, 0xbc295d7c, 
    0x3c807ac2, 0xbaf29048, 0x3c9a921e, 0x3c8d106c, 0xbb63f4f0, 0xbbb3dc49, 0xbb886c76, 0x3aba7c2e, 
    0xbae338c4, 0x3bde2498, 0xbc499cc2, 0xba97b11c, 0x3c22d5f8, 0xbc84a9f0, 0xbb5bca1e, 0xbbdd1db2, 
    0xbb906a52, 0x3c332fb1, 0xbb2d8c7b, 0xbc0ff8e2, 0xbc31a980, 0xbb78517c, 0xbd327d13, 0x3ca20e76, 
    0x3c26123d, 0xbc8a9259, 0x3c97d745, 0x3bcb9acf, 0x3c9dc4f2, 0x3cd81467, 0x3bc7daf1, 0x3bb4bf8e, 
    0x3c81e9c4, 0xbb2095f6, 0x3b136267, 0x3a9c5743, 0x3b2da9fb, 0xbb4d0a8c, 0x39ee1d26, 0xbb039781, 
    0x3be629f6, 0xbc28a8c0, 0xbc3c341f, 0xbb871bea, 0x3b204c97, 0xbb6b995c, 0x3c3c9a01, 0xbc80fc73, 
    0x3a508e75, 0xbb603b80, 0x3b4b0fed, 0xbb96a8f3, 0x3b568789, 0xba9b513c, 0xbbf11e08, 0xbb97cf6d, 
    0xbb62ed2e, 0xbab6e348, 0xbbe5e7d9, 0x3b342421, 0xbca582fc, 0xbb06d8bf, 0x3cd40b9e, 0xba951aa1, 
    0xbaeb0356, 0x3ba02bcf, 0x3be98488, 0xbbfcc06e, 0xbc14ac97, 0x3af3af6a, 0x3c4fc670, 0x3cab1f90, 
    0x3bf13c5f, 0xbc9aef4d, 0x3870a99c, 0x3aa67ae8, 0x3ad36ad5, 0xbbb30905, 0xbbb0f5fd, 0xbbb14334, 
    0x3b453167, 0x3ba5724c, 0xbc3cf270, 0xbbcff6b0, 0xbaa54351, 0x3c1e47f2, 0x3cc0c717, 0x3b95ba9a, 
    0x39f524ef, 0xbb887a50, 0x3b1dcc8e, 0xbc3c5415, 0xbbc7d2f5, 0xbc29366a, 0x397d4eca, 0xbbd08afe, 
    0xbb9c161d, 0xbb451455, 0x3baeb4b3, 0x3b57c2e7, 0xb98838e1, 0x3cc39ca8, 0xb905ff65, 0xbb2fcfb6, 
    0xbc3d0ce8, 0xbb9f6df1, 0xbc018ce3, 0xba9b08f4, 0xbbf82539, 0x3a2f7cb4, 0x3bd5007a, 0x3c0c4b5e, 
    0x3994c487, 0x3bcb497d, 0xbcb65679, 0xbaf0f78d, 0x3b859c5a, 0xbbf785c5, 0xbbe114f6, 0xbc2f8792, 
    0xbae75d74, 0xbb891994, 0x3b07d6ff, 0xbc7cfcbe, 0xbbf00cee, 0xbbefd381, 0xbbe20d20, 0xbae65a68, 
    0x3aaac4b0, 0xbc702e49, 0x3b15090d, 0xbbbd331b, 0x3ae1fa76, 0xbc27da95, 0xbc47e167, 0xba79d352, 
    0xbbcf496c, 0x3a5fe2db, 0xbc7cd863, 0xbb19eef0, 0x3b9c2c61, 0x3ae37662, 0xbbf640c6, 0xbbb7675b, 
    0xbb1b85d4, 0x3a4821f6, 0x3b38a23f, 0xbc046708, 0xbbffa344, 0x39e3884f, 0x3bb39ce0, 0x3c02d5b7, 
    0xbb2c0592, 0x3b66c0b7, 0x3b91286a, 0xbb3275e2, 0xbb262dee, 0x3976112a, 0xbae8a5aa, 0x3b78d609, 
    0xbc206be8, 0x3c3faf76, 0x3c28eab2, 0x3c28ea07, 0x3c906904, 0x3ae7ae8f, 0xbc425ae2, 0xbb85a888, 
    0x3b01a34d, 0x3c1161d6, 0x3ad50549, 0x3bf17d90, 0x3bf02d8b, 0x3b82b15e, 0x3afdfb65, 0xbb69eb54, 
    0xbb204997, 0x3cade3fa, 0x3b7e7a0f, 0xbc3ae4aa, 0x3b6e0009, 0x3ac60154, 0xbbd65ac5, 0xbc3a6254, 
    0xbbd52473, 0x3a84addd, 0xbc8567d5, 0x3c75b30a, 0xbbab018f, 0x3c0e4e32, 0x3c6c6fc5, 0x3aa1c32e, 
    0x3b44fe69, 0x3abdffc2, 0x3b84db22, 0xbab9c2d1, 0x3b2fd185, 0xbae47989, 0xbaafa493, 0x3b9eb83e, 
    0xbbd61aba, 0x3ab94af7, 0xbb3f1450, 0xbbc7421b, 0xbb023f2d, 0x3b48f556, 0x3aaaedce, 0x3b199468, 
    0xbb0daa8f, 0x3a19351a, 0x3a833f06, 0xbafa5a81, 0x3b7c4e63, 0xbc491d84, 0x3adf2fa9, 0xba0049d2, 
    0xbb051ae7, 0xba85606c, 0x3a3873a2, 0x3b19b21c, 0x3a954250, 0x3a69332d, 0x3a119dad, 0x3b560f1b, 
    0x3b5c50b7, 0x3b799911, 0xbcb2dae8, 0xba55930e, 0xbb78d497, 0xbb88b3fd, 0xbcc00a3e, 0x3c7dc3e0, 
    0x3b495196, 0xbc8756a8, 0x3c5d6601, 0x3c578979, 0xbca650a0, 0x3b1a6bc1, 0xbc2cdc89, 0xbb83229e, 
    0x3c10bdb3, 0x3d74fd86, 0xbba266c4, 0xbbafe27a, 0xbc55e773, 0xbbbade81, 0xbbcb97a5, 0x3b81eda0, 
    0xbaa609fe, 0xb92f0a8a, 0x39c01b8c, 0xbc111d7f, 0xbbcdb86f, 0xbc86ff86, 0xbb8e54a0, 0xbbc1dce2, 
    0xbb4f9144, 0x3893f8d4, 0x3b0b330d, 0xbc23fce8, 0x3b823a65, 0x3b03d3e7, 0xbc186381, 0xbc07383e, 
    0xbc1cb6d8, 0xbc3f806b, 0xbbef0c3f, 0x3c95ca00, 0xbc806dcf, 0x3ae85710, 0x3badd1ae, 0x3b3bbab3, 
    0x3c3769c4, 0xbbfcf275, 0xbb007a41, 0xbc637b4a, 0x39967431, 0x3b81c0f4, 0xbb057c74, 0x3b946dea, 
    0x3bed21c3, 0xba2885bb, 0x3be9a8b9, 0x3a5fa57a, 0xba70fa39, 0x3caa0188, 0xbb98ae7d, 0x3a242feb, 
    0xbbcb9799, 0xbae46827, 0x3c0a7048, 0xbbce3ab7, 0xb984e938, 0xb9f80e50, 0xbb58f849, 0x3c0b11ff, 
    0xbb56eae1, 0xbb6fd83b, 0x3c3328f2, 0xbbcc3d1e, 0xba47be52, 0xbbfd95d7, 0xbb3a0715, 0x3a916b39, 
    0xbbba1a34, 0xbb8d4bc4, 0x3b0c94dc, 0xbbcaacc2
};

static const uint32_t _K25[] = {
    0x405a6438, 0x3f45a619, 0xc0a30dba, 0x3ec5081d, 0x3ffbc094, 0x405bc630, 0x405b04a8, 0xc088826f, 
    0x40173d35, 0xc05493d1, 0xbf840d47, 0xc01e207e
};

static const uint32_t _K29[] = {
    0xbe3fe452, 0xbec2e9a4, 0xbf82add7, 0xbefd814d, 0xbee28187, 0xbea46138, 0x3ed59d76, 0xbf8a9aee, 
    0xbd21cb29, 0xbf7562e9, 0xbefda74c, 0x3fb249eb, 0x3d4c9ed6, 0x3fade080, 0xc008cb6b, 0xbe8e887d, 
    0x3f88954f, 0x3ff21970, 0x4025d862, 0xbf77bbb4, 0x3e8f9481, 0xbf85dcf8, 0xbf9b9bb7, 0x3f55a2d9, 
    0xbf2e94c9, 0x3fd13645, 0xc029a14e, 0xbf211573, 0xbf083f3d, 0xbe810f6f, 0x3f8c6aa3, 0xbfbf3a53, 
    0x3e235d00, 0xbeb7b3e8, 0xc01e371c, 0x3f9aeff0, 0xbed2f928, 0xbf5252bb, 0xbefd735b, 0x3ec92b44, 
    0xbf7d129a, 0x3f13f2d8, 0xbfd0c5f5, 0xbde341af, 0x3fb1dfeb, 0xbfde9262, 0xbdfb7a91, 0x3e823e99, 
    0x3f56f023, 0xbf381294, 0xbffef8fb, 0xbfa526b8, 0x3f85fbf3, 0x3f2794df, 0xbf906a72, 0xbfe80ce5, 
    0x3f023552, 0xbf298f73, 0x3f8f2b36, 0x3eb1c641, 0x3f75ea7a, 0xbfa54d02, 0xbfdc6674, 0xbfb458c1, 
    0xbfbe9831, 0xbf44504b, 0x3ecd6932, 0xc05a13c2, 0x4003853f, 0x3fd5540b, 0x3f8fbd36, 0x3f22d624, 
    0xbe0582bb, 0x3ff8b7d2, 0x3fc3f152, 0x3ef810e5, 0xbf179d0b, 0xbfbde4ba, 0x3fb4188c, 0x3d12402c, 
    0x3fa38cf7, 0x3f2db86d, 0x3f6f71f2, 0xbe5eacf2, 0xbd833310, 0x3f0e03fb, 0x3faca651, 0xbe51004a, 
    0xbf1baee3, 0xbfa66b00, 0x3fbf1475, 0x3f78838a, 0x3d11192e, 0x3e597453, 0x3d878839, 0xbe8ad845, 
    0x3f101b0c, 0x3ad40a16, 0x400eea43, 0xbf4b2b14, 0x3fac2025, 0xbf93903f, 0x40110135, 0x3f9f77ca, 
    0xbe00d257, 0x3e423fbc, 0x3fdddd27, 0xbf075773, 0x3ee332a0, 0x3fb5c07c, 0x3fa3d54a, 0xbef950bd, 
    0xbdffbffb, 0xbc9d9a4e, 0xbebab21f, 0xbf804bf5, 0xbe203ed3, 0x3f7fd1b2, 0x3ef6701a, 0xbfa7a556, 
    0x3f9bec0a, 0x3e6fd601, 0x3f53a07e, 0xbf079e4b, 0xbdc24020, 0xbf7a61a6, 0xbff4e108, 0xbf49c2ba, 
    0x3e01a7d3, 0x3f9df036, 0x3eb553cc, 0xbec21d7a, 0x3fce4a42, 0x3e15864d, 0x400b1467, 0x3b8a338e, 
    0x3f48867e, 0xbf583d3e, 0xbf8910ac, 0xbf2d6fe6, 0x3f88cf66, 0x3f900404, 0x3f9e1e02, 0xbf1b0b51, 
    0x3e351e1e, 0xbfbe19ee, 0xbf5bdcae, 0xbee28193, 0x3f7616ce, 0x3faef717, 0xbe842752, 0x3fb86d02, 
    0x3f924571, 0xbc141224, 0xbf4344eb, 0xbf4fd8ed, 0x3d389bd0, 0xbfa414cc, 0x3ff2786c, 0x3f6e1ae7, 
    0xbfdd5929, 0x3f169a56, 0xbf7b2bdf, 0x3ff9534f, 0x3f5c8831, 0xbec18c02, 0x3f474338, 0xbe45b299, 
    0x3dd0fad9, 0xbf711f0d, 0x3f53ee80, 0xbf239b84, 0xbf6ff11c, 0x3fbc5388, 0xbff972fb, 0x3f7df496, 
    0xc0132b8e, 0xbf95d0c8, 0x3f3fd1eb, 0x3f10628c, 0x3f595572, 0xbfe9da5f, 0x3efc4665, 0xbf68ef94, 
    0x3f88e41a, 0x3e9de84f, 0x3f0447f6, 0x3f37067f, 0xbf7aa02e, 0x3fab6a02, 0x3f200563, 0xbdb70e0c, 
    0x3f702bf7, 0x3f43f3ee, 0x3e9a4d04, 0xbfcbad14, 0xc004a99b, 0x3e4b784f, 0x3ef00b4d, 0x3f95e61c, 
    0x3ead3ea1, 0xbfa4c481, 0xbfa90d9e, 0xbf9412b5, 0xc054a255, 0xc00f5e17, 0x3f73294f, 0x3f68e5d5, 
    0x40004519, 0xbfb38955, 0xbe7c667a, 0x3f653999, 0xbf855bee, 0xc07962a3, 0x3faf31ab, 0x3fbabea0, 
    0xbfa674ec, 0x3d3dce8f, 0x3f176595, 0xbeced65b, 0xbfbd6ed9, 0xbf8914dd, 0xc00a5fdb, 0xbfa4a8be, 
    0xbf56ae26, 0x3f323e33, 0x3e960b53, 0xbfb29fef, 0x40072a91, 0x3f8dd371, 0xbf35ccb1, 0xbf9a2aef, 
    0xbf9e80df, 0x3d8282cd, 0x3f999780, 0x3e9d2f6d, 0xbe573bc5, 0x3e20661f, 0xbf40643b, 0xbfa2328d, 
    0x3f09d232, 0x3f8e4a42, 0x407b6957, 0x3f930b91, 0x40007ed0, 0xbf867b53, 0x3fb000ef, 0x3f5f08da, 
    0x3f5ab87c, 0xbe50c639, 0x3f1878d1, 0x4005d47e, 0xc020aade, 0xbec9d6df, 0xbfffe1ba, 0x3ea9ec7a, 
    0xbec7656f, 0xbffdc227, 0xbccb5496, 0xc00e23a4, 0x3d1fab85, 0xbf5057dd, 0x3f1f1f2b, 0xbfe414c9, 
    0xbf0a3bae, 0x3ba0924b, 0xc0108726, 0x3e9c4e06, 0xbfa16717, 0xbe80614b, 0x3e36a4b0, 0xbf803b0a, 
    0x3e9c73ae, 0xbf955b90, 0xbf85d951, 0xbf6212b0, 0x3f2e0a43, 0xbfbfaa3a, 0xbfdf0ca2, 0x3e97e563, 
    0x40908867, 0x3fd484fc, 0x3ef0cb8c, 0xbfa9642d, 0x3dac7e46, 0x3f0b3f74, 0x3f5ad886, 0xc0147b12, 
    0x3b9518f3, 0x3f670583, 0x3dbf560c, 0x3f3fb9df, 0x3f9a6ee5, 0xbeacc016, 0x3f01689f, 0x406a3c80, 
    0x3eadc9da, 0x3ef359a0, 0xbe95b499, 0x3e2d848f, 0xbf76d165, 0x3f8828a5, 0x40088318, 0x3f350084, 
    0xbdeeb82d, 0xbfb16c88, 0xbe5d31e9, 0x406cc422, 0x3f809d0c, 0x3ead1364, 0x3f218259, 0x3f368b6a, 
    0xbfc0b60d, 0xbea433f2, 0x3fbe4486, 0x3eb0e918, 0xbe9a1a7c, 0xc0332f1d, 0xbfbd0aaf, 0x4069b78f, 
    0x3ef02bf8, 0x3ea6ec0e, 0x3e5745c5, 0x3f6cfc5e, 0xbfed3dff, 0x3e6cdf55, 0x3de788f6, 0x3e04edd6, 
    0xbc7ad1d8, 0x40066dfc, 0xbffc0e0f, 0xbf2c1ea1, 0x3e0c389c, 0xbe521317, 0x3e85f9a9, 0xbf894861, 
    0x3d64a573, 0xc00259f2, 0x400e4515, 0xbd202ede, 0xc014064f, 0x3e9693e5, 0xbfa2df5c, 0xbe9c735c, 
    0x3fd9382a, 0xbf9d880c, 0x3f781950, 0x3eee3025, 0x3f838c81, 0xbf8a038a, 0xbd34eb99, 0xbf775ad7, 
    0x3f9d4033, 0x3fde508f, 0x3f127990, 0xc01132cf, 0xbfa05bac, 0x3e7dd9c9, 0x3e978ce3, 0xbfcc7ef5, 
    0x4001a62e, 0x3f133790, 0xbcb7e046, 0xbf0d42fd, 0x3f0202d1, 0x4032e154, 0x3f886e3f, 0x4027b2be, 
    0xbdf1c54c, 0xbf029b14, 0xbf596f08, 0xbf5d7c9c, 0xbec09ed4, 0xbf1eaeba, 0x3fb958de, 0xbfc27bf2, 
    0x3f130d5b, 0xbf913ab6, 0xc055b43d, 0x3ecdb5c6, 0x3eae7c96, 0x3e860094, 0x403576d1, 0x3e58a800, 
    0xbf705b02, 0x3ff353a4, 0xbfb27d4b, 0xbf9ff212, 0xbfe8a56b, 0xbe4220a4, 0xbf062407, 0xbf0c01cf, 
    0x3fa60b35, 0xbf828300, 0x40075a1e, 0xbe90827a, 0x3f8770fc, 0xbeca9203, 0xbe15e120, 0xbf1883d4, 
    0x3d8bf52c, 0x4006c386, 0x3facf4ac, 0x402079b3, 0x3f9383a1, 0x3e73f715, 0xbf5d7e84, 0x3dcf624d, 
    0xbfcc3e62, 0xbfa34ddb, 0xbe05488b, 0xbff686e1, 0x3eedc1a3, 0xbe447d91, 0xbfec8ea2, 0x3f21c7b3, 
    0x3f3ea514, 0xbe49c85c, 0x3f178ec0, 0x3f4e4a64, 0xbf9247cf, 0xbfd453b3, 0xbf5cf257, 0xc049c459, 
    0xbd71f664, 0x3ee0cdaa, 0xbe677417, 0xbf32aa37, 0x3fe297f6, 0xbf0e6a9f, 0x3fb25653, 0xbf305b1b, 
    0xbefaaac6, 0xbd9629e9, 0xbe9efe9a, 0xbea99d58, 0x3fc4ed9c, 0x3f6c4dd0, 0x3f841346, 0x3ffc5517, 
    0xbf4abf26, 0x3dde0c3f, 0x3e58fdba, 0x3efaa364, 0xbf302cda, 0x3f133c6d, 0x3fc8a20f, 0xbd863308, 
    0xbfa687d8, 0x3e9e9fce, 0x3ed3be8f, 0x402afd75, 0xbdbf8a38, 0xbe34572c, 0xbf5bb2c2, 0x3f12a60e, 
    0xbfaa5247, 0xbf3496d0, 0xbef1aa5e, 0xbf8a6471, 0x3fac7c66, 0x3e72f11b, 0xbfcbea69, 0x400e6f68, 
    0xc0308f62, 0xbfbbe59e, 0xbf5e4d21, 0x3d911e92, 0xc0394f53, 0x3e6a2c40, 0x3e8e90b9, 0xbcb593c4, 
    0xbf872b86, 0xbf19aee3, 0xbf8d1de2, 0x3f7b9a10, 0x3d01ebb6, 0xbf0b2473, 0x3f465050, 0xbf9bc4cb, 
    0x3ec8a483, 0x3fa8a3fa, 0xbfa62b92, 0x3f922657, 0xbfb335a9, 0x3faa4dde, 0x3f96f909, 0x40350346, 
    0x3ace41a7, 0xbf98968c, 0xc000be2c, 0xbfcaa0b0, 0x3f860b99, 0xbffd98c5, 0xbf4b8948, 0x3e5de980, 
    0xbd357991, 0xbeb0c20d, 0xbf0155c7, 0x4031c304, 0xc083ab33, 0x3e5ee6fa, 0x3f14a08c, 0xbffe0cfc, 
    0xbe5a81e0, 0x3f188558, 0x3f1050d9, 0x3f736024, 0x3f7e9018, 0x3ed6fc23, 0xbd9bfb7b, 0x4008a4fb, 
    0xbe67ac38, 0x3f3e8805, 0x3fb505e2, 0x3f44339f, 0xbf1a34b3, 0xbf9c10b4, 0x3d53f9db, 0xbcd95db5, 
    0xbf813b31, 0xc00670bc, 0xc029624e, 0x4008c560, 0xbf0e5c2a, 0x3f89ed07, 0xbe81afe0, 0x3f62d034, 
    0x3e7a2c9d, 0x3e0b5869, 0x3fb8025b, 0xbeb35178, 0x3fe023e6, 0x3fa72208, 0xbda407fb, 0x4058c0a9, 
    0x3ee9ad29, 0x3cf7268e, 0x3fba899d, 0x3ebfad7a, 0x3ea46265, 0xbf5823dc, 0x4017cb72, 0xbf4fc9d8, 
    0xbf7aef38, 0xbf735f59, 0xbf3553ec, 0x3ebe88b5, 0xbf1f9c67, 0x3fb7d310, 0xbe258d17, 0xbeb6fda2, 
    0x3f647cbd, 0xc002da21, 0x404e781c, 0xbf36de8c, 0xbf8a52a9, 0xbfb25dec, 0xbf884b48, 0x3f04de71, 
    0xbf98a666, 0x3f871cba, 0x3f47d393, 0xbf0c111d, 0x3f819afd, 0x3bbc105b, 0x40a008a5, 0xbf7ba360, 
    0x3e4ec028, 0xbec2296d, 0xbf39cf34, 0x3f5bb225, 0xbefd990e, 0x3dbe13ab, 0x400561f0, 0xbf743ca8, 
    0xbf5c6d74, 0xbff0b6ee, 0x3f2fc0e5, 0xbede8e9c, 0xbdba3d2c, 0xbf897408, 0xbf0965ca, 0x3f89470b, 
    0x3e7d3fb5, 0xbe88073f, 0x3d92cc40, 0xbfe51171, 0x3f2bb634, 0x3fdc195b, 0xbf531276, 0xbf7d2325, 
    0xbfac72a9, 0x3ecad40b, 0xbf009bb9, 0x400f1e39, 0xbe549f4b, 0xbe1e4a9a, 0xbfe9aefc, 0xbf2948c8, 
    0x40233aca, 0xbf8a5fd0, 0x409986a9, 0xbf296adf, 0x3f0adeaf, 0x3dae96d4, 0xbf1eca7a, 0x3fb6a6bc, 
    0x3f669efd, 0x3f987a3d, 0x402c073b, 0x4089a661, 0xbed90faf, 0xbe51acf7, 0xbf4f5080, 0xbf417b85, 
    0xbf2805ab, 0xbd90e0ef, 0xbec91409, 0xc04f8c47, 0x3eac0554, 0xbf4cc801, 0x3dc18670, 0xbf496aa7, 
    0x3f09be4f, 0xbe7072f5, 0xbfe4e70a, 0xbf251d59, 0x3fa398b8, 0x3fbc4d9b, 0x3dd27270, 0xc05e93c1, 
    0x3e162789, 0xbf38e918, 0xbb4132cb, 0xbf2b2133, 0x3f4b24ca, 0xbe41b66e, 0xbfd34b5a, 0xbf50b281, 
    0x3f153972, 0x3f3834e0, 0x3e924ddf, 0xc06db745, 0xbe66272a, 0x3e62eff1, 0x3eb0c284, 0xbf87291d, 
    0x3f0bea12, 0xbf7bfc3b, 0x3f54480e, 0x3dfafa0e, 0xbf703662, 0x3f34a5ce, 0xbcae6d78, 0x3dc61aab, 
    0xbf0ea983, 0x3f9bbc6d, 0x3fc614d3, 0x3d4bbf7b, 0xbeb6ab32, 0xbfdc833c, 0xbf85f184, 0x3edcacd4, 
    0xbf64bc33, 0xbf352da2, 0xbe128f5b, 0x3ed2e2ed, 0xbf32f356, 0x3d3d14c5, 0x3f03bf17, 0xbf875531, 
    0xbfd152ab, 0x3f8726e6, 0xbeb03963, 0x3fc3206f, 0x3e32e87e, 0x402806bc, 0x3f7d80b0, 0x401973e3, 
    0x3ec4b80d, 0xc00f1319, 0x3ecc0a08, 0xc024a409, 0x3f967efc, 0x3f6313aa, 0x3f927025, 0x3e12ab07, 
    0xbe2fb6b6, 0x3f2f26a5, 0x3e00e2a9, 0x3f9956dc, 0x3f12a443, 0x3f9839be, 0xbe0f4f14, 0xbf1b5f5d, 
    0x3eb333f1, 0xbe8849d5, 0x3fa5641c, 0xbcee39b1, 0xbf47eb7e, 0xbfe16bab, 0xbfb35db6, 0x3f490991, 
    0x3e77dd6b, 0x3f72d1fc, 0x3e9055c9, 0xbf161835, 0x3f335451, 0xbe663fdc, 0x402a47fe, 0x3f24ffed, 
    0xbf9f84af, 0xbf1c2936, 0xbe89b8df, 0x3fd390c7, 0x3f74d5db, 0x3e9eb439, 0x3fdd28fa, 0xbf046199, 
    0x4037bbdc, 0xbfd19280, 0xbec80b95, 0xbef39a1d, 0x3f37cd43, 0xbf569584, 0x3bc5d78c, 0xbfa3b2d8, 
    0xbec12007, 0x3f1e6463, 0x3ef81be8, 0xbe1b90ef, 0x3fcb0e52, 0xbf928efe, 0x3da1375a, 0x3ed4ae26, 
    0xbf2df888, 0xbf9491ce, 0xbf70ac4a, 0xbfdda1a8, 0x3fb207c2, 0xbe346116, 0x3f90a05e, 0x3ea4ed04, 
    0x3e684338, 0x3e392190, 0x3f0146ab, 0x403d2911, 0xbff287cf, 0xbedeba75, 0xbf11e8b1, 0xbfcf53d5, 
    0x4037aab7, 0xbf8b81db, 0xbe88be58, 0x400bba85, 0x3f99d03b, 0xbd307a1d, 0x3fa3371e, 0xbd7b2696, 
    0xbf7950b7, 0x3f60131d, 0x3f8942c1, 0x3f9ecc7e, 0x3fca4b1c, 0x3dffe08d, 0xbd250143, 0xbf35fc03, 
    0x3f174e4c, 0xbe9a2925, 0x3f7340d9, 0xbf55fa55, 0xbebcf050, 0xbcda388a, 0xbe64c946, 0x3e843ae2, 
    0x3f07cda4, 0xbe81563f, 0x3f35323d, 0xbf9df455, 0xbf9e2bde, 0xbef83080, 0xbe473b21, 0xbec497ce, 
    0xc0182e9a, 0xbfc114c5, 0x3e8c69d3, 0xbf05d79b, 0x3f3e05f0, 0xbf73673d, 0x3ff8dcd9, 0xbfa4513a, 
    0xbe099adb, 0xbe037bcd, 0x3f3dc876, 0xbef215e2, 0xbf8ebf3c, 0xbda83933, 0xbf437b88, 0xc0037afd, 
    0xbf9a356f, 0x3ebeae14, 0xbff8618f, 0xbf97f39b, 0x3f8b6c8d, 0xbed247e1, 0x40366c52, 0xbf7cdec0, 
    0xbebb418b, 0x3f49760e, 0x3e8026a8, 0xc005de83, 0xbf44cc5a, 0x3e0f9370, 0x3f935384, 0xbf7bae12, 
    0x3f294d6c, 0x3fbbcc03, 0x3ff89f50, 0x3e100e8e, 0xbfb07e04, 0xbd3ca019, 0x3eb90096, 0xc005d4fa, 
    0xbdb4be53, 0xbee9a780, 0x3d7f664d, 0x3d9ec6e0, 0x4011ed3c, 0xbf96ff0e, 0xbf6bdf73, 0xbfaca8a6, 
    0xbe342954, 0x3f4dd4d1, 0x3e1000ac, 0x3fea14e4, 0xbd49553d, 0x400fcd03, 0xbf2c5183, 0xbf3118d7, 
    0xbded7e89, 0xbfdb4ddb, 0x3ebf81c5, 0xbfd6119b, 0xbfa557c6, 0xbfb7906a, 0xbf8b7e83, 0x3f988c9e, 
    0x3ff673ae, 0xbc8fe777, 0xbeb4ca8f, 0x3edcc869, 0xbf1fb290, 0xbfd9357c, 0x3fd09885, 0xbefa806b, 
    0x3f77a483, 0xbdbb7be4, 0xbf725d5b, 0x3fa16e1e, 0x40468d8f, 0xbfa47a12, 0xbfc7846d, 0x3e47cfb6
};

static const uint32_t _K31[] = {
    0x3b04a3dd, 0x3b5e595a, 0x38d76e58, 0x3be3ca00, 0x3c60b6d8, 0xbd4e2909, 0xbc821f1c, 0xbcc051b0, 
    0xbbfceaf0, 0x3ce2b026, 0x3c5f6a06, 0x3be3398e, 0xbbf12941, 0x3c20586e, 0xbc760ec6, 0x3bdb115f, 
    0xbc11a8ae, 0x3ae340ae, 0xbc1d400a, 0x3b95338e, 0xbc704bf5, 0x3c097164, 0x3d194ae7, 0x3b131e6d, 
    0x3bc14c9d, 0xbba45ac9, 0x3c29af57, 0xbb9adb31, 0x3c2b53d3, 0xbc39ed40, 0xbb754467, 0xbc8d0f31, 
    0xbc76dd7d, 0xbbf3f668, 0xbbb707f4, 0x3b1debed, 0x3a11b578, 0x3c87908e, 0xbb926a5c, 0x3bc0c5d0, 
    0x3ca60735, 0xbb1660b1, 0x3c09e0c6, 0x3bfcd1ff, 0xbc77baa6, 0x3c8a777a, 0x3c1e0935, 0xbc5e160b, 
    0x3c572046, 0xbca496e6, 0xbb4dc71d, 0x3bd6fa55, 0xbc4a8e1e, 0x3bbed975, 0x3d68af93, 0x3c39f3dd, 
    0xbc09980f, 0xbbbe7c26, 0xbcdacc11, 0xbcf57d70, 0xbaecaa23, 0x3c69180f, 0xbc28c1e5, 0x3b9cd5cb, 
    0x3cfd9164, 0xbb0dd13f, 0x3b946029, 0xbc055e43, 0xbb74273c, 0xbc762397, 0x3cad9790, 0x3cbd84e8, 
    0xbcd57acf, 0xbbe0e4b9, 0xbcb103db, 0x3c93b488, 0x3d320e5c, 0xba97a9a7, 0x3cf4c710, 0x3cae4389, 
    0xbca876a4, 0x3db3522a, 0x3c94fe85, 0xbcaf11b2, 0x3d24d40a, 0x3d0d774a, 0x3ca23e23, 0x3ca1568a, 
    0x3c2c23a8, 0x3b1538e4, 0x3bfcfc92, 0xbbc58282, 0xbd146f8b, 0xbcfadc08, 0x3cca5fff, 0xbc84fd5c, 
    0x3b612f1e, 0x3b0eba85, 0xbd0de6c7, 0x3b6790bb, 0x3c0163ba, 0xbca972ff, 0x3ad5983c, 0xbc422793, 
    0xbc315bcc, 0xbc119f5c, 0x3bde3d8f, 0xbcb6a84e, 0x3b4caf27, 0x3c98d542, 0xbbd1c641, 0x3c1abf8a, 
    0xbc527e54, 0x3b51fe22, 0x3c12ca4f, 0xbb83e590, 0xbc3c2a1f, 0xbbf57ef1, 0x3c386976, 0xbcb2dd79, 
    0xbc4eb1d5, 0xbb8fb3c1, 0xbd496721, 0x3c271dbf, 0x3ca337a9, 0x3c262d4e, 0xbc27f98e, 0x3cd50a09, 
    0x3b7fb01a, 0xbb2fae0d, 0xbc20f01b, 0xbceb1f7b, 0x3ce56243, 0x3d1d59c2, 0xbc056da9, 0x3ac08f9d, 
    0xbc33e4ee, 0xbb2965af, 0xbac5944e, 0xbbff1a26, 0xbc06e105, 0xbca79863, 0xbc09e351, 0xbc4642f5, 
    0xbc2396ac, 0x3c0f5af5, 0xbc974c98, 0x3c6c2718, 0x3c34e977, 0xbc8eebed, 0x3c96a814, 0xb98ee909, 
    0x3bfc9745, 0x3c81df49, 0x3c637b26, 0x3b89ec01, 0xbc773d2e, 0xbac9d12d, 0x3bf2a14d, 0xbcbbe974, 
    0x3b25a5e5, 0x3b59d327, 0x3c1231fe, 0x3ba344fb, 0x3be0b255, 0xbbff1609, 0xbc8ee848, 0xbab10959, 
    0xbc6c458f, 0x3b0dde15, 0xbccf2c0f, 0xbbad95d7, 0x3bc37428, 0xba6cbd5b, 0xbcf32353, 0x3b90eba0, 
    0x3d3f2cb1, 0x3ab9014f, 0x3d1877c6, 0x3d0a47df, 0x3c569bfa, 0xbcd05d5f, 0x3c7f6649, 0xbc9d5340, 
    0xbd1d84f9, 0xbc88c5ac, 0x3c9374b9, 0xbab7e84e, 0xbc86c98d, 0x3bc760ed, 0xbc774a07, 0x3bffdeab, 
    0xbd16f627, 0xbc03294f, 0xbc89ed2f, 0x3c409e2a, 0x3a433f6c, 0x3c3f845a, 0xbc2f08b5, 0x3d0ecc1e, 
    0x3cd79d3a, 0x3cfc9db7, 0x3c31bdcd, 0x3cb55733, 0x3cdb5a91, 0x3d307f59, 0x3cd208ee, 0xbb543fed, 
    0xbcef9b00, 0xbbdbf18d, 0x3c57e0a8, 0x3a64fd98, 0xbd57e7f5, 0xbc41678b, 0xbce22d6c, 0xba9fbb82, 
    0xbc3a6f62, 0x3b6693c6, 0x3aa8e31a, 0x3ba963ad, 0xbb8c9c48, 0xbc94608a, 0xbcbb6c4f, 0xbc97bd68, 
    0x3d007fe2, 0x3aa73b60, 0xbb159440, 0xbc0e097b, 0x3b9ad746, 0xbbf9f6ea, 0x3cc66758, 0x3b8f2d06, 
    0x3ac75b56, 0xbcea7499, 0xbc15948a, 0x3c03cca2, 0xbbfcbf97, 0xbc624766, 0xbc5ac746, 0xbcd7815c, 
    0xbb9c5122, 0xbc1060a9, 0x3adb434a, 0x3ab1089d, 0xbcf95bec, 0xbaeabfac, 0x3cf455d6, 0xbc3916d9, 
    0x3ceb1020, 0xbc2f6e04, 0xbcae7cbe, 0xbcd77b51, 0xbc20aaf7, 0xbc844a80, 0x3cc9aafd, 0x3b763e30, 
    0xbac3d785, 0xbd15c029, 0x3b0be1aa, 0x3b9f9a17, 0x3becf773, 0xbca4ab3b, 0xbc0d487e, 0xba90da45, 
    0xbb8c8735, 0xbd32fef7, 0xbc355fb5, 0xbc827b33, 0x3cd3e404, 0x3c1f0459, 0xbaf6e605, 0x3b3cb917, 
    0x3d05621d, 0xbbcdbfb1, 0xbcca6d99, 0xbc6f06c7, 0x3d5e7177, 0x3c17f35d, 0x3cc4dcf3, 0x3a01d96b, 
    0x3a63d534, 0xbd11077f, 0xbb56e0b9, 0xbc25c550, 0xbd0adb7c, 0xbcea2e03, 0xbca39b53, 0xb9bbe231, 
    0xbc1d4258, 0xbdb0cd88, 0x3d65ef41, 0x3b822fbe, 0xbc54818a, 0x3cd7844d, 0x3d09e8e0, 0x3d5fff08, 
    0xbc645d07, 0x3c6fd608, 0xbd272fd5, 0xbc1eb6e2, 0x3cc51e58, 0xbc7106ac, 0x3c469afa, 0x3b93596b, 
    0x3c53f293, 0x3bd36e66, 0x3cd9de4c, 0xbbdbfa1c, 0xbd285198, 0xbcd62f10, 0xbb0aafff, 0x3ad7a5e7, 
    0x3be2add6, 0x3bd08379, 0x3ca9a5de, 0x3c30f099, 0xbc7bfbd2, 0xbc4cf8c0, 0xbc1e2379, 0xbc956341, 
    0x3bd4f23b, 0xbca2a8e1, 0x3c880d9e, 0x3c4f6204, 0xbc945b27, 0xbc8f185d, 0xbc8efd75, 0xbc2ed2a3, 
    0xbc65c413, 0x3c617d05, 0xba9e549b, 0x3b8abdc6, 0xbbeb4b80, 0x3c98e595, 0xbaf35d2e, 0xbc815cb3, 
    0x3b9928db, 0xbc038cc6, 0x3d2182c3, 0xba086f31, 0xbc9516d3, 0xbc980dd5, 0x3b66c018, 0xbbdf23d4, 
    0x3c597999, 0xbbb09c56, 0x3bc1ab89, 0xbbbf647c, 0xbbde0508, 0xbbbb518e, 0xbb27c8f9, 0xbc6df7bd, 
    0xbcbaea6a, 0xbbc79c3a, 0xbb706521, 0x3c0a2cff, 0xbcecf6d2, 0x3c22f01a, 0xbcb8eab1, 0xbd1a7c1f, 
    0xbbedd874, 0x3cd45c7c, 0xbcac62dd, 0x3cb0945b, 0x3c85d504, 0xbcfd2c52, 0x3c8054f3, 0xba8299f4, 
    0x3c0b6f4f, 0x3ccf94ba, 0x3bf18aba, 0xbc2c10c3, 0xbc91c96f, 0x3cb4b1ce, 0x3c392a98, 0xbc069883, 
    0x3c8a3dca, 0xbb512e00, 0x3b15f5cf, 0x3be04667, 0xbc1688d0, 0xbbec2a7d, 0xbc17ba92, 0xbbd2e3f1, 
    0x3c15f872, 0x3a060fa4, 0x3b962484, 0xbd037996, 0xbb06da50, 0x3c8be4f7, 0x3cff8345, 0xbc08a031, 
    0x3d0c0901, 0x3bf5759c, 0x3c39d733, 0xbc3a7299, 0x3c3c8c94, 0xbc3f22db, 0xbbe396da, 0xbcb05f32, 
    0xbc1f747f, 0xbcd5a98f, 0x3a829c3b, 0xbc6cbc33, 0xbbda6df1, 0x3b02643f, 0x3ae16827, 0xbc895e83, 
    0xbc0f6aa2, 0xbc2cd1c7, 0x3cf5d399, 0xbc6926a7, 0xb8f2e053, 0xbb809df2, 0xbc8429e1, 0x3ccb28fc, 
    0x3bcff900, 0x3c987ae2, 0xbd5480a3, 0x3bfca264, 0x3d0e6f3a, 0x3d81e5e1, 0x3c7aa43d, 0x3af51708, 
    0x3b8c7dd9, 0xbbe9ba78, 0xbb3cddd1, 0xbc5c23a0, 0xbd895fd3, 0xbc61265c, 0xbd0d63f5, 0xbccf8f20, 
    0xbd3b5141, 0xbc7848e9, 0x3c3cf88c, 0xbb94049b, 0xbd0c0108, 0x3d203ab3, 0x3d2e0ce5, 0x3dced128, 
    0x3cd28db8, 0xbbb27a61, 0xbd44b88e, 0xbc2e96e6, 0xbc0b4f77, 0x3d095ddf, 0x3c9fbdb5, 0x3cca79d4, 
    0x3bb43ab7, 0xbc808416, 0x3d1af06e, 0xba4ed40b, 0xbc9e2c7e, 0xbbc53ecd, 0xbc1a8627, 0x3c69b44f, 
    0xbca2433e, 0xbbc8a716, 0xbc7f6d8b, 0xbbfe2bd2, 0xbc2d32fe, 0x3d0b0fbc, 0xba0c0426, 0x3c83093f, 
    0x3cde1884, 0xbc3496fc, 0xbc52a37e, 0x3b18b979, 0xba98b37c, 0x3d446c58, 0x3bff5fae, 0xb9f33ee3, 
    0x3bee9aa2, 0xbc8827c9, 0x3c801ac7, 0x3c5909e3, 0x3a280672, 0x3b82b8e3, 0xbcdd75f5, 0x3c81ff87, 
    0xbc7a7f15, 0xbc0cca76, 0x3c4620d2, 0xbd128a32, 0x3cd5058d, 0xb59833b1, 0x3c651620, 0x3ce27a6b, 
    0x3ccaa1b3, 0x3c4fe58a, 0xbcee3448, 0xbc97f426, 0x3b920812, 0x3d368bee, 0xbc3b8b22, 0x3c67f313, 
    0xbc08c36d, 0xbcb2b59e, 0x3c1b3725, 0x3b228339, 0xbcac5e7a, 0x3ba27ad2, 0x3c1c58ef, 0xbb0fea3a, 
    0xbcbd5aa7, 0x3c2f94ae, 0xbc168843, 0x3c3e4d51, 0x3cb4bd04, 0x36671db1, 0xb9ed2980, 0x3ca07d62, 
    0x3b894713, 0x3d2c4b24, 0x3ce58331, 0x3bb7b693, 0xbbc3acce, 0x3b9c358c, 0xba04580c, 0x3c189555, 
    0xbc631c38, 0x3b954511, 0x3bc45cd5, 0x3b29b6da, 0x3c024aed, 0x3c0f232c, 0x3b16d397, 0x3bab60c0, 
    0xbd206daf, 0x3c095bc5, 0xbbb52113, 0x3c3413e1, 0x3cce092a, 0xbb8248ca, 0xbcf47d09, 0xbc0e06c5, 
    0x3bddc6a2, 0x361e48c6, 0x3c3d97cb, 0xbbfa6bf0, 0xbb80dc04, 0x3c43dedd, 0xbb6f9481, 0x3c61b6e8, 
    0x3a810484, 0xbb9c3cb3, 0xb9a2008a, 0x3cbe1339, 0x3c79e3f3, 0x3c86ccbf, 0xbace1ca3, 0xbc2b1e77, 
    0xbcfd454e, 0xbb662482, 0xbc1d0a25, 0x3c70ca15, 0x3c22f64d, 0xbc3a1dee, 0x3bc76ee5, 0x3c07cf53, 
    0xbb59d376, 0x3c5d01ef, 0x3be3a6e1, 0xbc92cd87, 0xbb7df2a9, 0x3c66599a, 0x3c96a5fc, 0x3c8c01a9, 
    0xba6dd27d, 0xbb623ccf, 0x3d01c7c7, 0x3bb7d171, 0x3c2398d2, 0xbad9fe92, 0x3bac44a3, 0xbc292498, 
    0xbb14fb24, 0xbc94fec7, 0x3a217255, 0xbaa42a1d, 0xbb4f2bd0, 0x3c299fec, 0xbbdb4bc8, 0x3bbfa510, 
    0xbd37b0c4, 0x3b7c1b75, 0xbb85a938, 0x3c0dc288, 0x3b730abf, 0xbc7b1db0, 0x3c07df9a, 0xba9292f7, 
    0xbba3b536, 0x3c99c06a, 0x3caf7468, 0xbb8f8f3e, 0xbc1881ac, 0xbc0d4152, 0x3b966706, 0xbbffab75, 
    0x3c170c33, 0xbb786dcb, 0xbc186f2f, 0xbc1cdfce, 0x3bbc0ae0, 0xbb0de918, 0xbc3d718c, 0xbb8aa4a1, 
    0xbc654906, 0xbadcba47, 0xbc5933db, 0xbc80e736, 0x3ad8e621, 0x3bffc16a, 0xbce8e7af, 0xbb5cac3b, 
    0xbcd36616, 0x3ca51b07, 0xbb120a99, 0xbc83e29e, 0xbbf4c4ba, 0xbb373a5b, 0x3c49f1a4, 0xbcf28fc2, 
    0xbbdd7a10, 0xbc8f90c3, 0xba8b62c1, 0xbb03a46e, 0x3a83381d, 0x3c860760, 0xbbd51bb5, 0x397e18de, 
    0xbc0dca5b, 0xbbc54173, 0xbbb81f67, 0xbc958a0e, 0x3b517ea0, 0x3b58f9bc, 0x3b3bab05, 0x3b52c5ab, 
    0xbc9a5bea, 0xb8db611b, 0x3c6e9d08, 0x3baa5989, 0x3c0c2be3, 0x3b7eb6fc, 0x3b5032b8, 0xbc71a362, 
    0xbbc70c13, 0xbc5a6874, 0x3ca6db1b, 0x3b532778, 0xbc28c378, 0xbc13f900, 0x3cb0e6dd, 0x3c3e3509, 
    0xbc810456, 0x3c895540, 0xbd32f57b, 0xbc9d8bf3, 0xbc22e728, 0xbb46a8a1, 0x3c03947b, 0x3cc35919, 
    0x3abb1019, 0x3a0a71a1, 0x3c37cdc6, 0x3b45952d, 0xbba424cc, 0xbc8e9a3e, 0x3c32bc27, 0x3bc1e6bf, 
    0x3ca9906b, 0xbbbc8859, 0x3c68d590, 0x3b7937d9, 0xbcb71329, 0xbbb2ecb3, 0x3caffd09, 0x3a8d48b5, 
    0xbb8dc608, 0xbc834b8d, 0xbd90b118, 0xbd54eb7d, 0xbc69cbfd, 0x3c32c2a5, 0xbcd1efd4, 0x3a385853, 
    0x3a2d02f8, 0x3b88b77d, 0xbba0b76c, 0xbb71b0fd, 0x3c3888e5, 0xbade82ea, 0x3b132c36, 0xbb47a215, 
    0xbb707067, 0xbc195f98, 0x3c57d6df, 0x3c65ce0d, 0x3a6606be, 0x3b6c8b27, 0x3c996acc, 0xbb054deb, 
    0xbb7ba96c, 0xbc4741bc, 0xbc4ebced, 0xbc1df470, 0xbc81e523, 0xbb1b348c, 0xbad1e1f6, 0x3c106daf, 
    0x3cbe7745, 0xba62fda5, 0x3b030f15, 0x3ca2c160, 0x3cb645c1, 0x3b978011, 0xbbdc4b92, 0x3cb289a4, 
    0xbbe57a95, 0xbcbd295e, 0xbbbd4f40, 0x3c0c5ef4, 0x3c51e4b2, 0x3d1349a3, 0xbc98ba4f, 0xbd1228d7, 
    0xba0e2c23, 0xbd09c63e, 0x3cbae711, 0xbad6718b, 0x3c9968bf, 0x3ad29699, 0x3a84d394, 0x3b000d6f, 
    0x3c2d8e99, 0xbbd7bae0, 0x3c305a80, 0x3c31ab77, 0x3c1202f3, 0x3c87deec, 0x3b358b87, 0xbb5bd59f, 
    0x3b9b7103, 0xbc81bd49, 0xbb805fa0, 0xbbbabda8, 0x3bc15cba, 0x3d1061e5, 0xbbc2d072, 0xbd08ddef, 
    0x3d17a6f6, 0xbc154263, 0x3d16d29b, 0x3c7326f2, 0x3c92e927, 0xbc4c0a7b, 0xbc4a04de, 0xbbfca87e, 
    0xbbc726ec, 0xbcf46ec9, 0x38b1eea5, 0x3b32a77c, 0x3cad32fb, 0x3c532144, 0x3bb1d216, 0x3ce17fae, 
    0xbbd941cf, 0xbc9f1482, 0x3c24198f, 0x3a43b2ea, 0x3c882e10, 0xbc1dc570, 0xbc8a9bf3, 0x3be1deee, 
    0x3c1275fb, 0x3c388d0b, 0xba49306a, 0xbb7b9de0, 0x3ccc0ea8, 0x3ccccee0, 0x3cbb5c38, 0xbbb441c9, 
    0xbbe7e01e, 0xbc4a4673, 0x3bdd33ae, 0x3b163002, 0xbc6b9797, 0xbb955452, 0xbc9dd971, 0xbbbf26ad, 
    0xbcb3d0b5, 0xbcb7b1d3, 0xbc2d266a, 0x3c70a68e, 0x3c8a5ede, 0x3bd93e34, 0x3bf62481, 0x3d587bf3, 
    0xbd380217, 0x3d3cea68, 0xbc8676ef, 0x3984fb13, 0x3b6de165, 0xbc460215, 0x3cc1bc41, 0xba80ee39, 
    0x3c443d69, 0x3cdeab3a, 0x3d299ee9, 0xbcd1abfe, 0x3b869817, 0xbd312e57, 0xbc72f491, 0x3c9ade86, 
    0xbc592ce8, 0x3c3bbbb2, 0xbd2ca96a, 0xbb42af40, 0x3ca5da7c, 0xbd37b0e9, 0xbcd78ea3, 0xbccc7a89, 
    0xbc49bd27, 0xbb6d2cf9, 0x3b5f3d06, 0xbc082860, 0xbca74b4c, 0xbb18fb7f, 0xbb9541d0, 0xbc036989, 
    0xbc40f65b, 0x3c4d9f32, 0x3bbf29ba, 0x3b6320e1, 0x3c9cd77a, 0xbbf13a2d, 0x3a97732f, 0xbb8098e5, 
    0xbc184f18, 0xbc7746a3, 0xbcaa186c, 0xbcd96752, 0x3d85d15f, 0x3d82400d, 0xbc9bd6a0, 0xbcf2f2c6, 
    0x3c998c45, 0x3bd8032c, 0xbbe993cd, 0xbcc01966, 0x3d70c415, 0x3d8e589c, 0xbc1932b1, 0x3c0b90eb, 
    0xbca105f2, 0xbca7f25f, 0x3bc895a0, 0x3bcabcb0, 0xbb4fc5ea, 0x3d0e075f, 0x3be7206d, 0xbc6821a5, 
    0xbc852ca1, 0xbc34f57c, 0xb9bdd0a8, 0xba6fe62d, 0x3c616ce7, 0xbc07d24b, 0xbce8e9e2, 0xbd0f2678, 
    0x3c2654a7, 0xbcc65bf2, 0x3c1b2810, 0x3cf264ce, 0x3c59a4ca, 0xbd1366d1, 0x3ceba183, 0x3cd9fdac, 
    0x3b1a613e, 0xbcf188ce, 0x3a645762, 0x3ca2fc21, 0x3c0b20d5, 0xbb99d121, 0xbbd796a6, 0x3ce88518, 
    0xbc0cb48e, 0xbbb5d89f, 0xbca5138e, 0xbc66827c, 0x3c324c3d, 0x3cd05eb5, 0xbc2463f0, 0xbcb1696d, 
    0x3c082208, 0x3c6cb94c, 0x3c355665, 0x3ca113df, 0x3d0751c2, 0x3b42c9a9, 0x3ca1bb95, 0x3c279866, 
    0xbbea19b4, 0xbcb9edf9, 0x3c779206, 0x3ba24a34, 0xbb2ccaf1, 0xbb350ee5, 0x3ae7946d, 0x3cbc8f69, 
    0xbadd69d9, 0x3c78c156, 0xbd0e657d, 0xbd0353ea, 0x3d48ba24, 0x3d4f34d9, 0xbb50e44c, 0xbcdc1568, 
    0x3c50f47a, 0x3cbb0a3c, 0x3c85d5d4, 0x3cfc166c, 0x3d031637, 0x3c629cfb, 0xbc38e7f2, 0x3c3565e0, 
    0x3c0c1195, 0xbca7afb7, 0x3a8ddbe0, 0xbb4e4900, 0xb9b767f2, 0x3cc0aebd, 0x3c100a92, 0x3cb19ff0, 
    0xbcdf4ec1, 0xbc926ec2, 0x3c625a4b, 0x3c62a673, 0x3cabf3b4, 0x3c68b088, 0x3cbaec5f, 0x3cdce3e8, 
    0xbc33cc67, 0x3d2f0908, 0xbc5af11c, 0x3b2e5ccd, 0x3c49a6b4, 0x3c996183, 0x3cb2a048, 0x3c8589ef, 
    0x3cfc84ce, 0x3b936068, 0x3c91977e, 0x3c32ea59, 0xbc5468b7, 0xbc028f7d, 0xbb014f8d, 0x3ccd2683, 
    0xbc0b0ca8, 0x3c615d8c, 0xbbde3217, 0x3c86fcd4, 0xbc48b869, 0xbce5bc41, 0xbb8bc627, 0xbb45e141, 
    0xbbef46c9, 0xbcb3b1f4, 0x3c5aef77, 0x3cc8edc1, 0xbc9c5874, 0xbb3c86aa, 0x3bd9afa0, 0x3c4cea8b, 
    0x3bd388c7, 0x3c569cec, 0x3c904b46, 0x3c116638, 0xbc8c62e1, 0x3b9fd1da, 0xbb7ff882, 0x3bba5ec7, 
    0xbc90883f, 0x3c6c2a6c, 0xbcc02454, 0x3c156f0b, 0x3c804ed7, 0x3d161b85, 0xbc8b6195, 0x3ca1f6b4, 
    0x3c2e4a8c, 0x3c6b28ac, 0x3c10b16f, 0x3ce28dd4, 0x3ccef9ee, 0x3d0d6dc3, 0xbbffa024, 0x3bfb5735, 
    0xbbbfe08a, 0x3be931c3, 0xbbb4a30a, 0xba815aed, 0xbcd783e2, 0x3bec357d, 0xbbd4b723, 0x3c5201bd, 
    0xbc2f64ec, 0xbbe41044, 0x3b2420ba, 0x3c88c905, 0xbbedd43a, 0x3cce10d2, 0x3c80d812, 0x3d05eefc, 
    0x3b70306e, 0x3c8aa6e7, 0xbc0b475f, 0xbb157412, 0x3c974e9e, 0xbcdde565, 0x3cbe27e3, 0x3bca10af, 
    0x3c8b3c44, 0x3c1d9fc6, 0xbc168a20, 0xbcc4d783, 0xbb440f48, 0xbd245614, 0xbb765ed7, 0x3a72afcd, 
    0x3bf44fb6, 0x3c7c2a75, 0xbbdfd933, 0x3c1f05c0, 0xbcb8a648, 0xbc42acfd, 0xbc246d47, 0xbc36296b, 
    0x3b44f864, 0xbca3c910, 0x3b410ff2, 0x3b4a8569, 0xbc244120, 0xbccccea5, 0xbaca9394, 0xbc7b1ee9, 
    0x3af7c4d3, 0x3c4e6a00, 0xbcac3b56, 0xbc37756c, 0x3c176775, 0xbc536bc1, 0xbc53fc42, 0xbb959cd7, 
    0xb8106174, 0x3ae8cf33, 0xbb8016de, 0xbb8c354f, 0x3c036522, 0x3cda21e9, 0xbc281da2, 0x3c3674d9, 
    0x3c280e8a, 0xbb2507aa, 0xbca172f2, 0x3b90bf07, 0x3cf45f17, 0x3b040c44, 0x3b63ed06, 0xbb935cf3, 
    0xbc225fd4, 0x3bec9046, 0xbc7feb10, 0xbc8a8373, 0xbc57bce0, 0xbc5763fa, 0xbcc6738d, 0xbc0f2a9a, 
    0xbb60ceda, 0x3c030f58, 0x3bad00e5, 0xbc520b54, 0xbc8b9815, 0x3caa2be2, 0x3bac6a69, 0x3bbd45e0, 
    0xbbbbc642, 0x3c5617b2, 0x3c8d3de9, 0x3cc299d1, 0xbc7b50a8, 0xbcf0e56a, 0x3c338cdf, 0x3b1861bd, 
    0xbd4d116a, 0xbbc19e68, 0x3d308568, 0x3c140c77, 0x3c1ea15d, 0x3b8c68db, 0xbb30c938, 0x3ce9a814, 
    0x3d0691c9, 0xbc112d22, 0x3caab5ea, 0xbd3784d4, 0xbc74e77f, 0x3cd5a943, 0xbb204fff, 0x3cc18dec, 
    0x3b34157e, 0xbc60719f, 0xbd3df6f9, 0xbc3a2e53, 0x39b4a1da, 0x3cfbc097, 0xbd154ca8, 0xbcac4b93, 
    0xbca4b700, 0x3c077294, 0x3c366a2e, 0xbca985a5, 0xbc3c7e1a, 0x3c884414, 0xbc33fee3, 0xbc4ea4a3, 
    0xbb46646f, 0xbc21bd50, 0x3b58c046, 0xbc6d1a24, 0x3c46b3d4, 0x3b8101c3, 0xbcb6e5e9, 0x3c95f79c, 
    0xbb2fca0f, 0xbbc58cb2, 0x3c1a4355, 0x3c94c53d, 0x3bc8366f, 0xbabc5989, 0xbae4fbc1, 0xbacf7906, 
    0x3c51f08a, 0x3afb1abc, 0x3b9ede59, 0xbba61d98, 0xbb7bdbba, 0x3ae16dce, 0xbaa14a0a, 0xbad2039b, 
    0x3be4babc, 0xbcbec7da, 0x3c57aa7f, 0x3b25bac3, 0xbbd90e01, 0xbcc951f9, 0x3bc9a1a6, 0x3c5b32b6, 
    0xbd494678, 0x3c85a2b8, 0xbbb220a6, 0xbbf97210, 0x3b84234e, 0xbb9f58b4, 0x3c1613af, 0x3b9100f8, 
    0xbc419ee6, 0x3c8067c4, 0x3cbdc6fb, 0xbbff7726, 0xbc72b371, 0xbc26dd55, 0x3bdb2e45, 0xbbab24d8, 
    0x3ca92919, 0xbc253eaf, 0x3b3a81ff, 0xbc13c1db, 0x3bb354a9, 0x3caf517d, 0x39f56a80, 0xbcb2f2d0, 
    0xbc49e7bf, 0xbc90d093, 0xbcaf8272, 0xbc993af4, 0x3c3b014b, 0x3ccbf095, 0xbce35f57, 0xbbfd928f, 
    0x3c149cd8, 0x3c881198, 0xbbe63b1f, 0xbc7f9013, 0xbc6e7df6, 0xba185e33, 0x3c0d9c7a, 0xbcc84c04, 
    0x3b89bee2, 0xbcacff72, 0x3add9f4b, 0xbc0c4ed8, 0x3bdbbb11, 0x3c138df6, 0x3b846dd0, 0xbcaa942f, 
    0xbc701df3, 0xbb30a410, 0x3c18ac20, 0xbc8f75f0, 0x3c24f074, 0x3c1619ee, 0xbb3be7cb, 0x3c09dfc1, 
    0xbc275cf9, 0x3a143423, 0x3c8f16cc, 0x3b1b3243, 0xbbc5a523, 0x3b5c5771, 0x3cb92bb4, 0xbcc486d8, 
    0x3c03e19c, 0xbb206651, 0x3b1358f7, 0xbc700a50, 0xbc4a0bf8, 0xbca37459, 0x3c59836c, 0x3c43bf02, 
    0xbc488e16, 0x3cd076a5, 0x395f7a34, 0xbbbdea5d, 0xbbf80379, 0xba2c884e, 0x3bb4384e, 0xbb4c884c, 
    0xbcbba839, 0x3b481027, 0x3caafdfa, 0xbc28b7d8, 0xbc866a43, 0xbc200860, 0x3bd35d63, 0xbb3d15fa, 
    0x3ce053aa, 0xbbcb0098, 0x3b3458f3, 0xbbf243be, 0x3a2d88f7, 0xbba34850, 0x3ba838a6, 0x3b25d321, 
    0xbbab54a7, 0xbba03bda, 0xbccfa8ab, 0xbccdd0d4, 0x3c1dcee1, 0x3d095e10, 0xbce54e7e, 0xbc018862, 
    0xbb0db170, 0x3c39149e, 0xbc0a8311, 0xbc927334, 0xbcaa44c4, 0x3b42b825, 0x3bffeb44, 0xbd1f6119, 
    0xbab8a594, 0xbcbec8e9, 0xbc723143, 0xbb31f212, 0x3c81f0e8, 0x3c69024b, 0x3b48a449, 0xbc2de0d3, 
    0xbc10689c, 0xba5df751, 0x3c07a53e, 0xbc75768e, 0x3c823b86, 0x3c217880, 0xbb045b3f, 0x3c655c24, 
    0x3c713169, 0xbaa47189, 0x3c177870, 0xbac0a24f, 0x3b2dc959, 0xbb9b5843, 0x3c8db857, 0xbc050679, 
    0xba009690, 0x3c76c85c, 0x3c656b18, 0xbd3b5e24, 0x3c73077d, 0xbd5218b3, 0xbd00e3a3, 0x3cfd6c52, 
    0xbb9cb82e, 0x3d0f19a3, 0x3acd60be, 0x3d141bbc, 0xbc9063ee, 0xbb1a48ae, 0x3cc05544, 0xbd01a379, 
    0xbbd05ab6, 0xbbf51540, 0x3d097c17, 0xbb4f6d85, 0xbcf9d8bd, 0xbb8e1c1b, 0xbce9bf00, 0xbcb9fd59, 
    0x3c6667d2, 0x3d166790, 0x3b4d8a11, 0xbc06666c, 0xbc5a0d40, 0xbcc4091b, 0x3c988836, 0x3c89b96e, 
    0xbbfe0c04, 0xbc4f776b, 0xbcda4a96, 0xbc7f2e3c, 0x3b3c9f30, 0x3d1737e5, 0x3c0b483d, 0xbc7fc5a9, 
    0x3d5d5ea8, 0x3c20b2cf, 0xbccfd99c, 0xbc84bc0d, 0xbd8b1058, 0xbc899227, 0xbb8573f3, 0xbd9b50c1, 
    0xbc041ee6, 0xbb48dc1e, 0xbcf528a6, 0x3c8eabf2, 0x3d042043, 0xbc3eb022, 0x3d1a64cb, 0xbd36439a, 
    0xbc127ea5, 0xbae90c3c, 0x3bd604cc, 0xbd1358ba, 0xbb11ccbe, 0xbc8bef26, 0x3c0f9497, 0x3cf19eac, 
    0x3daec9fe, 0xbc31d994, 0xbcdc5950, 0x3c2b99fc, 0x3d4bd145, 0xbd2afc21, 0x3d0e7487, 0xbbef1fe1, 
    0xbb96b6ce, 0x3c3cb549, 0x3ca4ba3a, 0xbb30f4f3, 0xbb54879c, 0x3cf273c4, 0x3d07622b, 0xbd115536, 
    0x3bc423c1, 0xbbe5d48b, 0xbcaeeffc, 0xbba5b67c, 0xbb93e1f0, 0x3a99e425, 0x3b333bd7, 0x3d4366cd, 
    0x3d095bab, 0xbc6a68f4, 0xbc345f94, 0x3c65bc5f, 0x3c2539b0, 0x3c91d9b4, 0x3c07f824, 0x3bccbe2a, 
    0xbc52f182, 0xbc391433, 0x3bb47e29, 0xbb678500, 0x3c985126, 0xbb1f6adc, 0xbb393643, 0xbc86d47b, 
    0xbb03be32, 0x3b16256b, 0xbc9cae74, 0xbc23bb36, 0x3c239f33, 0x3c7543fa, 0xbaf0f87b, 0x3da0b345, 
    0x3c86a157, 0xbc07be05, 0xba709d92, 0x3b9bd57b, 0xbc19f882, 0xbbed188c, 0x3c82974a, 0xbb7da877, 
    0xbc4d4a07, 0xbc60731c, 0xbb64474f, 0x3c4980fe, 0x3bcf7685, 0xbb623afb, 0x3b18061f, 0x3b99d705, 
    0xbb71b1aa, 0x3c4ba346, 0x3c097e20, 0x3b0de2cf, 0x3c144a01, 0xbbf7ea05, 0x3bf1bdcf, 0x3dc0c6e7, 
    0x3ade7125, 0xba9dd24e, 0x3c48185c, 0xbba9f28c, 0xbc26531f, 0xbc3904b6, 0x3cc095aa, 0xbb836a15, 
    0xbc502843, 0xbbf4f86b, 0x3bdd7b6a, 0x3ca8db07, 0x3c170952, 0xbbe04f5e, 0x3c325920, 0x3dabadc7, 
    0xbd223d21, 0x3d19ab86, 0xbd0948a4, 0x3c09a9c3, 0xbc0acf8f, 0xbc169baa, 0x3d063faa, 0xbc512686, 
    0x3d46c964, 0x3c9a0d65, 0x3d0f1bcd, 0x3bda3561, 0x3c474a0d, 0xbce4d9c9, 0xbd16612d, 0x3d2a3794, 
    0x3cc7aee0, 0x3c3448b6, 0xbc7051f3, 0xbc20fbf6, 0x3c8101f9, 0xbd1ac937, 0xbce1d67c, 0xbc251cef, 
    0xbc8ab96f, 0xbb2fa78c, 0xbc12f8dc, 0xbb35d45e, 0xbc75e8bc, 0x3bd4ec49, 0xbcd42496, 0xbce8cb0f, 
    0xbcd18008, 0x3d0a2868, 0xbc40aab4, 0xbcbf2b7e, 0xbb66ead7, 0xbbe64c0d, 0x3af612c3, 0xbc283ac8, 
    0xbb69b81b, 0x3cc55523, 0x3c9905f6, 0x3b981a94, 0xbc172b89, 0x3cfb7bb8, 0x3d38d093, 0x3b8a829d, 
    0xbb9ccd89, 0xba85d422, 0xbcaa8fa0, 0xbb6bc510, 0xbc2c18c9, 0x3c3aad09, 0xbc2710e8, 0x3c6d5f8c, 
    0x3d26c4b6, 0xbab23063, 0xbc8c8162, 0x3c3f7163, 0x3a7dff78, 0x3ca15e39, 0x3c7dd4fc, 0x3a32be34, 
    0x3be9270d, 0x3b3b5e9b, 0x3cc8ffcc, 0xbc139a0a, 0xbb199f32, 0x3c3c9ab3, 0x3bb26ae0, 0xbc346078, 
    0xbbb38ab3, 0xbb918fa3, 0xbc4553d6, 0xba81273f, 0xbca8d640, 0xbc3877d6, 0xbc7218be, 0xbc2d2547, 
    0x39f52650, 0xbb39f534, 0x3cbc018a, 0x3c4331db, 0x3d317bc9, 0x3d0581a0, 0xbc701001, 0x3c3fe941, 
    0xbc1b1386, 0x3b1c59df, 0x3c643dad, 0xbbf14482, 0x3c60a28b, 0xbc9839fa, 0xbcd66374, 0xbbec9e72, 
    0x3c9ee47a, 0x3c888ee0, 0x3c080c67, 0x3c9965c9, 0xbbaab72f, 0xbcc2308f, 0xbabf9bd2, 0xbb27a3aa, 
    0xbc4474af, 0xbc72b684, 0x378217d4, 0x3c766480, 0x3cb4f481, 0x3c9bf754, 0xbbbc3b6c, 0x3cbdcc1c, 
    0xbbab535d, 0x3beb559f, 0x3bf46ef2, 0xbbb1f86f, 0x3b97958f, 0x3bf6d701, 0x3ad84bc2, 0x3b8412b8, 
    0x3c393dc7, 0x3c14d81f, 0xbbd42aa2, 0x3c5d9315, 0xb9c6c3d2, 0x3b94e44c, 0x3c050827, 0x3a4420cb, 
    0x3c172971, 0xbc452712, 0x3c81b2f2, 0x3bc36e85, 0xb9ca1cca, 0x3c1518cc, 0xbcbb5045, 0x3bdb96dc, 
    0xbcb2e738, 0x39a9ade4, 0x3cabe2ed, 0x3c6ab331, 0xbc279bdc, 0x3b82981a, 0x3c897631, 0x3c0e667c, 
    0x3bb86e6c, 0xba0dd36e, 0x3be3d574, 0x3bb050f4, 0xbbd1cbb7, 0xbc1e17f7, 0x3c8424cf, 0x3c4d78e9, 
    0xbc0d4b97, 0xbb65c187, 0x3cac82a3, 0x3c5f8ef4, 0xbae84aa6, 0x3be9a1fc, 0xbbe46c35, 0xba54f486, 
    0xbcf0f5a6, 0xbc05958d, 0x3c81876b, 0x3c61a568, 0xbaff5cfd, 0xbc85e65b, 0xbc1c6d93, 0x3b17682e, 
    0x3bfb3586, 0xbc2f5a32, 0xbc2c4e8e, 0xbb76819b, 0xba8a6513, 0x3bd95839, 0x3c1f6c90, 0x3c3ee0cf, 
    0x3c656e82, 0xbbbb39a6, 0x3af2501f, 0x3ca9a9f6, 0xbb05a35a, 0xbbfd4e32, 0xbc3d3699, 0xbb729c28, 
    0xbc9a604f, 0xbd0fcc25, 0x3cb44ad3, 0x3c0618d7, 0xbba6b6c4, 0xbbf9e0f9, 0x3bf28042, 0x3bb12a11, 
    0x394d0eb9, 0xbb162290, 0x3c296d53, 0xbc255858, 0xba43a9f6, 0xbadbb53b, 0x3d0ec44e, 0x3c1ddaff, 
    0xbc4ac491, 0xbbe43bbe, 0x3d01c520, 0x3c022243, 0xbc23af69, 0xbb894dfc, 0xbbd201e2, 0xbc5a97b0, 
    0xbbdbbc27, 0xba5e285e, 0xbc3306a2, 0xbba69c3a, 0x3bc90693, 0xbb8232e7, 0xbcd50897, 0xbb819b6b, 
    0x3b4426b0, 0x3b85a826, 0x3be0ad97, 0xbbaed737, 0x3bdcb08b, 0x3b3624c4, 0xbb72e24f, 0x3bb1dd1b, 
    0xbc3f3965, 0xba30442d, 0xbc1e59aa, 0xbb9d43b8, 0x3ae70a57, 0xbbc64022, 0x3c2222cb, 0xbc578978, 
    0xbc0c61c7, 0x3c67999f, 0x3bdaa253, 0xbc3c7182, 0x3c12fa67, 0x3c9ba7c9, 0xbcb75c33, 0xbc844083, 
    0xbbe5c484, 0xbc7074e8, 0x3afa7b28, 0x3b54b38c, 0xbbdc6698, 0x3c85e501, 0xbbec423f, 0x3c6f48a3, 
    0x3c2c3106, 0xba591dc5, 0x3aad243e, 0x3bfbbf25, 0x3c097bd6, 0x3cd5c005, 0x3bb23cfa, 0xbcdc9bb7, 
    0xbcbb7043, 0xbca26269, 0x3c933826, 0x3bcde4d3, 0x3c4a0ac6, 0x3d0cfc39, 0x3c92feca, 0x3c57fe83, 
    0xba2657d9, 0x3bcb205b, 0xbcd317a8, 0xbc6ddbb5, 0x3c8d06a2, 0x3c468f57, 0x3c6e555e, 0x3cc2a33b, 
    0x3ccd13dc, 0xbbff638a, 0x3b09472c, 0x3be449d4, 0x3c012527, 0xbc072036, 0x3b9967d9, 0x3c92a15e
};

static const uint32_t _K34[] = {
    0x3d294882, 0x3f490df7, 0x3f08eb78, 0xbfaef740, 0xbff7e3a3, 0x3c848744, 0x3f267c84, 0x3f9490b6, 
    0x3dadaa5a, 0xbf6eb324, 0x3ec2b7bf, 0xbe8875b4, 0x3f1abd60, 0x3fb13e33, 0xbf68f196, 0xbe6f9d15, 
    0xbfb73c11, 0x3dd299e6, 0xbfc603a7, 0x3f0ca042, 0xbfa9ce49, 0xbf973069, 0xbf2d61cf, 0x3fa5c818
};

static const uint32_t _K40[] = {
    0xbdd314e2, 0xbf8e963f, 0x3eb4ad7a, 0x3f99c480, 0xbf4cdd49, 0x3efa7053, 0x3eaa5a57, 0x3e851ba7, 
    0xbf9e1c12, 0xbf2df758, 0x3e03dd7a, 0xbf184136, 0xbf65f47b, 0xbf8380cd, 0xbe3eb4b4, 0x3f197811, 
    0x401e8ae0, 0xbe964bfb, 0x3eb7db8f, 0x3f299a08, 0x3f748c4f, 0x3eb136b9, 0x3e22e528, 0x3d84d417, 
    0x3efe1277, 0x3f841877, 0xc02ee5df, 0xbf4d98f4, 0x3fe03919, 0xc00f7438, 0xbf54e964, 0x3f24cbf4, 
    0xbe585ea8, 0x3cc4b237, 0xc0170cd9, 0x3f0e774e, 0xc03d6921, 0x3ef8338f, 0x3f6b0c63, 0xc01f2f8e, 
    0xc04c27b8, 0xbf9d9389, 0xc03d3463, 0xbd8d5d0d, 0xc0871a91, 0xc04bea59, 0x3efa33c6, 0x3f2378d1, 
    0xc0b23a36, 0xc0510c93, 0xbf102f47, 0x3f099d46, 0x3e7280c4, 0xbec94a49, 0x3fd0125d, 0xbff23247, 
    0x3f3f3d13, 0xc047c9ee, 0x3f2b931b, 0x407e3378, 0x3eb74a76, 0x3f715fec, 0x3f24cbe9, 0xbe6aab9e, 
    0xbe44cdc2, 0xbf8e9b8e, 0xbf232195, 0x3fb7ec95, 0x40161283, 0xbfcd86c3, 0xbf3ea7b1, 0xc0a4f3ed, 
    0x3d18c0f0, 0x3e69db0a, 0x3f3eb03c, 0xc02d6806, 0xbff33e47, 0x3e7c9020, 0xc01a78ce, 0xbfc58e08, 
    0x3f909ef3, 0x3f81d7f4, 0xbe722e0e, 0xc0544f13, 0x3fd6a93d, 0xbf4ce943, 0xc004adaa, 0x3ebdfe29, 
    0xbfeed36f, 0x3f8a5f5f, 0x3fc758db, 0xc0283ccc, 0xbff5eb29, 0x3f4a3597, 0xc00091f2, 0x3e1a73d6
};

static const uint32_t _K42[] = {
    0xbf104ca4, 0x3f59fc56, 0x3f3d54a2, 0xbec5ceb0
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[12] (48 bytes) 
#define _K18             ((float *)_K18)                     // f32[13,3,20] (3120 bytes) 
#define _K19             ((float *)_K19)                     // f32[13] (52 bytes) 
#define _K22             ((float *)_K22)                     // f32[12,3,13] (1872 bytes) 
#define _K25             ((float *)_K25)                     // f32[12] (48 bytes) 
#define _K29             ((float *)_K29)                     // f32[24,3,12] (3456 bytes) 
#define _K31             ((float *)_K31)                     // f32[24,3,24] (6912 bytes) 
#define _K34             ((float *)_K34)                     // f32[24] (96 bytes) 
#define _K4              ((float *)_K4)                      // f32[128] (512 bytes) 
#define _K40             ((float *)_K40)                     // f32[4,24] (384 bytes) 
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
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[15,12] (720 bytes) 
#define _K23             ((float *)(_buffer + 0x000002d0))   // f32[15,12] (720 bytes) 
#define _K27             ((float *)(_buffer + 0x00000000))   // f32[15,12] (720 bytes) 
#define _K28             ((float *)(_buffer + 0x000002d0))   // f32[15,24] (1440 bytes) 
#define _K30             ((float *)(_buffer + 0x00000870))   // f32[15,24] (1440 bytes) 
#define _K32             ((float *)(_buffer + 0x00000000))   // f32[15,24] (1440 bytes) 
#define _K36             ((float *)(_buffer + 0x000005a0))   // f32[15,24] (1440 bytes) 
#define _K38             ((float *)(_buffer + 0x00000000))   // f32[7,24] (672 bytes) 
#define _K39             ((float *)(_buffer + 0x000002a0))   // f32[24] (96 bytes) 
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
    conv1d_flat_f32(_K20, _K22, _K21, 13, 390, 15, 12, 26, 39);
    add_f32(_K21, _K25, 1, 1, 1, 15, 12, _K23);
    relu_f32(_K23, 180, _K27);
    conv1d_flat_f32(_K27, _K29, _K28, 12, 192, 15, 24, 12, 36);
    conv1d_flat_f32(_K28, _K31, _K30, 24, 384, 15, 24, 24, 72);
    add_f32(_K30, _K34, 1, 1, 1, 15, 24, _K32);
    relu_f32(_K32, 360, _K36);
    maxpool1d_valid_f32(_K36, 2, 2, 24, 7, _K38);
    globav1d_f32(_K38, 7, 24, _K39);
    dott_f32(_K40, _K39, _K41, 24, 4, 1);
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

