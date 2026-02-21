/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:44 UTC. Any changes will be lost.
* 
* Model ID  53dc3f31-5702-4062-867e-64ae04f405e6
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  12772 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-1
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
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
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
* Max pooling 1D                 [7,16]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [7,16]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [16]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[16,4]
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
* (ACC) Accuracy 80.851 %
* (F1S) F1 Score 79.901 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11095             1514             4174             5054
* (FN) False Negative or Incorrect Negative Prediction              961             2820               16             1375
* (FP) False Positive or Incorrect Positive Prediction             1235              212               49             3676
* (TN) True Negative or Correct Negative Prediction               13718            22463            22770            16904
* (TPR) True Positive Rate or Sensitivity, Recall               92.03 %          34.93 %          99.62 %          78.61 %
* (TNR) True Negative Rate or Specificity, Selectivity          91.74 %          99.07 %          99.79 %          82.14 %
* (PPV) Positive Predictive Value or Precision                  89.98 %          87.72 %          98.84 %          57.89 %
* (NPV) Negative Predictive Value                               93.45 %          88.85 %          99.93 %          92.48 %
* (FNR) False Negative Rate or Miss Rate                         7.97 %          65.07 %           0.38 %          21.39 %
* (FPR) False Positive Rate or Fall-Out                          8.26 %           0.93 %           0.21 %          17.86 %
* (FDR) False Discovery Rate                                    10.02 %          12.28 %           1.16 %          42.11 %
* (FOR) False Omission Rate                                      6.55 %          11.15 %           0.07 %           7.52 %
* (F1S) F1 Score                                                90.99 %          49.97 %          99.23 %          66.68 %
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
    0x3e8088f9, 0xbe42b2dc, 0x3f392009, 0xbf4ac568, 0x3eaabca6, 0x3e8b5783, 0x3d036956, 0x3f3c10be, 
    0x3f101486, 0xbfac4147, 0xbdaaa9cf, 0xbeea66ba, 0x3ee1cb9e, 0xbf5e29dc, 0x3ecec233, 0x3ec04897, 
    0x3eab4679, 0x3ee2b95f, 0x3f3277b7, 0xbfa23cfb, 0xbe5c61f6, 0xbf0075c4, 0x3ee48b84, 0xbf607235, 
    0x3effa1bc, 0x3f02ced9, 0x3ead203c, 0x3f0e7b87, 0x3f54e2b9, 0xbfb2fb71, 0x3dc1e099, 0xbf1b73c7, 
    0x3f0cb2b9, 0xbf5e13bb, 0x3efedbf0, 0x3e322820, 0x3ebea88d, 0x3f2898fe, 0x3f254f79, 0xbf8a0838, 
    0xbb74edc5, 0xbe3a40d7, 0x3f0f2218, 0xbf828cf1, 0x3ee3b7db, 0x3eae6ccf, 0x3ddc072e, 0x3f117182, 
    0x3f0d3cdb, 0xbf9e8930, 0x3ccc6dfe, 0xbe98bcfa, 0x3eb306de, 0xbf8106c1, 0x3f1af634, 0x3ec89a89, 
    0x3e257716, 0x3f2bf450, 0x3f4537cb, 0xbfb121d9, 0x3d5050e5, 0xbe8d3f6e, 0xbf09d0f9, 0xbb52d19a, 
    0x3eb11847, 0xbdd66d7a, 0xbea73c90, 0xbc4dd163, 0xbf197049, 0x3eda10ee, 0xbcadf008, 0x3c4a2c49, 
    0xbe83cfc7, 0x3e855de9, 0x3d89051f, 0xbe3e15a7, 0xbe810871, 0xbeb5fb5a, 0xbf4484f9, 0x3eee27e0, 
    0xbd6a9d18, 0x3e8a04c6, 0x3daffd39, 0x3ef6f9de, 0x3e63cb50, 0x3e1b17d6, 0xbe0fe91b, 0x3debb9e0, 
    0xbf5f1796, 0x3eaf45d8, 0x3e71d7da, 0x3e8284f3, 0xbd757f47, 0x3e8c1cbb, 0x3e6fccc8, 0xbcc1d160, 
    0xbde495e5, 0xbd260afd, 0xbf318656, 0x3f1b6188, 0x3e325c96, 0x3e7f3de8, 0xbe6418d5, 0x3dbd9398, 
    0x3b93928b, 0x3de9e28a, 0x3d3f6047, 0x3e8c2f3a, 0xbf5cbf93, 0x3ec3f6a7, 0xbeae8141, 0x3d92f875, 
    0xbed82260, 0x3d7611d0, 0x3ecf0f2f, 0x3e1ee624, 0x3d9541b9, 0x3ea83482, 0xbf11856e, 0x3f4ac364, 
    0xbe990c28, 0xbfacbbda, 0xbc5154c0, 0xbeb6c080, 0x3f1837a4, 0x3e191241, 0x3c16e108, 0x3e311e89, 
    0xbddf05f0, 0x3f25519f, 0xbf33b3da, 0xbfa23812, 0x3e169bd2, 0xbe8eefed, 0x3f29887f, 0x3d0b7628, 
    0xbe95fe9d, 0x3c307e83, 0x3dc02438, 0x3f22bd04, 0xbf30a9af, 0xbfb3d8e4, 0x3e64f417, 0xbda865b7, 
    0x3f35a6ac, 0x3e88e30a, 0xbe12c953, 0x3e93d253, 0x3e44d201, 0x3f04cca8, 0xbeec4be9, 0xbfa3fbca, 
    0x3c493960, 0xbe4e5ce8, 0x3f1c7393, 0x3df3d287, 0xbe8c0868, 0x3ed4c5fa, 0xbd2e6bca, 0x3f41b1c6, 
    0xbeeca808, 0xbf8d27e4, 0xbd5768b0, 0xbe4aa3b0, 0x3f1b7f14, 0x3d6fed9f, 0x3c9a62c5, 0x3e992762, 
    0x3da212ce, 0x3f493cbd, 0xbe9db6fa, 0xbf9cccdd, 0x3dd277d6, 0xbd881998, 0x3f0b9c9f, 0x3d9d5d14, 
    0x3d22e642, 0x3eca400d, 0x3e052850, 0x3ee1b8cc, 0x3f8295ce, 0x3f658d6d, 0x3f37c130, 0x3e8e0381, 
    0xbf98fea7, 0xbeee1381, 0x3eb38978, 0x3eb53791, 0x3f0f742b, 0xbe9c4fbe, 0x3f17e6e1, 0x3ee271ed, 
    0x3ed4776e, 0x3e675262, 0xbf8b345d, 0xbea5bf51, 0x3ed3abf2, 0x3e0e056f, 0x3f263cfa, 0xbe7b19a4, 
    0x3f5993d3, 0x3eac293b, 0x3d8d602b, 0xbe078568, 0xbf91f32e, 0xbf211ff3, 0x3ea36e54, 0x3d583a04, 
    0x3f30096c, 0xbe91348e, 0x3eec1cfd, 0xbc976b82, 0x3e7ba56b, 0x3dd13f2e, 0xbf8a45d9, 0xbf37763d, 
    0x3f105391, 0x3d069e7a, 0x3f088558, 0xbf0942b6, 0x3f5b9845, 0x3ed1e3ea, 0x3f13dbbf, 0x3df60942, 
    0xbf80c9d9, 0xbf299630, 0x3e68e325, 0x3d87cd8a, 0x3f05e26f, 0xbebf7a7c, 0x3f6e7041, 0x3f6bdd87, 
    0x3f4c8346, 0x3e97c0a6, 0xbf4c4983, 0xbe98a512, 0x3e322c15, 0x3ea958e9, 0x3ef4eac2, 0xbf1cb3b7, 
    0xbe97aeee, 0x3ef175e2, 0xbf2b246b, 0x3edc61c7, 0xbf866937, 0xbd02d3b6, 0x3fbd6b5f, 0x3f03b2b7, 
    0xbe98bb30, 0x3c46a0ac, 0xbf006b73, 0x3e4434a0, 0xbf440b09, 0x3ed52dd8, 0xbfb4bbd6, 0xbed89977, 
    0x3fa492d5, 0x3ee0bcd0, 0xbe945679, 0x3d19e71a, 0xbf0b892f, 0x3e3dafa3, 0xbf3c2aae, 0x3f00aad7, 
    0xbf86d5ce, 0xbdc4a115, 0x3fba849d, 0x3f272460, 0xbe94e0eb, 0xbe388966, 0xbea182ba, 0x3e80296e, 
    0xbf4a97f4, 0x3f0bb88d, 0xbfac3eb6, 0xbc6e0b29, 0x3fa40948, 0x3ec74ef3, 0xbede5279, 0x3cd265ba, 
    0xbf2985a9, 0x3e3d02ff, 0xbf2531ab, 0x3f19d09d, 0xbf95fad4, 0xbe8dca8c, 0x3fb8f767, 0x3f065467, 
    0xbeb4af04, 0x3e2763b4, 0xbefb77bc, 0x3e8c673c, 0xbf20047e, 0x3ee98c0b, 0xbfb03a04, 0xbec38dde, 
    0x3fad917f, 0x3ea7735e, 0xbd418508, 0x3c888e4b, 0xbf34df3c, 0xbe779117, 0x3d17c451, 0xbf8437fd, 
    0xbd5bac98, 0xbf1199c1, 0xbf921727, 0xbf14eba2, 0xbe3a4c68, 0x3e2c883a, 0xbf0d3c12, 0x3dca98ae, 
    0x3c149ab1, 0xbf1ed6f1, 0xbdf2e8b2, 0xbe719e7f, 0xbf3abc90, 0xbf4be48b, 0xbedece36, 0x3db5db6d, 
    0xbec05d12, 0x3e83c42a, 0x3ea8a0a6, 0xbf2dc0d6, 0xbe5dcf9d, 0xbefb5e0a, 0xbf8e7b03, 0xbee6caf1, 
    0xbe84ee34, 0xbe37f2c2, 0xbf0f8675, 0x3ee1b69e, 0xbdd62bef, 0xbed3160b, 0xbe0727b1, 0xbf0aa8b4, 
    0xbf6d4663, 0xbef4ec2f, 0xbe3f5361, 0xbd2aff55, 0xbf12a591, 0x3ea1cabb, 0x3dbb8e12, 0xbec9c3fe, 
    0xbf04e31a, 0xbee624d1, 0xbf51c8b8, 0xbf36ac19, 0xbe7d67d7, 0xbe8903b5, 0xbf765d67, 0x3d99615f, 
    0xbddd0e00, 0xbf749a1a, 0xbe962e6f, 0xbf05f681, 0xbf5411ea, 0xbf47c8fb, 0xbe8b05dc, 0xbe6426dc, 
    0x3e153db3, 0x3ea6cd69, 0xbe95d788, 0x3efd5f90, 0xbf6e16c2, 0xbe33dce0, 0x3f577afa, 0x3caeea50, 
    0xbf0448b9, 0x3ebebe76, 0xbe8038ba, 0x3f102808, 0xbe5b99b8, 0x3f24a531, 0xbf8a5c60, 0xbe00d770, 
    0x3f4b22c7, 0xbd11ba33, 0xbef348b8, 0x3e3147ec, 0xbe7c0b04, 0x3f4ce6eb, 0xbea046f6, 0x3f5deb19, 
    0xbf931694, 0xbd6c7d3e, 0x3f53f3c1, 0x3d1a3c4f, 0xbee96e1e, 0x3e8dd163, 0xbe5823dd, 0x3f67574a, 
    0xbf1a3445, 0x3f51e662, 0xbf86e823, 0xbe9ac8ce, 0x3f709d36, 0xbe84e599, 0xbef680f0, 0x3ed0736d, 
    0xbda700f0, 0x3f187c39, 0xbf3c7c1d, 0x3ee9273e, 0xbf83c8b7, 0xbe482843, 0x3f307432, 0xbe1cf9f8, 
    0xbe97c2a6, 0x3f1d08cd, 0xbd87478a, 0x3edea32c, 0xbf80cb28, 0x3ecc3e3d, 0xbfa9529c, 0xbec4ab15, 
    0x3f1c3edd, 0xbd9eb5a7, 0xbea01bf7, 0x3ebd43dd, 0xba1a9ed8, 0xbf992d1b, 0x3e0ec089, 0xbf295f05, 
    0xbe03009a, 0xbf09a6b1, 0xbe5c01b0, 0x3e33cea7, 0x3e9fcf53, 0x3f35cc58, 0x3deae8ee, 0xbf86bbe7, 
    0x3eaf249d, 0xbf3a1da6, 0xbe3afe7f, 0xbeea2837, 0xbe2ab540, 0x3e561943, 0x3f1f2c5a, 0x3f558d31, 
    0x3d9a30ba, 0xbf90a6e0, 0x3e22daa9, 0xbf218c35, 0x3c92c507, 0xbf2de19b, 0xbe066fe4, 0x3e22f87e, 
    0x3f24de48, 0x3f822c43, 0x3e7d2e04, 0xbf724bc0, 0x3e7705a7, 0xbf11286e, 0xbe02421d, 0xbf2a6245, 
    0xbe2677c2, 0x3d8505c4, 0x3f3f7e5d, 0x3f39fd01, 0x3c820b43, 0xbf6c99ea, 0x3e192516, 0xbf4bda3a, 
    0x3dfd047b, 0xbf060664, 0xbe98524e, 0x3ea4e1ad, 0x3f38d1f7, 0x3f62cd37, 0xbda66c54, 0xbf4058e9, 
    0x3ea74b6d, 0xbf80097a, 0xbbff5621, 0xbf288568, 0xbe428184, 0x3e9a7a92, 0x3f2b6de8, 0x3f68df5c, 
    0xbed19f98, 0xbed625f7, 0x3e127b88, 0xbf7e7ea2, 0x3f7f46dc, 0x3f1cee33, 0xbe87ea47, 0x3ed86e08, 
    0x3eddf4d7, 0xbf284c3f, 0xbd6d996d, 0xbf063dd8, 0x3f0749ae, 0xbf8fa150, 0x3f8a05d8, 0x3f3fbf36, 
    0xbda1055a, 0x3e9473de, 0x3f028cee, 0xbf2c80a9, 0xbead96d7, 0xbed2440c, 0x3ef5fa22, 0xbf912421, 
    0x3f8b2153, 0x3f0fdfd5, 0xbeec8de7, 0x3e3e08f2, 0x3ea7dd97, 0xbf3c9e36, 0xbe9490ee, 0xbe8ee81d, 
    0x3f3e8fc0, 0xbf8b2f07, 0x3f4e897c, 0x3ebcefa7, 0xbddb075f, 0x3f043d24, 0x3f1752de, 0xbf329d2d, 
    0x3b5a7e84, 0xbe5dc4a3, 0x3e778c58, 0xbf453506, 0x3f265b2f, 0x3f2b9a97, 0xbee3e50f, 0x3eef3619, 
    0x3ea9da53, 0xbf2fe292, 0xbebd80f3, 0xbebdea5d, 0x3e36acb1, 0xbfab01e4, 0x3f1b4925, 0x3f40f02a, 
    0xbeb685f3, 0x3e240691, 0x3f0b1360, 0xbf4cadd2, 0xbf5449cb, 0x3e014dd0, 0x3f50153f, 0x3f3ca097, 
    0x3f61d5ea, 0xbe4c6aa0, 0xbf15746f, 0xbef77dad, 0x3e9651c5, 0x3e52fa7c, 0xbf0f13c7, 0xbe2d83b5, 
    0x3f4109bb, 0x3f179107, 0x3f5282b9, 0xbec2338e, 0xbefa7e66, 0xbf11fea8, 0x3e9e7304, 0x3d8ac388, 
    0xbf44bc11, 0xbea48c97, 0x3f397756, 0x3eea3b92, 0x3f360e95, 0xbee0c089, 0xbedc6ce5, 0xbf0ff9e7, 
    0x3e628f2a, 0x3e115314, 0xbf391a41, 0xbe577548, 0x3f8ea619, 0x3f1bd37a, 0x3f29ddd5, 0xbda1e5a5, 
    0xbf19ba71, 0xbe951088, 0x3e896288, 0x3cfba386, 0xbec6d72d, 0xbe43879f, 0x3f899728, 0x3edd7981, 
    0x3f4b8ecc, 0xbe7fc111, 0xbf0d2704, 0xbf0047df, 0x3e445828, 0x3c1bbace, 0xbf4cbe69, 0xbe11569f, 
    0x3f99bb57, 0x3f4b9cd8, 0x3f552eb6, 0x3d99dc1e, 0xbf36294a, 0xbe8fb021, 0x3e80d062, 0x3e7dd440, 
    0x3fc4846d, 0xbdbd54ab, 0xbf74c4cc, 0x3e9f004c, 0xbf2542a4, 0xbe896eff, 0x3e59bb3b, 0x3ed63f04, 
    0xbef6da9c, 0xbdd3c3ea, 0x3fb61a61, 0xbe64cfb7, 0xbf4964c1, 0x3ea6d4ea, 0xbf214270, 0xbe4999a3, 
    0x3ebd8a2e, 0x3e787e05, 0xbe97f34f, 0xbb708c8e, 0x3f9163ff, 0xbe65463f, 0xbf06932d, 0x3ee3f8cb, 
    0xbefecbd8, 0xbe66b7de, 0x3e8cd324, 0x3e45a541, 0xbecbb3e7, 0x3dc3588b, 0x3fa2c251, 0xbafc25ee, 
    0xbf6760ce, 0xbd749ef1, 0xbf437148, 0xbe1f08b3, 0x3e6b4756, 0x3d4d42ae, 0xbdfc6da5, 0x3d9a23ab, 
    0x3fb5fed8, 0x3d973e6d, 0xbf6f82f2, 0x3df877b3, 0xbf06c874, 0xbe61d328, 0x3e36ee56, 0x3eaf577d, 
    0xbeeefba5, 0xbe0ed532, 0x3fceb662, 0xbe81c5b2, 0xbf933a18, 0x3de3a3aa, 0xbf137055, 0xbec359d6, 
    0x3eb6f366, 0x3f0d7bf2, 0xbe8d4180, 0x3e22f002, 0xbf955d80, 0x3d805ac8, 0xbee31b94, 0x3f029881, 
    0x3df96043, 0x3f084425, 0x3f1390ab, 0xbb96ae0c, 0xbf347872, 0x3dacacb5, 0xbf951f08, 0x3dafd9af, 
    0xbedb211c, 0x3f5167e5, 0x3e272f01, 0x3de53206, 0x3e9b4985, 0xbe342aa0, 0xbf0d4685, 0x3e63cde9, 
    0xbf500ef4, 0x3de43391, 0xbf14f98b, 0x3f61c858, 0x3e5c0eb1, 0x3e9798e2, 0x3f043e0f, 0x3e012325, 
    0xbf0b5c18, 0xbd82b809, 0xbf7f642d, 0x3daf396a, 0xbed11912, 0x3f47a6be, 0x3e5f0fb6, 0x3e4ae933, 
    0x3f3f21e6, 0x3e2ef583, 0xbebbf2cf, 0x3d8bbbfd, 0xbf5af949, 0xbdaca18e, 0xbee71a26, 0x3f41523c, 
    0x3ea1e5ac, 0x3ee769ff, 0x3f1cb76d, 0x3d1996f6, 0xbf479e37, 0x3e654966, 0xbfa47389, 0xbd886e66, 
    0xbe0675b6, 0x3f7e6bf6, 0x3f0d8ee3, 0x3e7cecdf, 0x3f5bd9d7, 0x3ca07d63, 0xbf34e07b, 0xbd80bffe, 
    0x3f0b014c, 0x3e401835, 0xbf6c7760, 0x3f406363, 0xbe1595bf, 0x3f3a4b00, 0x3ebbe0f9, 0x3ec3317b, 
    0xbf761b8a, 0xbeae2e36, 0x3f1928a9, 0xbe38583b, 0xbf19ac44, 0x3f25ecf5, 0xbea52332, 0x3f2433ab, 
    0x3f0f9557, 0x3ef2663f, 0xbf73c084, 0xbefc3cc0, 0x3e4f3a39, 0xbcef1bcb, 0xbf3a76e7, 0x3f364d78, 
    0x3ca7d34c, 0x3efc153f, 0x3ebb3af1, 0x3eff4f72, 0xbf51a363, 0xbf0c0713, 0x3efa8006, 0xbe28028f, 
    0xbf87da89, 0x3f3c9fc5, 0x3d6762bb, 0x3f41e969, 0x3e5a532f, 0x3edb2f1e, 0xbf8e58f6, 0xbeb1c4b3, 
    0x3f21dc8b, 0xbecfddc3, 0xbf87523b, 0x3f4a770e, 0x3cd8f640, 0x3f499c9e, 0x3e996936, 0x3ec993df, 
    0xbf896bd5, 0xbe47e245, 0x3f3fe633, 0xbe5f3b81, 0xbfad8419, 0x3ef81942, 0xbdddaaf0, 0x3f2c9afd, 
    0x3ed589b6, 0x3ec6b7dd, 0xbf6cd377, 0xbe622573
};

static const uint32_t _K19[] = {
    0x3f5e0c02, 0xbee08376, 0xbf9f8756, 0x3f51a985, 0xbf894065, 0xbf57d5be, 0xbf9896dd, 0xbfdda8cc, 
    0x3f8857da, 0x3f9dd90a, 0xbfa2bf3a, 0x3f9620ad, 0xbedec97b
};

static const uint32_t _K22[] = {
    0x3bbbc1cb, 0x3b52f717, 0x3be33a2e, 0xbb95e0f3, 0xbc61b94f, 0xbbaaf6a9, 0xbb53ce0e, 0x3b9fdc6e, 
    0x3c33ca8b, 0xba77c9fc, 0xbb30832a, 0xbaec6c1b, 0x3b8df557, 0x3c3b7b15, 0x39972950, 0x3c545f25, 
    0xbb25c211, 0xbc5cfb49, 0xbc280bc8, 0xbc59aeca, 0x3bb61bd2, 0x3c53cbcf, 0x3bbb461d, 0xbabca082, 
    0x38121314, 0xb93a429c, 0x3c1280a6, 0x3a7db01f, 0x3c2fc379, 0xbb1862aa, 0xbc6ecce8, 0xbc0796c5, 
    0xbc178175, 0x3b9cc862, 0x3c490a27, 0xba17715f, 0xbb335a36, 0xbaa49ff9, 0x3b5f11f6, 0x3b118d38, 
    0xba1c8adc, 0x3c9caeda, 0xbc9456e4, 0x3c929480, 0x3c2ebb92, 0x3a20057b, 0x3c943217, 0x3c1b4322, 
    0xbac4f7d1, 0xbca4560c, 0x3c3fdc8f, 0xbc2b9200, 0x3c384788, 0xbb9f21a3, 0x3c35558c, 0xbbb1ce75, 
    0x3bff9a77, 0x3ac00782, 0xbc0918a0, 0x3b843392, 0x3c155687, 0x3b6e476f, 0xbc1b4937, 0x3bb97eb9, 
    0x3a117516, 0x3c5190b9, 0x3b2e9a73, 0x3c4b39fa, 0xbb64cb79, 0x3c482d11, 0xbb87d56a, 0xbb3711a8, 
    0xbab11551, 0x3c3d95bb, 0x3bc74f0f, 0xbc7c7ac8, 0x3ca8b497, 0xbbb971c8, 0x3c330b16, 0xbb62328c, 
    0x3b5b4d91, 0x3b22db36, 0x38ef43e4, 0xbbd63297, 0xbbf09df5, 0xb9b74adf, 0x3c859215, 0x3bf98edd, 
    0xbc6cf353, 0x3bdc6f42, 0xbc5f1b30, 0x3b6b25bf, 0x3b0a408a, 0x3abdf927, 0xbc069e4e, 0x3b88f205, 
    0x3ba93ac9, 0x3bba7b13, 0x3af9b709, 0x3bfc1d2b, 0xbbd1e5c2, 0xbb95c6c4, 0xbb121782, 0xbbcca76c, 
    0x3c61061d, 0xbbea31ad, 0xbbdaf587, 0x3c425fd1, 0x39fbda56, 0xbc9f6c02, 0xba5b9fc3, 0xbbd2add8, 
    0x3c415dfc, 0x3bfab66c, 0xbc842e08, 0x3b1e5e6c, 0xbc6ca497, 0xba35c6c7, 0xbb5f4cae, 0xbc107472, 
    0x3aeebca3, 0x3d27254b, 0x3a953070, 0x3c787539, 0xbc740693, 0xbc305ac1, 0x3baded73, 0xbc6191ec, 
    0x3ce570a9, 0x3c43628d, 0x3c0a3260, 0xbb048afc, 0xbc0a3584, 0xba844198, 0x3cf2e23c, 0x3c28788d, 
    0x3c1410e9, 0xbc061f78, 0xbb86fc8e, 0xbc0f36c2, 0x3b487304, 0x3b110a0a, 0x3c35302d, 0x3c578da7, 
    0xbbb4573a, 0x3be34d51, 0x3c385a26, 0x3c8738f0, 0xbcb682a4, 0xbb567fe1, 0xbb80a841, 0x3bb904a4, 
    0x3d7813c6, 0xbd685e5b, 0x3d535945, 0xbcf9b37b, 0xbc9166c4, 0x3b23e668, 0x3c047695, 0xbbee97eb, 
    0xbb712f67, 0xba5983dd, 0x3b7dc3a7, 0xbb1bcd51, 0xbc64dffd, 0x3b903d9e, 0x3b8f0151, 0x3c243c6f, 
    0x3c0a71b4, 0xbcb6cd19, 0x3c382329, 0x3c1a66dc, 0xbbc2f5c0, 0xbb815e54, 0xbb3deae5, 0xbbf1429f, 
    0x39d944fe, 0xbc545a1e, 0x3c2db99a, 0x3b9ad023, 0x3c097bc2, 0x3c1e740d, 0xbc781278, 0x3c058f8a, 
    0xbabe5bfe, 0xba8cf944, 0x3b4ebda1, 0xbc85b13a, 0x3c455fb6, 0xbbecebfe, 0xbcaec013, 0x3baad0d0, 
    0x3c9114c1, 0x3be5f9d9, 0x3cc5204c, 0xbb27690f, 0x3b0e273a, 0xbb32e0a5, 0xbc57cc80, 0xbb74e5cb, 
    0x3c5c7a0a, 0xbb5f759b, 0xbae8f844, 0x3b3d8251, 0xbc73ab76, 0x399aa920, 0x3b33d34b, 0x3c36c9a1, 
    0xba015190, 0x3ad32826, 0x3b4abcf2, 0xbc9da4b4, 0x3c2fa342, 0x3c5cc7f9, 0x3bfad60f, 0xbad4d40a, 
    0x3b64c6cd, 0xbbf6a76e, 0xbbbc1d55, 0x3b8132c3, 0x3bbc3e25, 0x3ca553b6, 0xbaa13a34, 0x3a5a9ff3, 
    0x3b89a09c, 0xbc270c12, 0xbc465338, 0xbb3f9b19, 0xbc340b1f, 0x3c1b4b42, 0x3c1d02b5, 0xbbde8bec, 
    0x3b7002d6, 0x3b7986cf, 0x3a16b975, 0x3a8ced95, 0x3bba9113, 0x3b0e9933, 0x3c048a88, 0xbbd3a255, 
    0x3ae813eb, 0x3c1e2228, 0x3b856c5a, 0xbc3a4d31, 0x3c7ad25b, 0xbbff1085, 0x3af291e3, 0xba9489d8, 
    0xbba5eb31, 0x3c1de3d4, 0xbb91662b, 0x3c8c32d6, 0x3bdc4e20, 0x3b4f7e31, 0x3cd4855c, 0xbaf64218, 
    0xbc9e7d62, 0x3be3f127, 0xba683a82, 0xba84686d, 0x3ae21feb, 0x3b4141ad, 0x3b8e79d8, 0x3b005580, 
    0x3c88ba31, 0xbbc0287e, 0x3b98fbcb, 0x3c7e3228, 0xbb4e5c9b, 0xbc0e620f, 0x3c74124f, 0xbc08fb7f, 
    0x3af6ab8c, 0x3c2d9cc5, 0xbba4dcb9, 0x3c083e07, 0x39c922fe, 0x3c5ef7a1, 0xbc883ecf, 0xbc1d8d04, 
    0x3b36c2ba, 0x3b2a33b1, 0xbb04229d, 0x3bb6a468, 0x3bd24315, 0x3c374b86, 0xbb092ac6, 0x3b4f068d, 
    0xbac5c447, 0xbc43636f, 0x3cc363ce, 0x3bd97a83, 0x3a854476, 0xb91a5682, 0x39977a22, 0xbc2b316f, 
    0x3ba6fe49, 0x3c033f4d, 0x3bf20b5d, 0x3ac79a9d, 0x3a88c948, 0xbbaf1b44, 0x3cb0380f, 0x3c85bc0b, 
    0xbce2ec52, 0x3c5a3fb6, 0xbc6714c2, 0xbc1a90f1, 0xbbbd291f, 0x3caea125, 0x3b80cf9c, 0x3d0011ac, 
    0xbbb5d105, 0x3abc620c, 0x3a9f7cf5, 0xbb8e6437, 0x3bb85447, 0x3b849a6f, 0x3bdbf7ac, 0x3aaa95ac, 
    0xbb312a35, 0xbb2f0d4a, 0x398954e9, 0x3b23137c, 0xbac5ab2d, 0xbbc65cc8, 0xbad35341, 0x3ae2e0b3, 
    0x3a4c0e4e, 0x3b84dda8, 0xba93c136, 0x3b727b24, 0x3b23328b, 0xbb3d148d, 0xbaa77747, 0x3a940f91, 
    0x3920c0bc, 0xba8f4f9f, 0xbbfb2774, 0x3b4725a8, 0x3a7432ff, 0xbb4d8869, 0x3bb67439, 0x3bb42ea8, 
    0x3b8ac0bf, 0x3b50250c, 0xbb7217dd, 0xbb9c8580, 0x3a58260a, 0x3ad83946, 0xba9af09d, 0xba53e0f7, 
    0xbab88540, 0xbba9ebad, 0xbb72eb6d, 0xbb35c05c, 0x3ab40bef, 0xbb8d93b6, 0xbc9a3f9d, 0xbb816551, 
    0x3aee004a, 0xba8bbfa0, 0x3ad5bdcd, 0x3c33642f, 0x3b2234bc, 0x3b9683f4, 0xbc673e87, 0xbb6b8458, 
    0x3bc55aba, 0x3b6b1bba, 0x3c8becc3, 0xbcbbb19f, 0xbbf40a10, 0xbc06cc95, 0x3c440a97, 0x3bce674a, 
    0x3ce20f62, 0x3c9e5c0d, 0xba99e57f, 0xbb1f7443, 0x3a177a9e, 0xbc05d983, 0xbbfa341e, 0xbc7695e3, 
    0xbd248bd6, 0x3c96bd49, 0x3c2248fa, 0xbc08e3b0, 0x3c42b376, 0x3c348d55, 0xbc102734, 0xbb88898a, 
    0xbc446c1e, 0xbb02662f, 0xbc0f9ef0, 0x3ac84e41, 0x3b85d2aa, 0xbc724d5c, 0xbbdc12b6, 0x3b5294b3, 
    0x3a83a90e, 0x3b675a01, 0x3bbbb549, 0xbc81c363, 0x3c22b2ab, 0xbb6f747a, 0xbc57104f, 0xbb8179b9, 
    0x3bc98112, 0xb7b1c396, 0xbc935ab9, 0xba91c55b, 0x398420ba, 0xbbeab352, 0x3c0368b5, 0x3bce02e6, 
    0xbcc1e372, 0x3bccd21b, 0xbb3c5289, 0xbc8849e2, 0x3b1a0814, 0x3c4f2d97, 0x3b945e25, 0xbc534aa4, 
    0xbb94cd19, 0xbbc21f8e, 0xba98a713, 0x3c3da8d3, 0x3b95ceff, 0xbc5e607d, 0x3a0521be, 0xbaa1b17d, 
    0x3b17bbab, 0xbc8857c2, 0xbb58f9f2, 0x3a79bba8, 0x3b228cbe, 0xbc2d01fe, 0x3bb808bb, 0x3c0fa702, 
    0xbc17140a, 0xb8ce6891, 0xbc3b546b, 0x39ad634c, 0x3b54fe87, 0xb9f573fd, 0xbc66b311, 0x38992dee, 
    0xbb8267ce, 0x3be8718e, 0xbbd2c4a0, 0x3b3062e5, 0x3b8065ec, 0xbbcf1df3, 0x38a4ff7c, 0xbc2d1662, 
    0x3b087746, 0x3abf170e, 0x3b5d02fb, 0xbc9aa7e1, 0xbaa73b94, 0xbb42d485, 0x3b4d8491, 0xbc1d6e4d, 
    0x3c17871d, 0x3b85f1dc, 0xbbd03075, 0xbb09b261, 0x3d00f69e, 0xbc573cd6, 0xbcc46d5f, 0x3c9ac8d7, 
    0x3b90c399, 0xba79706e, 0xbb1f01e6, 0xbbed7652, 0x3ba30ea0, 0xbbc9c741, 0x3c85128c, 0xbd114c65, 
    0xbb57684a, 0x3ca44ba6, 0xbba8705b, 0xbc397ca2, 0x3bcf6b06, 0xbb2133dd, 0x3c3bd58e, 0xbc3cff5b, 
    0x3b451ea8, 0x3c2df28f, 0xbc01a376, 0x3ae47c22, 0xbc8051a2, 0xbc76d53c, 0x3ce130c5, 0x39e00626, 
    0xbcaa97e4, 0x3ba3f2e0, 0xbbbccdee, 0x3c295e94, 0xbb86947b, 0xbb6b07e8, 0x3c0fc858, 0xbbc99d4a, 
    0x3b351dda, 0xbc61bbef, 0xbc1bfa7e, 0x3bca9cf4, 0xbc1583b8, 0xbbc7d70d, 0xb9e6712b, 0x3b9da70c, 
    0x3b712c1c, 0x3b3c1cc9, 0xbc4cae57, 0x3ba7e12b, 0x3b4ec989, 0xbb936faa, 0x3b952eb9, 0x3b8421c3, 
    0x3bdcf2a1, 0xb6ddd14b, 0xbbbc7df6, 0xbcc0b3d8, 0x3bb72330, 0x3cb93aaa, 0xba727ea8, 0xbc8d2961, 
    0xba3a7cf0, 0xbb707d88, 0xbc41acb1, 0x3c4b4a90, 0x3c6ee021, 0x3c22afe6, 0x3a8dbaab, 0xbc3f1fa4, 
    0xbb830c97, 0x3b93e594, 0x3a36ef64, 0xbb13ae6e, 0xbc917472, 0xba8cc743, 0x3b723c1e, 0x3918ea51, 
    0x3c18b77d, 0x3bdd2e86, 0xbbd54811, 0xbb9a909b, 0xbc2e2939, 0x3cc042cd, 0x3c159ec1, 0xbc0d5349, 
    0x3ae07526, 0xbb1e70ac, 0xbc88f29c, 0x3bce3f10, 0xbb958dca, 0xbb9671be, 0xbc4f5156, 0xbc99a150, 
    0x3b4c268b, 0x3968a6db, 0xba88bd13, 0x3c1a97a1, 0x3c07091a, 0x3c8191a8, 0x3c3c07bf, 0xbc3a4740, 
    0xbbdf9ccf, 0x3c18dca7, 0xbb3bfde0, 0xbb86a3cf, 0xbc613075, 0xba49b171, 0xbbeebc54, 0x3cac5dc6, 
    0x3b89cad7, 0xbc3d67b5, 0x3c795c5f, 0xbb532004, 0xbc98daec, 0x3c0f706f, 0xbc1b8dc5, 0xba8e1d23, 
    0xbc83e1e8, 0xbaf0abb0, 0xbbb5ec64, 0xbc4de392, 0x3c95fa19, 0xbd16dea2, 0xbbacb89c, 0xbc22da21, 
    0xbcb2d777, 0x3a9c67bb, 0x3d071829, 0xbcdbe327, 0xbb5df451, 0xbcb0a2a4, 0xbc03384f, 0x3bbd2a15, 
    0x3b9360a9, 0xbcbe6ae0, 0xbbb964b4, 0x3cadff99, 0xba4c1292, 0x3c800900, 0x3c1486f8, 0xbc1c5d44, 
    0xbc2fb3f6, 0x39a68544, 0xbc8902bb, 0x3c0fc9ae, 0x3beeb93d, 0xbc2822b9, 0x3b3f181f, 0xbd0984a7, 
    0xbae7dfea, 0xbc4b06fd, 0xbc57068a, 0x3b16d8bc, 0x3cdbaba0, 0xbcff7f89, 0x3bddde16, 0xbc94eeda
};

static const uint32_t _K25[] = {
    0x400fec8a, 0xc081947d, 0x3fd40dd7, 0xbd887b20, 0x3fe99df1, 0xc04aec21, 0xbff36f52, 0x404834a4, 
    0xbf983252, 0x401d887e, 0xc0104a16, 0x3fb4b098, 0xbe35c94c, 0xc0688c16, 0x400529fc, 0xbdd13e2a
};

static const uint32_t _K29[] = {
    0x3ecb4031, 0xbe77ccaa, 0x3ecd0492, 0xbea7154c, 0xbf01a3b0, 0xbccc0655, 0x3f597a77, 0x3f082de0, 
    0x3da7da8a, 0x3f5f2d88, 0xbf4dec64, 0x3e12b0af, 0x3fbc6433, 0x3c2a915d, 0x3f86611a, 0x3feede87, 
    0x3e61ce3c, 0xbdbc31ac, 0x3e664b05, 0x3eed759d, 0xbf1f71d5, 0xbf2ca451, 0x3f064deb, 0xbe9ff396, 
    0x3eca7112, 0x3f65d8e2, 0xbf03af66, 0xbe8d9567, 0x3f1dd8f6, 0x3ea24228, 0x3de40645, 0x3f0341cd, 
    0x3e795d27, 0xbe53caba, 0xbf14a929, 0xbf163c43, 0xbf350a51, 0x3f174b8c, 0x3ec281c5, 0xbd90fe40, 
    0xbe19658f, 0x3ea554c5, 0xbec5b543, 0xbeb1275f, 0x3f4cfe5d, 0x3ead3dbd, 0x3e8e69ca, 0x3d191365, 
    0xbe430f73, 0xbd6d8c5f, 0x3e8961e8, 0x3e2f7c13, 0x3ba83dd0, 0x3f56d0a5, 0x3e5dd3b9, 0xbdc07390, 
    0x3ee75f65, 0x3f0c778a, 0x3f0118f2, 0x3ec8e9b8, 0xbe927a06, 0x3feda05c, 0xbdb39589, 0x3ee0c5a8, 
    0xbf38552e, 0xbe2bb928, 0xbe7e1cac, 0x3dbb511d, 0xbf4ae606, 0x3f762e17, 0xbd8b9c0c, 0xbf683e6b, 
    0x3f89936f, 0x3f42b0f5, 0x3f103d2f, 0x3c038a86, 0xbe18da8b, 0x40064f96, 0x3ec7c535, 0x3f084d8f, 
    0xbee49976, 0x3ecd54ce, 0xbef53ea2, 0x3edfaf10, 0xbf2d85e3, 0x3fbde6d0, 0xbdfb51e4, 0xbf8c78e0, 
    0x3f5076c2, 0x3f0ef059, 0x3ea638fb, 0x3ee4c2b1, 0xbf1f813b, 0x400a854b, 0x3d5d7dfc, 0x3d673b17, 
    0x3f2eeff9, 0x3f3d1397, 0xbeca0f7e, 0x3e8d419d, 0x3d5658f3, 0x3f5dd0f6, 0xbf1145bd, 0xbee8eb73, 
    0xbe5e1179, 0xbeb031fe, 0x3e30a351, 0x3d8f0d51, 0xbefde13f, 0xbacacbc0, 0xbf2697e9, 0xbf607368, 
    0x3f39d63e, 0x3f81c260, 0x3ccd4269, 0x3f69aeba, 0x3d5ce476, 0x3f202ce1, 0xbbd623cf, 0xbf14095a, 
    0xbef34476, 0xbf27b58e, 0x3dd0c3a4, 0x3e8f6038, 0xbd19b58a, 0xbc9d5cf8, 0xbea8fced, 0x3f0f020c, 
    0x3f47f762, 0x3f97bced, 0xbe6d1cf8, 0x3f1d49b0, 0x3d0ffa14, 0xbe92a2a2, 0xbd01465e, 0xbf31fcc6, 
    0xbe864732, 0xbf595870, 0x3e7c359f, 0x3f1fe974, 0xbd108d9f, 0xbe151793, 0xbf861c2f, 0xbe8fdee3, 
    0xbe291bf0, 0xbde587fc, 0x3e0cbd29, 0x3e4bb178, 0x3de2b6ec, 0x3f3491e2, 0x3f1903b6, 0x3b7081af, 
    0x3f00a50b, 0x3f13a8b4, 0x3e9047c5, 0x3e03b503, 0xbe93e778, 0x3fbd91fe, 0x3c5a7605, 0x3f329b23, 
    0xbf30403b, 0xbe3f38f4, 0xbf0a255a, 0xbf82c998, 0xbf3325f8, 0x3ed72c4e, 0x3f5b1284, 0xbc0b394e, 
    0x3f6693b9, 0xbcb48cb9, 0x3f0b664e, 0x3d9b4b6f, 0x3e5b7d72, 0x3ffbcbb2, 0x3ef22527, 0x3e9b2dfc, 
    0xbe83f931, 0x3e813046, 0xbda7cd02, 0x3e90c25c, 0xbf0f5d29, 0x3feb2f22, 0x3f47d62f, 0xbf2a58e1, 
    0x3f3ee5e0, 0x3f145b7e, 0xbce7c95e, 0xbe01c592, 0xbf29bf6c, 0x3fe8b103, 0x3e91a124, 0x3e05f475, 
    0x3ee05f30, 0x3e86d2e3, 0xbec1e061, 0x3f0ec6a6, 0xbeb26187, 0x3fb7ba4d, 0x3ed7f81d, 0xbe6dd69c, 
    0x3e7e69c6, 0x3f1b0e2b, 0x3f653ba6, 0x3eb5e51f, 0xbe53f576, 0x3fc56fd8, 0xbf0ae82f, 0xbd976d50, 
    0x3e6ba773, 0x3f131c19, 0xbf0bd46c, 0x3e132f00, 0xbf849a96, 0x3f42ea4e, 0x3f2204de, 0xbf6663f0, 
    0x3f2ec54f, 0x3d564503, 0x3f781d9e, 0x3eb3a061, 0xbe8b6621, 0x3fcaea5a, 0xbeae916d, 0x3ec63cad, 
    0x3f056964, 0x3f571a14, 0xbf1f7905, 0x3eab7113, 0xbf3bee94, 0x3f84d7ce, 0x3f4dd472, 0xbf8b0ea5, 
    0x3ecf8bc9, 0x3e884f0c, 0x3f2543e0, 0x3f0dc494, 0xbf226d4e, 0x3fa47f21, 0xbf00b865, 0x3d56d1d4, 
    0xbf455d6c, 0x3e8e5fa3, 0xbf54a610, 0xbdd45490, 0xbf1f00f4, 0xbfcd8ab3, 0xbfa99bed, 0xbf2934dc, 
    0x3e990841, 0x3f1ff618, 0x3fa6cc25, 0xbf9cf68f, 0xbf06db84, 0xbf56302d, 0xbf494ce5, 0xbf44e736, 
    0x3f4708bf, 0x3f5c5539, 0xbf1a56a4, 0xbf2c3361, 0xbf649e49, 0xbe16df42, 0xbfd04839, 0xbeb864ac, 
    0xbdafe0c5, 0x3f25a80b, 0x3f3f257f, 0x3e8f8702, 0xbed43357, 0xbf55b5f4, 0xbf26e861, 0xbf94ae48, 
    0x3f2957a5, 0xbfad77d0, 0x3f86d0b8, 0xbd2764f9, 0x3f8e5ab9, 0x3ed0524f, 0xbf549536, 0x3f8decda, 
    0x3ed66955, 0x3eba3129, 0x3ed9fd3f, 0xbe293814, 0x3be3c6a3, 0xbf472372, 0x3eac17c7, 0x3f8424c6, 
    0x3e90d06a, 0x3f63f9e1, 0x3ed2a68e, 0xbe981078, 0x3887dae2, 0x3fd71637, 0x3f243ddc, 0x3e0d5e53, 
    0x3ee2561b, 0xbf2f082d, 0xbe30d169, 0xbc855f13, 0x3f9233e0, 0xbeb58ac1, 0x3f44fcf5, 0x3f1712d2, 
    0x3d990b14, 0x3f0d867e, 0x3efe93c1, 0x3f985412, 0x3f5f6017, 0x3f539dc9, 0xbeac04f4, 0x3cee50dd, 
    0x3dff7e7c, 0xbce2ec32, 0xbe3be89a, 0x3e88aade, 0xbea95a3b, 0x3c50450b, 0x3e1e39e2, 0xbeaf412e, 
    0xbf0740c7, 0x3f646963, 0xbf67d19c, 0xbfea31b8, 0x3f0f2902, 0x3ed0b553, 0xbe3f14e9, 0x3f2939aa, 
    0xbe9dc5fe, 0xbf4fdbad, 0xbf0b945b, 0xbe74b73e, 0x3e2eedd9, 0x3ecc6a4e, 0x3e0e88a0, 0xbeb1c5c2, 
    0xbe441e54, 0xbe30da9a, 0x3e9c35df, 0x3c6d370b, 0x3d9de866, 0xbe8e3ff4, 0xbe94deab, 0xbd4af92e, 
    0xbed7c648, 0xbf03094d, 0xbf2f5e9f, 0x3f232773, 0xbe864cd4, 0xbf5ca630, 0xbd82a1c6, 0x3e283a6b, 
    0x3e8ab347, 0x3dbb4422, 0x3f4a38ed, 0x3f131e4d, 0xbe970acb, 0xbf7d1846, 0xbece3143, 0xbf378666, 
    0xbec51f0b, 0xbf1ef618, 0xbf220d8a, 0x3f36f8e4, 0x3ea05ad7, 0xbfa20155, 0x3f46274b, 0x3f70d49e, 
    0xbc1c6545, 0x3c36ea48, 0x3f2dba69, 0x3f8f29c2, 0xbec0f7ba, 0xbf38884f, 0xbf88846c, 0xbf240443, 
    0x3d774e83, 0xbf0b1e70, 0xbd6d2b01, 0x3f261cac, 0xbe69599e, 0xbf6d3c9a, 0x3ea8d336, 0x3ea1e606, 
    0x3ecd313d, 0x3f884c34, 0xbf2ae3a5, 0x3f952500, 0x3d89f9f3, 0x3fb7b414, 0xbd155f39, 0xbea5c1e8, 
    0xbe6a9b26, 0xbe9e7f0d, 0x3ed36f23, 0x3edd3c2a, 0xbeb560e2, 0x3ecc1a0a, 0xbf2b53bd, 0xbf3f63fc, 
    0x3e89e710, 0x3fa50ca8, 0xbebe13a6, 0x3f55a78e, 0x3e63c3c9, 0x3f045dff, 0x3ed87cfb, 0xbefb9e4a, 
    0xbf0f45cd, 0xbefd1bb9, 0x3ea0469c, 0x3f1afd0d, 0x3ed16994, 0x3dc7d7d8, 0xbe918993, 0xbc70c33a, 
    0x3f3989c5, 0x3f86afa2, 0xbf402251, 0x3e6a77c9, 0xbe076c35, 0xbefc07c8, 0x3dc70cb5, 0xbf75ee29, 
    0xbeeba8d7, 0xbf372609, 0x3f4675c7, 0x3f1a55da, 0x3deb1547, 0x3e134051, 0xbf892f9c, 0xbf54dad7, 
    0x3f900be2, 0xbe7e7a2b, 0x3ec8fb12, 0xbe8e6418, 0x3e835f0a, 0x3f82c2fd, 0x3ec5df0a, 0xbd014c49, 
    0x3e35717c, 0x3ef38bb4, 0xbe3dee34, 0x3e3e5cd2, 0xbf18a557, 0x3eed79ce, 0xbed9d299, 0x3ef5570c, 
    0x3f504a53, 0xbf00fce6, 0xbe1b80ac, 0xbf98392d, 0xbbdc5c1c, 0xbe76762a, 0x3f1b55c1, 0x3c340fa5, 
    0x3edfb60b, 0xbe963b9b, 0x3eeab31e, 0xbeec47e1, 0x3f1c6faa, 0x3f27687b, 0x3f2c792f, 0x3f6f3d9d, 
    0x3d0a9a01, 0x3ee3dfc2, 0xbf29d8a2, 0xbee771fe, 0xbf38e829, 0x3e8dff2b, 0x3f74e416, 0xbe2422c8, 
    0x3f2cf9e8, 0xbd8199cc, 0x3f0f23a0, 0xbf6ce528, 0x3f2d3036, 0x3f3d352a, 0xbf691abf, 0xbf16b3ed, 
    0x3e298d33, 0xbd5e06df, 0xbda8e1fa, 0x3f0482bf, 0xbf5c68de, 0xbfa92f75, 0x3f2e01f8, 0xbe513437, 
    0xbe92b422, 0xbeedbd47, 0x3ee412ce, 0xbe96d1c1, 0x3d88f3ef, 0xbf1a9a8a, 0xbeae7e07, 0x3ed332c4, 
    0x3f0d11c5, 0xbe48a8b9, 0xbf1af649, 0xc01a7831, 0xbe82f51d, 0xbf4871ff, 0x3f9772de, 0x3f8e0476, 
    0xbd2fe7a0, 0xbe9ced81, 0x3f342ef0, 0xbe641baf, 0x3ea91a5b, 0xbf018d26, 0xbf4d581b, 0xbe9b0676, 
    0x3df774d0, 0xbf060c67, 0x3fab4356, 0x3fcaeb66, 0xbecdbad5, 0xbf9686a2, 0x3f3186fb, 0x3d2c27aa, 
    0x3f95ad1f, 0x3ec7cc25, 0x3f248f7e, 0x3e3ac1c6, 0x3ef53df4, 0xbf937ec5, 0xbc6633c2, 0x3ffcaf99, 
    0xbf7d3708, 0xbe3077c0, 0xbe48ea45, 0xbf5126a2, 0xbe1aaadb, 0xbf6e389b, 0xbd485217, 0xbed34b4d, 
    0x3f155e3e, 0xbf4da0cb, 0x3eb99ab7, 0xbd9eeb8a, 0xbf519870, 0x3d4948a5, 0x3de95396, 0x3ec4002b, 
    0xbe672d88, 0x3efa1f23, 0x3e01a082, 0xbf62a2d7, 0xbf0768dc, 0xbeebe790, 0xbed711c9, 0xbd6cf5a4, 
    0x3ed4d422, 0xbf160987, 0x3f0ca11c, 0x3e9ba129, 0xbf6324a7, 0x3eb218ec, 0x3e0b9de7, 0xbe469814, 
    0x3bb2781f, 0xbe157d09, 0x3fdb5b53, 0x3fc0f463, 0x3f5975e9, 0x3ef14257, 0xbf74bd62, 0x3eeab071, 
    0x3f299774, 0x3e40386e, 0xbe6c0d7f, 0x3ee561fe, 0xc0195ca7, 0x3e1b545c, 0x3f9750ad, 0x3f0ebf97, 
    0xbd8366ca, 0x3ed75aa8, 0x3eb5b1ab, 0xbe1a73e5, 0x3e19775a, 0xbe02508c, 0x3ed7c88a, 0xbf130b0f, 
    0x3e86e247, 0xbf0d5f71, 0x3e4d3b1f, 0x3facd891, 0xbf8340f2, 0xbd44dd69, 0x3d37d82b, 0x3ec33894, 
    0xbf769b33, 0xbe2d4659, 0x3ea77022, 0xbf6e798e, 0x3f2bc832, 0x3e84a4bd, 0x3f3c90dd, 0x3fd7713e, 
    0xbe23b047, 0xbec0a167, 0xbc03555a, 0x3f2b7ff4, 0xbf167060, 0xbe869014, 0x3eef96b2, 0xbd081172, 
    0xbf90b6de, 0xbd8989f8, 0x3eff78f1, 0x3f9f4d93, 0xbee5696c, 0xbe990b1a, 0x3c4f9626, 0xbea6dffb, 
    0xbe666cb4, 0xbdf60e8e, 0xbd3bf94f, 0x3ed7a34d, 0xbfb45eba, 0xbda0f293, 0x3f07d677, 0xbe28562e, 
    0xbf2fec3d, 0xbeaeb32e, 0x3eec834a, 0xbf250896, 0x3e44aec5, 0xbf6dd14f, 0x3eb74901, 0x3e8f898b, 
    0x3e0b01b8, 0x3cef73ee, 0xbe44069c, 0xbe9240ac, 0xbf38dbeb, 0xbe9febd3, 0x3e71ce63, 0xbe2443f5, 
    0xbf380711, 0xbf39ef0a, 0x3f20c041, 0xbe91b113, 0x3f10f1d2, 0x3ede6a35, 0xbdf74539, 0x3f85dfa4, 
    0x3de43ab6, 0x3f38fec9, 0xbd313240, 0xbf1eea11, 0xbf00f9a7, 0xbed255d7, 0x3f616be7, 0xbeaf6ee3, 
    0xbf89bdbb, 0xbf6708ac, 0xbecee4dc, 0xbf71849a, 0x3de143f4, 0xbef17787, 0x3e547216, 0x3f133704, 
    0xbdf88357, 0xbd1659a4, 0xbe9f1561, 0xbef5d4de, 0xbf54b47e, 0xbd349ff0, 0x3ee23b07, 0xbe314932, 
    0x3ef66a72, 0x3ee28982, 0x3d556890, 0xbf0f1cb5, 0xbeb99524, 0xbf4eb297, 0xbdbae78c, 0xbe685627, 
    0x3f3f87ba, 0x3e07e594, 0x3eb892b8, 0xbef9c1ea, 0xbf572c2f, 0xbf8266e2, 0xbe640558, 0xbe99e04c, 
    0x3ecc4c64, 0x3dc9a33b, 0x3f39facc, 0xbe637e72, 0xbcff185d, 0x3ec25b17, 0x3ef55fa9, 0x3ef60363, 
    0x3ec8d80f, 0x3ea35486, 0x3ef4a400, 0xbf1c0168, 0xbd6f2799, 0xbf423880, 0x3f15ed4e, 0x3f2b53f3, 
    0x3ef9e3f8, 0x3faea1c3, 0xbe4cb9ee, 0xbeace50a, 0xbea8a515, 0x3f892b3e, 0x3f6eee8d, 0x3f09586c, 
    0x3e704573, 0xbdd2318a, 0x3f4d092c, 0xbfb9aa23, 0xbf51bc76, 0xbf00980a, 0xbf80cf0d, 0xbf73d688, 
    0xbee314b0, 0xbeb068db, 0xbf3d9eb7, 0x3f55789b, 0x3edae5e6, 0x3c837d89, 0xbf6d1c94, 0xbef01788, 
    0xbf2c018c, 0xbe060af0, 0xbe3dd468, 0x3db3ece7, 0xbeaf28af, 0x3f1cbace, 0xbe0132d1, 0x3f13da25, 
    0x3e5b4d89, 0x3f30b369, 0xbf4388c0, 0xc00c1af4, 0x3cc26b4f, 0xbed2e1bf, 0xbeb2c22d, 0x3f4ea57e, 
    0x3d1a91cc, 0x3e20ad24, 0xbe52fa79, 0xbf3891b9, 0x3f01c77a, 0x3eea3410, 0x3eda4c13, 0xbef9345b, 
    0x3ce7f971, 0xbd7b9af7, 0x3e969c50, 0x3fde7eab, 0x3e6a2258, 0x3f9b4b82, 0xbe5cdc44, 0xbdb2a894, 
    0xbec0edf7, 0x3ea04535, 0xbf31de62, 0xbebf0758, 0x3f2a5fdd, 0xbe420fdb, 0xbe3a5bff, 0xbeb11069
};

static const uint32_t _K31[] = {
    0xbd10448c, 0x3d181097, 0x3b91b83b, 0x3bba1229, 0xbc5a86f8, 0x3d88badd, 0xbdcb873c, 0x3d8e771a, 
    0xbcde2ccc, 0xbd55d5f8, 0x3d931342, 0x3dbb211f, 0x3d27f82b, 0xbce90fd3, 0xbcf50786, 0x3dda7ee8, 
    0xbba6d300, 0x3c9d355e, 0x3d3d7d90, 0xbc52f60a, 0xbc42076e, 0xbcbc0e70, 0x3c5d1f59, 0x3dce5e04, 
    0x3ca92f9a, 0xbd7669fe, 0xbdb2d4ba, 0x3c1e3a96, 0x3ae9c34a, 0xbc7f5a05, 0xbc71cf50, 0xbcf80cee, 
    0xbc33f30d, 0x3b8a70c5, 0x3cb4ac06, 0xbc2df647, 0xbc817b0d, 0x3c9ee918, 0x3cd7d93d, 0x3d3102d8, 
    0x3c4cf8f4, 0xbd5d391a, 0xbd2504f5, 0x3c83056d, 0xbb14815f, 0xb9840848, 0xbccc6983, 0xbd2ec3a3, 
    0xbc8aa561, 0x3c902f6c, 0x3d95ede7, 0x3c9ea4f2, 0x3d163c3c, 0xbc8bc23f, 0xbbc479b3, 0x3c01c0c0, 
    0x3dab29b8, 0x3cdd93b9, 0xbcb918d5, 0xbb0850d8, 0xbb6dcfd7, 0xbce779f4, 0x3d7a8053, 0x3c79ceb7, 
    0xba6117f7, 0x3b6aaca8, 0x3c4f6ff6, 0xbb685ee3, 0x3cacaa52, 0x3ce9b108, 0x3d5b5454, 0xbd44320c, 
    0xbbc51edd, 0xbc97baaa, 0x3ab4cd5e, 0x3cf49917, 0xbc0cfb6b, 0xbca53e6c, 0x3c929e49, 0x3c012aa9, 
    0xbd5dc9f0, 0xbb919ae2, 0x3db60bd2, 0xbba76a97, 0x3d2b0943, 0x3b68641b, 0x3c0dcf78, 0xbd04e171, 
    0x3dffebb8, 0x3ca52b78, 0xbc230147, 0xbcb3bea5, 0x3cb981c5, 0xbb9c332d, 0x3d303802, 0x3c87d668, 
    0xbd29f1ef, 0xbc2169a0, 0x3c9d2fb9, 0xbd171f11, 0xbcba22ef, 0x3d81fc11, 0xbd743109, 0x3d8227ad, 
    0xbc6aa011, 0x3a096a7c, 0x3d0723d9, 0x3d9ce887, 0x3d233429, 0xbc954391, 0x3cb29fa1, 0x3d8e1e72, 
    0xbc8c9df3, 0x3bf86138, 0x3d13db62, 0xbd25865b, 0xbc94330b, 0xbc64291d, 0x3ca350f5, 0x3d39e260, 
    0x3bc32d2b, 0xbbcc5916, 0xbdba44cd, 0x3d12b603, 0x3cb9dbed, 0x3c21cb88, 0x3c1ab373, 0xbd40f43c, 
    0xbd64cded, 0x3bcd7269, 0x3d4c4102, 0xbd6b4529, 0x3bcfd883, 0x3d215d2a, 0xbb0759e6, 0x3cb08e84, 
    0x3cca0066, 0xb96e75f6, 0xbd5a5e98, 0x3d06d623, 0xbca09415, 0xbc3c2e0a, 0x3c01785c, 0xbd506ac3, 
    0x3c51243c, 0xbd1e3947, 0xbd86b7ab, 0x3c1c08f7, 0xbce7535a, 0x3e4647fb, 0xbdfcdb83, 0x3d149c32, 
    0xbe004b11, 0xbdad3302, 0x3e11dd7f, 0x3e1d9505, 0xbc72154c, 0xbc84cdd4, 0xbda634d8, 0x3d4e4d43, 
    0x3aad9812, 0x3bdeba15, 0x3cc3f803, 0xbd6d6a07, 0xbceb27e8, 0xbd0b94f5, 0x3d306de0, 0x3c8e9f79, 
    0xbd2defc3, 0x3c069153, 0xbd81b8a5, 0xbcc2aeb7, 0xbcb5ec27, 0x3ce2ba5c, 0x3d168005, 0xbd7e0cf9, 
    0xbd5c909e, 0xbd17cf0c, 0x3ca8233d, 0x3aa9f120, 0x3c8af9ed, 0x3c5b7e38, 0xbc7cb566, 0x3c84c816, 
    0xbc2628d1, 0x3da7048c, 0xbce4f8df, 0xbcaf4bdf, 0x3d45d400, 0x3c94587d, 0x3c3fc915, 0x3ae31bd6, 
    0xbd2f5b61, 0xbc85f1c0, 0x3cba5326, 0xbb53d1cb, 0xb9be9f50, 0xb9cf6730, 0xbca758d7, 0xbc8a9b82, 
    0x3cb372f2, 0x3c95cc0e, 0x3cfcfcc4, 0x3bc9abae, 0x3ba0564d, 0x3c8c864c, 0x3d20a599, 0xbc0905a6, 
    0xbcb1bef8, 0xbcb55f22, 0x3c4f5cae, 0xb9765f35, 0x3b47f228, 0xbcf17ab1, 0x3d0cb491, 0xbd289a67, 
    0x3cff1113, 0x3d1d45ef, 0xbc27a982, 0xbccb8dc0, 0x3afc770d, 0x3cf4957b, 0x3d134e82, 0xbd1e4c89, 
    0xbde27de7, 0xbd3a3618, 0x3cd11230, 0xbc5f43fe, 0xb995e5f5, 0x3d3a05c3, 0xbd224c86, 0xbc6e7e44, 
    0x3c168b7a, 0x3c9f1e9a, 0x3dd104fb, 0x3d18f60b, 0xbbbbd3b1, 0xbc94b199, 0x3c0054d2, 0x3cfe891c, 
    0xbd317759, 0x3d4ab33d, 0x3ce553d5, 0x3c92ebea, 0x3cef9169, 0x3cbf725b, 0xba1c54e2, 0x3bc49cb6, 
    0x3d2b637c, 0xbcacae0a, 0xbd83ab10, 0x3c1e3796, 0xbc14c842, 0xbd2b4ef2, 0xbd209f9f, 0x3d4ef54b, 
    0x393a3793, 0x3d1747e1, 0xba12c522, 0xbbafdcfe, 0x3b48aa15, 0x3cec5ae4, 0x3d0e9cf1, 0xbcdb2b1b, 
    0x3d7b6f2c, 0xbd4f2173, 0xbda2f896, 0xbc08a222, 0xbcc8b3bc, 0xbc218b90, 0xbd1a622f, 0x3d6a9768, 
    0xbd91dd32, 0x3c214726, 0x3d05c740, 0xbca27572, 0xbb237d77, 0x3dd86426, 0xbc9c9734, 0xba25d5dc, 
    0x3d20a042, 0xbd8fd9fd, 0x3cd1cd6a, 0x3cd689c0, 0xbcf7199e, 0xbd1ccca9, 0xbd3ec71c, 0x3cf11b1e, 
    0xbb58d838, 0xbc4b1a2c, 0xbd216f58, 0xbc7919eb, 0xbd388833, 0x3dd88488, 0xbd7be43d, 0x3d1e260b, 
    0xbdea8d63, 0xbdf553ab, 0x3e4a0773, 0x3e25cc91, 0x3c18e5b3, 0xbd54ac90, 0xbd4f5994, 0x3d7599c9, 
    0x3ce3dcbb, 0x3c90cf1e, 0x3cc39104, 0xbd46e658, 0xbc3d2447, 0xbc198e6a, 0x3d3f43c9, 0x3d219f5c, 
    0xbd0811a6, 0xbca62187, 0xbdf6c6f4, 0xbba2533b, 0xbc790c68, 0x3cb3cc45, 0x3db4cfb6, 0xbda97022, 
    0xbc863fed, 0xbba89df1, 0xbaad75d8, 0x3bd9a436, 0xbceeda10, 0xbd1a0de6, 0x3d3a2fee, 0x3c8c9216, 
    0x3c7cb0b9, 0x3d0ee2ba, 0xbd0e632d, 0xbb8d9947, 0x3d5166a9, 0x3cdddf46, 0x3d62d434, 0x3d75f194, 
    0xbc3ae658, 0x3ce97e2c, 0xbcb5bcec, 0x3caa720a, 0x3ce95847, 0x3ca21a05, 0x3b0612bd, 0x3b953c53, 
    0xbb96b9c1, 0xbd6ccbf4, 0xbc8ddeb5, 0x3d48b9c8, 0x3d162e85, 0x3c611bf9, 0xbcd52642, 0xbbdc6edd, 
    0xbc4b898f, 0x3ce029b7, 0xbd2730c3, 0x3d2402d1, 0x3c42e373, 0xbd3eda0d, 0x3d665a5c, 0x3c6fe3d1, 
    0x3c295876, 0xbd0ea91e, 0xbcafb2e0, 0x3c4ac50d, 0x3e580dc2, 0x3ddc7014, 0x3c6a24cd, 0xbd5300a3, 
    0xbd34b22e, 0x3c9bbf3b, 0x3b8c73a9, 0x3d058018, 0x39c5c813, 0xbd02a2d5, 0xbba4726c, 0x3d1afebe, 
    0x3cb2b678, 0xbd6949c4, 0xbb85674a, 0x3d875e31, 0x3de479d2, 0x3c891fd3, 0xbd2c5106, 0xbcba3227, 
    0xbc85d40e, 0x3e0d23b8, 0xbc60ad0c, 0x3db964a0, 0x3d54cc9a, 0xbd0d59d8, 0x3cfac238, 0xbb9cab58, 
    0xbcbea1dd, 0x3d2fc84e, 0xbc6cd00b, 0x3c958ca3, 0x3cd40c6e, 0x3cadcd13, 0xbc810742, 0xbd22f6e0, 
    0xbcf5ce60, 0x3df21e76, 0xbcb595b7, 0x3defb623, 0x3d8d590c, 0xbb826898, 0xbcaf6bad, 0xbcf954dd, 
    0xbce9a2b8, 0xbcbb85a0, 0xbbb70e73, 0x3dab9441, 0x3d9e8be0, 0xbaf5055b, 0xbd2150f3, 0x3d9ea2ea, 
    0xbd7e4f18, 0x3db3184c, 0x3d3d11e5, 0xbc97f5d4, 0x3d09aa22, 0x3d291e68, 0x3b43036f, 0xb934e33e, 
    0x3d1c7642, 0xbd9d5735, 0xbdd57156, 0x3d028a7a, 0xbc8a680a, 0x3d2717c2, 0xbd264f4f, 0xbd19ed21, 
    0x3c9b01fe, 0xbca1b4a3, 0xbd6769f5, 0xbcf21852, 0xbd33e0fb, 0x3decabc4, 0xba672704, 0xbd39a178, 
    0xbd9c2952, 0xbd00f4d9, 0xbd419eca, 0x3ccceed7, 0xbdd15723, 0xbc58bd4b, 0x3d2fc13f, 0x3d560dfc, 
    0x3c955f18, 0xbc29883a, 0xbc5cdc2c, 0xbd0c7788, 0xbd5866b3, 0x3d92c471, 0x3d2de147, 0xbda6e236, 
    0xbd28a089, 0xbc4007c9, 0xbd09be88, 0xbd2b4c8c, 0xbd118c62, 0x3d6221f3, 0x3d55ed7b, 0x3cf9952a, 
    0xbcda62e9, 0x3b672a07, 0x3d629f82, 0xbcbe761d, 0x3caa83b1, 0x3db720fa, 0xbda2c7e2, 0xbce9a92d, 
    0x3c03dff9, 0xbb998fd4, 0xbcac6842, 0xbd1314e4, 0xbd77d316, 0xbd1b1d4a, 0x3d19de1e, 0x3d368f00, 
    0xbca09bbb, 0x3d50ecde, 0x3d2765a2, 0x3c9e2472, 0x3dadf4f9, 0xbc18da5e, 0xbd8835d0, 0x3d1dcc67, 
    0x3d460846, 0x3d402e92, 0x3b1808de, 0xbbc31eb8, 0x3c5d606b, 0xbb9b4d5d, 0x3d1487e1, 0xbb937be6, 
    0x3d28be50, 0x3d0984d8, 0x3b0513a5, 0x3c884626, 0x3dc2c947, 0xbcac19ca, 0xbc4f0dc9, 0xbc27463b, 
    0x3cf0b869, 0xbcabb5a5, 0x3d2f0456, 0xbbcf6fcb, 0x3bc4cd7d, 0xbd3cfd95, 0xbc8413d3, 0xbcb4ebb2, 
    0xbd5afebd, 0x3c732cf6, 0x3d13708a, 0xbc67948f, 0x3d822d82, 0x3dc79622, 0xbcbbb84b, 0xbcb47dd2, 
    0x3cb2cab6, 0xbce0d568, 0x3c9baa65, 0x3cda8f30, 0xbd1c0d35, 0xbd1185fb, 0x3bfa480b, 0xbcd70b37, 
    0xbd0fee86, 0xbccd6862, 0xbd29a3b0, 0xbb8e116e, 0xbd5197f1, 0x3dbc77e7, 0xbc172598, 0xbbc1e2d6, 
    0xbd3356d9, 0xbd0e52e7, 0x3cf01f72, 0x3d99b69d, 0x3a99ef5b, 0x3ce277dd, 0x3c0e2ab1, 0x3d079aa7, 
    0xbcdf8e4c, 0x3bca2197, 0xbc82491c, 0xbbd98872, 0xbd1980f7, 0xbcde869d, 0x3ce76493, 0xbcf8e1a5, 
    0xbd1123e2, 0xbc9df834, 0x3bd2c83a, 0xbc5c16af, 0x3d6c417c, 0x3ddfb28b, 0x3d12034e, 0xbbdc795c, 
    0xbd284cf4, 0x3c2ea1fc, 0x3c9a7919, 0x3bae8efb, 0x3bcf3a35, 0xb996851c, 0xbd271ef1, 0xbc08bd6e, 
    0x3ca80a30, 0x3c152d9b, 0x3c18c579, 0x3ced7576, 0x3c00af73, 0x3b906ec7, 0x3d25b198, 0x3b90eadb, 
    0x3d471d2c, 0x3d94da01, 0xbcb07c95, 0x3d0745da, 0x3cb8760e, 0xbcaf3242, 0x3d513177, 0xbc34af8f, 
    0xbca2e004, 0x3bd5dd7f, 0xbc5553b7, 0x3b2c9452, 0xbcb79f1b, 0x3bc220f5, 0x3c8b35f8, 0xbd1cae47, 
    0xbbf58ada, 0x3da9f623, 0x3c07a004, 0x3dcfa279, 0x3dd6e7c9, 0x3c582076, 0x3c5da193, 0xbc499e15, 
    0x3c94d79f, 0x3d73efe9, 0x3c87168b, 0x3b855ae7, 0x3c2d1da1, 0xbb80130c, 0x3dbf8713, 0xbc8ab555, 
    0xbc5eeac7, 0x3db0ef4f, 0x3b9fd44f, 0x3df37bda, 0x3dca6d17, 0x3c0f23d7, 0x3ce86569, 0xbcbf732a, 
    0xbccc0ab6, 0x3be0770e, 0x3be27bc1, 0x3dde3095, 0x3d0aab56, 0xbc3e69fe, 0x3d50ab31, 0x3cdc5521, 
    0xbcba7a8c, 0xbbd8c763, 0xbd111633, 0xba5c0156, 0xbc747ba9, 0x3d41d0a8, 0x3af89dc5, 0xbca5cd1e, 
    0xbd32d838, 0xbc1664af, 0xbcc0b5db, 0x3c960c59, 0xbc9fce21, 0x3d15b095, 0x3b9fda85, 0xbca3cf99, 
    0xbcb45317, 0x3cd65dff, 0xbdb1a27a, 0x3cd04184, 0xbc72e949, 0xbcb7b5b6, 0xbd47573c, 0xbc8a88aa, 
    0xbd1efaef, 0xbb1b62db, 0x3d3bfb62, 0x3cbce664, 0x3dfbaa0e, 0x3dc7bb91, 0x3c2c4cc7, 0x3d4f5fef, 
    0x3cb77333, 0x3d213751, 0xbd113f6a, 0x3cca306f, 0x3bf67fc2, 0xbab15b8e, 0x3bdcd490, 0xbb94240b, 
    0xbce24b16, 0xbd36dba0, 0xbd8a6ea5, 0xba292643, 0xbdb1d247, 0x3d2db837, 0xbbc3e107, 0xbd73dc59, 
    0xbd565219, 0x392d171f, 0x3d464bd1, 0x3c745a2d, 0x3c434cde, 0xbd54c6ed, 0x3a891110, 0x3c96ad4d, 
    0x3d1c0c6d, 0x3d81ec8c, 0xbd447d83, 0x3c599f8a, 0x3b2181c0, 0x3cb8e974, 0x3d9d698e, 0xbccfb241, 
    0x3d219c18, 0xbcb7341b, 0xbc660ad0, 0x3c34eb7a, 0xbbccc2d9, 0xbd1d15d3, 0x3dd1a2d2, 0xbcebc1ba, 
    0x3c332476, 0x3d043783, 0xbb6f3d88, 0x3cff46cf, 0x3d22ecce, 0x3c707b7a, 0x3c058381, 0xbcc4399f, 
    0xbe29387a, 0xbd104757, 0x3d609bd0, 0xbcd93f97, 0xbb0935fe, 0x3d3e5661, 0xbd0845c3, 0xbb0a7d5e, 
    0x3d29be0a, 0xbc2da9ba, 0x3d8019d0, 0x3d5ac05a, 0x3acd8079, 0xbc8186a6, 0x3bf5d839, 0x3bd327a7, 
    0x3ca2904a, 0x3d545026, 0xbc6c9d43, 0xbd80f6d0, 0x3c034f3f, 0x3b2e95f7, 0x3cdf0eb8, 0x3ce4d8dc, 
    0x3ba22f04, 0xbc77c21c, 0xbd334556, 0xbd1f57b6, 0xbd355ada, 0xbb9b0e03, 0xbd722a97, 0xbd39262a, 
    0xbc6ad3f5, 0x3dc10b13, 0xbc3a5418, 0x3d9f144f, 0x3d3ec3ca, 0xbd05009a, 0xbcea0fc6, 0xbc1e0c1d, 
    0x3a9a6008, 0x3d351be1, 0x3c690eec, 0xbd1546b8, 0xbc0ea1fa, 0x3c0030cf, 0xbd3bf1d7, 0xbabbad8f, 
    0x3cb71e8c, 0x3e072a6b, 0xbd0c265c, 0x3df5a5c9, 0x3d5a0505, 0x3c4e7239, 0xbd9750b1, 0x3bfbb748, 
    0xbc85e2ba, 0xbd145e59, 0x3cbed62c, 0x3cf4fcd4, 0xbc2156da, 0xbd7c4ffa, 0xbd3d2765, 0x3dc61063
};

static const uint32_t _K34[] = {
    0x3f1c95d0, 0xbdce999e, 0x3eebef62, 0xbebb2ef9, 0x3f1e2cf2, 0x3f936e28, 0xbf5ea661, 0xbe92dc15, 
    0xbc6d4b30, 0x3eadc090, 0xbe0e9718, 0x3e8f93d6, 0xbfc6d4e1, 0x3d3b7888, 0x3ed1b27c, 0x3d83744c
};

static const uint32_t _K40[] = {
    0xbf180566, 0x3f377060, 0xbf6fabf4, 0x3e90b14e, 0xbef10f33, 0x3e079be7, 0x3e927342, 0xbd53e089, 
    0x3e1844ff, 0x3e7416c0, 0x3f2cf78f, 0x3be7fe5a, 0x3f66a789, 0x3f2baf98, 0x3de8c7a0, 0x3f282638, 
    0x3f0faa91, 0x3ee0d82f, 0x3ed37fbb, 0xc00f9646, 0x3eb84449, 0x3f31003d, 0xbf02092e, 0xbf20d9af, 
    0xc0173afb, 0xbed2ca8f, 0x3ef4adc9, 0xbf8699af, 0xbfb088fd, 0xbf97f223, 0x3f1157a1, 0xc00050fe, 
    0x3f40ae65, 0xbf6704af, 0x3f7374fa, 0x3f557084, 0xc0106d8a, 0xc01ac792, 0x3f8733f1, 0xbf98caed, 
    0x3e396cf6, 0xbfaead77, 0xbfcff057, 0x3ea9fd6b, 0x3f5ecc55, 0xbe187a87, 0xc02ee860, 0x3ee64736, 
    0xbf3a557f, 0xbfb3fc62, 0x3eec2150, 0xbf8e0288, 0x3eec6493, 0x3d64665b, 0xc0082244, 0x3f6c59ee, 
    0x3eadc4fe, 0x3f49bec3, 0xbfb4ed5e, 0x3f4eac49, 0xbf980bbb, 0x3f027312, 0x3efc6709, 0x3cb746fd
};

static const uint32_t _K42[] = {
    0xbf42776b, 0x3e96a12c, 0x3f1dae8c, 0x3e41db08
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[12] (48 bytes) 
#define _K18             ((float *)_K18)                     // f32[13,3,20] (3120 bytes) 
#define _K19             ((float *)_K19)                     // f32[13] (52 bytes) 
#define _K22             ((float *)_K22)                     // f32[16,3,13] (2496 bytes) 
#define _K25             ((float *)_K25)                     // f32[16] (64 bytes) 
#define _K29             ((float *)_K29)                     // f32[16,3,16] (3072 bytes) 
#define _K31             ((float *)_K31)                     // f32[16,3,16] (3072 bytes) 
#define _K34             ((float *)_K34)                     // f32[16] (64 bytes) 
#define _K4              ((float *)_K4)                      // f32[128] (512 bytes) 
#define _K40             ((float *)_K40)                     // f32[4,16] (256 bytes) 
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
#define _K28             ((float *)(_buffer + 0x000003c0))   // f32[15,16] (960 bytes) 
#define _K30             ((float *)(_buffer + 0x00000000))   // f32[15,16] (960 bytes) 
#define _K32             ((float *)(_buffer + 0x000003c0))   // f32[15,16] (960 bytes) 
#define _K36             ((float *)(_buffer + 0x00000000))   // f32[15,16] (960 bytes) 
#define _K38             ((float *)(_buffer + 0x000003c0))   // f32[7,16] (448 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[16] (64 bytes) 
#define _K41             ((float *)(_buffer + 0x00000040))   // f32[4] (16 bytes) 
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
    conv1d_flat_f32(_K20, _K22, _K21, 13, 390, 15, 16, 26, 39);
    add_f32(_K21, _K25, 1, 1, 1, 15, 16, _K23);
    relu_f32(_K23, 240, _K27);
    conv1d_flat_f32(_K27, _K29, _K28, 16, 256, 15, 16, 16, 48);
    conv1d_flat_f32(_K28, _K31, _K30, 16, 256, 15, 16, 16, 48);
    add_f32(_K30, _K34, 1, 1, 1, 15, 16, _K32);
    relu_f32(_K32, 240, _K36);
    maxpool1d_valid_f32(_K36, 2, 2, 16, 7, _K38);
    globav1d_f32(_K38, 7, 16, _K39);
    dott_f32(_K40, _K39, _K41, 16, 4, 1);
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

