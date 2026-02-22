/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 20:41:55 UTC. Any changes will be lost.
* 
* Model ID  d6f092bc-56cc-41ab-bbd6-f356d8967430
* 
* Memory    Size                      Efficiency
* Buffers   23200 bytes (RAM)         100 %
* State     26704 bytes (RAM)         100 %
* Readonly  39264 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-1
* 
* Class Index | Symbol Label
* 0           | unlabelled
* 1           | Air
* 2           | Floor
* 3           | Carpet
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [1024]          float      dequeue
*    window_shape = [1024]
*    stride = 160
*    buffer_multiplier = 1
* Hamming smoothing              [1024]          float      dequeue
*    sym = True
* Real Discrete Fourier Transform [513,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [513]           float      dequeue
*    axis = 0
* Mel Filterbank                 [50]            float      dequeue
*    num_filters = 50
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
* Add Constant                   [50]            float      dequeue
*    A = 1
* Logarithm                      [50]            float      dequeue
* Clip                           [50]            float      dequeue
*    min = 0
*    max = 4
* Imagimob Speech Features       [50]            float      dequeue
*    output_freq = 100
*    output_features = 50
*    low_cut_freq = 300
*    high_cut_freq = 8000
* Sliding Window (data points)   [100,50]        float      dequeue
*    window_shape = [100,50]
*    stride = 500
*    buffer_multiplier = 1
* Contextual Window (Sliding Window) [100,50]        float      dequeue
*    contextual_length_sec = 1
*    prediction_freq = 10
* Input Layer                    [100,50]        float      dequeue
*    shape = [100,50]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,50,16]
* Batch Normalization            [50,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [50,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Batch Normalization            [50,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [50,16]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [25,16]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [25,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Convolution 1D                 [25,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [25,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [25,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [12,32]         float      dequeue
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
* (ACC) Accuracy 99.511 %
* (F1S) F1 Score 99.511 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                2898             3597             1757             2728
* (FN) False Negative or Incorrect Negative Prediction               26               27                0                1
* (FP) False Positive or Incorrect Positive Prediction                2                0               20               32
* (TN) True Negative or Correct Negative Prediction                8108             7410             9257             8273
* (TPR) True Positive Rate or Sensitivity, Recall               99.11 %          99.25 %         100.00 %          99.96 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.98 %         100.00 %          99.78 %          99.61 %
* (PPV) Positive Predictive Value or Precision                  99.93 %         100.00 %          98.87 %          98.84 %
* (NPV) Negative Predictive Value                               99.68 %          99.64 %         100.00 %          99.99 %
* (FNR) False Negative Rate or Miss Rate                         0.89 %           0.75 %           0.00 %           0.04 %
* (FPR) False Positive Rate or Fall-Out                          0.02 %           0.00 %           0.22 %           0.39 %
* (FDR) False Discovery Rate                                     0.07 %           0.00 %           1.13 %           1.16 %
* (FOR) False Omission Rate                                      0.32 %           0.36 %           0.00 %           0.01 %
* (F1S) F1 Score                                                99.52 %          99.63 %          99.43 %          99.40 %
*/

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[23200];
static int8_t _state[26704];

// Parameters
static const uint32_t _K5[] = {
    0x3da3d70a, 0x3da3db97, 0x3da3e93c, 0x3da3fffb, 0x3da41fd2, 0x3da448c1, 0x3da47ac8, 0x3da4b5e7, 
    0x3da4fa1c, 0x3da54768, 0x3da59dc9, 0x3da5fd3f, 0x3da665c9, 0x3da6d765, 0x3da75213, 0x3da7d5d2, 
    0x3da8629f, 0x3da8f87a, 0x3da99762, 0x3daa3f54, 0x3daaf050, 0x3dabaa53, 0x3dac6d5c, 0x3dad3968, 
    0x3dae0e77, 0x3daeec85, 0x3dafd391, 0x3db0c398, 0x3db1bc98, 0x3db2be8f, 0x3db3c97b, 0x3db4dd57, 
    0x3db5fa23, 0x3db71fdb, 0x3db84e7c, 0x3db98604, 0x3dbac66f, 0x3dbc0fba, 0x3dbd61e3, 0x3dbebce5, 
    0x3dc020be, 0x3dc18d6a, 0x3dc302e6, 0x3dc4812e, 0x3dc6083d, 0x3dc79812, 0x3dc930a7, 0x3dcad1f9, 
    0x3dcc7c03, 0x3dce2ec2, 0x3dcfea31, 0x3dd1ae4c, 0x3dd37b0f, 0x3dd55076, 0x3dd72e7b, 0x3dd9151a, 
    0x3ddb044e, 0x3ddcfc13, 0x3ddefc64, 0x3de1053c, 0x3de31695, 0x3de5306c, 0x3de752b9, 0x3de97d79, 
    0x3debb0a6, 0x3dedec3a, 0x3df03030, 0x3df27c82, 0x3df4d12a, 0x3df72e24, 0x3df99369, 0x3dfc00f2, 
    0x3dfe76bb, 0x3e007a5e, 0x3e01bd79, 0x3e0304a9, 0x3e044fed, 0x3e059f41, 0x3e06f2a1, 0x3e084a0b, 
    0x3e09a57b, 0x3e0b04ed, 0x3e0c685f, 0x3e0dcfcd, 0x3e0f3b33, 0x3e10aa8f, 0x3e121ddb, 0x3e139516, 
    0x3e15103a, 0x3e168f46, 0x3e181234, 0x3e199901, 0x3e1b23a9, 0x3e1cb229, 0x3e1e447c, 0x3e1fdaa0, 
    0x3e21748f, 0x3e231246, 0x3e24b3c1, 0x3e2658fc, 0x3e2801f2, 0x3e29aea0, 0x3e2b5f02, 0x3e2d1313, 
    0x3e2ecad0, 0x3e308633, 0x3e324539, 0x3e3407dd, 0x3e35ce1b, 0x3e3797ef, 0x3e396554, 0x3e3b3645, 
    0x3e3d0abf, 0x3e3ee2bd, 0x3e40be39, 0x3e429d30, 0x3e447f9e, 0x3e46657c, 0x3e484ec7, 0x3e4a3b79, 
    0x3e4c2b8f, 0x3e4e1f03, 0x3e5015d1, 0x3e520ff3, 0x3e540d65, 0x3e560e21, 0x3e581224, 0x3e5a1967, 
    0x3e5c23e6, 0x3e5e319c, 0x3e604284, 0x3e625699, 0x3e646dd4, 0x3e668833, 0x3e68a5ae, 0x3e6ac641, 
    0x3e6ce9e7, 0x3e6f109a, 0x3e713a55, 0x3e736713, 0x3e7596ce, 0x3e77c981, 0x3e79ff26, 0x3e7c37b9, 
    0x3e7e7333, 0x3e8058c7, 0x3e817963, 0x3e829b6b, 0x3e83bedb, 0x3e84e3b1, 0x3e8609ea, 0x3e873184, 
    0x3e885a7a, 0x3e8984cb, 0x3e8ab073, 0x3e8bdd70, 0x3e8d0bbf, 0x3e8e3b5d, 0x3e8f6c46, 0x3e909e79, 
    0x3e91d1f1, 0x3e9306ad, 0x3e943ca8, 0x3e9573e1, 0x3e96ac54, 0x3e97e5fd, 0x3e9920db, 0x3e9a5cea, 
    0x3e9b9a26, 0x3e9cd88d, 0x3e9e181c, 0x3e9f58d0, 0x3ea09aa6, 0x3ea1dd99, 0x3ea321a9, 0x3ea466d0, 
    0x3ea5ad0c, 0x3ea6f45b, 0x3ea83cb8, 0x3ea98621, 0x3eaad092, 0x3eac1c08, 0x3ead6881, 0x3eaeb5f8, 
    0x3eb0046b, 0x3eb153d6, 0x3eb2a436, 0x3eb3f589, 0x3eb547ca, 0x3eb69af6, 0x3eb7ef0a, 0x3eb94403, 
    0x3eba99de, 0x3ebbf096, 0x3ebd482a, 0x3ebea095, 0x3ebff9d5, 0x3ec153e5, 0x3ec2aec3, 0x3ec40a6b, 
    0x3ec566db, 0x3ec6c40d, 0x3ec82200, 0x3ec980af, 0x3ecae018, 0x3ecc4037, 0x3ecda108, 0x3ecf0289, 
    0x3ed064b5, 0x3ed1c789, 0x3ed32b03, 0x3ed48f1e, 0x3ed5f3d7, 0x3ed7592a, 0x3ed8bf15, 0x3eda2593, 
    0x3edb8ca2, 0x3edcf43d, 0x3ede5c62, 0x3edfc50c, 0x3ee12e39, 0x3ee297e4, 0x3ee4020b, 0x3ee56caa, 
    0x3ee6d7bd, 0x3ee84340, 0x3ee9af31, 0x3eeb1b8c, 0x3eec884e, 0x3eedf572, 0x3eef62f5, 0x3ef0d0d4, 
    0x3ef23f0b, 0x3ef3ad96, 0x3ef51c73, 0x3ef68b9e, 0x3ef7fb12, 0x3ef96acd, 0x3efadaca, 0x3efc4b08, 
    0x3efdbb80, 0x3eff2c32, 0x3f004e8c, 0x3f010717, 0x3f01bfb9, 0x3f027871, 0x3f03313b, 0x3f03ea17, 
    0x3f04a302, 0x3f055bfc, 0x3f061501, 0x3f06ce11, 0x3f078729, 0x3f084048, 0x3f08f96c, 0x3f09b292, 
    0x3f0a6bbb, 0x3f0b24e3, 0x3f0bde08, 0x3f0c972a, 0x3f0d5045, 0x3f0e095a, 0x3f0ec264, 0x3f0f7b64, 
    0x3f103457, 0x3f10ed3a, 0x3f11a60e, 0x3f125ecf, 0x3f13177c, 0x3f13d013, 0x3f148892, 0x3f1540f8, 
    0x3f15f943, 0x3f16b171, 0x3f176980, 0x3f18216e, 0x3f18d93a, 0x3f1990e2, 0x3f1a4864, 0x3f1affbe, 
    0x3f1bb6ef, 0x3f1c6df5, 0x3f1d24ce, 0x3f1ddb78, 0x3f1e91f1, 0x3f1f4838, 0x3f1ffe4c, 0x3f20b429, 
    0x3f2169cf, 0x3f221f3c, 0x3f22d46d, 0x3f238962, 0x3f243e18, 0x3f24f28e, 0x3f25a6c2, 0x3f265ab2, 
    0x3f270e5d, 0x3f27c1c0, 0x3f2874db, 0x3f2927ab, 0x3f29da2e, 0x3f2a8c63, 0x3f2b3e48, 0x3f2befdc, 
    0x3f2ca11d, 0x3f2d5208, 0x3f2e029d, 0x3f2eb2d9, 0x3f2f62bb, 0x3f301241, 0x3f30c16a, 0x3f317034, 
    0x3f321e9c, 0x3f32cca2, 0x3f337a44, 0x3f342780, 0x3f34d454, 0x3f3580bf, 0x3f362cbf, 0x3f36d852, 
    0x3f378377, 0x3f382e2c, 0x3f38d870, 0x3f398240, 0x3f3a2b9c, 0x3f3ad481, 0x3f3b7ced, 0x3f3c24e0, 
    0x3f3ccc58, 0x3f3d7353, 0x3f3e19cf, 0x3f3ebfcb, 0x3f3f6545, 0x3f400a3c, 0x3f40aead, 0x3f415299, 
    0x3f41f5fb, 0x3f4298d5, 0x3f433b22, 0x3f43dce3, 0x3f447e16, 0x3f451eb8, 0x3f45bec9, 0x3f465e47, 
    0x3f46fd30, 0x3f479b83, 0x3f48393e, 0x3f48d660, 0x3f4972e8, 0x3f4a0ed3, 0x3f4aaa20, 0x3f4b44ce, 
    0x3f4bdedb, 0x3f4c7846, 0x3f4d110d, 0x3f4da92f, 0x3f4e40aa, 0x3f4ed77e, 0x3f4f6da7, 0x3f500326, 
    0x3f5097f8, 0x3f512c1c, 0x3f51bf90, 0x3f525254, 0x3f52e466, 0x3f5375c4, 0x3f54066d, 0x3f549660, 
    0x3f55259b, 0x3f55b41d, 0x3f5641e4, 0x3f56ceef, 0x3f575b3d, 0x3f57e6cc, 0x3f58719c, 0x3f58fbaa, 
    0x3f5984f5, 0x3f5a0d7c, 0x3f5a953e, 0x3f5b1c39, 0x3f5ba26d, 0x3f5c27d7, 0x3f5cac77, 0x3f5d304b, 
    0x3f5db351, 0x3f5e358a, 0x3f5eb6f3, 0x3f5f378b, 0x3f5fb751, 0x3f603643, 0x3f60b461, 0x3f6131aa, 
    0x3f61ae1b, 0x3f6229b4, 0x3f62a474, 0x3f631e5a, 0x3f639763, 0x3f640f90, 0x3f6486de, 0x3f64fd4e, 
    0x3f6572dd, 0x3f65e78a, 0x3f665b55, 0x3f66ce3d, 0x3f67403f, 0x3f67b15b, 0x3f682191, 0x3f6890de, 
    0x3f68ff42, 0x3f696cbc, 0x3f69d94b, 0x3f6a44ed, 0x3f6aafa1, 0x3f6b1968, 0x3f6b823f, 0x3f6bea25, 
    0x3f6c511a, 0x3f6cb71c, 0x3f6d1c2b, 0x3f6d8046, 0x3f6de36b, 0x3f6e459a, 0x3f6ea6d1, 0x3f6f0710, 
    0x3f6f6657, 0x3f6fc4a3, 0x3f7021f4, 0x3f707e49, 0x3f70d9a1, 0x3f7133fc, 0x3f718d58, 0x3f71e5b4, 
    0x3f723d11, 0x3f72936c, 0x3f72e8c5, 0x3f733d1c, 0x3f73906f, 0x3f73e2be, 0x3f743407, 0x3f74844b, 
    0x3f74d387, 0x3f7521bd, 0x3f756eea, 0x3f75bb0e, 0x3f760628, 0x3f765038, 0x3f76993c, 0x3f76e135, 
    0x3f772821, 0x3f776e00, 0x3f77b2d1, 0x3f77f693, 0x3f783946, 0x3f787ae9, 0x3f78bb7c, 0x3f78fafd, 
    0x3f79396d, 0x3f7976ca, 0x3f79b315, 0x3f79ee4b, 0x3f7a286e, 0x3f7a617c, 0x3f7a9975, 0x3f7ad058, 
    0x3f7b0624, 0x3f7b3ada, 0x3f7b6e79, 0x3f7ba0ff, 0x3f7bd26e, 0x3f7c02c3, 0x3f7c31ff, 0x3f7c6022, 
    0x3f7c8d2a, 0x3f7cb918, 0x3f7ce3eb, 0x3f7d0da2, 0x3f7d363e, 0x3f7d5dbd, 0x3f7d841f, 0x3f7da965, 
    0x3f7dcd8d, 0x3f7df098, 0x3f7e1284, 0x3f7e3353, 0x3f7e5302, 0x3f7e7193, 0x3f7e8f04, 0x3f7eab56, 
    0x3f7ec687, 0x3f7ee099, 0x3f7ef98a, 0x3f7f115b, 0x3f7f280b, 0x3f7f3d9a, 0x3f7f5208, 0x3f7f6554, 
    0x3f7f777e, 0x3f7f8887, 0x3f7f986e, 0x3f7fa733, 0x3f7fb4d5, 0x3f7fc155, 0x3f7fccb3, 0x3f7fd6ed, 
    0x3f7fe005, 0x3f7fe7fb, 0x3f7feecd, 0x3f7ff47d, 0x3f7ff909, 0x3f7ffc72, 0x3f7ffeb8, 0x3f7fffdc, 
    0x3f7fffdc, 0x3f7ffeb8, 0x3f7ffc72, 0x3f7ff909, 0x3f7ff47d, 0x3f7feecd, 0x3f7fe7fb, 0x3f7fe005, 
    0x3f7fd6ed, 0x3f7fccb3, 0x3f7fc155, 0x3f7fb4d5, 0x3f7fa733, 0x3f7f986e, 0x3f7f8887, 0x3f7f777e, 
    0x3f7f6554, 0x3f7f5208, 0x3f7f3d9a, 0x3f7f280b, 0x3f7f115b, 0x3f7ef98a, 0x3f7ee099, 0x3f7ec687, 
    0x3f7eab56, 0x3f7e8f04, 0x3f7e7193, 0x3f7e5302, 0x3f7e3353, 0x3f7e1284, 0x3f7df098, 0x3f7dcd8d, 
    0x3f7da965, 0x3f7d841f, 0x3f7d5dbd, 0x3f7d363e, 0x3f7d0da2, 0x3f7ce3eb, 0x3f7cb918, 0x3f7c8d2a, 
    0x3f7c6022, 0x3f7c31ff, 0x3f7c02c3, 0x3f7bd26e, 0x3f7ba0ff, 0x3f7b6e79, 0x3f7b3ada, 0x3f7b0624, 
    0x3f7ad058, 0x3f7a9975, 0x3f7a617c, 0x3f7a286e, 0x3f79ee4b, 0x3f79b315, 0x3f7976ca, 0x3f79396d, 
    0x3f78fafd, 0x3f78bb7c, 0x3f787ae9, 0x3f783946, 0x3f77f693, 0x3f77b2d1, 0x3f776e00, 0x3f772821, 
    0x3f76e135, 0x3f76993c, 0x3f765038, 0x3f760628, 0x3f75bb0e, 0x3f756eea, 0x3f7521bd, 0x3f74d387, 
    0x3f74844b, 0x3f743407, 0x3f73e2be, 0x3f73906f, 0x3f733d1c, 0x3f72e8c5, 0x3f72936c, 0x3f723d11, 
    0x3f71e5b4, 0x3f718d58, 0x3f7133fc, 0x3f70d9a1, 0x3f707e49, 0x3f7021f4, 0x3f6fc4a3, 0x3f6f6657, 
    0x3f6f0710, 0x3f6ea6d1, 0x3f6e459a, 0x3f6de36b, 0x3f6d8046, 0x3f6d1c2b, 0x3f6cb71c, 0x3f6c511a, 
    0x3f6bea25, 0x3f6b823f, 0x3f6b1968, 0x3f6aafa1, 0x3f6a44ed, 0x3f69d94b, 0x3f696cbc, 0x3f68ff42, 
    0x3f6890de, 0x3f682191, 0x3f67b15b, 0x3f67403f, 0x3f66ce3d, 0x3f665b55, 0x3f65e78a, 0x3f6572dd, 
    0x3f64fd4e, 0x3f6486de, 0x3f640f90, 0x3f639763, 0x3f631e5a, 0x3f62a474, 0x3f6229b4, 0x3f61ae1b, 
    0x3f6131aa, 0x3f60b461, 0x3f603643, 0x3f5fb751, 0x3f5f378b, 0x3f5eb6f3, 0x3f5e358a, 0x3f5db351, 
    0x3f5d304b, 0x3f5cac77, 0x3f5c27d7, 0x3f5ba26d, 0x3f5b1c39, 0x3f5a953e, 0x3f5a0d7c, 0x3f5984f5, 
    0x3f58fbaa, 0x3f58719c, 0x3f57e6cc, 0x3f575b3d, 0x3f56ceef, 0x3f5641e4, 0x3f55b41d, 0x3f55259b, 
    0x3f549660, 0x3f54066d, 0x3f5375c4, 0x3f52e466, 0x3f525254, 0x3f51bf90, 0x3f512c1c, 0x3f5097f8, 
    0x3f500326, 0x3f4f6da7, 0x3f4ed77e, 0x3f4e40aa, 0x3f4da92f, 0x3f4d110d, 0x3f4c7846, 0x3f4bdedb, 
    0x3f4b44ce, 0x3f4aaa20, 0x3f4a0ed3, 0x3f4972e8, 0x3f48d660, 0x3f48393e, 0x3f479b83, 0x3f46fd30, 
    0x3f465e47, 0x3f45bec9, 0x3f451eb8, 0x3f447e16, 0x3f43dce3, 0x3f433b22, 0x3f4298d5, 0x3f41f5fb, 
    0x3f415299, 0x3f40aead, 0x3f400a3c, 0x3f3f6545, 0x3f3ebfcb, 0x3f3e19cf, 0x3f3d7353, 0x3f3ccc58, 
    0x3f3c24e0, 0x3f3b7ced, 0x3f3ad481, 0x3f3a2b9c, 0x3f398240, 0x3f38d870, 0x3f382e2c, 0x3f378377, 
    0x3f36d852, 0x3f362cbf, 0x3f3580bf, 0x3f34d454, 0x3f342780, 0x3f337a44, 0x3f32cca2, 0x3f321e9c, 
    0x3f317034, 0x3f30c16a, 0x3f301241, 0x3f2f62bb, 0x3f2eb2d9, 0x3f2e029d, 0x3f2d5208, 0x3f2ca11d, 
    0x3f2befdc, 0x3f2b3e48, 0x3f2a8c63, 0x3f29da2e, 0x3f2927ab, 0x3f2874db, 0x3f27c1c0, 0x3f270e5d, 
    0x3f265ab2, 0x3f25a6c2, 0x3f24f28e, 0x3f243e18, 0x3f238962, 0x3f22d46d, 0x3f221f3c, 0x3f2169cf, 
    0x3f20b429, 0x3f1ffe4c, 0x3f1f4838, 0x3f1e91f1, 0x3f1ddb78, 0x3f1d24ce, 0x3f1c6df5, 0x3f1bb6ef, 
    0x3f1affbe, 0x3f1a4864, 0x3f1990e2, 0x3f18d93a, 0x3f18216e, 0x3f176980, 0x3f16b171, 0x3f15f943, 
    0x3f1540f8, 0x3f148892, 0x3f13d013, 0x3f13177c, 0x3f125ecf, 0x3f11a60e, 0x3f10ed3a, 0x3f103457, 
    0x3f0f7b64, 0x3f0ec264, 0x3f0e095a, 0x3f0d5045, 0x3f0c972a, 0x3f0bde08, 0x3f0b24e3, 0x3f0a6bbb, 
    0x3f09b292, 0x3f08f96c, 0x3f084048, 0x3f078729, 0x3f06ce11, 0x3f061501, 0x3f055bfc, 0x3f04a302, 
    0x3f03ea17, 0x3f03313b, 0x3f027871, 0x3f01bfb9, 0x3f010717, 0x3f004e8c, 0x3eff2c32, 0x3efdbb80, 
    0x3efc4b08, 0x3efadaca, 0x3ef96acd, 0x3ef7fb12, 0x3ef68b9e, 0x3ef51c73, 0x3ef3ad96, 0x3ef23f0b, 
    0x3ef0d0d4, 0x3eef62f5, 0x3eedf572, 0x3eec884e, 0x3eeb1b8c, 0x3ee9af31, 0x3ee84340, 0x3ee6d7bd, 
    0x3ee56caa, 0x3ee4020b, 0x3ee297e4, 0x3ee12e39, 0x3edfc50c, 0x3ede5c62, 0x3edcf43d, 0x3edb8ca2, 
    0x3eda2593, 0x3ed8bf15, 0x3ed7592a, 0x3ed5f3d7, 0x3ed48f1e, 0x3ed32b03, 0x3ed1c789, 0x3ed064b5, 
    0x3ecf0289, 0x3ecda108, 0x3ecc4037, 0x3ecae018, 0x3ec980af, 0x3ec82200, 0x3ec6c40d, 0x3ec566db, 
    0x3ec40a6b, 0x3ec2aec3, 0x3ec153e5, 0x3ebff9d5, 0x3ebea095, 0x3ebd482a, 0x3ebbf096, 0x3eba99de, 
    0x3eb94403, 0x3eb7ef0a, 0x3eb69af6, 0x3eb547ca, 0x3eb3f589, 0x3eb2a436, 0x3eb153d6, 0x3eb0046b, 
    0x3eaeb5f8, 0x3ead6881, 0x3eac1c08, 0x3eaad092, 0x3ea98621, 0x3ea83cb8, 0x3ea6f45b, 0x3ea5ad0c, 
    0x3ea466d0, 0x3ea321a9, 0x3ea1dd99, 0x3ea09aa6, 0x3e9f58d0, 0x3e9e181c, 0x3e9cd88d, 0x3e9b9a26, 
    0x3e9a5cea, 0x3e9920db, 0x3e97e5fd, 0x3e96ac54, 0x3e9573e1, 0x3e943ca8, 0x3e9306ad, 0x3e91d1f1, 
    0x3e909e79, 0x3e8f6c46, 0x3e8e3b5d, 0x3e8d0bbf, 0x3e8bdd70, 0x3e8ab073, 0x3e8984cb, 0x3e885a7a, 
    0x3e873184, 0x3e8609ea, 0x3e84e3b1, 0x3e83bedb, 0x3e829b6b, 0x3e817963, 0x3e8058c7, 0x3e7e7333, 
    0x3e7c37b9, 0x3e79ff26, 0x3e77c981, 0x3e7596ce, 0x3e736713, 0x3e713a55, 0x3e6f109a, 0x3e6ce9e7, 
    0x3e6ac641, 0x3e68a5ae, 0x3e668833, 0x3e646dd4, 0x3e625699, 0x3e604284, 0x3e5e319c, 0x3e5c23e6, 
    0x3e5a1967, 0x3e581224, 0x3e560e21, 0x3e540d65, 0x3e520ff3, 0x3e5015d1, 0x3e4e1f03, 0x3e4c2b8f, 
    0x3e4a3b79, 0x3e484ec7, 0x3e46657c, 0x3e447f9e, 0x3e429d30, 0x3e40be39, 0x3e3ee2bd, 0x3e3d0abf, 
    0x3e3b3645, 0x3e396554, 0x3e3797ef, 0x3e35ce1b, 0x3e3407dd, 0x3e324539, 0x3e308633, 0x3e2ecad0, 
    0x3e2d1313, 0x3e2b5f02, 0x3e29aea0, 0x3e2801f2, 0x3e2658fc, 0x3e24b3c1, 0x3e231246, 0x3e21748f, 
    0x3e1fdaa0, 0x3e1e447c, 0x3e1cb229, 0x3e1b23a9, 0x3e199901, 0x3e181234, 0x3e168f46, 0x3e15103a, 
    0x3e139516, 0x3e121ddb, 0x3e10aa8f, 0x3e0f3b33, 0x3e0dcfcd, 0x3e0c685f, 0x3e0b04ed, 0x3e09a57b, 
    0x3e084a0b, 0x3e06f2a1, 0x3e059f41, 0x3e044fed, 0x3e0304a9, 0x3e01bd79, 0x3e007a5e, 0x3dfe76bb, 
    0x3dfc00f2, 0x3df99369, 0x3df72e24, 0x3df4d12a, 0x3df27c82, 0x3df03030, 0x3dedec3a, 0x3debb0a6, 
    0x3de97d79, 0x3de752b9, 0x3de5306c, 0x3de31695, 0x3de1053c, 0x3ddefc64, 0x3ddcfc13, 0x3ddb044e, 
    0x3dd9151a, 0x3dd72e7b, 0x3dd55076, 0x3dd37b0f, 0x3dd1ae4c, 0x3dcfea31, 0x3dce2ec2, 0x3dcc7c03, 
    0x3dcad1f9, 0x3dc930a7, 0x3dc79812, 0x3dc6083d, 0x3dc4812e, 0x3dc302e6, 0x3dc18d6a, 0x3dc020be, 
    0x3dbebce5, 0x3dbd61e3, 0x3dbc0fba, 0x3dbac66f, 0x3db98604, 0x3db84e7c, 0x3db71fdb, 0x3db5fa23, 
    0x3db4dd57, 0x3db3c97b, 0x3db2be8f, 0x3db1bc98, 0x3db0c398, 0x3dafd391, 0x3daeec85, 0x3dae0e77, 
    0x3dad3968, 0x3dac6d5c, 0x3dabaa53, 0x3daaf050, 0x3daa3f54, 0x3da99762, 0x3da8f87a, 0x3da8629f, 
    0x3da7d5d2, 0x3da75213, 0x3da6d765, 0x3da665c9, 0x3da5fd3f, 0x3da59dc9, 0x3da54768, 0x3da4fa1c, 
    0x3da4b5e7, 0x3da47ac8, 0x3da448c1, 0x3da41fd2, 0x3da3fffb, 0x3da3e93c, 0x3da3db97, 0x3da3d70a
};

static const uint32_t _K12[] = {
    0x00000013, 0x00000015, 0x00000018, 0x0000001b, 0x0000001f, 0x00000022, 0x00000025, 0x00000029, 
    0x0000002d, 0x00000030, 0x00000035, 0x00000039, 0x0000003d, 0x00000042, 0x00000047, 0x0000004c, 
    0x00000051, 0x00000056, 0x0000005c, 0x00000062, 0x00000068, 0x0000006f, 0x00000076, 0x0000007d, 
    0x00000084, 0x0000008c, 0x00000094, 0x0000009c, 0x000000a5, 0x000000ae, 0x000000b7, 0x000000c1, 
    0x000000cc, 0x000000d6, 0x000000e2, 0x000000ed, 0x000000fa, 0x00000106, 0x00000114, 0x00000122, 
    0x00000130, 0x0000013f, 0x0000014f, 0x00000160, 0x00000171, 0x00000183, 0x00000195, 0x000001a9, 
    0x000001bd, 0x000001d3, 0x000001e9, 0x00000200
};

static const uint32_t _K20[] = {
    0xbe92cc12, 0x3c65f980, 0x3dcd5772, 0xbe0a4f87, 0xbe61f700, 0x3e3812d0, 0xbe648083, 0xbe25dae8, 
    0x3d2e0463, 0x3de0fe75, 0x3e458265, 0x3e0275d4, 0xbe17776f, 0x3e85b591, 0x3e13a31f, 0xbe69818a, 
    0xbd8c1cda, 0x3bb1aae9, 0xbdca0780, 0x3e6851c3, 0x3e8386ed, 0xbdc77790, 0xbe8479c2, 0xbe32137a, 
    0x3e7bde90, 0x3e4c6a01, 0xbdfa9484, 0x3d2eb258, 0x3d892a32, 0x3e1d5599, 0xbe43a2b1, 0xbe824043, 
    0xbe1abcd8, 0xbe1fb4f3, 0xbc439917, 0xbe854cd2, 0x3d5486de, 0x3e809d94, 0x3e9517b3, 0x3c9a77fc, 
    0xbdfc368f, 0xbe42c648, 0x3e307080, 0x3e8d303a, 0x3e8a59bb, 0xbe84ed3f, 0xbde3edbd, 0x3d52d368, 
    0xbdbdd5b1, 0xbdaa7384, 0xbd3605c5, 0xbe21f4bc, 0xbe906a97, 0x3d8191fe, 0xbe1a69b6, 0xbe9ca8db, 
    0xbe3232eb, 0x3def53ac, 0xbe0dcbd0, 0x3e961718, 0x3e36ec45, 0xbe8015d3, 0x3cd30221, 0x3e22a965, 
    0xbe77ae71, 0xbe1984b0, 0xbe2d194b, 0x3dd4538c, 0xbe5dd1ea, 0xbe56bcc9, 0xbe93c6f9, 0x3ea39155, 
    0x3e9cac3a, 0xbdd854d1, 0xbcd810e1, 0xbe408cec, 0x3e07d47f, 0xbe05bfbe, 0x3c4aacd2, 0xbd89b9f1, 
    0x3e11cab9, 0x3e7419c8, 0x3dcfd6de, 0xbe77df3d, 0x3d660754, 0xbded33fd, 0x3ccc5d4e, 0xbe66dc1c, 
    0xbe12ed00, 0x3e11ad69, 0xbde1c128, 0x3e57c59b, 0xbded45bc, 0x3ebe49b6, 0xbdceea92, 0xbd25438b, 
    0x3b3840bb, 0xbd287913, 0xbe53e078, 0xbd0e6d59, 0x3cb29b8b, 0x3dabd1f3, 0x3c80ee4d, 0xbe0afa76, 
    0xbe272e1a, 0x3e428640, 0x3e08c68e, 0x3e9fb0d4, 0xbdb18754, 0xbe27a666, 0x3de88978, 0xbe80d3c1, 
    0x3dca7049, 0xbd4a0e94, 0x3d49d159, 0x3e586492, 0x3e83da92, 0x3e63d313, 0x3e0c2e29, 0x3c365dc9, 
    0x3e501020, 0x3ea1ea59, 0x3e3d90ee, 0x3e816a60, 0xbe10a54f, 0x3e589eeb, 0x3d99454c, 0xbe340c79, 
    0x3ddc890e, 0x3e8b0143, 0x3d6f6d0b, 0x3dc19f17, 0x3d221d91, 0xbe61d013, 0x3e6eede3, 0xbe4707af, 
    0x3bda49ce, 0x3da87052, 0x3e74eba2, 0xbd9dd61d, 0x3d058ac3, 0xbdc0eb88, 0xbe935b4b, 0x3eb47601, 
    0x3e0cc221, 0x3d8d5c6e, 0xbe0ab0a2, 0x3e4ef4a1, 0xbe07543e, 0xbe0bb3e7, 0x3e3e17a7, 0x3eac467f, 
    0x3e3a2e2a, 0xbd3fc05d, 0x3ea2f477, 0x3e2edb74, 0x3e864aeb, 0x3e27872c, 0x3e34b65e, 0xbe53f22b, 
    0xbeafb2c5, 0x3ece591d, 0xbe32988d, 0x3eb15896, 0x3e431736, 0xbe2df9ce, 0x3d71c950, 0x3e9c3f66, 
    0x3eb7e588, 0xbdae3ee1, 0xbe5a55ff, 0xbda55c39, 0xbea24380, 0xbe946698, 0x3d6b122a, 0x3e3dba4e, 
    0xbd8028a1, 0xbe0687ee, 0x3dd82a48, 0xbe35d09e, 0xbec29171, 0xbcf8cb1b, 0x3c7dbb77, 0xb9f03f46, 
    0x3e33605e, 0x3de87c6e, 0x3e78cbf0, 0x3e116a1f, 0x3de839c2, 0xbe987ab5, 0x3dc760fd, 0xbe8c5563, 
    0x3e5e30ed, 0xbe5cd294, 0x3d19640b, 0x3d8af11d, 0x3e423d48, 0x3e39b1fc, 0xbeb84a77, 0xbe6ed5f1, 
    0xbd3578ba, 0x3de4f71b, 0xbd386ec8, 0x3b28192f, 0x3ea94a2a, 0x3d65bfed, 0xbdadcfa6, 0xbe49d841, 
    0xbe870f69, 0x3d65ed72, 0xbe1eac5e, 0x3e06e71c, 0x3e16fbd1, 0xbe8c5c15, 0xbea53ce7, 0x3e96fc25, 
    0x3ecd07fd, 0xbe5f8be1, 0x3a729391, 0xbdb0f4d0, 0x3e0cde0c, 0x3dcbc07f, 0x3ec58fb7, 0x3e75c410, 
    0xbea1adfb, 0xbe1ac919, 0xbe063e00, 0xbe078a1e, 0xbd32ad2d, 0x3e5e3681, 0xbdd6b7e5, 0xbee2098a, 
    0xbe767fb4, 0x3df9cb83, 0x3dd733ec, 0x3df419a6, 0x3e234944, 0xbe408dc1, 0xbe0267e5, 0xbe218e9d, 
    0x3e422ca8, 0x3e4da282, 0xbdb52e5f, 0x3eecbdd2, 0xbe370359, 0x3e8b9097, 0xbebf02ea, 0xbc534806, 
    0xbd0dd8b0, 0xbd493895, 0xbddfc3ef, 0xbee54724, 0xbcf91ced, 0x3d8ddb36, 0xbe1c4282, 0xbe89e175, 
    0xbe16009a, 0x3e1f360d, 0xbe7c9d3e, 0xbdf8cd33, 0x3ea7521d, 0xbd15f3c1, 0xbe6d66c9, 0x3e7c377c, 
    0xbdbff8f8, 0xbd4cf0ed, 0x3ececd0f, 0xbe849d09, 0x3e9129e5, 0x3ea98c28, 0x3db216a2, 0xbdc4a282, 
    0x3dc3f9d0, 0x3eb78954, 0xbe943bda, 0x3dca82a5, 0xbe3c2ea6, 0xbde27aae, 0xbe7fe79d, 0xbe19176e, 
    0x3daf24a5, 0xbe66e426, 0xbc8c19aa, 0x3d52973e, 0x3ea56e30, 0xbe16578e, 0xbd73cf25, 0x3c6ed340, 
    0x3e7d94b3, 0x3cd58e7e, 0x3d0e49dd, 0xbefcf329, 0xba52a11b, 0x3eefec9f, 0x3e83e1ba, 0xbeae5cde, 
    0x3d271a2c, 0xbe4b1427, 0x3e0094df, 0x3e510611, 0xbe5b333a, 0x3e38b5df, 0x3e1a36fd, 0x3e5915f7, 
    0x3e23e419, 0xbea20be8, 0x3ccc2753, 0xbe8087f2, 0x3e5a890d, 0xbe21b53b, 0xbd7a926e, 0xbe100a6d, 
    0x3cb1983c, 0xbe17718f, 0xbe4620e7, 0x3ea43bd9, 0xbcc41eaf, 0xbe58e65f, 0x3e82cd6d, 0x3ec6b4b8, 
    0xbd3bf9aa, 0x3ea274ec, 0x3d809a53, 0xbe36639b, 0xbbc7f244, 0x3ea74c5d, 0xbe8857c7, 0xbe11ca59, 
    0xbd6768e6, 0x3ec794d5, 0xbeb618ba, 0xbeb094eb, 0xbe353f5a, 0x3bc6db97, 0xbe028a22, 0xbdbd6086, 
    0x3c18af80, 0xbd6bfd5f, 0x3e14ca76, 0x3ea33b64, 0xbcf1d673, 0xbe701120, 0xbea9a65e, 0x3e10a01a, 
    0xbe9f2225, 0xbe1a51cc, 0xbeb9948a, 0x3e87daa3, 0xbc9f8f39, 0xbe8ac79c, 0xbe45322c, 0x3e2b03ea, 
    0xbd7b1849, 0xbbe063d8, 0xbeb538b2, 0x3e3670b1, 0x3de90597, 0x3e0f3396, 0xbe041a83, 0xbe6b267f, 
    0x3ea03487, 0xbcb694ed, 0x3ebcc74f, 0xbdacbc52, 0x3e2fe034, 0xbd99d123, 0xbeb421c8, 0x3ee604b9, 
    0xbe44a9ff, 0x3e75131c, 0xbdb82702, 0x3ea9e949, 0x3ed11c2c, 0xbe819da7, 0x3ebced19, 0xbb1f281c, 
    0xbd750da2, 0xbe89a9f6, 0xbd40d08e, 0x3deaab08, 0xbe39e781, 0xbec69c3e, 0xbe876aae, 0xbe0b94f9, 
    0x3eac92e9, 0x3ea8dbc6, 0x3d124422, 0xbde00592, 0xbe6712fc, 0xbc84ecba, 0xbe15bf0b, 0xbe70b306, 
    0x3ec1f1cc, 0xbe5c6ca0, 0x3d3c99a4, 0xbe2f0bbf, 0xbe77ca45, 0xbede237f, 0x3df53ef6, 0x3dd26c4e, 
    0x3e15261e, 0x3dd5150c, 0xbebca85f, 0x3ec4ea1c, 0x3e39ca67, 0x3e865eb4, 0x3dcc6d94, 0xbea496f2, 
    0x3edc53de, 0x3e630cbb, 0xbebdd8e8, 0x3dd0d93b, 0xbdcedd36, 0x3df44341, 0xbea6ca43, 0x3df16821, 
    0xbd4e89a3, 0xbe766881, 0x3ea13abc, 0xbea7debb, 0x3d847cbc, 0xbd4e08d2, 0x3e370831, 0x3e2ff256, 
    0xbe6e9066, 0xbeaf6373, 0x3d81129c, 0x3e22aee4, 0x3db8b3c2, 0xbed716c4, 0x3dfefd6d, 0x3e454a30, 
    0xbe2e3736, 0x3ea34524, 0x3adaba52, 0x3d195079, 0x3dc072d3, 0x3ebcc751, 0x3eab72d2, 0xbecf5f3a, 
    0xbe86f14e, 0xbde1db19, 0x3cac1bb8, 0x3e4e30d7, 0x3e9e1615, 0xbe412a57, 0x3eb27dae, 0x3e4a668e, 
    0x3ea67bcd, 0x3918f205, 0x3ea7c9ed, 0x3ce036a2, 0x3e21bd4d, 0x3e485e6c, 0x3e86db0f, 0xbe8fe7e3, 
    0x3e58249f, 0x3e9ad810, 0xbe8fa7ce, 0xbeb6fc68, 0xbdce9ac9, 0xbec92c13, 0x3e48e308, 0x3ea31f5d, 
    0xbd1b9638, 0x3cc1ede6, 0xbe8919fc, 0xbe199a28, 0x3e7f3b98, 0xbea2eeb5, 0x3e8de85c, 0x3d0644b0, 
    0x3d6ace6a, 0xbe256f15, 0xbe5246c0, 0x3eb98897, 0x3e6e38a7, 0xbea604ac, 0xbccb1fa6, 0xbe078737, 
    0x3e8c4156, 0xbdd281f0, 0x3dd3cb18, 0xbe2e036d, 0xbe3092d2, 0x3e38ff00, 0x3d9e14df, 0xbd709778, 
    0x3eba49a5, 0xbdee2233, 0x3cadc1e6, 0xbe307ecf, 0xbe41dbc7, 0x3e187dc8, 0x3dd6b858, 0xbe8fe025, 
    0x3ea8c6c4, 0xbe144c99, 0x3b9ce610, 0x3de34951, 0xbe612dab, 0xbe5ecc4c, 0xbc9f66fc, 0xbeaa0273, 
    0xbd34589d, 0xbdac5111, 0xbe01eec3, 0xbd64cd98, 0xbe5a67d2, 0x3e2df7ef, 0xbdbff058, 0x3e9845cc, 
    0x3e8673b1, 0x3e99bea1, 0xbec95e6d, 0xbdfa6138, 0x3e589a85, 0xbde4afe0, 0xbe869687, 0xbec6225c, 
    0xbe73835f, 0x3d9636d6, 0xbd6c0c74, 0x3e836578, 0x3d1745c5, 0x3e02d546, 0xbe1c3e20, 0x3e8a611b, 
    0x3dc4b3f0, 0xbcfbaf65, 0xbe00562e, 0xbda90295, 0x3d370618, 0xbe8b69ee, 0xbd1669a7, 0x3ea4ac5c, 
    0x3d89dc28, 0x3c90ab37, 0xbea406c7, 0x3e743f7e, 0x3e892538, 0xbd56907c, 0xbd33c7be, 0xbe6d5edb, 
    0xbe22e2a5, 0x3d851fc1, 0x3de25886, 0xbc85047f, 0xbe874690, 0xbd30d572, 0xbe3fd10d, 0x3e9c1e6c, 
    0xbed05f84, 0x3e2ddce2, 0xbe4b808b, 0x3e3019f4, 0xbdabf83d, 0xbe8a4fac, 0xbe28793d, 0x3ea8198c, 
    0xbea40263, 0xbc959856, 0xbbb57ed6, 0x3e07c15e, 0xbd27940f, 0x3e4c5a8b, 0x3d82decb, 0x3ed46872, 
    0x3e40e0fe, 0xbe817505, 0x3da6cb2d, 0xbe5c9d85, 0xbdd20a2d, 0x3ecdb14c, 0xbe4e01c0, 0x3e790583, 
    0x3e9b12d8, 0xbe60bed6, 0xbe8c7050, 0x3ea891f2, 0xbe3da787, 0x3e65f332, 0xbe237919, 0x3da48538, 
    0xbe922f8a, 0x3d31114f, 0x3e4b7f9c, 0xbe86fb0f, 0xbe84e0c8, 0x3e3a7e53, 0xbe1679df, 0x3dd80c3d, 
    0x3e5a49ef, 0xbead62f7, 0xbca35f81, 0xbe96d599, 0xbe932c09, 0x3e9e9d69, 0x3ec09ca2, 0x3da63383, 
    0xbcb793ca, 0x3dcb6d17, 0x3dd0a1be, 0x3d986217, 0xbe58a0d6, 0xbe84691e, 0x3e29f1aa, 0xbd81be75, 
    0xbe69de8a, 0xbe323271, 0x3eae3722, 0xbe42f511, 0x3da69bfb, 0x3e897c8e, 0xbe85a331, 0xbd1b8099, 
    0x3dca115f, 0xbe232633, 0x3e2c99b2, 0x3e57222d, 0xbe454f83, 0xbe5ab2a9, 0x3dec4b63, 0xbe4c99ce, 
    0xbca8b4bf, 0x3dc011fd, 0x3e1f9c5d, 0xbe7ddf29, 0x3d55920d, 0x3ea4d4b4, 0x3e9a5461, 0xbe9cbab2, 
    0xbe803b6f, 0xbdafb2ec, 0x3e483ea2, 0xbd701fc0, 0x3c835f23, 0xbd7366fb, 0x3e329068, 0xbe9ce08c, 
    0xbea72dca, 0x3e69dd3f, 0xbd1a95ef, 0xbe6615da, 0xbe2218fc, 0x3e66cd4d, 0xbe8cb1eb, 0xbe5b0c49, 
    0x3e1e9f55, 0x3e4371d2, 0xbe892d48, 0x3e7ffa39, 0xbc3e085b, 0x3e53b005, 0xbe57fa0c, 0xbe475662, 
    0x3d904872, 0x3dc6aa99, 0x3d18e324, 0xbe36ee03, 0xbe31987d, 0x3df1608e, 0xbd3b157d, 0x3dddc002, 
    0xbd8e55fd, 0x3d458fda, 0xbe38e82e, 0x3e909132, 0xbd922b73, 0x3e4e524b, 0xbe815b2e, 0xbe470b77, 
    0x3ddb6392, 0x3e7eb75d, 0xbd7fc0ca, 0xbe64c28b, 0x3d35bd8a, 0x3e54535f, 0x3e754e70, 0x3ca6ea9d, 
    0xbde74ce9, 0x3cbc2cf7, 0x3e9ae487, 0xbdd4988a, 0xbdf640ab, 0xbdffb3e6, 0xbe8a0d0c, 0xbe39d32d, 
    0x3e231965, 0x3e8cb525, 0xbdc6583c, 0xbe350c5f, 0x3e4fb920, 0xbe714a36, 0xbe1c45e1, 0x3dd4ad53, 
    0x3e8d1e81, 0xbe4e05be, 0xbe396526, 0xbe1d870a, 0x3e810a3c, 0x3d87f1ab, 0x3e3fad65, 0x3e410218, 
    0xbd580945, 0xbd938a20, 0xbdd65441, 0x3e1897db, 0x3e3553a5, 0x3e224edd, 0xbe8835a5, 0x3dcf3391, 
    0xbe30f2f9, 0x3e882aac, 0xbe09cac6, 0x3e11a057, 0xbcc1df6c, 0x3e8d5561, 0xbd182a3b, 0x3e57a270, 
    0x3e7f423d, 0xbe861393, 0x3e305def, 0x3da19bed, 0x3e50ff01, 0x3e5b902a, 0xbc8b44c0, 0x3d60d66a, 
    0xbe8deb53, 0x3dc23f09, 0x3d885b7d, 0xbe46da41, 0xbd527db3, 0x3e98ac30, 0x3e9be0b7, 0xbe8ef2ff, 
    0x3e8b8a1c, 0xbcc13639, 0xbe2a3aec, 0xbc8a3cf1, 0x3e898e26, 0xbe554619, 0x3e7798c9, 0xbdfba1a0, 
    0x3e7dfa95, 0x3e99ee9c, 0xbdf56606, 0xbe3b416f, 0x3ea7043f, 0xbe8b6c39, 0x3cba5955, 0xbd2a3108, 
    0xbcb737f8, 0xbd36667d, 0x3d839f76, 0x3d153ebf, 0x3d9c435c, 0xbd5b2faf, 0xbd4cdecd, 0xbd134487, 
    0x3b790a6a, 0xbd476901, 0xbd24a050, 0x3cef94f2, 0xbc5ca227, 0x3d3e740c, 0x3d8dbe1f, 0xbd452b35, 
    0xbd5c6379, 0xbd0387a9, 0x3d6508f5, 0x3d341f89, 0x3d96dd5d, 0x3d9fd2a9, 0x3c4d11b9, 0xbceba7b8, 
    0x3cfdf7f4, 0x3cb037cc, 0x3d895568, 0x3d566561, 0xbcc8ab95, 0x3cd72cfd, 0x3d3303d2, 0xbd97c829, 
    0xbbdb6afd, 0xbd06c1f2, 0x3d8c9d4a, 0xbd46b35d, 0x3c96b746, 0x3d07e518, 0xbc1d73d9, 0xbba98ece, 
    0xbd50c67a, 0xbc794f71, 0x3d427e05, 0xbd59f3dd, 0x3da1bcd1, 0x3d33a796, 0x3c36843b, 0x3d340dad, 
    0xbccf263f, 0x3d961888, 0x3b54e918, 0xbd9e66d5, 0xbd3ad520, 0x3d6fa97c, 0x3d811b13, 0xbd0739c8, 
    0x3da3a75e, 0xbcc66391, 0xbd9775b4, 0x3d8e5e6d, 0xbc9c09d2, 0x3c5779cd, 0x3d0cd314, 0x3d2030a2, 
    0xbd87da1f, 0xbce194c1, 0xbdb7aa1f, 0xbcf6cf26, 0x3cb31938, 0xbd2f8a67, 0x3c66c162, 0x3c3e76bf, 
    0x3d238572, 0x3cc49e8b, 0xbd20e2e5, 0x3da5d7f8, 0xbca78731, 0x3cc41ea1, 0x3d9c490d, 0xbd8c0820, 
    0xbd3d661e, 0xbd131266, 0x3d6c2aae, 0x3db70a8e, 0xba8a5748, 0xbcaee48c, 0x3b85f2ef, 0xbc058960, 
    0x3d4ac4b7, 0xbc5ffc5e, 0x3d91b5f4, 0x3c88357a, 0xbcff46f5, 0x3d37e79c, 0x3db1ec5e, 0x3c7475e9, 
    0xbc412e86, 0xbd1976c8, 0x3d222e87, 0x3d525fb9, 0xbcf83324, 0xbcf5c033, 0x3d5251d1, 0x3d6ba213, 
    0x3d560c3d, 0xbb2388ab, 0x3d42fb03, 0x3cc8a489, 0xbca7f815, 0x3d787d3d, 0x3da64fde, 0x3da178c5, 
    0xbd9d974a, 0x3d357c24, 0xbd1b3c3a, 0xbd86f06d, 0x3cb8c511, 0xbd21a0d6, 0x3d07df47, 0x3d080bf9, 
    0x3da243f6, 0x3d350b17, 0x3d9a1c49, 0xbd7d7adf, 0xbc277417, 0x3d1b91a9, 0x3d19b0b7, 0x3bded522, 
    0xbb78f0e1, 0xbd38a804, 0xbd00ce5a, 0x3da0dae0, 0xbcd2ee91, 0x3d8ae2ca, 0xbdad82a7, 0xbda8c562, 
    0xbc8b5f6d, 0x3dafa7ba, 0x3d7b8691, 0x3d971b95, 0xbd872c6e, 0x3d84a7e6, 0x3d9cbf03, 0x3c81ea0a, 
    0xbbf75b80, 0x3c9d32e7, 0x3d090a9f, 0xbd259faa, 0xbdbff19f, 0x3c239e6d, 0xbe6100c6, 0x3e49e891, 
    0xbe4978cc, 0x3d846e1d, 0x3c508ad1, 0xbe81dab9, 0xbdf610cd, 0x3d31f45d, 0x3cc0e0a4, 0xbe35aa83, 
    0xbe298fbf, 0xbb1865a0, 0xbd1982d3, 0x3d2fb3b9, 0xbe8a2100, 0xbe262d92, 0x3e58c905, 0xbe6c2ed0, 
    0x3e104cdc, 0xbe410238, 0x3e9049f1, 0x3d595281, 0x3de19613, 0xbe09a603, 0xbe3f1b76, 0xbdc001ec, 
    0xbdd6d9df, 0xbde4bab3, 0x3da2a50e, 0x3e3cade2, 0xbe348f70, 0x3d7ca6ab, 0xbdf771a4, 0xbe5ebe36, 
    0xbe8469e5, 0xbda4a23d, 0x3e3f09f2, 0x3e8a4ed8, 0xbe6cc419, 0xbd785cdb, 0xbe339072, 0xbdc00d13, 
    0x3cf4a671, 0x3ea5d71a, 0xbe73440d, 0x3da9db1c, 0xbd9425cc, 0x3e3de53c, 0xbd877049, 0xbe85194a, 
    0xbd9439df, 0xbe0eff1a, 0x3dcc7605, 0x3dfdfac3, 0x3e92f01b, 0xbb73f809, 0xbd489914, 0x3e8431a2, 
    0x3dcc14a2, 0xbe061390, 0xbe454eb1, 0x3d52eb93, 0xbe5659e8, 0x3d1039ee, 0x3bdebb53, 0x3e39572f, 
    0x3e62ca4a, 0x3e7e4be1, 0x3b75ff51, 0xbdd1d1ad, 0x3c94071d, 0x3da77788, 0xbe3aa101, 0x3d659f21, 
    0x3e078e44, 0x3c22ac96, 0xbe38c2d9, 0x3d1be4d8, 0xbc994173, 0xbd350070, 0x3e0ed8bb, 0x3e3b3475, 
    0x3e8ac703, 0xbd9dd274, 0x3d90a09e, 0xbe450c07, 0x3c7d51ff, 0x3e3e2afc, 0x3e179272, 0xbdedd8d9, 
    0xbe224ff7, 0xbdcb9d43, 0x3dae6e8c, 0x3ea9be6c, 0x3d24e1fa, 0x3e8a90ff, 0x3e54923f, 0x3e897258, 
    0x3e7f9395, 0xbe37dcdc, 0x3d536954, 0x3bfea8ef, 0xbcab6092, 0x3c729dbf, 0xbe2112c8, 0x3e05bfe4, 
    0xbd6cb190, 0x3e37db5b, 0x3d7c9259, 0x3e125f2c, 0x3e6062a1, 0x3e8a3dfb, 0x3e8a70c8, 0xbe55e138, 
    0xbe587258, 0xbe76d2a0, 0xbd68a5f1, 0xbe7b0fca, 0xbe284656, 0xbe054d84, 0xbd8c513f, 0x3dca8d50, 
    0xbd18049d, 0x3e85834b, 0x3e37b639, 0xbd435704, 0xbd91284a, 0x3d63f308, 0xbdf7525f, 0x3e7ba81a, 
    0x3e02a822, 0xbe0d0d31, 0x3e3c1476, 0xbe298aea, 0xbd91da62, 0xbe2bc644, 0x3e6fb89a, 0x3c1c9770, 
    0x3d7e47df, 0xbdd4272a, 0xbdcf2db0, 0xbcbf6a12, 0x3e5e6311, 0x3dc7ae5a, 0x3e8eb1ba, 0x3dbbd296, 
    0x3e159c5a, 0xbe3d306c, 0xbb3a7121, 0x3d815e3d, 0x3db630d4, 0xbd89e50a, 0xbd036a41, 0x3d8c38ea, 
    0x3e0df942, 0x3ddad781, 0xbd1c94dc, 0xbdcba3cd, 0xbd46b836, 0xbb244a96, 0xbd3e6343, 0xbd0ae302, 
    0x3d79e217, 0x3e340e60, 0xbbf7528d, 0xbde6d5e6, 0xbdb07c46, 0x3de5c16f, 0x3c85594d, 0xbdb68918, 
    0xbd475e29, 0x3d367cc4, 0x3e37d9f8, 0xbe0421d4, 0xbe1b053f, 0xbc31da74, 0xbc9d12e8, 0xbca0f366, 
    0x3e28d38d, 0xbe512629, 0xbda2b3db, 0xbdacc2e3, 0xbc83842a, 0x3e342d49, 0x3d546a5e, 0xbd9865a2, 
    0xbdc173dd, 0x3c25ab32, 0x3d94f169, 0x3de32809, 0xbd8975ff, 0x3c993482, 0x3dcf226d, 0xbe03ba7d, 
    0x3cd3b0d4, 0x3e0e8b22, 0xbdab3d40, 0x3df496c6, 0xbe272f58, 0x3d14546a, 0x3d4928a7, 0xbdc287f1, 
    0xbda14c88, 0xbe0ba915, 0xbcaefd9f, 0xbbfb0aa9, 0xbd96912b, 0xbcd426be, 0xbb603305, 0xba158cb8, 
    0x3e0645af, 0xbd3ba912, 0xbe3628d1, 0xbe041ef0, 0xbdecb6b7, 0x3e426cf1, 0xbda1ca7d, 0x3d19caa3, 
    0x3d9dacb6, 0xbd4715a0, 0xbdb9736f, 0xbdde2500, 0x3e1d6694, 0x3d97f9e9, 0xbcff67c6, 0x3dfdeca9, 
    0x3dff2b29, 0x3c940eea, 0x3cf41630, 0xbe52cbf6, 0x3dd473e7, 0xbd5e897f, 0x3e43c682, 0x3e4680f8, 
    0xbdbe5c23, 0x3d2b00a4, 0x3c3a0769, 0xbd74a444, 0xbe015ac7, 0x3de0d780, 0x3e2dd072, 0x3d8dad60, 
    0x3d49e64f, 0xbe409af2, 0x3d84975f, 0x3e0fde46, 0x3e2de5ec, 0x3d6dc9eb, 0xbce519cf, 0xbe521f08, 
    0x3e262d23, 0x3dc8161d, 0xbe0940d7, 0xbe52b7df, 0x3e253e46, 0x3e1fbcdd, 0x3e1f3748, 0xbe2b1b62, 
    0x3c8a8850, 0x3e2245ae, 0x3e20bdfd, 0xbdffa191, 0xbe0022f4, 0x3b6cd0ae, 0x3df78fae, 0x3d8f4b8d, 
    0x3d777b09, 0x3dadf1ec, 0x3cc47408, 0x3e2e36b7, 0x3e54368c, 0xbcb13840, 0xbe244a9e, 0x3e0bf7fc, 
    0x3a5ced69, 0x3dc64e2b, 0x3d101043, 0xbdf4ebeb, 0xbd725dd4, 0xbd1cd91a, 0xbe20c550, 0xbd86506d, 
    0x3e3b7d70, 0x3e3acf81, 0xbb8ea178, 0x3dada780, 0xbe3a740e, 0x3d37d8fc, 0x3d81bdd7, 0xbe3d806a, 
    0x3e1f0128, 0x3db6f1f4, 0x3e1a986f, 0x3e12ba25, 0xbe4082b8, 0x3dee53a9, 0xbd8aeac4, 0xbe0912b3, 
    0xbd67ca0f, 0xbdc5c700, 0xbe4ac645, 0x3d140928, 0xbda444f7, 0xbd63ad3b, 0x3e1d6c25, 0xbd1ef670, 
    0xbde84d86, 0xbda1be40, 0xbe66dee6, 0x3e16cac8, 0x3da953e0, 0xbe3ecb86, 0xbd810fd2, 0x3e1c0f45, 
    0xbd906e0e, 0xbe159b2f, 0x3e01ecfc, 0x3d4e754a, 0xbe40b3b9, 0x3e3744e5, 0x3c332140, 0xbd4d1e99, 
    0xbd2d393d, 0xbdc30813, 0x3dc2258f, 0xbe5f07c3, 0xbd900141, 0x3d408032, 0x3e264e9b, 0xbe387456, 
    0xbe574fd7, 0x3c5fb0ac, 0xbe30e3c2, 0x3c3099f0, 0x3e435340, 0x3dc275b3, 0xbd11176f, 0xbe311370, 
    0xbc48ff4c, 0x3e4df6db, 0xbe2c6aef, 0x3e6afa3a, 0x3e56bad5, 0xbc89693d, 0xbe25cfc4, 0x3ded515a, 
    0x3d414c64, 0xbe0f5b63, 0xbc669ec5, 0x3e002b48, 0xbd870d29, 0x3e03b971, 0x3e5f47e4, 0x3e75f5fe, 
    0x3d1aa774, 0xbb8e5768, 0x3dc16ccf, 0xbe13871d, 0x3e33f3dc, 0x3d825ceb, 0xbd931ff9, 0xbe3a6f17, 
    0x3e1a34ab, 0x3d4b902b, 0xbe1d1cc4, 0xbd99f3d4, 0xbd8c1b54, 0x3e35f0be, 0xbd594551, 0xbe6fed05, 
    0xbe6fb9ef, 0x3e3dd12d, 0xb9c5976e, 0xbd179fd4, 0xbe357a27, 0xbc0ca947, 0x3de6c6fc, 0xba5efacd, 
    0x3e0b8251, 0xbe586821, 0x3e3bd897, 0xbd4a1af2, 0x3baa6e96, 0xbb0420e3, 0xbb77d8f0, 0xbe2ba8dd, 
    0xbd13c5da, 0x3de3a2fc, 0xbd5fbfa8, 0x3e6add7b, 0xbd2a3774, 0x3db77f1a, 0x3df9e693, 0x3e30c767, 
    0xbe2a6082, 0x3e0bb391, 0x3ba7b4b1, 0x3e0b5d8d, 0xbe43a0ed, 0xbc1908df, 0x3dbadedc, 0xbe2ca506, 
    0x3de411f1, 0x3e7d2485, 0xbe5bcb9e, 0xbd71bc63, 0xbdb021ab, 0xbe0ad307, 0x3daa0fff, 0xbe006ca2, 
    0x3e202d91, 0xbd7bef2c, 0x3de90343, 0xbe544749, 0xbe5797ca, 0xbe280741, 0x3e1d3ce0, 0x3d56d976, 
    0xbdff4134, 0x3e14ecb3, 0xbe0a02e8, 0xbdba39fc, 0x3cf84650, 0x3e06b7b1, 0xbe5fb8dd, 0xbe3ae715, 
    0xbc084758, 0xbe822496, 0x3e22d20d, 0xbe04e110, 0x3bb7aa3a, 0x3cab65d6, 0x3dd41ba9, 0xbe2e1f35, 
    0xbd2a0043, 0xbe2afe9f, 0x3d18d9a4, 0xbde57729, 0x3a02fb6f, 0xbda3b3f0, 0xbe3e4ecc, 0xbe2eedd7, 
    0x3d332569, 0x3e25d257, 0x3d0d3db5, 0xbdf8d4e9, 0xbe290d44, 0xbd75a77e, 0xbd411a33, 0x3d51077b, 
    0x3d68d0d8, 0xbd0c48d2, 0x3d4c1cf5, 0xbd88ac29, 0x3d410cd1, 0x3cee1b60, 0xbbae84e8, 0xbc26e586, 
    0x3be0f2da, 0x3d69359a, 0x3c551dec, 0x3cf616b3, 0x3d356fb7, 0x3db9e48b, 0xbd1df1bb, 0x3d83cf05, 
    0x3b8d1868, 0xbd5977d0, 0xbc8d7b10, 0x3d183f4f, 0x3cfa6cf3, 0x3d8bcd50, 0x3d6c37b2, 0x3dd00925, 
    0xbd3b245f, 0xbcc00df7, 0xbd61a57c, 0x3d4fa3c1, 0xbbb1a049, 0xbced1eb2, 0xbcde766b, 0xbca3949d, 
    0xbc814b70, 0x3c3d3e99, 0x3d204249, 0xbd490c87, 0x3c072f45, 0x3d4ff835, 0x3c5a7637, 0xbc68ce4f, 
    0x3d44fc5b, 0xbd80efcc, 0x3cdbdf53, 0x3d58ca79, 0xbbc58f10, 0x3db160bf, 0xbd690722, 0x3a95646a, 
    0xbca42345, 0x3cb5d0f4, 0x3d5f1cb2, 0xbb2b0399, 0x3bce42c1, 0xbc18d769, 0x3db1458a, 0xbcfb6a24, 
    0xbbfe0034, 0x3c9cb7bb, 0x3ca46ffc, 0x3d5b548c, 0xbd4486f7, 0x3d7d4e8d, 0x3c15bfc6, 0xbd16ae86, 
    0x3d3e9478, 0x3c3981bb, 0x3d4e58fe, 0xbc14772e, 0xbcc6294d, 0x3cd540be, 0xbd682b59, 0x3da3a091, 
    0x3d6c2860, 0xbc32f5cf, 0xbd493e2b, 0xba8b8bd3, 0x3cf1031a, 0xbc9a59c3, 0x3d81d984, 0x3d83a689, 
    0x3d8edc48, 0x3d3b675b, 0x3c460e61, 0x3c4704c8, 0x3da9fcc7, 0x3d0a49bd, 0xbcce0bde, 0x3d84cac4, 
    0x3c0db532, 0xbb7b6e54, 0x3cff31e0, 0xbd776932, 0xbcceaf68, 0xbd4d692c, 0xbd13e8b3, 0x3c4b3e9a, 
    0x3c0dcb40, 0x3d19da46, 0x3cfd3357, 0xbd343074, 0xbc568923, 0x3d137ff9, 0xbb75219c, 0x3d19f616, 
    0x3d143612, 0xbc0cedf7, 0xbd8e1f99, 0xbac6c89d, 0x3b4b9cbc, 0x3d91461e, 0x3bfd3ed7, 0x3d1160ac, 
    0x3c127a1b, 0xbd3652f0, 0x3d82e735, 0x3d51d5a6, 0x3ca693d1, 0xbc580176, 0x3cb40088, 0xbd158233, 
    0x3c234f8f, 0x3d9b407f, 0x3da4891e, 0x3d475c49, 0x3da3c55c, 0x3ced71b6, 0xbd6aa985, 0x3d8cf3ca, 
    0xbd34445f, 0x3d4fecda, 0x3bd65e39, 0xbd0b3502, 0x3d55410d, 0x3d3e5b49, 0x3d902b68, 0xbd2882ba, 
    0xbd945cdf, 0xbc5fc258, 0xbca5e395, 0x3d861bee, 0x3d71ed2b, 0xbd820fee, 0x3c058a34, 0x3d9ffb70, 
    0x3d429fe7, 0x3d846743, 0x3d87cefe, 0xbd4a0cff, 0xbeb42a5d, 0xbe7d7b91, 0xbe8ea37a, 0xbede8da8, 
    0x3c356c37, 0x3dda3df2, 0x3cef0b86, 0xbde8b38c, 0x3e12c837, 0xbe5f9916, 0x3e2582eb, 0xbed727ae, 
    0xbc859790, 0x3e10878a, 0x3e8f3caf, 0x3e8e9b0b, 0x3da6ed99, 0xbe9968e3, 0x3e5b853b, 0x3ecaa98f, 
    0x3e4580ca, 0xbec9849f, 0x3e9d46f1, 0xbebd4870, 0xbd7459d7, 0xbda76ad4, 0xbeb4be09, 0x3e2d7c88, 
    0xbea56595, 0x3ec344fc, 0xbeb70e29, 0x3d4daf49, 0xbeb37682, 0xbd67c669, 0x3ed985dd, 0x3ebc221e, 
    0x3ebef19b, 0x3e9cc239, 0xbe6a9da1, 0xbd8695c7, 0xbe26203a, 0xbd5a5af0, 0xbe9516d7, 0xbeed7d3b, 
    0x3ebfc7dc, 0x3eed378c, 0x3e70d866, 0x3cdd25c8, 0x3e8b40a9, 0xbca586e6, 0xbe3d8c3b, 0x3e03d8a3, 
    0x3d14ea29, 0x3e086216, 0xbe33251b, 0xbed4ca68, 0xbd884c60, 0xbebf1db8, 0xbe3b1509, 0xbead5299, 
    0x3e5e9604, 0x3e99f972, 0xbe3c6e0c, 0x3e4b77e7, 0x3eee80d0, 0xbe9bc3f7, 0x3baf14b3, 0x3eb601d6, 
    0xbed1eb8a, 0x3e7b2807, 0x3d1e3de7, 0x3ebdd9da, 0x3e546c8e, 0xbd148658, 0x3c26ab33, 0xbd9564be, 
    0x3e3556f5, 0x3e8c4dae, 0x3e1583ef, 0xbdb668f4, 0x3ebf6d2d, 0xbe748e13, 0xbdae0b1b, 0x3c7c6860, 
    0xbe8cf001, 0x3e0425a2, 0x3e676f52, 0x3ea41c99, 0x3d654b9f, 0xbe8d15a8, 0x3e03923a, 0x3cf74511, 
    0xbdbffa58, 0xbebca782, 0xbd042e7b, 0x3e891ca7, 0xbee147f6, 0x3e875891, 0xbe8f2fa0, 0xbecf95cc, 
    0x3e4f99a8, 0xbeaf380c, 0x3ded6ea8, 0x3e81cba3, 0xbd9aa98c, 0xbe38468c, 0x3bab0e0e, 0x3e6c64d6, 
    0xbefc1b0d, 0x3dfeae34, 0x3e9ec8b3, 0xbea2c466, 0xbeb0c53f, 0x3e9f6d2f, 0x3e459c1e, 0x3eec10bf, 
    0x3d89c2c7, 0xbed38301, 0x3de99e1b, 0x3ebd3df5, 0x3eab64ba, 0xbe8529e5, 0x3e6ad022, 0xbeb81347, 
    0xbed20833, 0xbe917dad, 0x3ecb29a8, 0x3e81dd5e, 0xbe3d79fb, 0xbe96c12b, 0xbdcd0b23, 0xbd0b49c5, 
    0x3e684869, 0x3ec813ff, 0x3eaf2cb4, 0xbeee093e, 0xbe4f990d, 0x3e857e73, 0xbec5fbe1, 0x3ea2ceb1, 
    0x3ccaa870, 0xbe180f77, 0x3df208fb, 0xbed58920, 0x3e444ad1, 0x3e06e35e, 0xbd2ed677, 0x3ec98cd1, 
    0x3dc47ee2, 0xbea48ec8, 0x3e459ef2, 0xbe04a3ad, 0x3e00b537, 0x3e2c1f60, 0x3e88ff81, 0xbc2ecb44, 
    0x3da0c2f4, 0x3e65d483, 0x3d61c573, 0xbad919d3, 0x3d7aef04, 0x3cdc5a42, 0xbdcefe54, 0xbc0d7d4c, 
    0xbd1c0381, 0xbe453e40, 0x3d899d1d, 0x3e05b177, 0x3d60a2c2, 0xbe298d0e, 0xbd08f21e, 0xbe318c18, 
    0x3de167b2, 0xbe48f438, 0x3dd0d3eb, 0x3e8c2fb5, 0xbe7d8bbf, 0xbde02050, 0xbdd25d23, 0x3e83ca29, 
    0xbe31c1d1, 0x3e62eedd, 0x3e90fe1c, 0xbdeb3156, 0xbe0e7455, 0xbe0df81e, 0x3d320892, 0xbe0db778, 
    0x3e7432ea, 0xbe62609c, 0xbdae912b, 0x3e82a032, 0x3d8f9ded, 0xbe10ff28, 0xbe8faa51, 0xbe42eed2, 
    0xbe08efc1, 0x3e05bc68, 0x3d8cb31a, 0x3b8a63da, 0x3db05936, 0xbe4cc4cf, 0xbe488497, 0x3e9a33d6, 
    0xbde7ae95, 0x3e21df90, 0xbcb09559, 0x3dd7a345, 0xbda66122, 0xbd0613e9, 0x3e2d51f0, 0xbdcde30f, 
    0x3c078d95, 0xbe0f7f42, 0xbdeb870e, 0xbd5f1bec, 0x3cb90f56, 0xbd926f8e, 0x3e6bd08b, 0xbdd4d033, 
    0x3d4b7e54, 0x3b8bc4fc, 0xbe0f1a94, 0x3d48b46e, 0x3d9c0a00, 0xbd30aa57, 0xbe59b671, 0xbd8d7cb4, 
    0x3e4fb428, 0x3d775bc3, 0x3c7845da, 0xbdcab698, 0xbe449617, 0x3e9692be, 0x3d9a814a, 0xbe52ff1e, 
    0xbe22c576, 0xbe60a03f, 0xbdf7380c, 0x3e361d87, 0x3d871cba, 0xbe8177ed, 0xbe1ec751, 0x3dc80c93, 
    0x3de7af2d, 0x3cf44f88, 0x3dfa28f0, 0x3dd11498, 0x3ea34d6a, 0xbd304820, 0x3d580b44, 0xbdbe26ca, 
    0xbe584cb9, 0x3e9d75d7, 0xbe643e26, 0x3e1583a3, 0xbe39b6db, 0x3e118103, 0xbe005c50, 0x3e44c6f6, 
    0xbe11e5de, 0x3e761d30, 0xbdf872c0, 0x3e2a067d, 0xbe8afa21, 0xbd6b8703, 0x3e3460cb, 0x3e1b7a25, 
    0xbe109a5a, 0xbe71fd1f, 0xbe93568a, 0xbe1130d5, 0x3e3570b2, 0xbd859d2e, 0xbdd6e8ee, 0xbe29c3e5, 
    0xbd1bf437, 0x3e49f71f, 0xbce09e42, 0x3e8d24c3, 0x3e9e01c2, 0x3d85bbd9, 0xbd9a90a9, 0x3e296407, 
    0xbd7c72b3, 0xbe09926a, 0x3e0eb73c, 0x3e9103f8, 0x3e17f935, 0x3dd61bc0, 0xbdfd73eb, 0xbe6285d0, 
    0x3e1d7357, 0xbe801854, 0xbe70260c, 0x3e13751c, 0xbdeab2da, 0xbe11d45c, 0xbe13b880, 0xbd4dca6b, 
    0x3ec5042e, 0xbe8c43e4, 0x3d4a376d, 0x3f0a89bb, 0xbe6f0f48, 0xbe0d7055, 0xbf1bae0e, 0x3e42b3cb, 
    0xbe413214, 0xbe6f2c2d, 0xbed38428, 0x3e9618a5, 0x3e8e99db, 0xbe8deb68, 0x3ec7a101, 0xbea7372d, 
    0x3f1a8bdc, 0x3c2aa8c5, 0x3f1898e8, 0xbd49df25, 0x3e755e80, 0x3eb2a38f, 0xbcec7347, 0xbe1bd57e, 
    0xbd57bfd7, 0x3ea3c4bb, 0x3f11a580, 0x3d30de2b, 0xbf11431f, 0x3eae78c7, 0xbebd9fbf, 0xbb58ddb7, 
    0x3d54c723, 0x3e0b4512, 0x3ed9a55e, 0x3e92ea35, 0xbef619ac, 0x3efe9dd4, 0xbeaadbd6, 0x3e896546, 
    0xbf18ab16, 0xbdfe0379, 0x3f10aad8, 0x3e86f21a, 0xbee59bbc, 0x3f1f16e7, 0xbf00788b, 0x3dc1ca01, 
    0xbeddfc69, 0x3db8b15c, 0xbe8c8101, 0x3e6e683e, 0xbeb26a6f, 0x3ef64919, 0xbf18d113, 0xbef5bf6e, 
    0xbe8dd6f3, 0x39ecd34d, 0xbebfd791, 0x3ed070bd, 0x3eb740ec, 0x3eff13e6, 0xbed96e40, 0x3ed264fd, 
    0x3f127753, 0x3e3dbfdd, 0xbe913903, 0x3d89bd93, 0xbd785987, 0xbf048961, 0xbd39efa1, 0xbf0ad2d7, 
    0xbe0c4541, 0xbef8889f, 0xbd80099d, 0xbf0a1874, 0xbd121f3c, 0x3e93a875, 0xbe496e84, 0xbe51bf81, 
    0xbe4697ba, 0x3e1bbaf4, 0x3ee458b6, 0xbef1325e, 0x3dfd1e53, 0xbed1ad4e, 0xbe4adede, 0xbe2d2cc9, 
    0xbe8f3d17, 0x3eb45f11, 0xbeaeb376, 0xbe83dec6, 0xbd200cc9, 0x3eb01c0b, 0x3ec0f916, 0x3ec3dc8c, 
    0x3e9fb0b6, 0xbf08664c, 0xbea8b9ca, 0x3ded421d, 0x3d550648, 0xbf047d9f, 0x3ec6ddaf, 0x3edf5f7c, 
    0xbedcf9e0, 0x3f033311, 0xbf1469ea, 0xbe8913cb, 0xbe62a8f8, 0x3ee91d62, 0x3d5efb8d, 0x3e584a0c, 
    0x3eefbf8f, 0xbecdf1ec, 0x3e4587d8, 0x3f1269db, 0x3ea6fe38, 0xbe9c9d38, 0xbe8e1820, 0xbd8da975, 
    0xbeb77cbe, 0x3eb1d5b8, 0x3e7413c7, 0x3e465701, 0x3e9425af, 0xbd0422a0, 0xbd436dca, 0x3ec47774, 
    0x3e9b591f, 0x3db08b6f, 0x3e8d5dee, 0xbeeb4b5a, 0x3d68c528, 0x3e4b5f5e, 0xbe3efd56, 0xbf199ed7, 
    0xbea5b256, 0xbdb5038c, 0x3efa5093, 0x3ef13969, 0xbf108065, 0xbeec928a, 0xbd9a3b6d, 0xbd93e5a8, 
    0xbe95466e, 0x3f123d14, 0x3e92f7ad, 0xbb93872e, 0x3b2804d5, 0xbf12859c, 0xbe54a30d, 0xbdd50557, 
    0xbe729db4, 0x3eae3dc2, 0x3e463932, 0x3e595aed, 0xbd57a6fe, 0xbebc1902, 0xbf010d89, 0xbe20b86d, 
    0xbef4e594, 0x3e8c354a, 0x3e8d01ef, 0x3e9cfc87, 0xbdadd249, 0xbe0b3035, 0x3dd7270c, 0xbd643ba1, 
    0xbbad39ea, 0x3e299af3, 0x3e9549d2, 0x3ed56b03, 0x3e3e1132, 0x3ddadd50, 0x3cf68a31, 0x3e049632, 
    0x3e6c76fa, 0x3c995734, 0xbef318a3, 0x3dfe2578, 0xbe2acbbe, 0x3ee3cc5c, 0xbec897aa, 0xbe7d3bab, 
    0xbea2cbc2, 0xbe24f63a, 0x3edb60a7, 0x3e65b126, 0x3ec548d2, 0x3ee1799a, 0xbe9373ad, 0xbd3b3d6d, 
    0x3e2cc35e, 0xbe8936ae, 0x3e49d036, 0x3ea7e736, 0x3e5e4563, 0x3ee0cd75, 0xbcdd3b8b, 0x3ebbe747, 
    0xbe1e85d0, 0x3e6ae9f1, 0x3e1cc1f7, 0xbed54777, 0xbec25289, 0xbd048962, 0x3e0bc818, 0x3ec10a2a, 
    0xbe8e75a4, 0xbd2a43c0, 0xbbe7ae23, 0xbb86e507, 0x3e221cc5, 0xbe23daf7, 0x3e0d077b, 0xbd890f03, 
    0xbead76b9, 0xbdc20a4e, 0xbef432d8, 0xbeca2a0a, 0xbee41936, 0xbe3d0efa, 0x3dea1a9f, 0xbc7e7d92, 
    0x3edf06a3, 0x3d83a5ff, 0xbe69259d, 0xbe0b09a1, 0xbed9aa2c, 0x3ed0dbdb, 0x3e8d6346, 0x3d7214d4, 
    0x3e830afb, 0xbeab2130, 0xbed15686, 0x3eac153d, 0x3ecb0d5a, 0x3e93344b, 0xbdea90cd, 0x3d25b2f0, 
    0xbeafd79b, 0xbeb77476, 0xbe943236, 0x3e2fecac, 0x3d4d2753, 0x3d2078a4, 0x3d23a09f, 0x3e5768ce, 
    0x3e826a68, 0x3e6d7146, 0x3da336a2, 0x3ec8e7a2, 0xbe1ebb9e, 0xbe47a6c5, 0xbe367c9f, 0x3d84fb8d, 
    0x3ecd9114, 0xbeb1102c, 0x3d27e8f8, 0xbebe7da9, 0xbddc69b6, 0xbed399d1, 0x3db52ba4, 0xbca42322, 
    0x3e368f1b, 0x3cff8a7c, 0xbee80578, 0x3d2bafa4, 0x3d75f64a, 0xbeee793d, 0x3e9dfaee, 0xbd4728c0, 
    0x3db1a5ef, 0xbe60a895, 0xbe6df511, 0x3d5f7d68, 0xbdfbbd39, 0xbe190423, 0xbf04e3f9, 0xbea48667, 
    0xbdb95314, 0xbee848c3, 0xbebab981, 0x3ee9655c, 0x3e6268ff, 0x3d30f9bc, 0xbde20424, 0x3ecb407d, 
    0xbe4b283e, 0x3d0bbb18, 0xbd9b4fd0, 0xbe9c85ed, 0xbeeab82d, 0x3e850936, 0x3ed6f397, 0xbee9a223, 
    0x3e0981b3, 0xbeea8021, 0x3e2fdc8b, 0x3e6ae7e2, 0x3def7660, 0x3c681adc, 0x3d8576f4, 0xbd42034f, 
    0x3de3c03b, 0xbd4be833, 0xbdd6f8f5, 0xbbaf49b5, 0x3c8efced, 0x3d8a5000, 0x3e034dce, 0x3dd2cad7, 
    0x3dae9623, 0x3dfe3efc, 0xbcac8b84, 0x3d0ab9b4, 0x3d63736a, 0xbd0b9e2b, 0xbc8decf8, 0x3d020ee4, 
    0xbcaace11, 0x3ba9fe02, 0xbc865e60, 0xbd112217, 0x3dbb3cee, 0x3d802254, 0xbde7e12f, 0xbdb381b5, 
    0x3d29fcd2, 0xbd92b878, 0x3ddeeb6e, 0x3d1c20a3, 0xbd9eae95, 0xbdd54190, 0xbd388cf4, 0x3d5d0266, 
    0xbdf22c6a, 0x3d974360, 0xbcf00b24, 0xbd79cfc1, 0x3d90dfec, 0xbda6cafb, 0xbdbbc74f, 0x3cfbfa24, 
    0xbdbb7961, 0x3d19b4b0, 0xbcbb61ab, 0x3d9bab07, 0xbd943661, 0xbc036ac9, 0xbcc590da, 0xbcbad264, 
    0xbdd72120, 0x3c73bcf2, 0x3dd3d90f, 0xbd530789, 0xbc71e6dc, 0xbdc90e30, 0xbdc869fe, 0x3d2f002c, 
    0x3d8559a5, 0x3d45051b, 0xbcecfdee, 0x3e11cf35, 0x3d1431e0, 0xbbd22c9e, 0x3dd40c15, 0x3da11d18, 
    0x3d0f0fcc, 0xbd202b5a, 0xbd96dbf6, 0x3c4bfc4a, 0xbdd7e740, 0x3d4df593, 0x3d1e4c42, 0x3d8258a4, 
    0x3dc196e0, 0x3db1fa52, 0xbd4c9e93, 0xbdc23ab7, 0x3c908645, 0xbcfd771d, 0x3d47ac7a, 0xbd35d23b, 
    0x3c86dc94, 0xbc72e3ce, 0xbc84d3b9, 0xbd21589e, 0x3c02f249, 0x3c323fb5, 0xbd9b663b, 0x3ddac742, 
    0xbde124ae, 0x3d68159d, 0x3cb20824, 0x3d4314c9, 0x3dba7303, 0x3d0de831, 0x3c691f17, 0x3de99db8, 
    0xbdb1d001, 0x3b894efc, 0x3d973056, 0x3d8912f8, 0xbdc528e0, 0x3e00aadb, 0x3d00195c, 0xbde28491, 
    0xbd72faa5, 0xbdba1f03, 0x3d71726f, 0x3da22592, 0x3e1259c4, 0xbd9916a1, 0x3e184e13, 0xbce0e0b4, 
    0xbd9b4ca6, 0x3ddbae9b, 0xba682163, 0x3d493326, 0xbdbd1dea, 0xbda1d70b, 0x3dbbf4e3, 0x3da74d0e, 
    0xbcefa4b6, 0x3d9af3e0, 0xbc16efdc, 0x3cc28301, 0x3dfb1b01, 0x3da2f288, 0x3dd6e7c2, 0x3dcbde36, 
    0x3caaf4c4, 0x3cbf03c6, 0xbcede2c4, 0x3d8cb846, 0xbdd76d5d, 0xbdd63ed8, 0xbbfc3e92, 0xbd9b5860, 
    0x3ddbb0e6, 0x3b3953fa, 0x3dfdf0ff, 0x3c47f4f0, 0x3db4a0a4, 0x3c80e129, 0xbca32ed9, 0x3d736294, 
    0x3d99af7e, 0x3c481042, 0x3bf7dd27, 0xbda58b67, 0xbabf0e3d, 0xbaa0e35f, 0xbc4c0264, 0xbd542e3a, 
    0x3d41a1b9, 0xbdcd7566, 0xbca8124b, 0xbdbc8718, 0xbdbc6a56, 0xbc891960, 0xbc1cfd5e, 0x3da3ed5e, 
    0x3dd87f1a, 0x3d58497f, 0x3c66e070, 0x3d718825, 0xbb51276f, 0x3c3851ea, 0x3d4359f8, 0x3da0080d, 
    0xbc9c62f7, 0x3d71a9ca, 0x3d396aad, 0x3db3020e, 0x3c6c98fb, 0x3d34ab19, 0x3da9bf2e, 0x3da1f0b8, 
    0xbd98a636, 0xbbbc05db, 0xbd8d24f5, 0xbdb1c5c7, 0x3d61aeb2, 0xbd685b51, 0x3c9d0b1d, 0x3d8d93a3, 
    0x3dc9c527, 0x3d849ca6, 0x3cc162ad, 0x3d4f64e8, 0x3d8db8da, 0x3d888fb0, 0x3d8009e7, 0x3c7baf55, 
    0xbceb2253, 0xbcd21960, 0x3cad4271, 0x3d8034bb, 0x3d8ecdc4, 0xbda54d04, 0xbdaa0608, 0xbcd9e909, 
    0x3dae2432, 0x3d948791, 0xbdb1b69b, 0xbdba4abf, 0x3d8ce88a, 0x3d7e982e, 0xbdac56fc, 0xbc8de1d7, 
    0xbd4fee6e, 0x3c6e9e32, 0x3d9d65f5, 0xbccb70cd, 0xbc0c6bdf, 0xbcdf0c12, 0xbdd596eb, 0x3d35318c, 
    0x3d99cfe9, 0xbb54f571, 0x3d7bd5b0, 0x3c3b8ac5, 0xbc27ada3, 0x3d803f74, 0x3da55062, 0xbdadef50, 
    0xbd6debf7, 0x3da4519a, 0xbda195cf, 0x3cd85278, 0x3d23d509, 0x3c9f7991, 0x3d8a059d, 0xbd598b07, 
    0x3d255314, 0x3d8a6e5d, 0x3db500fe, 0x3de821ab, 0x3d64e1ea, 0xbc31abf8, 0x3d39a767, 0xbd5c8623, 
    0x3d849ad7, 0x3d9342ae, 0xbd59c03f, 0xbd90e7ce, 0x3a7798ee, 0xbd97d719, 0x3d16e414, 0xbd05f3c9, 
    0xbd9c7599, 0xbd1f3e9b, 0x3c457898, 0xbcadb0c8, 0x3d2e054d, 0x3d598c13, 0x3c63f1be, 0xbcb302fa, 
    0xbc6dff5f, 0x3cd25f78, 0xbdbee837, 0x3da82c1d, 0xbcffc976, 0x3cb00421, 0xbc8a36a2, 0x3d2e8816, 
    0xbd4f43d7, 0x3c8f6d3f, 0x3d82eadb, 0x3c9ebb70, 0xbbb22657, 0x3d8f3b90, 0x3d30fc96, 0xbb48e0f3, 
    0x3d346718, 0xbd415a50, 0xbd8734bd, 0x3c81b06d, 0x3d2e43c8, 0xbd48535f, 0xbd34359e, 0x3d3daa0b, 
    0xbdcf9ccc, 0xbd2c3f3e, 0xbce0ec52, 0xbd9cb5f5, 0x3dbc1c45, 0x3dd22c87, 0x3d9b356d, 0xbcceed08, 
    0x3d7f524f, 0x3ba41a5c, 0xbd7dadaa, 0xbd79a2e3, 0xbd282f0b, 0x3bd64c14, 0x3d3aa85d, 0xbd806c8f
};

static const uint32_t _K23[] = {
    0xbfb31338, 0xbfc17970, 0x3fa34b14, 0x3fc9caca, 0x3e2425b6, 0xbfd90276, 0xbfc1e4fe, 0xbfd576b7, 
    0x3f3e9cc8, 0xbfdd1fdc, 0x3e6b0c45, 0x3fca312b, 0x3f85d989, 0x3f9b08da, 0xbfdf79a0, 0xbfda8097
};

static const uint32_t _K27[] = {
    0xbe4ca4f9, 0xbe194be2, 0xbe1afcd1, 0x3e0ca314, 0x3dd236b8, 0x3deeddbb, 0x3d19f3d0, 0xbda639a9, 
    0xbe07e38c, 0xbd06e16c, 0xbdf24728, 0x3ddab387, 0x3df55b22, 0x3e826f54, 0xbdd7b57f, 0x3e272479, 
    0xbe1825f5, 0xbe7753dd, 0xbe046511, 0x3df3d9f2, 0x3c5382b0, 0x3df93de1, 0xbe4d3988, 0x3da632ae, 
    0xbd14666d, 0xbe045178, 0xbd421dfd, 0x3cf277f7, 0x3e1f5f14, 0x3d023653, 0xbbc03559, 0xbe6bec9b, 
    0xbe0dc6d9, 0x3e66fa49, 0xbb5f8f64, 0xbd947ec0, 0xbd4b7a30, 0x3e538bd4, 0xbddc6982, 0xbdee6ede, 
    0x3d66ae81, 0xbe7e45b1, 0x3e4b98dc, 0x3db4e8d1, 0x3dab7527, 0x3e80ab95, 0xbda796bd, 0x3e0c5b81, 
    0xbe0fc56c, 0x3e54d172, 0x3dc43639, 0xbe2a4938, 0xbe835ca5, 0x3e4cff7f, 0x3e4f97d3, 0x3d3bb9c2, 
    0x3cb9e0b3, 0xbe2db8fc, 0xbe342816, 0x3e143e3a, 0x3e782ca4, 0x3e4df2cd, 0xbcd97b01, 0xbd6cad36, 
    0x3daf747c, 0x3dd581aa, 0x3e232bb3, 0xbe714606, 0xbd04880c, 0x3db75e84, 0x3d1393ea, 0x3c219696, 
    0xbd8022a8, 0xbcb3de40, 0xbe9b376b, 0xbe4231e8, 0x3d799e80, 0xbd81b674, 0x3e1e0dbc, 0xbd11f505, 
    0x3d0ba8e1, 0x3d817aed, 0xbe219139, 0x3e2be188, 0xbe3ced7b, 0xbd14e39f, 0x3cc5aef8, 0x3e036f5b, 
    0xbe435f6a, 0xbb86a6da, 0x3c233cb0, 0x3e4645f0, 0xbe3ca3c8, 0xbe49bc96, 0x3dd54fef, 0x3dccf6e2, 
    0xbe535e4f, 0xbd86a591, 0x3e2a03ea, 0x3e39e6a8, 0x3e0436b3, 0xbe516ec9, 0xbe4792b6, 0xbdc7e52d, 
    0xbde1cf95, 0xbe3ef30e, 0xbcc943c8, 0xbdc0358b, 0xbe45e92a, 0xbcba0c30, 0x3bc657e2, 0xbe2b9efd, 
    0xbcecdad9, 0xbe680b34, 0xbd0683ff, 0x3c15a5ce, 0xbdd178c0, 0xbcfa6470, 0x3e386c9c, 0x3d22e22d, 
    0x3d6a2542, 0x3e36bd9c, 0xbe834a70, 0xbdad7f49, 0x3daf0708, 0xbe1626cb, 0x3d6dffbf, 0xbe3a2f1e, 
    0x3db5c741, 0x3d344e6b, 0xbce6e239, 0x3de5eefb, 0xbd340a71, 0xbdedf52f, 0x3dfafc8b, 0x3e068920, 
    0xbe624b5b, 0x3e5ffe1e, 0x3dc054c5, 0x3d590d80, 0xbdd29fb6, 0x3e08d3eb, 0x3ce812a4, 0x3de3dcdf, 
    0x3e5ebb33, 0x3df3516e, 0xbd8a8625, 0xbe2041ac, 0xbe61e2d2, 0xbdde2c87, 0xbc8d06f8, 0xbc903b38, 
    0xbd2f037c, 0x3dbef8e2, 0x3e815b97, 0x3dcfac81, 0xbe074378, 0x3dbcbdf6, 0xbdb28595, 0x3db6123e, 
    0x3e31b4a0, 0x3e47f474, 0x3bc7a049, 0xb953cd49, 0xbe57e9aa, 0xbe61753b, 0x3d18dada, 0xbde21a1e, 
    0xbda486ed, 0x3e36816e, 0x3df41f7c, 0x3e2ef50b, 0xbd42f9f6, 0x3d558649, 0xbe174a78, 0xbd0a9f4b, 
    0x3e7c56c4, 0xbe68c5d9, 0x3e839ba5, 0x3d996310, 0xbd088f9b, 0xbd931021, 0xbd876a06, 0x3d314aaa, 
    0xbe1bf003, 0x3e0cbd52, 0x3e688f46, 0xbe3c7860, 0xbddf32e3, 0x3bff7d41, 0xbe602ad8, 0x3d30f5bf, 
    0x3e8b4a7b, 0x3e7d4591, 0x3dd0eca5, 0x3e54df53, 0xbe33d921, 0xbd88b746, 0xbe04c316, 0x3e26b67a, 
    0xbe27cb6f, 0x3e2658b0, 0x3e33e9db, 0x3e631e16, 0x3c9dc2c3, 0x3e07f721, 0x3ceb052a, 0x3e027adf, 
    0x3e669c7b, 0x3e6fe1b1, 0x3d76baff, 0xbe735bd8, 0xbe577da2, 0xbc989050, 0x3e6145dd, 0xbc2445af, 
    0x3e223482, 0xbe40c3fb, 0xbe82a371, 0xbd25701c, 0x3ce98898, 0x3d9994d6, 0xbc96dc80, 0xbe11ed6a, 
    0x3e590d0c, 0x3db6a25f, 0x3d37be35, 0xbdc43b8d, 0x3e599995, 0x3daf0437, 0xbe0d86a6, 0xbdac0a96, 
    0x3e07d697, 0xbe511f11, 0x3da18708, 0x3d09333f, 0xbc27e89e, 0x3dd723c1, 0x3dbb9a18, 0xbdc01d91, 
    0xbd3f0803, 0xbe239c01, 0xbe616406, 0xbd8fb9b0, 0x3e63b6f2, 0x3dfad2d0, 0x3e1bd772, 0x3d70f696, 
    0xbd2f71df, 0x3e1a8c0a, 0xbe4d00b7, 0xbe75f6c0, 0xbdf3a134, 0x3e075dc4, 0x3e3e9f39, 0xbd2fec30, 
    0x3e4da113, 0xbe3f9f18, 0xbe403ef2, 0xbe3f20dd, 0x3e41ddb5, 0x3dd7057f, 0xbd3e00d6, 0xbe123054, 
    0xbc7c5d63, 0xbc9e20fa, 0x3e215140, 0x3dbf5947, 0xbe53a0ca, 0x3e4bf8f4, 0xbcf4037f, 0xbd142e63, 
    0xbe828f0c, 0xbc459db7, 0x3e8855b9, 0xbe1c948f, 0xbdcc153f, 0x3e191859, 0x3c22692a, 0x3db80966, 
    0xbdfe556d, 0xbda544a9, 0x3de5cc30, 0x3e488712, 0xbd07dd44, 0xbbbf7ebc, 0x3e2654b8, 0xbdd8f725, 
    0xbe1a235a, 0xbd7538f9, 0x3d35296d, 0xbd0afe9e, 0xbda6fd68, 0x3cf7a8bb, 0x3d2f35e6, 0xbe3a022e, 
    0xbe75f081, 0xbe748bde, 0x3debda29, 0x3e53daa2, 0xbe33ffe5, 0xbdbb8c36, 0xbe59fb20, 0x3e02f9f5, 
    0x3d8f26bd, 0xbe680256, 0x3e7f4303, 0xbe5b8b7e, 0xbe44de1b, 0xbe1f51b6, 0x3d8864f1, 0x3cc9dd0b, 
    0x3e57b2da, 0x3e1fccd0, 0xbddab5d6, 0xbe6303aa, 0x3e7103d2, 0x3dc617e6, 0x3ded7620, 0x3dc66e6d, 
    0x3daf0220, 0xbca75aa0, 0x3dd6ab17, 0xbe52e7ea, 0xbe7f5477, 0x3e00ee07, 0xbe5ea847, 0xbe37d358, 
    0x3e2657d0, 0x3e437ba4, 0x3d999975, 0x3d7f2cee, 0xbd962ed1, 0x3e50feb4, 0x3e462f04, 0x3e0c4c07, 
    0xbe2ab5cc, 0x3e4bc235, 0x3df0dfaa, 0x3e5893cf, 0xbda2e56b, 0x3d6d2fa3, 0x3cf694c2, 0xbe2a69f1, 
    0x3d9e7f50, 0xbe425bb2, 0xbe45a942, 0xbded1ad7, 0x3d43014a, 0xbe20593b, 0x3e4dd76a, 0xbe00e58f, 
    0xbe0ad6b3, 0xbd7ef787, 0x3da4599b, 0xbe58db4e, 0xbd349db8, 0xbe08d649, 0x3de9d863, 0x3e5e1122, 
    0x3e3cd588, 0xbda20ac9, 0xbe828949, 0xbdca4c15, 0x3e204421, 0x3e1ed3ce, 0x3e2b45e3, 0xbdeeef4b, 
    0xbd20d40a, 0x3ddf359f, 0x3e5e227b, 0x3e1feab5, 0x3d44a37e, 0x3e432b96, 0xbd4afc3c, 0x3e3bb064, 
    0x3dc32cc2, 0x3d9da99c, 0x3e09e43b, 0xbdc50883, 0x3e02df7f, 0xbe04065b, 0x3d73ef1e, 0x3d2f6f2e, 
    0x3e034fc0, 0x3e6e5d3e, 0x3e20d825, 0x3e76a6c7, 0xbe59837a, 0x3c24ef10, 0x3df512f1, 0xbbbc12ab, 
    0xbd84ff5a, 0xbe1436d3, 0x3d573af2, 0xbe43fc3e, 0xbe152a35, 0x3d67b5d6, 0xbda4c217, 0xbd3b3f9c, 
    0x3e700637, 0x39bb4c62, 0x3deae9e3, 0x3dd80044, 0x3e5ab0cd, 0xbdbcff02, 0xbdcb1788, 0xbe1e1904, 
    0x3e10d457, 0x3e1663f6, 0xbe44fd05, 0x3d32a56a, 0xbe655b09, 0x3e2b8a22, 0xbc5b1b81, 0x3e4c80e3, 
    0x3d8343ee, 0xbe056757, 0x3e6b6391, 0xbdd4237d, 0x3e5adb10, 0x3d26c8e2, 0xbe031aa9, 0x3e0f26f8, 
    0x3e1b4fcd, 0x3b425cb9, 0xbbb1f22e, 0x3db625fa, 0x3dd90a9a, 0xbddfdf02, 0xbe4189fb, 0xbdb0c395, 
    0x3cfe359b, 0xbe629f03, 0x3e1b38f8, 0xbe1f9f7b, 0x3e773352, 0x3e2c41e9, 0xbbb7f068, 0xbdeae089, 
    0xbe1e5a14, 0x3cf69190, 0x3d8e497a, 0x3daf4f58, 0x3e00a4d6, 0xbd53f0d2, 0xbc572448, 0xbd0bf4c1, 
    0xbe3fb74f, 0x3ce6e338, 0x3de67892, 0xbe70782a, 0x3e3e5bf7, 0xbdc4ab9f, 0x3e206037, 0xbe1afd30, 
    0x3e6e7aa1, 0xbe3ce676, 0xbddc634d, 0x3d9a0016, 0xbe592cfc, 0xbda26868, 0xbd62b07a, 0x3e2abb82, 
    0xbda721c8, 0x3e3c0b09, 0xbdca8a96, 0xbde807b2, 0x3d352fbd, 0xbe1af305, 0x3e61a61a, 0x3dfc05d2, 
    0x3e6413ed, 0xbd5f97f2, 0xbd979a0d, 0x3e51518c, 0x3e270e03, 0x3d54d934, 0x3e39e595, 0xbe8139c6, 
    0xbcf363aa, 0x3deab47a, 0xbdb71520, 0x3e87b550, 0x3e1ab0c6, 0xbe0acc9c, 0x3d64624c, 0xbd2fda80, 
    0x3e46a93d, 0x3e86227b, 0xbe3862ee, 0x3c078f64, 0x3da0c9ee, 0x3dcad8c4, 0xbcdde057, 0x3db3666d, 
    0xbe09ec86, 0x3dc7b7bf, 0xbe27c6c2, 0xbe240bf4, 0xbe1667f7, 0xbe63a2da, 0xbddf4857, 0xbe2f0872, 
    0x3aa9f51d, 0xbdfc513d, 0xbd57ecbf, 0xbd668a5a, 0x3e5e1628, 0x3e2dfa62, 0xbe05967d, 0x3e2c9f70, 
    0xbe7f4bc7, 0x3e0e606c, 0x3c8d69ba, 0xbdc8348b, 0x3b08a769, 0xbd7f162c, 0xbc6977b5, 0x3d0aaa08, 
    0x3de6176e, 0xbdcade61, 0x3e39dcdc, 0x3dea75db, 0xbd895c29, 0xbe16707b, 0x3e225ec1, 0x3bd67d50, 
    0xbb9c52b1, 0x3e3e95fe, 0x3e69b376, 0x3e13ad8a, 0xbd98c30b, 0xbda30996, 0x3dcabb33, 0xbd46eb74, 
    0x3d8bf81b, 0xbe5cbb00, 0xbd4784cf, 0xbe3037a5, 0x3e40f61b, 0xbe67bb60, 0x3dc4d7a2, 0xbe227eed, 
    0xbe8339e0, 0xbd984a89, 0xbe7cfe7a, 0x3e6751a1, 0x3e241d0a, 0x3de8133b, 0xbe04bdff, 0xbdc6fb51, 
    0xbdd8fd5e, 0xbdbba259, 0x3d1665f2, 0xbe557356, 0x3e225400, 0x3dec92d5, 0x3de18536, 0x3e5c7447, 
    0x3e1d9d06, 0x3d7ae225, 0xbe7caa6a, 0xbd5e3a84, 0x3d9495fc, 0xbdce2c88, 0xbdbb98df, 0x3d82edbe, 
    0x3ddc3df8, 0xbe5ff72c, 0xbde04e08, 0xbd60d36a, 0x3d91a9ac, 0xbe0425f5, 0x3d83af9a, 0x3e0978a5, 
    0x3cbee8fe, 0xbe23365f, 0xbe313f5c, 0x3e118086, 0x3e29a72b, 0x3dbd5079, 0x3e68b4cc, 0xbe593e3d, 
    0x3e34262d, 0x3e5ba94e, 0x3d9d2073, 0x3dbfee61, 0xbd175f0a, 0xbdea94ea, 0x3d506617, 0x3e39aba2, 
    0xbdda047d, 0x3d2be89e, 0xbe2e9ee1, 0xbdbbcfbb, 0x3ccdb8bf, 0x3e818ce2, 0x3db08dd7, 0x3b8bdb47, 
    0x3df88f0b, 0xbd0ddf08, 0xbdfbf98d, 0xbe2dd8e2, 0xbe1498a6, 0xbbccf994, 0xbd8ec897, 0x3e2e7a3d, 
    0x3c33711c, 0x3e4a2057, 0xbe6661a6, 0xbe838410, 0xbe27be4c, 0xbe749b75, 0xbd908aec, 0xbddb40bb, 
    0x3e7eae84, 0xbe77d945, 0xbdf2a340, 0x3dff67c6, 0x3e2ccdfb, 0x3dba967f, 0x3e1b2115, 0x3dbfc031, 
    0xbc114ff6, 0xbd2c1fda, 0x3e1deeac, 0x3cbd7820, 0x3dabb169, 0xbe3475c7, 0x3dd12c52, 0xbd3de31a, 
    0x3e3c0158, 0xbe310809, 0xbdd27468, 0x3dd7668b, 0xbdaf64e9, 0xbe4b9dbb, 0x3dd47c59, 0x3e57011d, 
    0x3cbb224a, 0xbe200b15, 0xbe616c2d, 0xbdf9dc0e, 0x3df31299, 0x3dec2124, 0xbe33cba9, 0xbddbb2f7, 
    0xbe580e41, 0x3dea7214, 0xbd1ddfcd, 0x3e7df711, 0x3d7f9d8b, 0xbdf243bf, 0xbd776c0b, 0x3dc487ea, 
    0x3e49caa1, 0xbe31cbc6, 0xbe662e87, 0xbe734e0b, 0xbe047661, 0x3e2477b0, 0x3df87081, 0x3e062814, 
    0xbe53ae7b, 0xbd0f7e05, 0x3e3caad1, 0xbe1033fc, 0xbcdd6122, 0xbc9da712, 0x3ddfd98f, 0x3dd448cb, 
    0xbe731090, 0xbe5cfd49, 0x3e08d4b1, 0x3e65cfad, 0x3d0eaed8, 0xbd989c7d, 0xbda02bef, 0xbe27af92, 
    0x3e3db2c4, 0x3d6be733, 0xbe4f30e3, 0x3c60589d, 0x3e1a44ca, 0xbdeaf8f4, 0xbccb8eba, 0x3bbdbdde, 
    0xbe4a01cc, 0xbe7c54b8, 0x3e00fb7e, 0x3da1e88b, 0x3dbccd98, 0x3cf7d947, 0x3e72d284, 0xbe555b1d, 
    0xbe11cb6c, 0xbdefbe4e, 0x3e87ab84, 0x3d03d6a9, 0xbe39db6e, 0xbdb2cb65, 0x3e3f8305, 0x3e3f2215, 
    0xbe419159, 0xbe23c6d5, 0x3e6499f7, 0x3e56385b, 0x3e23bfa1, 0xbd9c0d01, 0x3d472dfe, 0xbe85bd03, 
    0x3caa5f8d, 0xbc9d6146, 0x3e354805, 0x3e3e7257, 0xbd3e81ab, 0x3de4fdb8, 0xbd5f3772, 0x3e48ef65, 
    0xbe54d2de, 0x3d8a9c5e, 0xbdb97b0d, 0xbd5be52f, 0x3d7aad70, 0x3dc5b61d, 0x3e3a6097, 0xbdc43ead, 
    0xbd1a578a, 0x3d1be9f1, 0x3e89793c, 0xbe4e85e7, 0xbe709668, 0xbe696e32, 0x3e813001, 0x3e4724fc, 
    0xbcff75c7, 0x3e60984e, 0xbe3573a5, 0x3d7130ae, 0x3d4d6c2b, 0x3cadf3dc, 0x3dc77781, 0x3daf62a5, 
    0x3ccbe746, 0xbdb6001d, 0x3b02817b, 0xbda82d4d, 0x3dc371f3, 0xbc86d240, 0x3e55140b, 0x3e159332, 
    0xbcce4fef, 0xbe12dd1f, 0x3da5f7ef, 0x3e1886fc, 0x3e58fc72, 0xbd997eb5, 0xbe39c300, 0x3e49e9fe, 
    0xbde06247, 0xbe368896, 0xbe39af44, 0x3e1a8e9c, 0xbe276d00, 0xbe08266c, 0x3e2858ae, 0x3dddeb54
};

static const uint32_t _K29[] = {
    0x3e8a6e78, 0xbe8399dd, 0xbe75f941, 0xbdbe529d, 0x3e5ca76b, 0xbcd86124, 0x3ea7bda8, 0x3e8ed11f, 
    0x3df148a7, 0xbd8d1ba0, 0x3cfe1fe5, 0x3f06b9c3, 0x3d4e426a, 0x3ee1d537, 0xbebd5f98, 0xbed7396e, 
    0x3d9d9940, 0x3c8c2121, 0xbee3ac0d, 0xbdf6b4c5, 0xbe66d9b9, 0x3e15589b, 0x3eb912ee, 0xbcd21af2, 
    0xbed4f369, 0x3ec37e5b, 0x3ce38fe3, 0x3eae5214, 0x3dfe127c, 0xbe0a9b02, 0xbdd1a687, 0xbef43a04, 
    0x3d4ff87f, 0x3ecd9ea0, 0x3e8b9d40, 0x3cf34a76, 0x3ec77dfb, 0xbd787504, 0xbe987ade, 0x3eea8ef9, 
    0xbe8cadb4, 0x3dc98252, 0xbe472175, 0xbc4c1511, 0x3e276eaa, 0x3e3b7b56, 0x3edfd2f8, 0x3de0b981, 
    0x3e014691, 0x3e4f6384, 0xbda5a5d2, 0x3d501e30, 0x3d920cc7, 0x3e89f494, 0xbe0c353e, 0x3ec0b203, 
    0x3eae1c23, 0x3e880ad6, 0xbe393a2a, 0x3eb1ba2d, 0x3e2c0fff, 0x3e9ef8c1, 0xbbed0a69, 0x3c325433, 
    0xbd4a92fd, 0xbe08a7a8, 0xbe8d660a, 0x3e74c48d, 0x3eb5317a, 0x3ebbe155, 0xbe092174, 0x3e456931, 
    0xbe4b12df, 0xbd678542, 0xbe5f984e, 0x3e27fe7f, 0x3e9deb7c, 0x3e6c7b5d, 0xbe69554d, 0xbe3305c1, 
    0xbd358f56, 0x3db843a4, 0x3b8a1d53, 0x3e88124f, 0xbe8f8662, 0x3e30b011, 0x3e76b304, 0x3e4a0745, 
    0x3dcfdec7, 0xbdfe1628, 0x3ddbf9f8, 0xbdb9ce41, 0x3e353496, 0xbcad780e, 0x3ee55495, 0x3ea57df1, 
    0xbe36a37d, 0xbecfe697, 0xbef58d6c, 0x3f022b93, 0x3eea0384, 0x3c7f6348, 0xbebb111f, 0xbec4a6cc, 
    0x3ed3e0c7, 0x3e2100d1, 0x3c2a7970, 0x3e412545, 0xbecdad31, 0xbe93e297, 0xbe04bf85, 0x3edb2691, 
    0x3e0d5943, 0x3ead867b, 0x3e2769e7, 0x3de89703, 0xbe98b0cc, 0xbee61d80, 0xbf0e459e, 0xbc991fa3, 
    0xbdb5bff5, 0x3d881b95, 0xbdb32795, 0xbef3de27, 0xbeda5465, 0xbea2f5ff, 0x3de8f746, 0x3e8a9378, 
    0x3da6a87c, 0x3ecbbf4d, 0xbedb3318, 0xbee99fee, 0xbeaf0136, 0xbd7f8630, 0xbf0e613f, 0x3e8fdc3e, 
    0x3edf7178, 0x3e4b0490, 0x3ef6b3cb, 0x3f03e31c, 0x3ee2ee0d, 0xbeeb8b34, 0x3d56541b, 0xbea7a49c, 
    0x3da74bdf, 0xbdc57e14, 0xbeb162ef, 0xbea26fe3, 0x3ca7e30b, 0x3e9f06be, 0x3e168915, 0xbe95cfc1, 
    0xbd9f0140, 0x3e140a11, 0xbc94195d, 0x3e672cf4, 0x3df25ebe, 0x3e0901f9, 0xbe104baa, 0xbb8deaf2, 
    0x3e1c9a55, 0x3dc4bc37, 0x3dcf7130, 0xbcb0fd9e, 0x3dbdc6e4, 0xbdb231c6, 0xbe4814fd, 0x3cd4b924, 
    0xbdd8f872, 0xbd61501b, 0x3caf6f7f, 0x3d87b1a0, 0xbd8c16f3, 0x3e0c8599, 0xbd4cf46f, 0x3e945e1a, 
    0xbdef54d4, 0xbd7c6cb0, 0xbe8f64f6, 0x3e8cbc79, 0x3e67ec2c, 0xbe8a75e7, 0xbd6d1b23, 0x3eac0726, 
    0x3e4da460, 0xbd846dcf, 0x3d4e00ea, 0x3b74d2ed, 0x3e0ec250, 0x3e260fa1, 0xbdac368d, 0x3e3ec73d, 
    0xbd3b435d, 0x3d7fc073, 0xbdcf9edb, 0xbe13a9d1, 0xbe877a13, 0xbca39427, 0x3e7d17fb, 0x3d013e06, 
    0xbdc07f58, 0x3d87d652, 0x3de91ec2, 0xbe8a1a72, 0x3dde5f09, 0xbe60b8e2, 0x3dc0f418, 0xbe9fe45a, 
    0x3eaf6607, 0x3ea0c913, 0x3e1e20c1, 0xbe3b9a7f, 0xbe817ca0, 0xbe539c50, 0x3d9929c6, 0xbe421a32, 
    0x3e1ce35b, 0xbec1b639, 0xbe3b2fb2, 0xbe55543c, 0xbda21551, 0x3db5235d, 0xbe505077, 0xbde1d7c2, 
    0x3e0c2f21, 0x3e3a9d81, 0xbeb68042, 0x3da28a4d, 0x3e9fba91, 0xbea48208, 0x3e97cb1f, 0xbd982a2d, 
    0x3e4dd867, 0xbe669478, 0x3d80b510, 0xbe68022a, 0x3e33c4c6, 0x3daa1d51, 0x3e8df464, 0x3d50a0be, 
    0xbde6615a, 0x3e7f8311, 0xbb0aad36, 0x3e08f70b, 0xbe120e4e, 0xbe023b23, 0x3d8e5f69, 0x3e7815d0, 
    0xbdf5574b, 0x3e92f23a, 0xbeffb2fd, 0xbd867265, 0x3eceb293, 0xbe68ad94, 0x3dbd72cd, 0x3e65f8d4, 
    0xbdf83754, 0x3e5472e7, 0xbdf71234, 0x3f09de63, 0xbf04d008, 0xbe65b620, 0xbf082b0f, 0xbe5e6d03, 
    0xbeac6af8, 0xbe7d8768, 0xbef1ba08, 0xbe7c7772, 0xbf05fd7b, 0xbcc9c19c, 0x3b931106, 0xbe857b10, 
    0x3d679a60, 0xbe03ae63, 0x3d19cbb5, 0x3efcbc36, 0x3eef2658, 0x3eab0a25, 0xbeac686e, 0xbdfcc557, 
    0xbe3a7c87, 0x3eaf5a68, 0x3caa795e, 0xbd17047e, 0x3e3b9f66, 0x3e3d43b8, 0x3e8194f0, 0x3eb5d41d, 
    0x3f197d4c, 0x3f16de2e, 0x3eea8c5a, 0x3ed86497, 0x3ea1271c, 0xbf216224, 0xbe38e3f8, 0xbe723adf, 
    0x3f3768a1, 0xbc0d5a27, 0x3db4a193, 0x3e00d121, 0x3ed50c70, 0xbeb03d96, 0xbd9631c8, 0xbef0d4ec, 
    0x3f2668bb, 0x3aed3823, 0xbeb1af4b, 0xbd9f88b6, 0xbe7fe117, 0x3f06fb21, 0xbd8ae890, 0xbdd9a4a1, 
    0xbe4ff739, 0x3e1e12cc, 0xbdc89e1c, 0xbef1f3da, 0x3f0211ab, 0x3ede34fb, 0xbdc0db7f, 0x3effa831, 
    0xbee8e053, 0x3e3a9cf5, 0xbd3bfd35, 0x3efaebcb, 0x3cb69484, 0x3eccf10d, 0xbe959842, 0x3e8901a6, 
    0x3eebe190, 0xbefd9678, 0xbe662827, 0x3e00bf8e, 0xbe427f5e, 0x3e20b97e, 0x3f170a37, 0xbf11c232, 
    0x3eb00247, 0xbdaeb369, 0x3e01a2b7, 0xbede0242, 0x3ef4f069, 0xbefaafaf, 0xbe49fcad, 0x3e51e55d, 
    0xbc9c62ce, 0x3e7384fc, 0x3b9ed66e, 0xbd610fe9, 0xbee9911c, 0x3c4a8c2c, 0xbf012ded, 0x3f0f7828, 
    0xbeefb8af, 0x3e0cb574, 0x3e12a2ce, 0x3f011110, 0xbefdc0fe, 0x3e7bec10, 0xbe48fa87, 0x3dfd117b, 
    0xbd5eeafb, 0x3da9980f, 0xbe61c7e1, 0xbe4440af, 0x3e92d396, 0x3da6bcb1, 0x3da85414, 0xbf001875, 
    0xbeae5061, 0xbeb627ce, 0x3e45e321, 0x3e7d0053, 0x3f02626e, 0xbedae6b3, 0x3e30b042, 0xbb87f8c1, 
    0x3e83d67a, 0xbf0ee762, 0x3ea48676, 0x3e2ea8aa, 0xbeaa1bdc, 0xbec6a34c, 0xbeeed1a9, 0x3ebed152, 
    0xbdf65422, 0x3cfc1ca3, 0x3cf58466, 0x3e9c241c, 0x3edadd4d, 0xbe83a524, 0x3e49dca9, 0x3cf39237, 
    0x3ea1e1d0, 0x3dfded30, 0x3e851aa5, 0x3e7c7f99, 0x3dd83c91, 0xbe8346da, 0xbd32f4fa, 0xbed9402d, 
    0x3ea267a6, 0xbd8d49f6, 0xbe00a170, 0x3e7ffb20, 0x3ece7920, 0xbe827e98, 0xbd9601f2, 0xbd59350e, 
    0x3da4a68b, 0xbe0cd6fe, 0xbec101cd, 0xbda5663c, 0x3e33cfa4, 0x3d2e02be, 0xbed2b886, 0x3e923d88, 
    0xbcd6cc8e, 0x3e24d7c5, 0xbe53db18, 0xbe318a89, 0x3e6e9039, 0xbe98fcb5, 0xbe48f099, 0xbe863654, 
    0x3d25499d, 0xbe4d9026, 0x3eb7f662, 0xbec8df63, 0xbd944925, 0x3ee73f18, 0x3e3e8067, 0xbe883d1b, 
    0x3d72c12d, 0xbefbfd3e, 0xbef04868, 0x3d410f4d, 0xbe4ac908, 0x3ed7dc82, 0x3ee70043, 0xbe15bda5, 
    0x3d419797, 0xbed875a8, 0x3e5acb91, 0xbe650833, 0x3ecd3f74, 0x3e1b2d51, 0xbe5f92b6, 0xbdc291d5, 
    0x3e2ec69d, 0xbd9c7182, 0xbed11919, 0x3eca8c5b, 0x3c1e4e69, 0x3daf380f, 0x3e39e29b, 0x3e8e85b7, 
    0x3df0dfbe, 0xbdcaa3df, 0x3def3446, 0x3ee4ad69, 0xbdfe1f29, 0x3e6d23f1, 0x3d30b965, 0x3d64b8ce, 
    0x3ec42844, 0xbd34d95c, 0x3eee4e3a, 0xbef0fd48, 0x3e99830c, 0x3db71718, 0xbeabe2e1, 0xbde1f4c9, 
    0x3ebb82c7, 0xbf00434b, 0xbea7a56b, 0x3bd65e1c, 0x3e5f6a50, 0x3f11d640, 0xbe246830, 0x3ea41e7e, 
    0x3ea250b8, 0x3e26ddfb, 0x3e25b7ca, 0x3ec2e77f, 0x3c7ee20f, 0x3bd18b93, 0xbe948868, 0x3e33a13f, 
    0xbeab4585, 0x3edb7c49, 0x3e8fba95, 0xbe561a53, 0xbebd2f66, 0x3d558be7, 0x3ea06342, 0x3ca9faee, 
    0x3ec6f126, 0x3e4ef2bb, 0x3e120b41, 0x3d942647, 0xbd42c972, 0xbea58cef, 0x3ce53ef8, 0x3e036a47, 
    0xbca09e8f, 0x3d45024d, 0xbe1bfaa3, 0x3d1c2262, 0xbe687aef, 0x3e7d3242, 0xbeb2d6e4, 0x3e088ae7, 
    0x3de50843, 0xbe346404, 0x3dad3d76, 0xbd8470e6, 0xbdf60ea3, 0x3ea84045, 0xbe092243, 0xbe86a25b, 
    0xbec7798d, 0x3ea871a0, 0x3d3b8a4b, 0xbe4e39a8, 0xbd7d678e, 0x3ec98188, 0x3e88f49b, 0x3df1885a, 
    0xbea4f657, 0xbd59de28, 0x3eec1f6d, 0x3f2665ac, 0x3f44b1ce, 0x3e6a9fca, 0x3e36475f, 0x3e7023e7, 
    0xbc94fec8, 0x3e984452, 0x3e0ebc72, 0xbe1d7abc, 0x3f289e6f, 0xbf0851fb, 0x3f062372, 0x3dc4e95c, 
    0x3f3e0dd3, 0x3f27461f, 0xbee6458f, 0xbedfaa64, 0xbd82493b, 0x3df51600, 0x3eb1b277, 0x3f21600d, 
    0x3e43e5af, 0xbf5e7cec, 0xbf0e23cc, 0x3e24f8a2, 0xbe2228f7, 0x3f52b9b8, 0xbf0de768, 0x3f117cd0, 
    0xbea6eb8e, 0xbec53807, 0xbe930c33, 0xbe2470a5, 0xbf2ccfd9, 0xbebb691b, 0xbf210a03, 0xbf801e5e, 
    0x3e851d76, 0xbf03f0b5, 0x3e2d56b7, 0x3f1609c0, 0x3e9cb341, 0x3f010ee9, 0x3f4276c1, 0xbdf373f3, 
    0xbe828646, 0xbc999614, 0xbe4484da, 0x3dc922e1, 0x3e225180, 0x3e731477, 0xbd93446e, 0xbe1c2ab0, 
    0x3e0ee036, 0x3dbf12e6, 0xbd31d239, 0x3e5102f1, 0x3daf7ed2, 0x3e02b4fb, 0xbc046b7d, 0x3e88fe30, 
    0x3e2392eb, 0xbe509320, 0x3c94493f, 0x3da917d0, 0xbe7bd060, 0x3e365f4a, 0xbe7d3be5, 0xbc8d5f00, 
    0xbe7464d1, 0x3c8b989b, 0x3c9ce313, 0x3df06ad8, 0x3d6fa488, 0x3e5a59bb, 0x3e1877a3, 0x3db8d841, 
    0x3e312463, 0xbd8bb7ce, 0xbe32eab7, 0xbdb22ea4, 0xbe82ed7d, 0xbe0b767e, 0xbe50196a, 0xbd8e4e62, 
    0xbe512e9c, 0xbbaf4e2f, 0x3d727930, 0xbd9f5d4d, 0xbde00389, 0xbdc5f067, 0xbe5e81a8, 0x3e58f900, 
    0xbebd9a62, 0x3e89385b, 0x3e9211bd, 0x3c8fb756, 0x3ebbb841, 0x3e65e61b, 0xbd53a1f9, 0xbe7b8934, 
    0x3e4a9208, 0x3e899536, 0x3ebb0e5e, 0x3e28133b, 0xbca47b1c, 0xbe2f49b9, 0xbe2dc369, 0x3cdd5b60, 
    0xbe53320d, 0x3eaff172, 0xbcf1d3fe, 0x3d3e2283, 0x3d9a7905, 0x3ce7ba11, 0xbd1848d6, 0x3db96a6c, 
    0x3e0c4dcb, 0xbe4be169, 0xbeb7806f, 0x3e39807d, 0xbe9bdec2, 0x3e9d68d5, 0x3e24551a, 0x3e4dd263, 
    0x3e26e45c, 0x3d7db78e, 0x3e9b2e09, 0xbe41e2aa, 0xbeaebd01, 0xbdda2eb1, 0x3e1647d0, 0xbdf0bced, 
    0x3d161755, 0x3e35d20f, 0xbe7758fe, 0xbe7dd143, 0x3e418139, 0xbe1bf0b1, 0xbeddbae2, 0xbd5e8f2c, 
    0xbecd52c9, 0x3e7f954b, 0xbea8a15e, 0x3eaac7db, 0xbd92884b, 0x3e7ba84c, 0xbea1d9cb, 0xbe9ebb9f, 
    0xbeda5bb9, 0x3c83d440, 0xbeee5fed, 0x3d580919, 0x3cf7141d, 0xbe9cbcae, 0xbd95a874, 0xbe14f254, 
    0xbeed6a14, 0xbd8d2553, 0x3ddec5e7, 0xbe550180, 0xbe8db18e, 0xbee110e6, 0xbdca9b09, 0xbddba239, 
    0xbeb08b75, 0x3eb89eb3, 0x3eabc288, 0xbd7a06c2, 0x3ee2c1b6, 0xbebe9329, 0xbdc912b9, 0x3e8021fa, 
    0x3eb4e24a, 0xbe73d7dd, 0xbe55b8d3, 0xbc6e3f87, 0xbdb077e0, 0xbe6b01a7, 0xbe1e0b4d, 0xbecb6a9f, 
    0xbeb8173c, 0xbee03f91, 0xbc15b546, 0xbea6421a, 0x3eb52450, 0x3eb54ecc, 0x3e8f8707, 0xbe058722, 
    0xbce26bf0, 0xbd56c442, 0xbe870df2, 0xbddebdfa, 0x3e035a97, 0x3e651ca0, 0x3d3dca85, 0x3e722fb7, 
    0xbe9441b3, 0x3d1dbc0d, 0x3da5e040, 0x3e0ac1de, 0x3e277a8f, 0x3e3d88e2, 0x3e3d390e, 0xbcac635c, 
    0xbe8222c2, 0xbc2a071f, 0x3e50289a, 0xbe126039, 0x3bb82ed2, 0x3db2e72c, 0xbc7cb9d4, 0x3e607283, 
    0x3d6cc0bd, 0xbe498018, 0x3dc9cf40, 0x3e71c24b, 0xbe5421ea, 0x3d3c637c, 0xbe6781d6, 0x3e830876, 
    0x3dd3ab99, 0x3e788f85, 0xbe66b1af, 0x3e45fd98, 0x3e812b38, 0x3b8993ec, 0x3e6073b6, 0x3d9c89ff, 
    0xbe06931f, 0x3e5e95a3, 0xbe8a1526, 0x3e8d2774, 0x3d31474e, 0x3e6adda1, 0x3cc28b92, 0x3d5edd98
};

static const uint32_t _K32[] = {
    0x3c81e63a, 0xbf0713f2, 0xbf784c19, 0xbed8ad4f, 0x3e07852e, 0xbcca0538, 0xbeca598c, 0xbf05437a, 
    0xbf6ab3de, 0x3aabb8b0, 0x3f0a928b, 0xbc886f89, 0x3e743743, 0x3cadbdee, 0x3f171636, 0xbe8331ae
};

static const uint32_t _K38[] = {
    0x3d9a0e71, 0x3e3d1b3b, 0x3cff14a9, 0x3dc3b029, 0x3e21e7ad, 0xbdfcb74d, 0xbc608345, 0xbe527872, 
    0xbd9efe26, 0x3e0da0b4, 0x3d848cd5, 0xbd8eb5f9, 0xbe317d75, 0x3d51adc1, 0xbe12e9ad, 0xbabeffa9, 
    0x3d999cdd, 0x3dbb2bd6, 0xbe303506, 0x3daa5c40, 0x3e27c6c3, 0x3e1f6f19, 0xbd0a4689, 0x3d599ccd, 
    0x3e21c153, 0x3defde5c, 0xbd870a5a, 0x3df3d781, 0x3d7465ca, 0x3e056bc4, 0x3e52d6b2, 0x3da3ac6b, 
    0xbe5f1b30, 0xbdf1d241, 0xbd6ef739, 0x3d4e4377, 0xbe2da4aa, 0xbe3bbff8, 0x3e02ec5f, 0x3d311a6e, 
    0x3d741277, 0x3e24dca5, 0x3e05dfb8, 0x3e2da5ad, 0x3d20a693, 0x3d99782c, 0x3e1e4b94, 0x3dbf7d7e, 
    0x3dc23619, 0xbd3144f2, 0x3c9d2098, 0xbd0137f0, 0x3d40fd4f, 0xbd0e2a7a, 0x3e19cd38, 0x3d7910f7, 
    0x3d3ba2f6, 0x3c96f75b, 0xbe01edac, 0xbe22e7c7, 0x3d5cb61a, 0x3d73b5a9, 0xbe0eca30, 0xbd511c9a, 
    0x3da1dfe3, 0x3c9bf4af, 0x3e0fca28, 0xbdb5a9d8, 0x3de1e63d, 0xbe3d534a, 0x3d2829e7, 0x3e467e45, 
    0xbe48050d, 0x3d4bdf8a, 0x3e044498, 0xbd8ae420, 0x3cab3ddd, 0xbe05d30a, 0x3dacc6fb, 0x3d214a02, 
    0x3dba3823, 0xbde60154, 0xbdbadd6a, 0xbddca2ae, 0x3d9083b1, 0xbe42d379, 0xbd0653e3, 0x3e3c9890, 
    0xbe46e9c2, 0x3cae3b2c, 0x3d4ccbdc, 0xbd58a91a, 0x3d8163ed, 0xbe1527a9, 0x3e1abdd9, 0x3e102c65, 
    0x3dd5ff75, 0xbe300c8f, 0x3e4c26a1, 0x3c9a45f6, 0xbddd5b41, 0xbdef6610, 0xbd209812, 0xbdc98ef9, 
    0x3dde4150, 0x3d6e86c7, 0xbe12ce04, 0xbe4f802e, 0xbc950f90, 0x3e12da04, 0xbc4dff25, 0x3e1b0b56, 
    0xbde5502b, 0x3e59da17, 0x3d736379, 0xbe035029, 0x3c9074b0, 0x3db33f25, 0x3dc77f56, 0x3da7cd0b, 
    0x3e143413, 0xbe27fc8e, 0xbe4176a7, 0x3dc33e18, 0xbe0e7c35, 0x3e161825, 0xbd50c877, 0x3dd537e3, 
    0xbe115bfd, 0xbcc15778, 0x3e50dc48, 0x3e55e9c4, 0x3dbcbf72, 0x3e1ede6a, 0x3dad5014, 0xbd537756, 
    0x3c7436ad, 0xbd5c5a14, 0x3ce8a4c4, 0x3d2da854, 0xbd7eee17, 0xbe108597, 0x3dc6059b, 0x3e362573, 
    0x3e1c0398, 0xbc680fba, 0xbd0010f1, 0x3dbe89dd, 0x3d433d8c, 0xbc4f5ff1, 0x3d04b466, 0xbd94bf56, 
    0xbe5bfee3, 0x3e11d8ac, 0xbdc555a6, 0x3d0c3785, 0x3cda841b, 0xbe4530aa, 0x3be0b3e4, 0xbe0f6d59, 
    0xbe070aab, 0xbc9e9272, 0x3e272860, 0x3dabc3d3, 0x3cde6de6, 0x3d68cbd2, 0x3dac7cc9, 0xbe1dab27, 
    0x3d0e34ab, 0xbde11805, 0xbe3e3833, 0x3d9b11b3, 0xbe0a9f42, 0xbdc910c3, 0x3c1ada7a, 0x3dd95668, 
    0x3d0c76fc, 0x3d5a57b4, 0xbbaf89a1, 0x3d3ebe6a, 0xbd4d605c, 0x3d8fc45d, 0x3dd2a0c6, 0x3d425f23, 
    0x3dd2e774, 0x3e00c68e, 0x3e1d3de0, 0xbca650a7, 0x3db90ca1, 0xbd7bfba5, 0xbcc13790, 0x3e01d669, 
    0xbe5eb153, 0x3e1c279c, 0x3e333c68, 0xbe114f39, 0xbdd2f3d9, 0xbceae41c, 0x3d7273f0, 0xbe6b8e49, 
    0xbe29ce0f, 0x3b212dcb, 0xbdd6502b, 0xbe43de74, 0x3e3c6d77, 0x3e390798, 0x3e435766, 0x3d332684, 
    0x3de5f82f, 0xbd140bd8, 0x3b54d271, 0xbd8d0cfe, 0x3e33e9b7, 0x3d30498a, 0xbe36a74e, 0xbe094431, 
    0x3d649ecb, 0xbd239dd0, 0x3dd9caca, 0x3c902e1d, 0x3e1cf5e2, 0xbd82dcb7, 0x3e43bfce, 0x3e24a3d2, 
    0xbdbe4643, 0xbe295905, 0x3d5afcba, 0xbdeef4d5, 0xbdfa58bd, 0xbd7cc296, 0xbe0b7f24, 0xbe53447c, 
    0x3da6352f, 0x3d945abb, 0xbd700b46, 0x3df0603c, 0xbda74fc0, 0xbd8f822b, 0x3d986690, 0x3dd9310c, 
    0x3d99d42f, 0x3e3f8166, 0x3e3ebf4b, 0x3e37b937, 0x3d54fb6b, 0x3c55d1df, 0x3d6e1db5, 0xbe21e28b, 
    0xbe3ded1c, 0x3e26bbc9, 0x3d0a7f40, 0xbd3bd8c5, 0xbe3cd529, 0xbdd8a886, 0xbe50ac36, 0x3e2192bd, 
    0x3ddbdf1e, 0x3de3bd52, 0x3e0a3df8, 0x3e23c2c7, 0x3e20b964, 0x3d6181f3, 0xbccb8e0a, 0x3dba32ef, 
    0xbe408907, 0x3cc26a53, 0xbde37489, 0x3d2bb26d, 0x3de4fdc3, 0x3df82209, 0xbe351bbf, 0x3df2e313, 
    0x3e209d8a, 0xbe05a829, 0xbe445052, 0x3e176a04, 0x3e340eb1, 0xbe44a8f1, 0xbdcc3b2a, 0x3e62732b, 
    0x3d480b7d, 0x3dac3613, 0xbd748472, 0xbd99d33d, 0x3de39373, 0xbbe979b7, 0x3e261920, 0x3e18140f, 
    0x3e2112d6, 0x3d4e25af, 0xbd7cf6ea, 0x3cf34bc3, 0xbde51a4d, 0x3dc50017, 0x3e0be531, 0x3e45897f, 
    0xbd13f474, 0xbe0b1a76, 0xbe49623a, 0x3dc4ff4f, 0x3dd94695, 0xbe3eb0bd, 0xbdf095dd, 0xbd1576bf, 
    0x3e379265, 0xbe4579e4, 0xbcfe8897, 0xbe076824, 0xbdcde6fd, 0xbe445632, 0xbd65176f, 0xbe3eba6b, 
    0xbd6a30da, 0xba2b42a0, 0x3c3fe4d6, 0x3ddbb466, 0xbd380f78, 0xbde7aa8c, 0x3e275f66, 0xbe291d34, 
    0xbda59adc, 0xbce19581, 0x3cbae661, 0x3cd8271e, 0xbd9f7e24, 0x3e572778, 0x3e1975a9, 0xbe0eb7ba, 
    0xbdd6bf56, 0xbdd189ee, 0x3e233457, 0x3d4bb617, 0x3d3653c1, 0x3e420695, 0x3e002206, 0xbdc0daf1, 
    0x3ca9bae6, 0xbdcfc3b9, 0x3def4663, 0x3d8ac68d, 0xbdc4ad0d, 0xbdabefe7, 0xbe01b8f4, 0xbd8519bd, 
    0xbdb19aba, 0xbe226ef3, 0xbd9165dd, 0x3c4d4552, 0x3e2fc181, 0xbe54910e, 0x3de0430a, 0xbd244000, 
    0xbe0748ba, 0x3e308651, 0xbe0b61f5, 0xbbfc42cf, 0xbe3756e2, 0x3daa4c87, 0xbdc284df, 0xbe5c553f, 
    0x3e0e4761, 0x3d10514a, 0x3e45b802, 0xbd894b4e, 0xbd9012c9, 0xbe50d224, 0x3e1f6837, 0x3d4cc573, 
    0x3dce0048, 0x3df12fd4, 0x3d7c386b, 0xbe25c465, 0x3e292e09, 0x3d05ed3f, 0x3c815b7b, 0x3d7351d2, 
    0x3e41cc18, 0x3dd24fd1, 0x3e1dda42, 0xbca4fceb, 0x3d4bbe22, 0xbdf100a6, 0xbd7d76e2, 0xbdd2e98d, 
    0x3dbb77b8, 0xbc677f9d, 0xba3436b5, 0x3dc04ac0, 0xbd165fb8, 0x3e3dabef, 0x3df757e3, 0xbc9a8499, 
    0xbd0b83d1, 0x3dfe1f3e, 0x3d506f74, 0x3ddb4f4c, 0xbdda785a, 0x3b94dab4, 0xbe60563d, 0x3df1aa8e, 
    0xbdf0319a, 0x3be1d5f1, 0xbdcb0096, 0x3d269afa, 0xbdd04efa, 0xbd9e01ca, 0xbcd4f0c2, 0xbe1d96d2, 
    0xbdfc6718, 0x3e34b576, 0x3c3da212, 0xbe37d148, 0xbcd9d9da, 0xbe0f17e0, 0xbc29b2bc, 0xbe320844, 
    0x3cd04d47, 0xbde6076e, 0xbe273ce4, 0xbdd424ec, 0x3de1c9cd, 0x3dfbb7c1, 0x3d9e9b2a, 0xbe27dbd4, 
    0xbd02813f, 0xbd043f34, 0xbe2038f0, 0x3e1968cb, 0x3d099a28, 0xbdae9306, 0x3e3c6772, 0xbdd006b7, 
    0x3df12b2b, 0xbd04d9b2, 0x3e351f40, 0xbe17f014, 0xbe20e145, 0x3e369d6c, 0xbdecab8e, 0x3e5ab346, 
    0x3d90a6f2, 0xbc82dc48, 0xbe10ae21, 0x3e1d8359, 0x3d950f0a, 0xbe004515, 0xbd5be37e, 0xbd929826, 
    0x3e1ba080, 0x3e39944c, 0x3e063481, 0xbe2af180, 0xbde3f178, 0x3dd75289, 0xbe388769, 0x3cf495ce, 
    0xbdd3c21e, 0x3d12231a, 0x3cd38153, 0x3e33c511, 0xbe2aca04, 0x3d9fe02a, 0x3e156abb, 0xbdf63fdc, 
    0xbdc0c36b, 0xbe5470ac, 0xbdabb45d, 0xbde5ec10, 0xbd4fc924, 0xbcd2a823, 0x3dc350b9, 0x3e289eb6, 
    0xbe33a05f, 0xbcb7b38c, 0xbe2d8437, 0xbdf9024e, 0x3cf7b72a, 0xbe3760b9, 0x3e05f6c8, 0x3d68b02a, 
    0x3e144082, 0xbe510ca5, 0xbd0c9b2c, 0x3e2cad75, 0x3d97a301, 0xbe35de26, 0x3dd38f7c, 0x3c07e36d, 
    0xbe18921b, 0x3ce1fbac, 0xbc02e2fb, 0x3e10e362, 0xbce55454, 0xbb4c51ce, 0x3e6112e9, 0xbdc1b924, 
    0xbb4c19ed, 0x3e031bf2, 0x3d9ce205, 0xbe07d584, 0xbbe75ea2, 0xbde67465, 0xbded2f53, 0x3c23b161, 
    0x3df5746e, 0xbce08741, 0x3e3f78a0, 0x3d2fb900, 0xbe2811af, 0x3df955d0, 0x3d5bc6af, 0x3af4e6d8, 
    0x3e527a63, 0xbe2680a0, 0xbe3ba38d, 0xbd4ca71d, 0xbe0aa007, 0xbaf96ff8, 0x3d0f0f03, 0xbe2a60d1, 
    0x3e7c1639, 0xbe26ae67, 0xbcb39676, 0xbd41d10f, 0x3d9f9bd9, 0xbd3b8056, 0x3dd53f33, 0x3d8c95e6, 
    0x3e3cc282, 0x3e208ffe, 0xbdeefb9b, 0x3d75b536, 0x3decc139, 0xbd4c2b10, 0x3e3f2864, 0x3dc930c1, 
    0x3d027d34, 0xbe2ed9ae, 0xbe4b7c27, 0xbd4e690a, 0x39e64a95, 0x3e2d499c, 0x3dc05b92, 0xbe100056, 
    0xbe5645c6, 0xbd09ae8a, 0x3d4ac6fc, 0xbe3cd95d, 0xbd90ea64, 0xbcb09558, 0x3ca816ca, 0xbdf28041, 
    0xbe0e1477, 0x3e4b3b40, 0xbd2c1177, 0xbde33e62, 0xbdbda955, 0x3e265ca6, 0xbcac7766, 0xbe375391, 
    0x3df6ab0a, 0x3da8cba2, 0x3e1938d4, 0x3de8eb04, 0x3d0ade99, 0x3d4dca2f, 0xbc759f0a, 0x3db7e254, 
    0xbdcdcf3d, 0xbd65cd79, 0xbe114bb5, 0xbdb3913c, 0x3d849954, 0x3db70bf1, 0x3e2f051d, 0x3e047899, 
    0x3dd1806a, 0xbd9adc03, 0x3d3153a7, 0x3d2d95f7, 0xbe23a9f7, 0x3d6dd926, 0x3d5e6df3, 0x3e5c5dba, 
    0x3e192429, 0x3d1a329a, 0x3e3bf6c9, 0xbdf6dcfd, 0xbddec6cd, 0xbe0f76d1, 0xbe47afc8, 0xbd8ce5bd, 
    0xbcdb799e, 0xbe1b0983, 0xbdd867e8, 0x3c089bb3, 0xbd39f350, 0x3e1505a2, 0x3e197eee, 0xbc4da3d2, 
    0x3e04c18e, 0xbd789eff, 0x3dabe76d, 0xbd8493d1, 0xbdb6f5ff, 0x3db6f581, 0xbd00c965, 0xbe07703d, 
    0xbd00a05c, 0xbe169352, 0x3d16d5ff, 0xbd5524a9, 0x3d0be051, 0x3dbd250a, 0x3e4aa7a0, 0x3e3b4b6f, 
    0xbe580dec, 0xbe54e734, 0xbda827c6, 0xbe01e2b1, 0x3b96bcce, 0x3d98d979, 0xbdd18d63, 0xbd8b7e3e, 
    0x3e4d92f6, 0xbe03caa3, 0x3e1d5fee, 0xbdcbee4e, 0x3dcef37a, 0xbd869631, 0x3e2f5e94, 0x3d1aa32c, 
    0x3d78eeb8, 0xbdee1c0a, 0x3d23ac9d, 0x3db4c83e, 0xbd570ca8, 0xbd3238de, 0x3dba7c26, 0x3e2a5082, 
    0xbe52ed33, 0xbe09e24d, 0xbc7c16c2, 0x3cadaff8, 0xbcce03e8, 0x3b254a70, 0x3ddfd67b, 0x3df31d12, 
    0x3c1d9b30, 0x3ca08943, 0xbd99aed1, 0x3e0e33bb, 0x3c7cceb7, 0x3e162d75, 0xbe41b0a9, 0x3dfaeb60, 
    0x3e08cdbe, 0xbe48915c, 0xbdb20584, 0xbddb8a06, 0xbe054add, 0x3e0f34f8, 0xbda1f11c, 0x3c6aad43, 
    0x3ce740ac, 0x3c03887a, 0x3d59aa13, 0xbba27dd9, 0x3d8aa404, 0x3e17695a, 0x3e39e823, 0xbc73036b, 
    0xbd4340e1, 0x3e04eb07, 0x3cbfda68, 0x3e3248c3, 0x3e485075, 0xbe1fa1f8, 0x3e69f830, 0xbdf0fedf, 
    0x3cb5b10e, 0x3e08b7f3, 0xbe21724a, 0x3d955c90, 0x3e417ad4, 0x3e1e9e03, 0x3de3d144, 0xbe2814fe, 
    0x3df418c7, 0xbdffd45e, 0x3e04cd2c, 0xbdaf0a59, 0xbe0fadcb, 0xbddcae86, 0xbe2cb3a2, 0xbe47b66f, 
    0xbda114ee, 0xbbe65e55, 0x3dc90504, 0xbe212861, 0x3d927803, 0xbda8742f, 0xbe43d4af, 0x3e490734, 
    0x3d273a3d, 0xbe2f190d, 0xbe2628c5, 0x3d4ade7c, 0x3e08a1aa, 0x3ce746a5, 0x3e31acb1, 0x3ab26678, 
    0xbe0e3b7d, 0xbdf353c1, 0x3e03d358, 0x3df4b20a, 0xbe0ba40f, 0xbdd2a0a8, 0x3e19fac4, 0xbd687158, 
    0xbdc4ca47, 0xbd065ed1, 0xbdd456b6, 0x3e06765d, 0x3e10501c, 0xbe4967d5, 0xbde4d9ce, 0xbd9f6589, 
    0x3ddce434, 0xbd853556, 0x3df17b5a, 0x3d84cedd, 0x3e25a0b3, 0xbbc21af0, 0xbdce4c3d, 0x3ccf4de4, 
    0x3dfbdf62, 0x3e26fe98, 0x3dadaf07, 0xbddc1a88, 0xbcef88be, 0x3e2428ac, 0xbccf3079, 0x3a5aec4f, 
    0xbdd77ac6, 0xbd756e41, 0xbe112bc6, 0xbe159eb0, 0xbe3ea90a, 0x3bcb37be, 0x3d68142b, 0xbd1e083a, 
    0x3cacf3b1, 0xbe36e73a, 0x3df5b7f2, 0x3dcb832b, 0xbddfbafa, 0xbdab6142, 0xbdc49cc3, 0xbd7f8cec, 
    0xbca5d178, 0xbcb93ce8, 0xbe00d291, 0x3e3ca39d, 0xbd0be1fa, 0x3c667e44, 0x3b8034d1, 0x3d96bcb0, 
    0x3d815950, 0x3d49a738, 0x3e49cb0b, 0xbe317cc6, 0x3dfa929a, 0xbe0ab278, 0xbe1dc003, 0x3d219fbb, 
    0x3d358999, 0xbe097ff0, 0x3e573348, 0xbe25899b, 0x3df7a5ad, 0xbd9fef61, 0x3e4d8649, 0x3d23cdfb, 
    0xbe04f5c8, 0xbe1653f8, 0x3c35f553, 0xbe0bdde8, 0xbc105c59, 0xbdd9fe62, 0x3e427366, 0x3d6792ce, 
    0x3deb3e7c, 0xbd6c52cf, 0xbb17a963, 0xbe35310a, 0x3d617fc6, 0xbce479f9, 0x3dab2a73, 0xbda84ce1, 
    0x3d413cdd, 0x3d409f5a, 0x3e36be32, 0x3bf91185, 0x3c0af9f3, 0x3d8ee100, 0xbe076014, 0x3d50fdbd, 
    0xbe1ec8cc, 0xbdcde3fc, 0x3e23edb6, 0x3dd855f4, 0x3d809145, 0x3c9debde, 0x3e1bbca0, 0xbe04ac10, 
    0xbe0c3b85, 0xbe3bc808, 0xbdd004ca, 0x3d5277b0, 0x3c348997, 0x3cfa6f5d, 0x3dbdec67, 0x3c9b49be, 
    0xbe31e426, 0x3b1e1c91, 0x3d7ef7df, 0xbd8c488b, 0xbdcb8aa5, 0x3d12b1d5, 0x3c81b449, 0x3df3c162, 
    0x3d9e7c4d, 0x3d8e2d5e, 0x3e0c723c, 0xbddd8918, 0xbd3f5244, 0xbe2628da, 0xbd9a44ef, 0x3e25ebcc, 
    0xbe138335, 0xbd4bdd73, 0xbd75d226, 0xbe67e7d1, 0x3e2207f7, 0x3e409093, 0x3d62f24c, 0x3d8c8838, 
    0xbcae9726, 0xbdc5d121, 0xbe10147c, 0xbdd2b56e, 0xbe2a1550, 0xbd3a056d, 0x3e223283, 0xbcb4cd42, 
    0x3e0eef48, 0x3e45c50f, 0x3d9f4c23, 0x3dbeda0d, 0xbe2ce214, 0x3e18d3fb, 0xbddf870d, 0xbe43a7f5, 
    0x3c154c82, 0xbc289fa0, 0xbe23207e, 0xbd585c11, 0x3dba9e1c, 0xbd3c5ba4, 0x3e26a1fd, 0xbe3edb79, 
    0x3e616d7b, 0xbe1e498b, 0x3d815ba6, 0xbd0b56ae, 0x3e1d5f77, 0x3dada8d8, 0x3d0589c8, 0x3e019cb8, 
    0x3da9cb56, 0xbb6cae36, 0xbd8ae6a1, 0xbe31ca15, 0xbe40cecf, 0x3dc858b0, 0xbd601173, 0x3b8f45a3, 
    0x3e521435, 0x3d40cd2a, 0x3e1ea2b9, 0xbd54e054, 0x3db89e34, 0x3de84de7, 0x3ce92f73, 0x3cbf69d2, 
    0xbe2377b4, 0x3e0e7d3b, 0xbc9e7689, 0x3e2c439c, 0x3d2828a0, 0x3d167e8e, 0x3d939dc7, 0xbe30c93b, 
    0x3e1e85f5, 0xbce38384, 0xbde18f53, 0x3e3302ad, 0x3dbe687b, 0x3df45d8e, 0xbc11b7b5, 0x3d9dd3fc, 
    0xbe03d157, 0xbd9dfa83, 0xbe1a667a, 0x3ce14964, 0x3e1445de, 0xbb294ca3, 0x3e24be30, 0x3c9175fa, 
    0x3bb00a22, 0x3e10f13b, 0x3ce67af9, 0xbdb8b678, 0xbde595cf, 0x3df82863, 0xbd13b473, 0x3dafe3bb, 
    0xbdd28da5, 0xbdd528f6, 0xbe364eff, 0x3d622c92, 0xbbf19136, 0x3e2c8413, 0xbdc3b0e7, 0x3e3c5df2, 
    0xbe3fdab1, 0xbe3055b1, 0x3d4a4c0b, 0x3da0c9d5, 0xbca0a4cc, 0xbd876170, 0xbd5e5da1, 0xbc9b207b, 
    0x3dc10ae0, 0xbda24ac6, 0x3e2af2d3, 0x3ce2dc72, 0xbdfedb83, 0x3d9e703c, 0xbd82d0f4, 0x3e08db22, 
    0xbda5a151, 0x3e22abbd, 0xbe08c0f8, 0x3d211db3, 0x3e32db93, 0xbe179717, 0xbdbfb8bf, 0x3d8cd447, 
    0xbd90da9b, 0x3d8d544d, 0xbe5e1b27, 0x3d5d4e7e, 0xbd776e15, 0xbc8a5678, 0xbe5c7b49, 0xbe3ee2cd, 
    0x3d692a58, 0xbca8435e, 0x3b152065, 0xbe31d0dd, 0xbcdc6c59, 0xbe2e1954, 0x3e00e18d, 0x3e2e1188, 
    0x3e22f1cb, 0xbe46e80d, 0x3e08dccf, 0xbe5e9653, 0x3df68561, 0x3c9b3156, 0xbe1b4816, 0xbdf9fc74, 
    0x3de2bdef, 0x3dedf018, 0xbdd6a160, 0xbcecbc3a, 0xbd3b1a67, 0x3da13ae9, 0xbdc9d885, 0x3e446058, 
    0xbe18a215, 0xbaa61a81, 0x3e1be73d, 0xbdbb4ef6, 0xbdadd4d1, 0x3d95c401, 0xbe0ec9bd, 0x3e303bf4, 
    0xbcb937e9, 0xbe21fa1a, 0x3ddb3b65, 0x3e151c95, 0x3c997cde, 0x3df53dfe, 0x3e4a24bb, 0x3d8140c6, 
    0x3c5257e2, 0x3da0ecb8, 0xbd647c8a, 0x3d97595a, 0x3dd99bea, 0xbddac677, 0x3d161be3, 0x3e131f66, 
    0xbda86aa1, 0x3d7ce684, 0xbe3e5b09, 0xbe27f74c, 0xbc9f45c1, 0x3cc1b7db, 0xbd846b28, 0x3e06a34d, 
    0xbdd96ac2, 0xbce788b9, 0xbc5b84d9, 0x3deacdcc, 0xbdbc20cd, 0xbd9fede4, 0x3df1d867, 0xbd926903, 
    0xbe3cad00, 0x3e00855a, 0x3e237649, 0x3e51eb6f, 0x3e3b39aa, 0xbd515a49, 0x3e20d1ac, 0xbd08bb08, 
    0x3e287ce6, 0xbdff2889, 0xbd84adb7, 0x3dfab500, 0xbe0cdd94, 0x3c521d64, 0x3d99720a, 0xbd972765, 
    0xbbaede1e, 0xbe1d5164, 0x3ccdb684, 0xbe35bdc8, 0x3cd833ad, 0xbe19e1fe, 0x3b4334d1, 0x3e0a79f2, 
    0x3b3bfa5d, 0xbdf1bb88, 0xbda39a3c, 0x3e045ac9, 0xbddebc28, 0xbd9be274, 0xbd90ff58, 0x3db21f98, 
    0x3e258d7f, 0x3e085a81, 0x3e564394, 0xbe2c37f5, 0x3db40f6a, 0xbe0a18f1, 0x3e262948, 0x3e21b965, 
    0x3d9645cc, 0x3dbf7e77, 0x3d16f755, 0xbe309f57, 0x3e21175a, 0x3c0ac256, 0xbe0293d4, 0xbd137b61, 
    0xbe542ddd, 0xbde23039, 0xbd38b897, 0x3da8ff35, 0xbcd57247, 0xbe1e759f, 0x3cfc09ed, 0xbe3a2dda, 
    0x3e0679af, 0xbd8ddfba, 0x3c696518, 0xbd0e1f6a, 0xbd770ded, 0x3e0e3a3e, 0x3e26cdbf, 0xbe636d8e, 
    0xbd22ae1d, 0xbe575c06, 0x3d0b1163, 0x3dfe7627, 0xbb259fcf, 0xbe1d83ce, 0x3e1b23be, 0x3e0858b6, 
    0x3dc56748, 0xbbc469c1, 0xbdd8affc, 0x3e298b2b, 0xbe38b09a, 0x3e1c71fa, 0x3dc49d21, 0xbe566647, 
    0x3e2304d0, 0x3cb30212, 0x3e22b636, 0xbe4861b6, 0x3de9ee47, 0xbda8231a, 0x3dc87711, 0x3df4aa1c, 
    0x3b814f7f, 0xbc1e31cc, 0xbc61ec22, 0xbe2948c8, 0xbe231c12, 0x3e5b4377, 0x3c72bf0f, 0xbe21dc04, 
    0x3cfabbc8, 0xbe029258, 0x3e0387bd, 0x3cc2e902, 0xbd65a944, 0x3e2d7e57, 0x3e148257, 0xbd0c3cc1, 
    0x3e18e4e7, 0xbe02da36, 0xbb60ba4a, 0xbddadda5, 0xbc7bcc07, 0xbdb167ad, 0xbc518f90, 0x3d7af731, 
    0xbe1b20d3, 0x3da1a1a8, 0xbdfa71c8, 0xbe12324b, 0xbd80bfd6, 0x3d305ed8, 0x3dda0353, 0xbd96ede6, 
    0x3dc3fed2, 0x3e293388, 0xbe2dc504, 0x3ba559ae, 0xbe2ca2c0, 0x3dc9999b, 0xba873550, 0x3daea5af, 
    0xbd3b94cf, 0x3cf51de8, 0x3c87d381, 0x3e3929aa, 0xbe130140, 0xbe3f8994, 0xbce5d0ed, 0xbcc6b61b, 
    0x3e120383, 0x3cb91be4, 0xbe23b11a, 0xbe3d1ef6, 0x3d130aee, 0xbe449034, 0xbe005927, 0xbe0049b3, 
    0x3c07feab, 0x3e338e4c, 0xbe22fa42, 0x3d321d6e, 0xbe54b2d8, 0x3dad9793, 0xbe30e49a, 0x3e320b6c, 
    0x3d84f903, 0xbe0cddf8, 0xbe240a8b, 0x3e4d976d, 0xbe03d26a, 0xbd234047, 0xbe649cc5, 0x3e14f7d4, 
    0x3dfca9c7, 0xbe1c4dfa, 0x3e40c3ce, 0xbe0d1235, 0x3dfa7cdd, 0x3c910e56, 0x3e24ecaf, 0x3dbea1c9, 
    0x3e01afe3, 0xbc93dc44, 0x3e32d7ab, 0xbd4d60a3, 0xbb5dec41, 0xbc9880d4, 0x3c996218, 0xbd4b3415, 
    0xbdd7dc16, 0xbd82b975, 0xbe0fa17a, 0x3de6e7fb, 0x3e28ac72, 0xbe29521a, 0xbdbf125d, 0x3cdd93c0, 
    0x3e3235ab, 0xbdf4d2d3, 0x3e261f89, 0xbd8443c2, 0x3e090e35, 0xbe19900a, 0x3ce88a7e, 0xbd42168a, 
    0x3cee0d44, 0xbe680d5f, 0x3dc4befa, 0x3e373bd8, 0xbd829cc8, 0x3c174219, 0xbda34c64, 0xbd87e7d2, 
    0x3d23ce96, 0x3cf00b0d, 0xbd7a9788, 0xbe25a2d7, 0x3d81816a, 0x3d6ac4a7, 0xbd83a187, 0xbd7fb172, 
    0xbd8daf2a, 0xbe1afd0a, 0xbd5415e8, 0xbbb47493, 0xbdf8d12f, 0xbe0a0c30, 0x3b2f8ac6, 0x3e4dc8e5, 
    0x3c472025, 0x3e09a6f8, 0xbe15a8d9, 0x3e374b1d, 0x3e436fe9, 0xbd645f3f, 0xbe131083, 0xbe466945, 
    0x3e20b093, 0x3e3d03f0, 0xbde5bc46, 0x3de9e10f, 0x3ce14083, 0x3d59497f, 0x3e4af91e, 0x3d8d0252, 
    0x3ddb7d2d, 0xbe1eb871, 0xbdf3d642, 0xbd6a434d, 0x3e283db8, 0x3e2ff8a5, 0xbd556291, 0xbd936360, 
    0x3e57e695, 0x3d353813, 0x3e0b33d3, 0xbe0290d6, 0xbe2560cb, 0x3e1faa0c, 0xbd6b4ec7, 0x3e0d6ed8, 
    0x3d284c52, 0x3cb6d850, 0x3e38f177, 0xbd69e59e, 0x3e1b40e9, 0x3e098dbe, 0xbde8cb2b, 0xbe66e502, 
    0x3c6ae799, 0xbdd45dd4, 0xbd9c233a, 0xbe07a890, 0x3e05e450, 0xbe010c02, 0x3db04aaa, 0x3d84f36d, 
    0xbcc19207, 0xbe12c9b5, 0xbe03ef3d, 0xbd3d4128, 0xbdd029ea, 0x3c6d6232, 0x3e101bb8, 0xbd8fa3d6, 
    0xbd665410, 0x3e4d7bdb, 0x3dd52326, 0x3e056daa, 0xbda12450, 0xbe2a201a, 0x3e323750, 0x3d779b6e, 
    0xbe3448e0, 0x3d0ddcc7, 0xbe6537bb, 0xbe007b8d, 0xbcf22347, 0xbc853460, 0x3e0809c5, 0x3e2b732d, 
    0x3d244d3b, 0x3cdcb1a1, 0x3e0c98e3, 0x3e541edf, 0xbdf2a479, 0xbdbe83fc, 0x3dccd5c7, 0x3e455627, 
    0x3cfd80c3, 0x3cc9b072, 0xbe2ac9d4, 0xbc583a9c, 0xbe0ade7c, 0xbd5d4fe8, 0xbe383eac, 0x3e1d3cc8, 
    0x3c6e8034, 0x3d689918, 0x3e2366eb, 0xbe2c2a5a, 0x3e004d16, 0x3db54d50, 0x3e1e015d, 0x3cdb0433, 
    0x3e1fd67f, 0xbe0ec30e, 0xbd918aab, 0xbdba4212, 0x3e169cc1, 0xbe041086, 0x3dfdcbb7, 0x3dce3529, 
    0xbcbf6d0d, 0xbdcb4dce, 0x3d9217cb, 0xbe00a929, 0xbe4a4f5f, 0x3e19cc27, 0xbd963201, 0x3dcb9217, 
    0x3c8dd172, 0x3dbb12ea, 0xbe1ad2d9, 0x3b4b4418, 0x3df39864, 0xbcfc4ddb, 0x3d4cf80c, 0xbd159c01, 
    0xbd8e7287, 0x3e5b3be5, 0xbe20d048, 0x3cea1256, 0xbd451751, 0xbd9785f9, 0x3dd52e87, 0x3dd294c1, 
    0x3dfbbe5a, 0xbe2d5fac, 0xbe5d0b69, 0xbde52ab5, 0xbe5d1e80, 0xbe019a24, 0x3d1c624e, 0xbe11f5b2, 
    0x3b391b21, 0xbe2cb04b, 0xbc3b0016, 0x3db61e6c, 0xbc9e5a6f, 0x3db413c7, 0x3d9c7df8, 0xbdff5299, 
    0xbca60163, 0xbd08bdcf, 0xbe473908, 0x3e1639c5, 0xbe20db3c, 0xba0897db, 0x3d899f16, 0xbd7e60ab, 
    0xbbbad416, 0xbe1c4ed3, 0xbe0b2e09, 0xbd49237b, 0x3df3ee1e, 0x3e1848dd, 0x3c9d1bfb, 0xbe07d52a, 
    0xbe04eea2, 0x3e17e955, 0x3dc03478, 0x3e576c37, 0x3dc18556, 0x3dd252b7, 0x3ded6b88, 0x3e09918e, 
    0x3dcea5c1, 0xbdfb273f, 0xbd337a52, 0x3e1dad7f, 0xbdda1c44, 0xbd0d8f87, 0xbe147556, 0x3da88efb, 
    0x3e0e9bd0, 0xbe4d458f, 0xbd3621b7, 0x3c0ff132, 0xbe36a390, 0xbcded33b, 0x3e1d8969, 0xbe1d9036, 
    0x3bca2ec7, 0x3e3690b8, 0xbe16afb2, 0xbd3cfdc6, 0xbe00a279, 0x3c7fd0a1, 0xbd9e1aa7, 0x3e01f2ff, 
    0xbdee597d, 0x3c752311, 0xbbeb1804, 0x3da88b7a, 0x3cf19fac, 0x3d24dc81, 0xbd98db85, 0xbdbbf776, 
    0x3de3bc6d, 0xbe38d8c2, 0x3e035523, 0x3df918e7, 0xbc93fa58, 0xbde66d90, 0x3dd89611, 0xbde98b6d, 
    0x3b71f597, 0xbd73d063, 0xbd67373a, 0xbddbb7ab, 0xbd672a49, 0x3d73fd9e, 0xbdae01c0, 0xbdbab898, 
    0x3d950016, 0xbe27ea73, 0x3e57cc6a, 0x3e247ca5, 0xbe191ad3, 0x3df6f9e5, 0x3e04eaf0, 0x3dc80c94, 
    0x3e50b73e, 0x3e3ab3da, 0x3cb1b294, 0x3dd143fe, 0x3dee0626, 0x3e48d5ca, 0x3dc16ed0, 0xbb16933a, 
    0xbe28da81, 0x3d87a4cf, 0x3e5e8686, 0xbdabd496, 0xbe378699, 0xbdf546d8, 0xbd2e1ee4, 0x3df6b540, 
    0xbe2dce91, 0xbd5652e3, 0xbd850713, 0x3d8ec0dc, 0xbe3e1532, 0x3e2b7bbc, 0x3e1df964, 0xbd869a86, 
    0x3e513432, 0x3d995b8a, 0xbda2d347, 0x3e3629d8, 0x3e2933b6, 0x3d949724, 0x3d1c58fd, 0x3e22f9fe, 
    0xbbbade78, 0x3e1d5ba7, 0x3d1a6479, 0x3d75079a, 0xbbeb728e, 0x3d8737ca, 0x3de50d45, 0xbe112607, 
    0xbdea9565, 0x3cd74f47, 0xbd0fe571, 0xbe015354, 0x3d4cf5d9, 0xbde68f84, 0x3c718d57, 0xbcaa339b, 
    0x3e1562b6, 0x3df15e20, 0xbdc55deb, 0x3e18c7b2, 0xbd1700b0, 0xbe011579, 0x3dfd924b, 0xbd335069, 
    0xbda8e6b1, 0x3cafc35e, 0xbd985e99, 0x3e5ebfcf, 0x3e0b7990, 0x3dc7e776, 0x3b50485f, 0x3dde31f0
};

static const uint32_t _K40[] = {
    0xbdac7dc5, 0x3dfd0e2b, 0xbed55a81, 0xbe2c539d, 0xbea5f902, 0x3ec9acea, 0x3e99f49e, 0xbe0eca46, 
    0x3e3d2ec0, 0xbe293deb, 0x3d33d2c2, 0x3d41f466, 0x3e890e68, 0x3e155fe9, 0x3e347341, 0xbda9f634, 
    0xbebc402a, 0xbd70586d, 0x3d91afee, 0xbd85021f, 0x3dda85f4, 0xbe921e0c, 0x3ed62795, 0xbe812dc1, 
    0x3ba34144, 0x3ea39d4c, 0x3cbadf77, 0xbdbc24dd, 0xbe0bbc52, 0x3e8f1415, 0xbda6908d, 0x3ea7f0cf, 
    0x3da7d2bc, 0xbeaea63d, 0xbd47078a, 0x3e6b05ad, 0xbea4d820, 0xbec240cc, 0xbe2cf6d2, 0x3d35b483, 
    0xbea4e53e, 0xbebb9db6, 0x3e0129c2, 0xbe0f7e5d, 0xbe4a8572, 0xbe62d9ad, 0xbdc95ae4, 0xbe51b348, 
    0xbdb4dbe3, 0x3eacd612, 0xbe46b487, 0xbdab0131, 0x3d6b2969, 0x3ea05b5d, 0x3dc1a26c, 0x3dcab554, 
    0x3d987a29, 0x3e2fa010, 0xbd285955, 0xbe23506d, 0xbe1b3938, 0x3e9ba872, 0xbe599b61, 0x3d45f399, 
    0x3e4360d2, 0x3dc39158, 0x3dcbc5a2, 0xbe714a26, 0xbe298a90, 0xbe9419be, 0x3e4f141d, 0x3e5d79e2, 
    0xbea9c8ce, 0xbeb0cb45, 0x3e09e3d1, 0xbe9db428, 0xbec8a4e3, 0x3e25ada4, 0xbeecacab, 0x3e9d423d, 
    0x3e8edf1e, 0xbf087f81, 0xbe545587, 0xbeb8e88f, 0xbe7669a8, 0x3e10b52c, 0xbec1a175, 0x3e26dde0, 
    0x3d387cc7, 0xbe771831, 0x3eccbdc0, 0x3ed617fa, 0x3d803592, 0xbe6cc7d1, 0xbdecb077, 0xbd70f046, 
    0x3e06436c, 0xbde63dfd, 0x3d82e49d, 0xbd8e81a1, 0x3e82ab15, 0xbca1e5d4, 0x3df224cd, 0x3df09d26, 
    0x3cf2d140, 0xbdba6247, 0x3e553d42, 0x3e1bdec0, 0x3d8a1001, 0x3d117efc, 0x3e77147a, 0xbe355335, 
    0x3e04715b, 0x3d1931d2, 0x3dc0d64a, 0x3e0219e1, 0x3d2b2a36, 0x3e2065ad, 0x3e97ca43, 0x3da1c08b, 
    0x3e2657e1, 0x3e3bafd8, 0xbe4ca298, 0xbde55e87, 0xbe16b35d, 0xbda16b55, 0x3e82b391, 0x3de73b00, 
    0xbe306e6a, 0xbe06ca0c, 0xbdd0c447, 0xbda1baa7, 0x3e3cfc16, 0xbd0dba46, 0x3d9b2ff4, 0x3d10721c, 
    0x3de3dc54, 0xbe821689, 0xbd5b23c6, 0x3e21cd6c, 0x3e95863b, 0x3e6730bb, 0xbe03e410, 0xbe38539b, 
    0xbd4d2a98, 0x3e38de61, 0x3d494f6f, 0xbd891124, 0xbe3266f5, 0x3d52d34d, 0x3e0ce1a6, 0x3e875c1c, 
    0x3d6dc452, 0x3e293ad9, 0xbe3154c4, 0x3d75d453, 0xbd064276, 0xbe32e3d1, 0xbcb215da, 0x3d034ab9, 
    0x3c9d7dfd, 0x3e7477ba, 0xbddb9613, 0x3dcb9641, 0x3d54cdb0, 0xbdaa293e, 0xbcbf8146, 0x3e6d3b77, 
    0xbe41868c, 0xbe84bd04, 0x3d43a65f, 0x3deb28a2, 0xbe3daa6f, 0x3e1d5b00, 0x3e009f84, 0xbd91fb7c, 
    0x3d6657c1, 0x3e0149a5, 0x3c3b7299, 0x3e0ce2dd, 0x3e3889a8, 0xbcc13eaf, 0x3d16df95, 0x3db76c84, 
    0x3e4bf546, 0x3e54d2ee, 0x3d73142b, 0x3e2db2d3, 0x3e4ca523, 0x3cf15b50, 0x3e3a4d47, 0xbe4ca234, 
    0x3e8c187e, 0xbe4fc58f, 0xbe7be60f, 0xbd3516df, 0xbecc36d3, 0xbe738eee, 0xbe95177f, 0x3c672c4a, 
    0x3dd72d6d, 0xbca305c1, 0xbe3d13c7, 0xbe01f8cc, 0xbe286028, 0xbe62c4ea, 0xbea71a18, 0xbd84e793, 
    0x3e6c959d, 0x3d948fdb, 0xbe154eb7, 0x3e5aa948, 0xbe1bc985, 0xbdfb2678, 0xbcaaea6d, 0xbe27de32, 
    0xbc36d4f7, 0x3e15ad5a, 0x3d619b56, 0xbc9d2de9, 0xbe9a76c5, 0x3cf58235, 0xbe02d770, 0xbeb366bf, 
    0x3e838270, 0x3e933048, 0xbe45f0d7, 0x3e9165c0, 0x3d6e29e0, 0xbe1e2747, 0xbe93560f, 0xbb809ce5, 
    0xbe08aa23, 0x3ec5a22f, 0xbe18d4cd, 0x3e67c0de, 0x3d33430b, 0xbe55b63e, 0x3e8475a0, 0xbea45579, 
    0xbd18be85, 0x3e0c4023, 0xbde745d7, 0x3eed7473, 0x3ea2a2b1, 0x3e9824c2, 0x3d1af863, 0x3b3588d0, 
    0xbe562740, 0xbe19d68d, 0x3e138217, 0xbe833843, 0xbe626668, 0xbe288c23, 0xbdc511eb, 0xbe62b407, 
    0x3e8014d0, 0x3e168928, 0xbec756fa, 0x3e8c1d99, 0xbe9e98e0, 0x3e40de3f, 0x3e91dde0, 0xbe0ae426, 
    0x3e286167, 0x3ecac28e, 0xbe435291, 0x3e480791, 0xbe809520, 0x3e218684, 0x3e069fbd, 0xbe8bdb00, 
    0xba3a2b21, 0xbdf7bf81, 0xbe4ef140, 0xbdd8db31, 0xbda53f3d, 0xbe468c09, 0x3e221075, 0xbe3fbe6d, 
    0x3db20e33, 0xbec6c279, 0xbdb11ad9, 0x3d835e94, 0x3e8177b7, 0xbdb2660a, 0x3d976638, 0x3b2ad93f, 
    0xbd157227, 0x3e3a496c, 0x3de42468, 0xbe93d220, 0xbd8ab9da, 0xbd8e7efe, 0xbcf52256, 0xbea8f7c8, 
    0x3e174d50, 0x3c3a8177, 0x3d974a7e, 0x3ea78813, 0xbe3e1afc, 0xbd851b2a, 0x3df1a1db, 0x3e571b17, 
    0x3dc9d3fb, 0xbe6b86be, 0x3e1c9dd6, 0x3cd6a7ed, 0xbde16003, 0xbd4b8fa5, 0xbef4b18b, 0x3d6d9e62, 
    0x3ea3d378, 0x3e96b489, 0x3e904a4a, 0x3e197510, 0x3b333a00, 0x3e3bd494, 0x3e16fb7c, 0xbe312907, 
    0xbe30a4ce, 0x3ec3cf0a, 0x3e2ad235, 0xbe3619db, 0xbe8b6a0b, 0xbe1ee42c, 0x3dcecbcd, 0xbdc5eb58, 
    0xbea264b2, 0xbe62e6be, 0x3e8440cf, 0x3e1a1c82, 0xbea87796, 0x3e0ed9db, 0x3e63e728, 0xbd20ca6f, 
    0x3d86fcff, 0xbd7b69ea, 0x3d4fd1e7, 0x3ebbafad, 0x3d80d5bd, 0xbebcf878, 0xbe96feb2, 0x3d6e6ca1, 
    0xbe77d6d1, 0xbeb0e4c5, 0x3d996050, 0x3e89bdee, 0xbdc8fc42, 0x3e4ea6db, 0xbe7189ae, 0xbdf7f897, 
    0xbe203508, 0x3d891a47, 0xbe65d7a6, 0x3ddae54c, 0xbebe6e55, 0xbe861a94, 0x3e0d30b1, 0xbe2d0e5b, 
    0x3df83d01, 0x3e4037c3, 0xbd9dbb9a, 0xbe7089c8, 0xbe0529ad, 0x3c1db06a, 0x3e8a0545, 0xbe0f0b08, 
    0xbe7b2f39, 0xbe888455, 0xbe872cbb, 0xbe856813, 0x3d710bbe, 0xbe99c352, 0xbea8f97f, 0x3df3f40a, 
    0x3eb52441, 0xbebf664f, 0xbdb777a9, 0x3e63e656, 0x3e1981e9, 0x3eba5f31, 0xbe8bf300, 0xbeb94172, 
    0xbe2754c9, 0x3cfea984, 0xbe22001a, 0xbe87c70f, 0xbe7bf01c, 0xbd060faf, 0xbc97bf81, 0xbd4aff9d, 
    0xbe0eed89, 0x3e840d0a, 0xbd8b7aa5, 0x3e824f07, 0x3dda6fff, 0xbd4c936a, 0x3d0b3a7c, 0x39e14804, 
    0x3e177502, 0x3dd8cd7e, 0xbc3c8b79, 0xbba02e28, 0xbcbb857b, 0x3d76bf31, 0xbe154fb0, 0xbbb8eab5, 
    0x3e19cfb6, 0x3daed742, 0xbe25446c, 0xbe288cfb, 0x3e80f79e, 0x3e004e0b, 0xbd1f29dc, 0x3e42d444, 
    0xbe3d9146, 0xbe4a5fa8, 0xbe3789d3, 0xbe49c0ca, 0x3e292544, 0x3e7d01b3, 0x3e199d0c, 0xbd7346e9, 
    0xbe50612e, 0xbe10f9c0, 0x3ad1da65, 0xbd88b81b, 0x3e74bf1b, 0xbd411183, 0xbe1f8875, 0xbe9867c6, 
    0xbe91b063, 0xbcf38093, 0x3dcf1a94, 0x3d870f85, 0xbe1880ae, 0xbd936d24, 0xbe9491ca, 0xbe5971b0, 
    0xbd04fb7f, 0x3cbb7c02, 0xbc8b4280, 0xbe4e69c1, 0xbe5c3811, 0xbe293f36, 0xbcc65546, 0xbda4c6c2, 
    0x3e0f38d7, 0xbcac4de7, 0xbe246992, 0xbe7fcdc9, 0xbe92204a, 0xbe16ed3e, 0xbd2faa83, 0xbccd6e6e, 
    0xbdef4364, 0x3dc89db2, 0xbcb0b61d, 0x3e71aff2, 0x3d52241e, 0x3da67d58, 0xbe6a2399, 0x3e19c81d, 
    0x3e522c93, 0xbe1a8695, 0x3e1ccb7b, 0x3eaa76b7, 0xbe0f29fd, 0xbe860f22, 0x3dbc4fad, 0xbe140dbe, 
    0x3e5074b8, 0x3d7c333b, 0x3c91639f, 0x3d33afd3, 0xbd476c92, 0x3e0f80c1, 0xbde32db8, 0x3df92b72, 
    0xbebfd227, 0x3edefad7, 0xbe60a53c, 0xbe07ca03, 0x3e5cce3d, 0x3eccbeff, 0x3eca8a77, 0xbe9b822b, 
    0xbedc0494, 0x3c914722, 0xbd84dd26, 0x3e34944a, 0x3ee45776, 0x3e6df165, 0xbe8b7906, 0xbedb3550, 
    0xbeb9d8a0, 0xbdf49d98, 0x3e6e2cb5, 0xbddce4d8, 0x3d28a237, 0xbd856ba8, 0xbe758382, 0xbe5001bf, 
    0x3da75875, 0x3de23f1b, 0xbe215249, 0xbb67f55f, 0xbd6046c6, 0xbe8fca99, 0x3dbce76d, 0x3d3f5cd9, 
    0xbea059bb, 0xbe600313, 0x3d951411, 0xbe2c249e, 0x3de97c59, 0x3ea607ad, 0xbed1fc38, 0x3d1049be, 
    0xbea75a2d, 0x3e4ee40d, 0xbe557992, 0xbe77602c, 0x3e83aa80, 0x3eb45b57, 0xbe861efa, 0xbe975749, 
    0x3e99de4e, 0xbe85ed61, 0x3e05b097, 0xbd908083, 0x3eb176fb, 0xbd808038, 0x3c4b9b16, 0x3e66ccef, 
    0xbd458854, 0xbd9a10fa, 0xbc746f23, 0x3ba0c935, 0x3e65fcd4, 0x3e5a2e56, 0xbe54635d, 0x3ec4a5c4, 
    0x3d78bd48, 0x3e86db58, 0xbe0ffa12, 0x3da6c036, 0x3e1986bc, 0x3e9dcf7c, 0xbe89269a, 0x3d8726d9, 
    0x3e21cfe1, 0x3ee486a4, 0xbe69655c, 0x3d29508e, 0x3e86ec64, 0x3db9e365, 0x3e896097, 0xbea5125a, 
    0xbe7e9e27, 0x3e8e6644, 0x3de70156, 0x3da56a08, 0x3e9d2877, 0x3e41e5df, 0xbea17dc8, 0xbd28e89e, 
    0x3d93617e, 0x3eaf4c78, 0x3dce225a, 0x3cccc21c, 0xbe35ba72, 0x3c4c633d, 0x3e713914, 0xbde97abf, 
    0x3cc98b07, 0xbec3a6d3, 0x3dd58e4a, 0x3dc57b50, 0x3edf9427, 0x3e043d81, 0xbd244b34, 0xbe818723, 
    0x3e21ac93, 0xbc80fc0b, 0xbe2425a3, 0xbe7e20a5, 0x3e138f4c, 0xbe8856ae, 0x3e96742b, 0xbe82924b, 
    0xbe620f37, 0xbe70d6bf, 0xbe8463c0, 0x3e8ca5be, 0x3e85611d, 0xbc813b9f, 0x3ed87d03, 0xbe85f49c, 
    0xbec8341c, 0xbe84aff1, 0x3e5020a7, 0xbe4f9080, 0xbe4e5007, 0xbda489ad, 0xbe0c8b3d, 0xbe12e1ad, 
    0x3e70e446, 0x3d343ff2, 0x3bf643ac, 0x3e26c776, 0x3dfc442f, 0xbd86dd00, 0xbe6b801f, 0x3eaeb088, 
    0x3e47347d, 0xbe675231, 0x3eaa4613, 0xbdc5be19, 0x3dc14974, 0x3e117603, 0x3ecfb720, 0x3eb95f4c, 
    0x3e9a24f0, 0xbeb5f5d6, 0x3e5168f0, 0x3e4bfc8a, 0xbe5730dc, 0x3e9ac6dd, 0xbe2b069e, 0xbddc98f6, 
    0xbe357bcc, 0xbda6b77c, 0x3eb8eb3e, 0xbe893d3c, 0xbcfd81bd, 0xbd2446ad, 0x3d5d7180, 0xbe817906, 
    0x3e1d4c0c, 0x3dc185c3, 0xbd89661c, 0x3e95f225, 0xbcad1250, 0xbe1fc52d, 0xbe77603b, 0xbe33b7a9, 
    0xbdefde50, 0x3d8133f3, 0xbe12acc6, 0xbe82d110, 0x3dc94e77, 0x3e63501d, 0x3dec549a, 0xbd992eeb, 
    0x3eb0cce2, 0xbe2cbb56, 0x3ec1857d, 0x3e8c4e32, 0xbe9898cb, 0xbb52068a, 0x3e16ca32, 0x3dccc1f6, 
    0x3e1ea1ec, 0x3d0fabc3, 0xbe042e00, 0xbe8c2f1b, 0xbd04b0ca, 0x3e0fd836, 0xbda086b2, 0x3d54cf7a, 
    0x3eac3a47, 0xbd23c134, 0x3d81c229, 0xbd4dfd32, 0x3da63f53, 0x3ecee489, 0x3e39c0c7, 0xbed69d32, 
    0xbe62340c, 0x3ebc5f4b, 0x3db36549, 0x3d998e1b, 0x3eb79922, 0x3daf2051, 0x3d0505e6, 0x3ebb5ef3, 
    0x3e07d6fe, 0x3cadeac5, 0xbd1cf599, 0xbe31b504, 0xbd574541, 0x3eee4d03, 0x3e5a28eb, 0x3e18f6b6, 
    0xbe77727f, 0x3ecc0dc4, 0xbd7e911f, 0x3e0387ec, 0xbe7980d3, 0x3dd0ff6a, 0x3c9cb029, 0x3c217384, 
    0xbe71272a, 0x3e9c64d4, 0xbe9f8045, 0x3e20b904, 0xbdcf5fc6, 0xbc9e1a7e, 0xbd160e84, 0xbdde21e6, 
    0xbb17ad75, 0xbcbbcdb0, 0xbeb9c6f3, 0x3e0293a1, 0x3f010114, 0xbe461305, 0xbef10def, 0x3eba640c, 
    0xbd5c1341, 0xbdc992a2, 0x3de2335d, 0xbd1de2b1, 0xbe0b4f87, 0xbeb0e954, 0xbdb81a73, 0xbd2b8ab9, 
    0x3e1578f4, 0xbec71b26, 0xbeee04ea, 0xbde12838, 0xbe13c052, 0x3e96076f, 0xbe5d87e8, 0xbe979c70, 
    0xbeceb8a8, 0x3d8d8ae2, 0x3e0c1a17, 0x3d86af92, 0xbeffc6a3, 0xbd87cab2, 0x3e42e4cc, 0x3e3f9510, 
    0x3ecb7b35, 0x3e713101, 0xbde955e5, 0xbe90ca4f, 0xbea0d64a, 0x3e7eb272, 0x3def4cc4, 0xbe3a67f6, 
    0xbe4630ba, 0xbd505677, 0xbea59978, 0xbea5a77c, 0x3e6c80d7, 0x3b9f95c6, 0xbebcb4aa, 0x3e405276, 
    0xbd8c887d, 0x3ed82ced, 0xbe98e147, 0x3e00015d, 0x3e1b9a41, 0x3e6b8165, 0xbc9defd7, 0x3ebd17be, 
    0xbd9fa01b, 0xbe820d8a, 0xbe04c042, 0xbe9e2f1a, 0x3daf158a, 0x3e370455, 0x3e1c95f9, 0x3e74aac9, 
    0xbd884f59, 0x3bc9f707, 0xbc528e0a, 0x3d01fd39, 0xbeb8c9d5, 0x3e6c0958, 0x3ddda72b, 0xbeb4ad5c, 
    0xbce83efe, 0x3e35f616, 0xbd3397dd, 0xbeb00749, 0x3d86766e, 0xbdc4e55b, 0xbe047b64, 0xbe814e56, 
    0x3ec0d512, 0xbe03001d, 0xbe379138, 0x3eb00c9d, 0x3e65c412, 0xbea7946d, 0x3ea7a5b8, 0x3e18db0c, 
    0xbe1c64f6, 0xbeb61121, 0x3cfdfb2b, 0x3e3fb7ef, 0x3ea9e9c7, 0x3e2322e3, 0xbe14d343, 0xbdc3ccf7, 
    0x3e140d6f, 0xbe8cc527, 0x3ea7b553, 0x3e5e3a84, 0xbe32731c, 0x3e45f527, 0x3d1561aa, 0x3c5c294e, 
    0xbe1efae0, 0xbd929d6c, 0xbe5bce16, 0x3e81a35d, 0x3ea3944b, 0x3c8ac360, 0x3d87a505, 0xbd3d8b08, 
    0xbe852426, 0x3e0b04df, 0xbde1c5f1, 0xbe523659, 0x3e042e40, 0x3e1a94de, 0xbde2cfa6, 0x3d95c267, 
    0x3e16449b, 0xbeb79516, 0xbe9c3c6c, 0xbea96a5c, 0x3e94492a, 0x3e197bd2, 0x3ec65548, 0x3d34762b, 
    0x3eb01fd8, 0x3e272e3b, 0x3dedd395, 0x3d2f46fe, 0x3e0f0bc1, 0x3d36d839, 0x3e32b6d4, 0xbe89d2fc, 
    0x3d1390be, 0xbd096ac8, 0xbcdf308f, 0x3dcf9500, 0x3e7e85bd, 0xbd98bc54, 0x3eb6226c, 0xbe5d45c4, 
    0xbe527bb2, 0xbe2895e0, 0x3e2d629f, 0xbd827eef, 0xbddc3662, 0x3ea344ec, 0xbd99dc57, 0xbe56d497, 
    0x3b84c9e4, 0x3e4e001e, 0xbe9122ce, 0xbe7f2f2e, 0x3e68e0ef, 0xbe69aecd, 0x3e5c0760, 0xbeafff36, 
    0xbebafcc5, 0xbe55a17f, 0xbdf796a9, 0xbe265034, 0xbe339864, 0x3dd7c543, 0xbd9a193e, 0xbdb0e398, 
    0xbc0507dc, 0x3da3a665, 0xbe0a84c2, 0xbe9a3d71, 0x3daf6a49, 0xbeb5d3df, 0xbdcecee9, 0x3b77be42, 
    0xbd250664, 0xbe5815c3, 0x3d517e9a, 0xbce096e7, 0x3e611588, 0x3dc35950, 0xbe7d1eff, 0xbe8a916a, 
    0x3dcec29c, 0xbd9f8130, 0x3e9bfc63, 0xbe999cf7, 0xbe6aa10a, 0x3ead460b, 0x3e80c995, 0xbd5858f6, 
    0xbe850792, 0x3e8f6b0c, 0xbcc707d6, 0x3db64e5e, 0xbd83cfc6, 0x3ed42dba, 0x3e0d7b82, 0xbea104b2, 
    0xbe587bcf, 0x3e61f676, 0x3ded49ea, 0x3e884b05, 0x3e93d2ef, 0x3ea11bd9, 0xbd51b70e, 0x3d8e397e, 
    0xbe80fe46, 0xbdece532, 0x3e7a5697, 0x3e06fe3d, 0xbe325884, 0x3eaf5bff, 0x3de4fd1a, 0xbe791bd5, 
    0x3e6a549b, 0x3e442a68, 0x3e6fa526, 0xbe9dff7d, 0x3dac60ef, 0x3ebac575, 0xbe0c2bcd, 0xbed4f2e7, 
    0x3e79892d, 0x3e4db1f8, 0xbcb46e6d, 0x3e698a79, 0x3c85d48a, 0x3d676ad5, 0x3d147bec, 0xbe7735f1, 
    0x3e394279, 0x3e5747da, 0x3a486476, 0x3e1d8a6c, 0x3d8a7ec1, 0x3e6cf016, 0x3e981c2a, 0xbeb16bbf, 
    0xbdca420f, 0x3eab1dc5, 0xbeccc8ee, 0x3e0677eb, 0xbea1fcda, 0x3eaf4690, 0x3cb217e6, 0xbe17b022, 
    0xbeac0d3c, 0xbea6ff3b, 0x3edf8d0a, 0xbe406fc2, 0x3eb1f165, 0xbe9394c4, 0x3eb790c9, 0x3eb3297e, 
    0xbe89bf49, 0x3dca7dc0, 0x3ebc8065, 0x3eb229de, 0xbdff69be, 0xbda97926, 0x3e3b1596, 0x3e5cb364, 
    0xbe4ea8e3, 0x3dd6be27, 0xbd3aacd2, 0x3eb65f56, 0xbe9d0179, 0xbddd7ec8, 0x3ee73ab7, 0x3e0ff453, 
    0xbe6996ed, 0x3e6418b2, 0x3ca43ec3, 0x3ea1a9bf, 0xbf0c6b56, 0x3da3591d, 0x3d8f0ef7, 0x3ed1655f, 
    0x3de046c0, 0x3cc9f3a1, 0xbe628d4c, 0xbea71233, 0x3a16d04d, 0x3e7be7c5, 0x3d371f06, 0x3d885f3c, 
    0x3e04faea, 0xbe28196f, 0x3e9064e1, 0xbe09eb6b, 0x3ef203d7, 0xbe5a27ec, 0x3dd5dadd, 0x3dd57d46, 
    0x3d4e2189, 0xbece6aa2, 0xbe5331a1, 0x3cdaeec2, 0x3ebe53b3, 0xbe21e72d, 0xbca0cc90, 0xbe85c41c, 
    0xbeb1889e, 0xbd5e1739, 0x3ea3b501, 0x3d8594fa, 0xbe72d9d9, 0xbd925091, 0x3eda5a38, 0xbe221de1, 
    0xbec68ce6, 0x3e258765, 0xbe945810, 0xbed87a28, 0xbdad75e1, 0x3eaf1de8, 0x3eb5f8d6, 0x3d998daa, 
    0xbea03af8, 0xbe705a5e, 0x3eb2224b, 0x3e1f9eff, 0x3e92140b, 0xbe17870c, 0xbe0c47ba, 0x3e708bdd, 
    0x3dc5f52e, 0xbce6eced, 0x3edca830, 0xbe4cbadb, 0xbe80760a, 0x3e768070, 0xbd2c8643, 0xbe2d3a22, 
    0xbda0eab0, 0x3e8a3a5d, 0xbebbf623, 0xbe38ba76, 0xbe541bb8, 0x3eb10492, 0x3e851b1d, 0x3e4fb798, 
    0x3dc0033e, 0xbd7aa76b, 0x3da7f62f, 0x3d8e419f, 0xbadb16cb, 0x3d64b8b7, 0xbe152f6d, 0x3e88ff97, 
    0x3e640fd6, 0xbdea9d17, 0xbdbea23a, 0xbe7e9bf3, 0x3e52a96e, 0xbe8e59c2, 0x3dd1d9bf, 0x3e215a61, 
    0x3e194b58, 0x3c73baf6, 0xbd9f7bc5, 0x3d94e3c8, 0x3d43ea4d, 0xbdbd5f15, 0x3dd68328, 0xbb941e05, 
    0x3e7cbca9, 0x3e595c92, 0x3d5bf761, 0x3e5c2b73, 0xbe229695, 0xbe37b5f7, 0xbc987d81, 0x3e3a718f, 
    0x3e645693, 0x3de334e0, 0x3e5295f8, 0xbd6f56fa, 0xbd2c1ad4, 0xbe8a5b2e, 0xbe52d385, 0x3d3ce819, 
    0xbd8ffe06, 0xbe222fbe, 0xbde5406f, 0x3de3b8d1, 0x3e1b93b3, 0x3ce9692b, 0x3e3e23dc, 0x3db6b949, 
    0xbdd12a60, 0x3e3af52a, 0x3e6bfbb7, 0xbde7f5da, 0xbcad416f, 0x3dee928f, 0xbd63e8af, 0x3e84f1a0, 
    0x3d8cbdcc, 0xbda2828c, 0xbe6f1585, 0xbe271420, 0x3dda24a3, 0xbd7e2ddb, 0xbdd3ebd3, 0x3d14f37c, 
    0xbe750804, 0x3df8ad3a, 0xbe3923ed, 0x3db733a8, 0x3e876a54, 0xbd28a79d, 0x3e75c2a1, 0x3e8efeca, 
    0x3e7e5afe, 0x3e73ce3b, 0xbdd440b5, 0xbe8ec2a5, 0xbde71bf0, 0x3c3ae1e9, 0x3df12cc2, 0x3e86bb86, 
    0x3e1a3c6d, 0xbe0d8e49, 0x3e73e540, 0xbd9f3d1f, 0x3dfb8b54, 0xbe67efeb, 0x3e10c932, 0x3e29e4e1, 
    0xbe4446b2, 0x3e3020b7, 0xbcc683b2, 0x3e8df24c, 0x3dbcd14b, 0xbd7dfdd1, 0xbcc48dfb, 0xbe5bb609, 
    0xbe12e376, 0xbdab44ad, 0xbc1849e7, 0xbe994113, 0xbdfa8fb2, 0xbd510cc5, 0x3e8dcbec, 0x3e615942, 
    0x3e05c080, 0x3d6d910c, 0x3d36bac0, 0x3e87092c, 0x3d9f157a, 0xbe9ae9e8, 0x3d49ee34, 0xbdf4803f, 
    0x3e5d8a4d, 0x3e6705bf, 0x3e17cb5b, 0x3da065d7, 0x3e970ac8, 0xbe579014, 0xbe66042e, 0xbe343e46, 
    0x3dc3b3d9, 0xbe75dc3f, 0xbe51f3b5, 0x3ccd0b15, 0x3dc7bd46, 0x3e010e14, 0x3e391a7d, 0xbd7fab45, 
    0xbe3b7b13, 0x3de43046, 0x3e398711, 0x3e5b03f5, 0xbe2aa0b9, 0x3e354139, 0x3dc597f8, 0x3d97df48, 
    0xbc8ca206, 0xbe868fcc, 0xbdaacfdd, 0x3d780647, 0xbe4ef045, 0x3e2ca8da, 0xbcf6de9f, 0xbda145dd, 
    0x3e215fc4, 0x3e41cf13, 0xbb894d3d, 0xbe4810d2, 0xbd86323d, 0x3d450efb, 0xbc981c95, 0xbd166f6a, 
    0xbe130b63, 0xbcc7f504, 0x3635eaca, 0xbe77b7b3, 0xbe0dd942, 0xbe7eba3e, 0x3daeaf1d, 0xbd3bffaa, 
    0x3e424c77, 0x3e986146, 0xbe1c98d4, 0xbe3b983e, 0xbe30bd75, 0xbd92dc3b, 0xbd1e4e2a, 0xbe8955dd, 
    0x3e862582, 0xbda0e60a, 0x3df11fd8, 0xbda604dc, 0x3ea878fb, 0x3e4f75ed, 0xbe718fa6, 0xbe81e8f5, 
    0x3ae37fb6, 0x3e9022bb, 0xbb66496c, 0xbe670ad0, 0xbdb04bc8, 0xbdd9ce71, 0xbe63be9a, 0x3d9c21b3, 
    0xbdd3a914, 0xbde2fa0e, 0xbdfdbb42, 0x3c8887b4, 0xbd935bb7, 0xbe3e8b08, 0xbe8cb7f4, 0xbd95e8f3, 
    0xbe4a83be, 0x3e358989, 0xbdb6e03d, 0x3ed21b2c, 0xbe4b8e69, 0x3e91de83, 0x3df886c2, 0xbd47b156, 
    0xbe933649, 0xbd44cffd, 0xbe826b7b, 0xbde5ca48, 0x3e4b5244, 0xbdd4f153, 0xbe678af5, 0xbd466840, 
    0xbe5e4e15, 0xbe80fc03, 0xbe1591f2, 0x3b0f5964, 0xbe761004, 0x3d80bddc, 0xbdeee6f4, 0xbd7b9768, 
    0xbe808255, 0x3e4c8ac3, 0xbd6915fc, 0x3d3ccb55, 0xbe066f58, 0xbeb373e7, 0xbdafd9df, 0xbe3f7eff, 
    0xbd8b99b2, 0xbe0ea0a0, 0xbe3ab3e1, 0x3ca94685, 0x3ed079dc, 0xbe108613, 0x3da7a279, 0x3ed04cd3, 
    0x3e08973c, 0x3ec4f699, 0xbe11eddc, 0xbe402aa3, 0x3b8d7f20, 0x3ea4b916, 0xbdc8a4e6, 0x3e868a09, 
    0x3eaa40f1, 0x3d4cbae9, 0x3d50555d, 0xbe640326, 0xbe5b494e, 0xbd49ec85, 0xbe9fc6b1, 0xbe5d6a8b, 
    0x3ec3f473, 0xbdfc0793, 0xbdb88145, 0xbe2dbd21, 0x3e65ca3f, 0x3e9645d0, 0x3ea3ef7f, 0xbc366d5a, 
    0x3ebe1d9c, 0xbe1164ea, 0xbea36df6, 0x3eaad33a, 0x3e0e7932, 0xbe924a48, 0x3d9dc34a, 0xba00afdf, 
    0xbe0b4de5, 0x3eda6b87, 0xbebb0651, 0x3d550d47, 0xbdd71196, 0xbddc7eb5, 0xbe48b8d5, 0xbe1ea95d, 
    0x3dc4e4dc, 0x3e9b497f, 0xbda1f89a, 0x3d8d9b5c, 0xbd08018c, 0x3e93eaaa, 0x3e22246f, 0x3da18a32, 
    0xbeb0663a, 0xbe466426, 0x3e8177bd, 0x3ebc89de, 0xbe313519, 0x3e97be3d, 0x3e478e88, 0x3e9700a2, 
    0xbc2cf598, 0x3daef5bc, 0xbe1965fe, 0x3e6f3d7b, 0xbe1665f5, 0x3e9814b1, 0xbeb1dc6d, 0x3e3059bb, 
    0x3e252b17, 0xbe908f25, 0x3d330a0b, 0xbdcb3c36, 0x3e5305c2, 0x3e9a143c, 0x3c8da1fb, 0xbcf06ec1, 
    0xbdbe5f44, 0xbc6798c0, 0x3cdb3559, 0xbd637e12, 0xbe2e00a9, 0xbe029949, 0xbdc35993, 0xbe9406b3, 
    0x3cdf05a9, 0x3ce4b75f, 0x3d61c93d, 0x3d9c0ec3, 0xbe991aab, 0xbe0e6914, 0xbcf037c2, 0x3d03343f, 
    0x3e28c7a6, 0x3e98ded6, 0x3e8c0a8e, 0x3de1dd4b, 0x3e3b936d, 0x3d5a9840, 0x3deff119, 0xbd4942b1, 
    0xbe9e9404, 0xbb33e57f, 0xbe8de8f6, 0x3e374edf, 0xbe765faa, 0xbe36194b, 0x3e6fdb73, 0xbe9b653a, 
    0xbd922872, 0x3de3b0f0, 0x3e2fe2b4, 0x3e93c8b7, 0x3eb97571, 0xbdb2bc4b, 0x3c3e66c4, 0x3e576bfb, 
    0xbea2c1d8, 0x3df5702d, 0xbe916b98, 0xbeab6708, 0xbe76913f, 0x3e2caf18, 0x3e2b3e84, 0x3e88af2b, 
    0xbe7ded89, 0x3e8f70ac, 0x3a4fcf62, 0xbe2e10dd, 0xbd289c28, 0x3d10bc83, 0x3dcef13d, 0x3d7bffec, 
    0xbd64136b, 0xbeb6aa2a, 0x3dff2e18, 0xbe6eb0eb, 0xbe83b07d, 0xbe8f39ab, 0x3dadeb8e, 0xbdaacc5c, 
    0x3ea31958, 0x3d27c003, 0x3e700217, 0xb9950356, 0x3e851963, 0x3d8e09ee, 0x3da3e653, 0x3dfcf08f, 
    0xbe81ca48, 0x3e3bd4e0, 0x3c5a7221, 0xbec9cc3b, 0x3d826baf, 0x3e0641c1, 0x3e6c39e1, 0xbe3c9229, 
    0xbdda2288, 0x3d6f8e9e, 0xbb33f597, 0xbd807243, 0xbe08bca1, 0x3d5f6548, 0x3df15146, 0x3df2f4a4, 
    0xbd92223c, 0xbe24578a, 0xbe08408f, 0x3d93c8d9, 0xbe12baec, 0xbe02c463, 0x3e8e34fa, 0xbe941d62, 
    0xbe59e3f3, 0x3d45fbcc, 0xbccabd6d, 0xbe72249c, 0x3d1f7d37, 0x3dce89f0, 0xbe6fc07f, 0xbe25a81c, 
    0x3e567708, 0xbd08daff, 0x3dfa028b, 0xbc9c8215, 0x3e004ee2, 0x3d8d4c1b, 0x3e0380e5, 0xbeb0f9b6, 
    0xbe8ae701, 0x3be38c76, 0x3e85b312, 0x3eb0fb52, 0xbe16ce07, 0x3e2fd8f0, 0xbd6bf60b, 0x3d8bfd9e, 
    0x3eab6dd9, 0x3e319d69, 0x3ce108d4, 0x3e8a7680, 0xbe5112ae, 0xbeaaaaa7, 0xbe40f75d, 0x3e83db89, 
    0x3dcdf20e, 0x3e756c7f, 0x3d6bf119, 0x3d92255e, 0x3dc97375, 0x3dd5f506, 0x3d8d1302, 0x3da7f26a, 
    0xbe099e38, 0xbcb39254, 0x3e2c4d1c, 0x3e36ee66, 0xb967b284, 0xbe8084ed, 0xbe718489, 0x3e9b0924, 
    0xbe8b85b6, 0xbe351919, 0x3e18b9d4, 0xbe24e957, 0xbe2a89e3, 0x3eb0d68a, 0x3e414618, 0xbe6fb077, 
    0xbe96f687, 0xbe858367, 0x3e9aa9d9, 0x3d98308e, 0x3e8decbf, 0xbe80509f, 0xbd4056ae, 0x3bf9d2f1, 
    0x3e378dee, 0xbeb32abc, 0x3d0468af, 0xbe6c5843, 0x3ca2548b, 0x3ea492d8, 0xbe62c4d7, 0x3ca19345, 
    0x3d8ca866, 0x3eb7ff80, 0x3df80fea, 0xbdfd6c11, 0x3e86d6ac, 0x3e3c422d, 0x3e85d356, 0xbe835cd9, 
    0x3ea4c4c9, 0x3e1f8aee, 0xbe072a93, 0xbdc31fd4, 0x3ea7a4c4, 0x3cb0917f, 0x3dcba812, 0x3e875bb0, 
    0x3ca10f52, 0xbd9d7637, 0xbd3a8b47, 0x3e6769cb, 0xbe75d3bf, 0x3e6ca37e, 0x3e8ddd8f, 0x3e139caa, 
    0x3d737f90, 0x3e5b847e, 0x3ea9f6f6, 0x3dcf171d, 0x3ddd9d24, 0xbaad81fa, 0x3de2cc67, 0x3dae0db7, 
    0x3dd17aec, 0xbd9033e7, 0x3d1f8bdb, 0x3e5bf0a3, 0xbe00e549, 0x3cb8e6c2, 0x3e926bbc, 0xbd2c298b, 
    0xbc54250b, 0x3d83b3e5, 0xbd66be92, 0xbc25d1e9, 0x3d3febc5, 0xbb872760, 0x3e916b44, 0xbd16a2f2, 
    0xbe8317e0, 0x3d2b1ba5, 0xbe278b6a, 0x3ded1d61, 0xbdda566a, 0xbdbc2440, 0x3e00d341, 0xbe167db7, 
    0x3d588e58, 0x3cf04db7, 0x3e9154f4, 0xbe3e0dc5, 0x3e7f4515, 0xbd63a301, 0xbc98e68f, 0x3ddb8ab1, 
    0x3da57f37, 0x3e87b8c4, 0x3d112bde, 0x3e72849b, 0x3c988375, 0x3d27dd99, 0xbdf345c9, 0xbde50158, 
    0xbe25f042, 0x3d865b4b, 0x3e2b776c, 0xbe6b9931, 0x3e353d00, 0x3b3362f6, 0xbc81032d, 0x3e7d5c45, 
    0x3d6e3b6f, 0x3c6ef3f2, 0x3e1573ce, 0xbe8a756a, 0xbd14b1af, 0x3e4f7f1d, 0xbe31a36f, 0xbe17fd74, 
    0x3e2294bd, 0xbe2a4c38, 0x3dd9c562, 0xbe3ef108, 0xbdac0d50, 0xbe9369a2, 0xbe3b9b58, 0x3e530e64, 
    0x3c767f06, 0xbdb8ede5, 0x3d2817b8, 0xbe809aed, 0x3e36a231, 0xbe648567, 0x3eb2d6db, 0x3e48b3f8, 
    0x3e760482, 0xbe3d2bab, 0x3e186b6c, 0x3e410719, 0x3d745094, 0x3e6d93fd, 0xbe0f70ba, 0x3d82db38, 
    0xbd300911, 0x3df18897, 0x3d1bbf64, 0x3e39b78f, 0x3e269b71, 0x3e386c15, 0xbe12edd1, 0xbe8124fd, 
    0x3df3f166, 0x3dca8554, 0x3dacc1b6, 0x3e5362fe, 0x3e7914af, 0xbe3be5c4, 0x3e814f8b, 0x3e971d00, 
    0xbe6310db, 0xbc3e4fff, 0x3dcda6fb, 0x3dc69be5, 0x3e0cc78f, 0xbe9cece9, 0x3c9cf181, 0x3e5a369d, 
    0xbe0647d5, 0xbe4929a9, 0xbe01f63f, 0x3e1dda98, 0x3e495a3e, 0x3e5d6f8d, 0xbdd80144, 0x3e81d137, 
    0x3e7fe250, 0xbc8396fa, 0xbdd1ff6f, 0x3e3689eb, 0xbe851743, 0xbddac23e, 0xbdc49a8c, 0xbe9f8f2c, 
    0x3e194dc3, 0x3b26fad5, 0xbe02b6e1, 0x3ea69eee, 0x3e112b98, 0x3c119443, 0x3d8d7dbd, 0xbd804d47, 
    0xbe621cc2, 0xbe991298, 0x3e343f19, 0x3dcf3a09, 0xbe83ba20, 0x3e73eda9, 0x3e8edf22, 0xbe704c70, 
    0xbdf676c8, 0xbe1ee064, 0xbe18ebd7, 0x3e45ba4e, 0x3e8faab0, 0xbe0af8ae, 0x3dcbd072, 0xbe362979, 
    0xbc454dc5, 0xbe4b27c4, 0xbccd474c, 0xbd2cc9eb, 0x3dd0affd, 0xbe4ffb01, 0x3e4c3d1c, 0x3cf1d114, 
    0x3df307e0, 0x3e03cf72, 0x3e40594b, 0x3c1530d3, 0x3ca1f1c3, 0xbe1772f1, 0xbd335642, 0x3e28592f, 
    0x3dbd0583, 0x3e269057, 0xbd9ccaf7, 0x3e899d09, 0xbe7267ba, 0xbd253ee8, 0xbd8a7ead, 0xbe2f23bd, 
    0x3db0f764, 0x3d4fd5ae, 0xbe3e6196, 0xbbe13971, 0x3e274ea2, 0x3ba9cd91, 0xbda2217a, 0x3cb269e5, 
    0xbe061003, 0xbe25c5f2, 0x3e41a668, 0x3dbe1aa2, 0x3e08d9ae, 0x3d8f7b2a, 0x3dcfb907, 0xbd726662, 
    0xbe7bd1a2, 0xbe40c344, 0xbda11b62, 0x3d9d94ad, 0xbe15ca0b, 0x3e804fc5, 0xbe14518e, 0x3e31ad39, 
    0x3e0da57a, 0x3d8596e2, 0x3e88f9c4, 0xbda1e790, 0xbe76f370, 0x3e3336da, 0xbe5233b4, 0xbe2b9382, 
    0x3e055a9e, 0xbe1ed1b9, 0x3cbc18ba, 0xbd2d7502, 0x3e837dbb, 0x3e243eb3, 0xbe44491d, 0xbdcc5f1f, 
    0x3e21b195, 0xbe41ed0c, 0xbe06612f, 0x3e025c3b, 0x3dcaf22a, 0x3e148992, 0xbe0aa826, 0x3e1755bb, 
    0x3e172591, 0xbcdd75e8, 0x3cd2003a, 0x3dd6ba2e, 0x3e4de095, 0x3debe862, 0x3e75608d, 0x3e110d31, 
    0x3e86cd49, 0x3d212de1, 0x3e2d3f32, 0xbe4ddf15, 0xbc583bd0, 0x3e54f084, 0xbd9f6469, 0x3e64f2a9, 
    0x3db05d3a, 0xbca63672, 0x3e070324, 0x3d9e5bc5, 0xbe56ae14, 0x3e11200d, 0xbceaf723, 0x3e8d6bd4, 
    0x3d83dd37, 0x3dcf18b6, 0x3e114849, 0x3e1e00fa, 0x3e5d7a53, 0xbc427601, 0xbea7a79a, 0x3e57c7c3, 
    0xbe0a6082, 0xbe9adf40, 0xbe3d7b92, 0xbbeca2a8, 0x3e4959a1, 0x3d92974e, 0xbe6c069d, 0xbc72b3c2, 
    0x3d5e25d2, 0x3daec5c7, 0xbe2e2ed4, 0xbe346f90, 0x3e91b654, 0x3e8d0a20, 0xbe6a161c, 0xb9d27449, 
    0x3e0f4b64, 0xbe130370, 0xbe3a8b46, 0x3e16874d, 0x3e6fed67, 0xbd7c4784, 0x3e489edb, 0x3e3f26ff, 
    0xbe081c43, 0x3e010b88, 0x3c0b1d76, 0x3d593fe8, 0xbccc03dc, 0xbe63593f, 0x3d247462, 0x3d6f9ddd, 
    0xbc64bc59, 0xbdaa01f1, 0xbd36684c, 0xbe084eb8, 0x3e5042f9, 0x3dbf58c6, 0xbd795de0, 0x3e246543, 
    0x3e60700b, 0xbe0849a3, 0x3e413287, 0x3d81937f, 0x3d72500e, 0x3e0ad7c3, 0x3e6bd102, 0xbe335303, 
    0xbe0a3a27, 0xbe262ff6, 0xbe432314, 0x3e49b3c0, 0x3e8395a1, 0x3e547059, 0x3e3b8b70, 0xbe3c954f, 
    0xbe2a04c6, 0xbe16ed78, 0x3dee46a5, 0xbe5bceca, 0xbe4c46bc, 0xbd9a741d, 0x3e78cc18, 0xbe1c8e75, 
    0x3da3568b, 0x3cd2e1b7, 0xbd92605d, 0x3e115865, 0x3ddfc79b, 0x3e2c745f, 0xbe1fde41, 0x3d97f33b, 
    0xbe129974, 0xbe011456, 0xbdb1b56c, 0xbe035064, 0xbe3faf01, 0xbd5d5f13, 0xbd5b4498, 0x3de65a0b, 
    0xbdcc8fa7, 0xbe748dcf, 0x3a1dd60f, 0xbe1ecea2, 0x3e82b1d0, 0x3e374a3a, 0xbd1a7a0f, 0x3e3612e3, 
    0x3e92ba6f, 0xbe476c03, 0xbe3eca70, 0x3da86fb6, 0xbe330490, 0xbe4ca1e9, 0xbe116bfe, 0x3db5337d, 
    0x3d1edaaa, 0xbe164444, 0x3dd41883, 0x3e442548, 0xbe4862b1, 0xbe202d02, 0x3defae2b, 0x3aac7b32, 
    0x3e1ad1ae, 0x3e8ac6f2, 0x3e694b28, 0x3e0f6ecd, 0x3e694bc9, 0x3e526fa1, 0x3ad4f43d, 0xbd5d4c6c, 
    0x3e02067f, 0x3e9f805e, 0xbe1fa74c, 0x3ee5cae5, 0x3e59cd3d, 0xbe682478, 0x3ea0dbde, 0x3d39df65, 
    0xbdaeb154, 0x3cd058a7, 0xbea498d3, 0xbe02dd8b, 0xbe6f1679, 0x3d9d601a, 0x3eac1584, 0x3e897ff4, 
    0x3e7d8344, 0xbecd8457, 0xbeb41d86, 0x3e49501b, 0x3cbadb76, 0xbe8f84dd, 0xbe47a24a, 0x3d0ec453, 
    0xbc6865af, 0xbea9db22, 0x3e8b1e09, 0xbe087cf7, 0xbe5d80f8, 0x3ebfeb14, 0xbd7630ee, 0xbe4db104, 
    0xbe393c46, 0x3e279e20, 0x3e83c9ce, 0xbe5bebd0, 0xbcf625cc, 0xbe4a37b0, 0x3e91716a, 0xbe932da8, 
    0xbe0cf894, 0xbe46ad05, 0x3dce552f, 0xbecc7464, 0xbe5e0710, 0xbddab9b7, 0xbd43160c, 0x3d9be948, 
    0xbe794daa, 0xbdb35add, 0x3e50abaa, 0x3da6cdb9, 0xbe81f2aa, 0x3d55800a, 0x3eccae46, 0x3e59d70f, 
    0x3e3ebc7b, 0xbe924774, 0x3d005f58, 0xbe01a271, 0xbeb1f760, 0x3ebd1d8d, 0xbea655a2, 0x3ed46a83, 
    0x3d890e45, 0xbc823b25, 0xbe15a854, 0xbe4a0c3f, 0xbe3b80e1, 0x3d4b385c, 0x3ece57f4, 0x3ec6623e, 
    0x3ebda743, 0x3e98d76a, 0xbe6b2692, 0x3e93f6a3, 0x3e690af2, 0x3e1731e4, 0x3bfd67a2, 0xbef8beff, 
    0x3ea0648b, 0xbdae2486, 0x3e48bf6d, 0x3e0ba65a, 0x3dad1223, 0xbd40bd4e, 0x3e207be0, 0xbd8d2680, 
    0x3e847ed7, 0xbe37fe44, 0xbe5c9cac, 0x3d07a6e6, 0xbe90dbaf, 0xbdb21385, 0xbe41b9bb, 0xbe8367cf, 
    0x3c81ff69, 0x3e812795, 0x3d75f207, 0xbd908057, 0xbe8f06bf, 0x3df04b96, 0x3e991f7e, 0x3c534abd, 
    0xbe83b87f, 0x3dd94516, 0x3d679799, 0x3c4a5667, 0xbd048941, 0xbe3629c8, 0x3e920d3d, 0xbebd054f, 
    0xbe1e2af4, 0x3e5142e2, 0x3d912b78, 0xbacc7a7d, 0x3d86bf13, 0x3e18a357, 0x3d44f7fe, 0xbd0133e4, 
    0x3e19c684, 0xbea0a00d, 0xbe03de56, 0x3ea75a9f, 0x3e889cfe, 0x3e97b98b, 0x3e474df4, 0x3dd3d294, 
    0x3ec7a358, 0x3dab46e1, 0xbe5b6f9e, 0x3e631b33, 0x3e5bd1af, 0x3d3937d9, 0x3e34375d, 0x3e21b054, 
    0x3e42cfc6, 0xbe99c59f, 0x3eabd5d4, 0xbe993133, 0xbeae68b1, 0xbdf632eb, 0xbe9fb957, 0x3e284267, 
    0xbe4588b8, 0x3e9953b1, 0xbdb5f2a9, 0xbdc1c332, 0x3e84538b, 0xbec8f1e0, 0xbe18697d, 0xbd9bc21b, 
    0xbd0f3c4d, 0x3e309e0d, 0x3e0ab59e, 0x3e9a153a, 0xbd603950, 0x3dd40cf6, 0x3e32456f, 0x3dd2ab1c, 
    0xbe19b51e, 0x3e5827ba, 0xbde50121, 0x3ea702a1, 0xbd83866f, 0xbe139c57, 0xbd90c7d7, 0x3da1d2e5, 
    0x3e0b426d, 0x3e215a5b, 0xbcaf4873, 0xbc852562, 0x3e93d637, 0xbc87c7ea, 0xbdfe517a, 0xbd9c03ae, 
    0x3e66f02d, 0x3e2ac287, 0xbe90c3e3, 0xbea3bd03, 0x3ca60169, 0xbe303094, 0xbe208cb0, 0x3e64fcaa, 
    0x3eab6de6, 0xbd6ce167, 0xbe01f21c, 0x3e8b31c6, 0x3e70bb6e, 0x3e175f1d, 0xbcee576d, 0xbe14671f, 
    0x3f0dad45, 0x3e93ad30, 0xbe97bf1c, 0xbee83f04, 0xbe92bb15, 0xbea2f142, 0x3e356c06, 0xbea91375, 
    0xbdeacda8, 0xbe9c91dc, 0x3ea08c2c, 0x3da256a8, 0x3c74b5c5, 0x3ebfd5ad, 0xbe63227d, 0xbef8a7f2, 
    0x3e7ae567, 0x3de77b58, 0xbedd053e, 0xbf043977, 0x3ec5c8db, 0x3d45c125, 0xbe293746, 0xbf02806d, 
    0x3ea46990, 0x3ce75a97, 0xbf03d80e, 0xbe9bb940, 0x3e45c378, 0xbe4ff413, 0xbe17f773, 0xbedfb7cb, 
    0xbec11e6a, 0x3e1066c0, 0x3cd33cc7, 0xbe6d4755, 0x3ddbcc69, 0xbe77f0d4, 0xbe9fe754, 0x3e9d07a8, 
    0x3b7b8530, 0xbd953929, 0x3e06c18a, 0xbeeeaa91, 0xbc9ded34, 0xbe1fbe3f, 0x3e1c69ef, 0xbed3beb5, 
    0xbecef633, 0xbe4b4d88, 0x3e330c04, 0xbe56fd19, 0x3e955bb6, 0x3efc2fdb, 0xbed58ef6, 0x3e205ad2, 
    0x3ed7ea30, 0xbed453c1, 0x3e64f2d6, 0xbe4cb2dd, 0xbd840e0d, 0xbeadc893, 0xbec4433a, 0x3e672331, 
    0xbe036a04, 0x3decd2e2, 0xbe5edcf7, 0x3e2f74f1, 0xbf0bdd01, 0x3ef90930, 0xbe956b66, 0xbe5a41ab, 
    0x3e9cf3c3, 0x3ed443f3, 0x3e8527e3, 0xbe510366, 0xbee2b18b, 0x3ec26576, 0x3e9c5e25, 0x3f09b7d1, 
    0xbe56b9f9, 0x3f0689dd, 0xbe94a083, 0xbdf0abd4, 0xbef2734d, 0xbf03fe8f, 0x3ea86fe1, 0xbef81129, 
    0xbedc0df1, 0xbf090d98, 0x3ed82977, 0x3e60396e, 0xbede24a1, 0xbe83b1dc, 0xbe9b7cca, 0x3e4d8222, 
    0xbcf183d9, 0x3c82ec72, 0xbe60d3b7, 0xbda27370, 0x3e57582a, 0x3daf4546, 0x3e2a4fcc, 0x3e249df1, 
    0xbd1a0a10, 0x3cc3db38, 0x3c1c335c, 0xbcc7a9ca, 0xbdd10924, 0x3bfdfd35, 0x3e586861, 0xbe05de3a, 
    0xbe3e7749, 0xbda02283, 0x3d5dbad9, 0xbe07d66a, 0x3d161032, 0x3d2244f6, 0x3c2d7771, 0xbe425c23, 
    0xbe204bad, 0x3cfdc87a, 0x3cdd2453, 0x3e0ecf68, 0xbd90a37d, 0xbe26eb59, 0x3d8eb591, 0xbd92f415, 
    0x3e22f85d, 0xbe0fe1f8, 0xbde848fe, 0x3e2905cb, 0xbb8a5e7d, 0xbe126440, 0x3da94263, 0x3e111aad, 
    0xbd9bf1f9, 0x3da545ea, 0x3cf109dd, 0xbe61439c, 0xbe1df23b, 0xbe5d5e4c, 0xbcc3b7a5, 0x3d7b9bdb, 
    0xbe2db442, 0x3e571015, 0x3d39a6b9, 0x3e198c95, 0x3de3dd4d, 0xbe694f61, 0x3db2add5, 0x3e03d140, 
    0x3e61a6ec, 0x3e515596, 0xbda0415c, 0x3d049faa, 0xbdefa00d, 0x3e5ace91, 0x3e6eb7ec, 0x3db36a66, 
    0xbd07b649, 0xbe4f5c7d, 0x3e10df72, 0xbe1301a5, 0x3ca13ea6, 0x3d4dca37, 0xbc378160, 0x3d44c2c5, 
    0x3e4ed67a, 0xbcdc245d, 0xbdb45cc8, 0xbe5d6979, 0xbc81c95e, 0x3d59f377, 0x3cb746c5, 0xbe39f402, 
    0xbe2305f8, 0xbe2d5127, 0x3de7524c, 0xbd8efb19, 0x3dab7413, 0xbd83148e, 0x3e169b88, 0xbe29ac90, 
    0x3db57646, 0xbd0bd2fb, 0x3e256911, 0x3d219fef, 0x3e017aab, 0x3dfabb66, 0x3c61b0f2, 0xbbebf1d9, 
    0xbdf33735, 0xbe7df7c2, 0xbe977e33, 0x3ee3b881, 0x3da66ec7, 0x3ed63d04, 0xbec75e73, 0x3edfb636, 
    0xbdeec638, 0x3e7ab646, 0x3daafc64, 0x3e870d73, 0x3e1f9171, 0xbd171183, 0xbe74c5d6, 0x3ecb5494, 
    0xbc2c22ce, 0xbeb00682, 0x3e728340, 0xbc52e2d1, 0x3e70ab8a, 0xbe87911e, 0x3eaee7cd, 0xbe652794, 
    0x3ead7785, 0xbe44b972, 0xbe30e4d5, 0xbef302b7, 0x3cb20dd6, 0xbeae015f, 0xbe5144a8, 0x3e44fcd3, 
    0xbe10b505, 0x3e08d07d, 0xbe0718ba, 0xbeab9341, 0xbecadee3, 0x3eec6e00, 0x3e548d8b, 0xbeb997d8, 
    0x3ea319e7, 0x3d4652d4, 0xbeaa4cc1, 0x3ebdc022, 0xbdf32a33, 0xbe798004, 0x3ed3497f, 0x3e0c72ca, 
    0x3ed29196, 0x3e57a489, 0x3c4ccfe7, 0xbec7f209, 0xbe8c05e7, 0xbbef4f95, 0xbea27164, 0xbdbbd958, 
    0xbcb0dfbb, 0x3e4408ce, 0x3ed0e4df, 0x3e5d2293, 0x3da8e1d8, 0x3e07e874, 0x3e3398b9, 0xbeb00374, 
    0x3beeef69, 0x3ec20aea, 0xbd1e62be, 0x3ede972a, 0x3d20bd36, 0x3eb5b550, 0xbda74688, 0x3dd49914, 
    0x3e0ff758, 0x3d4408ac, 0xbe65be91, 0x3e9152f7, 0x3e9f4421, 0xbe33239e, 0x3edbbc0c, 0x3f00e071, 
    0x3ec66c80, 0x3e9a32f0, 0x3d5b66de, 0xbe5a4795, 0xbc6a707f, 0xbea00dd8, 0xbe86fcde, 0x3e1ae43a, 
    0x3e9a10d1, 0xbe0cbbb9, 0x3ee2ce94, 0x3d17f2fd, 0x3de524cd, 0x3ea6b29f, 0x3e527bb4, 0x3cae0adb, 
    0xbe79814c, 0xbe76e46b, 0x3d582cbf, 0xbe73db15, 0xbe4960e7, 0x3d2de733, 0xbd9f1f64, 0x3e2a941a, 
    0xbe3a2045, 0x3d44afde, 0x3d6a94a6, 0x3e265fca, 0xbe6bfada, 0xbde56eb6, 0x3e18bffd, 0xbd99bf99, 
    0x3eb772b8, 0xbd69cd1b, 0x3e25677c, 0xbec59903, 0x3ea53773, 0x3d902e1c, 0xbed44fcb, 0xbe7591a2, 
    0x3ccff75e, 0x3ddbefa4, 0xbe7389a7, 0xbdb96510, 0xbdc78a7b, 0x3deac774, 0x3e68558a, 0xbc1b1165, 
    0xbe92fd53, 0xbe3568a4, 0x3e994917, 0x3e80025a, 0xbe45fb21, 0x3e28ddac, 0x3e38f4d2, 0x3eafeff7, 
    0x3db8c6a4, 0x3e6149ce, 0xbd854db3, 0x3e237c30, 0xbe8308c4, 0x3e692761, 0xbe979cb7, 0xbe1367ed, 
    0xbe802719, 0x3ea94ea4, 0x3d8f72ae, 0xbe5da389, 0xbecbf026, 0xbe2ef7f3, 0x3d0ff551, 0xbe67edb7, 
    0x3d96c4cb, 0x3e976965, 0xbdac46a4, 0xbd9377c1, 0x3dd72421, 0xbe66ccd4, 0xbeb6e197, 0x3ddf5b27, 
    0xbe97c395, 0xbe8a3778, 0x3e814c15, 0x3ea01be6, 0xbe6c0bb3, 0x3dd88883, 0x3e843f2a, 0xbda1a37e, 
    0xbd9a7d8d, 0x3e0c3e83, 0xbe8a8239, 0x3d2105ba, 0xbec6d63e, 0xbeb690ee, 0xbe0470e4, 0x3ebb6ab9, 
    0xbeab57c2, 0x3df81322, 0x3ef2c28e, 0x3e17610b, 0x3dcb608c, 0xbeac653f, 0x3eb18bac, 0xbe62cbda, 
    0xbe31d5e5, 0x3e4acab0, 0x3e2f5641, 0x3d07e26a, 0x3e58f580, 0xbb68cb4d, 0xbe8a43a0, 0x3eb00c54, 
    0xbe627f55, 0x3c8510ed, 0x3dedb78d, 0x3db6df2b, 0xbd8b7b07, 0x3eb2be26, 0xbdecca2b, 0xbe3fb6e1, 
    0x3e4deb01, 0xbea0177c, 0xbe0588a5, 0xbe1b4623, 0x3e7608ad, 0x3d161757, 0x3e70cafa, 0x3e9b728e, 
    0x3ea748c2, 0x3ed13bf7, 0xbe625854, 0xbe8ddf64, 0x3e2f5502, 0xbdfe853a, 0xbe51a0c9, 0xbbffca49, 
    0x3e4ac2a8, 0xbe836a57, 0xbdcb3f21, 0xbd907dbf, 0x3e4e1c3c, 0x3e4680ce, 0x3deabd87, 0x3e7a7a55, 
    0xbeadbadf, 0xbeb75342, 0x3d1e0e48, 0xbea23cc4, 0xbeb8e41f, 0x3d7ffba1, 0x3e503185, 0xbe0200f4, 
    0xbd2911ba, 0x3e836c36, 0x3e49ba8c, 0xbcadaac7, 0x3d576e44, 0xbe2b14f7, 0x3c8083f9, 0x3e62eac0, 
    0xbe1da515, 0xbe3d2ddc, 0x3d5bb49a, 0x3ea3a4bd, 0xbebce2bf, 0x3ea0d3a7, 0x3dcefb50, 0x3ddc7443, 
    0x3c79bd53, 0x3dc63aad, 0xbeb2d0bf, 0xbe3979e6, 0xbeafbe3c, 0xbe86cca0, 0x3e6cf897, 0x3ea4b6bc, 
    0xbe467815, 0x3ea8a407, 0xbe01dc15, 0xbebb52ef, 0x3e07142c, 0x3ec30934, 0x3d756fa1, 0xbe6a3cfb, 
    0xbe509797, 0x3e17020f, 0x3e9742c2, 0xbd05aa9f, 0x3e2977ac, 0xbe75c395, 0xbd67ed5f, 0xbebba080, 
    0x3ea6688d, 0x3d083237, 0x3e79853f, 0x3dcd0e51, 0xbd581d8f, 0xbd36c26d, 0xbed9d660, 0xbebf7e36, 
    0xbe2276a0, 0xbe7a8557, 0xbed73f87, 0x3ea85764, 0xbe368d6c, 0x3ec2b68c, 0xbe9fc0d4, 0xbd0cfb8c, 
    0xbe734cbc, 0xbd3f5962, 0xbe71de47, 0x3e7a2fb8, 0xbe775d37, 0x3e90f418, 0x3d810d65, 0x3ec6e9b6, 
    0xbc205b6c, 0x3e9b4fe3, 0x3e187032, 0x3d300b48, 0x3cd1e6e6, 0x3e766065, 0x3e921d95, 0xbe6f4af8, 
    0x3ec673eb, 0xbe7e43bc, 0x3de4d311, 0x3db80f9a, 0x3d9896c7, 0x3cc8bed4, 0xbde5b524, 0xbd9c3638, 
    0x3e74b8a7, 0x3da05102, 0xbcf66b47, 0xbe84d426, 0xbdc6ee72, 0x3e5721ac, 0xbe7a8e8e, 0x3e61949f, 
    0xbc2664b9, 0xbe8d69cc, 0x3de88542, 0xbc514a1f, 0xbd0e0557, 0xbe8bc1a8, 0x3cc01062, 0x3eb214bc, 
    0xbd4054a9, 0x3ed322e3, 0x3e826a99, 0xbe30cb85, 0xbda7dfe1, 0xbea22338, 0x3e454c47, 0xbee9d6f9, 
    0x3e7a54e0, 0xbd338df7, 0xbdf7f35c, 0x3d66cc8b, 0x3eb0fc02, 0xbe66f13d, 0xbe0855b4, 0x3e54e904, 
    0xbcd48775, 0xbee05183, 0xbe1e961f, 0x3e9a6c95, 0xbdd0fa50, 0x3dfa473c, 0x3d8e9056, 0x3ea9321f, 
    0x3e904cbb, 0x3ebc982a, 0x3d85f211, 0x3e1f45f9, 0x3e85786c, 0xbe969460, 0x3df1a00d, 0xbdfb6ee1, 
    0xbeae6747, 0x3e671e46, 0xbe05c91f, 0xbe70f7b3, 0x3ce94c36, 0xbeabfa64, 0x3e1bc826, 0xbe6c9620, 
    0xbe902728, 0x3da08953, 0x3e6c79e2, 0xbe08e010, 0xbd9b13cd, 0x3e17e861, 0x3e48aaa4, 0x3ec9f5c9, 
    0xbe839907, 0x3e33dd89, 0x3e55acb0, 0x3d106051, 0xbe01c4aa, 0x3cf60d75, 0xbea45158, 0x3d3a72b3, 
    0xbd2f7f1e, 0x3e2e7bee, 0xbde6bb0b, 0xbcd0bbca, 0x3e815fb7, 0xbe865750, 0xbed646aa, 0x3e44fbc1, 
    0x3e6b30bb, 0xbe5209a6, 0x3e84e418, 0xbd88b5d8, 0x3e0df0ef, 0xbd876189, 0x3e885f8b, 0xbe72272a, 
    0xbd4311c0, 0xbe378cf9, 0xbe4e52af, 0x3d128c9c, 0xbe59998f, 0x3e491d21, 0x3ebbecfd, 0xbea6f646, 
    0x3e7052b0, 0xbe93addf, 0xbcfa007f, 0xbe8ec04c, 0xbed980fd, 0x3d53ed34, 0x3cb8d5aa, 0x3db1b196, 
    0x3e9a7107, 0x3e6d750a, 0xbd34954e, 0x3ec91b44, 0xbd1f1405, 0x3d00c128, 0x3e50abdc, 0xbeaff67c, 
    0x3e160d10, 0xbda6396b, 0xbeb67689, 0xbebf86d8, 0x3d1700ae, 0x3db1ca75, 0x3ea1669d, 0xbe94baa5, 
    0xbcfa6d31, 0x3dcb22dd, 0x3e62c453, 0x3e231c89, 0xbed9ef16, 0x3de78950, 0xbeb323c5, 0xbdf7930f, 
    0x3d35ac36, 0xbeb806ce, 0x3e757c5b, 0xbd59b10a, 0xbe8f4b18, 0x3e2ea280, 0x3ea337c2, 0xbe25bfd0, 
    0x3e0860cf, 0x3e9fff3b, 0x3ecd1a60, 0xbd816445, 0x3e87db1c, 0x3e9126c9, 0xbecee08a, 0x3e6b6758, 
    0x3e48c527, 0x3e0b40df, 0x3e2e7a34, 0x3ec17b12, 0x3eb66d0e, 0x3e8a74f9, 0x3d51fb3a, 0x3ea4c5d7, 
    0x3e49c044, 0x3e033d23, 0x3e10b74e, 0xbe955cdc, 0xbf026ced, 0x3eac66f8, 0x3da63044, 0xbe5b8083, 
    0x3e4818a4, 0x3ed50f7e, 0x3e6a4811, 0x3c83c2ff, 0x3e0d0f39, 0xbd55e951, 0x3e71b977, 0xbe5beb0d, 
    0x3e8660f2, 0xbeb40d48, 0x3e5e5a1b, 0x3e2e580a, 0xbe764d8d, 0xbea310c1, 0x3dca1461, 0xbe33cb8e, 
    0xbe663601, 0x3e49b3ad, 0x3d08986d, 0xbddb1a5e, 0x3e73dea6, 0xbebf81aa, 0xbcb8f2c0, 0xbe1c0e3c, 
    0x3d0533fd, 0xbed05bd1, 0xbe5928d2, 0x3d1da052, 0x3ed6d3e9, 0xbe4dbed4, 0xbe5d8119, 0xbe3f423e, 
    0x3e29a131, 0x3ea36bf1, 0xbc080a35, 0xbe833847, 0xbe8d8a7b, 0x3d913208, 0x3dc77869, 0xbe55a295, 
    0xbd82367a, 0x3ddf0a2b, 0x3c7d2873, 0xbe61eb42, 0xbebfe1d1, 0xbe6aa1bf, 0xbe769e78, 0x3ea3a8a4, 
    0x3d718231, 0xbe4d99e4, 0x3ef07c0d, 0xbd1c5491, 0xbecdbf9e, 0x3cc73a57, 0x3e484894, 0xbe8a5426, 
    0xbe4f0b97, 0xbe47cf80, 0x3d0870cf, 0xbc8b8267, 0x3e5c8edd, 0xbd89d464, 0xbe8ef621, 0x3e3af858, 
    0x3e11ed81, 0x3e976e90, 0x3e99d50e, 0xbe850f79, 0x3d0f46eb, 0xbd9ad9a2, 0x3e11e197, 0x3ebc56b3, 
    0xbe82fbb7, 0xbdf0fdbd, 0xbe21928f, 0xbe4fa157, 0xbdb084f3, 0x3e03501c, 0xbb37ade1, 0xbdc57206, 
    0xbdb86b96, 0xbe0fa3eb, 0x3ec1d634, 0x3e98b86f, 0xbe471b82, 0x3e18464b, 0x3d56dc16, 0x3de07c4d, 
    0xbe343fcb, 0xbea6797c, 0xbc0ceb08, 0xbe2ee4f1, 0xbe8d2cfe, 0xbe4e7228, 0x3c1d3431, 0xbe740158, 
    0x3dadc0b7, 0x3e927704, 0xbe4ff25a, 0xbdf2ec61, 0xbd02fe9a, 0xbea0ccee, 0xbe9c76cd, 0x3e5b9b51, 
    0xbedacd5b, 0x3eaa11e6, 0xbe094c06, 0xbecc83f1, 0x3cb209fc, 0x3dd9b2d8, 0x3c917c96, 0x3dd771d6, 
    0x3d1642b3, 0xbecf3abb, 0xbea5a22a, 0xbe3ac989, 0x3e556449, 0x3ebf060d, 0x3e31a6b7, 0xbeedd3ba, 
    0xbe8c16a9, 0x3e28d849, 0x3d31ab74, 0x3c7b1fa3, 0xbd8f93c1, 0x3e4e82fa, 0xbe883c85, 0xbec7267b, 
    0xbf04c03b, 0xbe77ff02, 0x3da1eaf4, 0x3e826fc4, 0x3e8d6033, 0xbe2a75d4, 0xbe8f7f5e, 0xbef88380, 
    0xbedb1e80, 0xbed43592, 0x3c671a10, 0x3d842a70, 0x3d16a2b7, 0x3ef1a756, 0x3e8c84f8, 0x3d187afa, 
    0xbe5a444e, 0xbee2f926, 0xbe8d48bf, 0x3ec52187, 0xbd37c759, 0xbed23ebd, 0xbe272fef, 0xbede54ad, 
    0xbe6d0365, 0xbebdc6ca, 0xbd9d731a, 0x3e66c397, 0xbe397288, 0x3eaf2580, 0x3ed2b315, 0x3ed00bbb, 
    0x3e87c908, 0xbe305e1a, 0x3e840021, 0xbed26942, 0xbe43d784, 0x3ec87f09, 0x3ea7af92, 0x3f013b93, 
    0x3e85749c, 0x3efd1078, 0xbebce804, 0x3e8f0419, 0x3e1b707d, 0x3dd6d4b1, 0x3eaad846, 0xbec1b1ce, 
    0xbee0921f, 0xbebe3717, 0x3e948119, 0x3ea628e0, 0x3eace8cd, 0xbeaa43e8, 0xbe214010, 0x3eef44ae, 
    0xbde81c8f, 0xbed6ea80, 0xbe7cf0ea, 0xbe1043d7, 0xbeb3cfc9, 0x3ec70609, 0xbedb2add, 0x3dbdab60, 
    0x3e56b8e5, 0x3de63162, 0x396b7fb8, 0xbed82fcf, 0x3e6fc443, 0xbe8f5971, 0x3ecc6d55, 0x3e4d376e, 
    0xbdc47591, 0xbea75396, 0xbd21a082, 0xbe96a424, 0xbe099251, 0x3d8e2697, 0x3e89add0, 0x3e18d82a, 
    0xbd786135, 0x3dc62468, 0xbe5250c0, 0xbe21844b, 0xbd8b82f7, 0xbdf4cdb4, 0xbbbf0cb4, 0xbe7f0df8, 
    0x3b74904e, 0x3e123c03, 0xbe162758, 0xbe538a1b, 0x3e6b5d72, 0xbd3da39b, 0xbe043b0a, 0x3eafaba9, 
    0x3e69e580, 0xbc2e2105, 0x3d101a82, 0xbe35067e, 0x3c3924f1, 0xbe8a4467, 0x3e527fa9, 0xbd8c51b7, 
    0x3e12ba93, 0xbdb229ab, 0xbea3facc, 0x3ea9465c, 0xbd1af6b1, 0xbea1092c, 0xbd71c176, 0xbe1e7cc9, 
    0xbe8ecb08, 0x3c7b8077, 0xbcf0d6e7, 0xbd83e708, 0x3e2f81c1, 0xbeaa76fb, 0xbe84e78f, 0xbe3a579c, 
    0x3e3f74c1, 0xbe50f692, 0x3e7a0f59, 0xbeb30997, 0x3d0cbac9, 0x3e60933d, 0x3d4e5d5e, 0x3e815565, 
    0xbe4056de, 0x3dbcf885, 0xbe04cdc1, 0xbe0b0480, 0xbe8f6c63, 0x3e6ba813, 0xbe863817, 0x3c172a97, 
    0x3e989950, 0xbe9b2b13, 0xbe767d79, 0x3e0d05c5, 0xbe013dd1, 0xbe3287b5, 0x3c01a8b6, 0x3e9c718c, 
    0x3ebe970c, 0xbe13fa73, 0x3e4493fa, 0xbcc43416, 0xbd14e9b9, 0xbe934cd5, 0xbe22c5f8, 0xbd8a9049, 
    0xbe953808, 0xbd8857cc, 0x3eb362e9, 0xbead1e08, 0x3e57f63d, 0x3e59a03b, 0xbe80e49b, 0x3ea418ed, 
    0x3e847d0c, 0xbd6a05c5, 0x3eac3c0a, 0xbe18875f, 0x3ea1fe81, 0xbe0ee442, 0x3d35e88c, 0x3d695dcd
};

static const uint32_t _K43[] = {
    0xbe71b4e0, 0x3eacce02, 0xbcfa708c, 0x3efe9aa6, 0x3e45559b, 0xbf3691d0, 0xbeec7265, 0x3f60f613, 
    0x3df8b211, 0xbf239e34, 0xbe66822c, 0x3f341aff, 0x3e836b52, 0xbe00fcb6, 0xbf306d36, 0x3ee3a5aa, 
    0xbf34817b, 0xbf10cac0, 0x3e1ac2da, 0x3ea2ea06, 0x3e4de365, 0x3e92ecaf, 0x3dfc0089, 0x3dd481ca, 
    0xbd9ecee4, 0x3daf0671, 0x3d9da732, 0xbe8e19af, 0xbf3ed980, 0x3e1a1376, 0xbd90d414, 0x3ee3c1c9
};

static const uint32_t _K49[] = {
    0xbda67b28, 0x3ef2de27, 0xbe9f1d97, 0xbec8e020, 0xbed0cfe9, 0x3e4904d4, 0x3efb3fbf, 0x3e66791d, 
    0xbd8c7249, 0x3e539a3c, 0x3eeafbae, 0x3e38f07d, 0x3ea43b4a, 0xbe99d6d3, 0x3ed9160d, 0x3e20a82c, 
    0xbdb4cac8, 0xbd6d084d, 0xbcd1e010, 0xbe96471e, 0xbeb9b548, 0xbec1a500, 0xbe6a28c0, 0xbe84e4a6, 
    0x3e50d5e3, 0xbe8556a1, 0xbda88ffd, 0xbe99fae9, 0x3eca4b92, 0x3e02aa53, 0x3e97766c, 0xbe01d844, 
    0xbe296b2e, 0x3eb420b8, 0x3e81d259, 0xbeaba8d5, 0xbe6a4374, 0xbed6c80f, 0x3df5645d, 0xbe3e01e2, 
    0x3eacfd05, 0xbea5e956, 0x3cfabb83, 0x3eb1b47a, 0xbda5945b, 0x3e947842, 0xbe9e5b9a, 0xbe9c107e, 
    0x3edb5b72, 0x3ebf5986, 0xbe1d428c, 0x3d570ff0, 0x3ebe5506, 0x3e678df9, 0xbeb325e4, 0x3e9ac6e5, 
    0xbe970a4d, 0xbf020739, 0xbeddd2ec, 0xbb6574c3, 0xbe9405e2, 0xbe8c638c, 0xbed0838a, 0x3e88a565, 
    0xbe8bcec6, 0xbdac3b59, 0x3efa0a77, 0xbdbdd807, 0x3d90d1b2, 0x3f053874, 0xbe29aed6, 0x3efd8d05, 
    0x3de98eca, 0x3ec63dfe, 0xbe9fccc0, 0x3c9f8115, 0x3e126f5f, 0x3e05282f, 0xbed0f9b2, 0xbe8d3037, 
    0xbea99d51, 0x3c42a857, 0x3d6046ed, 0xbefc24df, 0x3e3b371b, 0x3d6170f6, 0x3d2192e1, 0xbd50998f, 
    0xbe36282e, 0xbe83ee44, 0x3e77fd63, 0xbe698cd6, 0xbe9c215b, 0xbe9fd0ab, 0xbd97db9c, 0xbe3dc341, 
    0x3edd6da0, 0xbe5f9bf5, 0xbea998bb, 0x3d3a0fe3, 0xbd9a6781, 0xbea87598, 0x3dd12356, 0xbefff33d, 
    0x3e39fbaf, 0x3ebb6277, 0xbe9ef5de, 0xbe549a5f, 0xbeab388d, 0xbe9b104f, 0xbe2731b9, 0x3e7d576f, 
    0xbe1a8215, 0xbe7155b9, 0x3ed1ed3b, 0x3d5adbea, 0xbecdfe96, 0x3e60ca3e, 0x3eaa5695, 0x3e88b90a, 
    0x3e8e3541, 0x3e3466f7, 0xbe316b24, 0xbeb8ec2e, 0x3ad670e3, 0x3ee1b540, 0x3e0d7b44, 0x3bcd8d02
};

static const uint32_t _K51[] = {
    0x3da41a97, 0xbd828352, 0x3a8e5919, 0xbbd9a828
};

// Memory mapped buffers
#define _K12             ((int *)_K12)                       // s32[52] (208 bytes) 
#define _K20             ((float *)_K20)                     // f32[16,3,50] (9600 bytes) 
#define _K23             ((float *)_K23)                     // f32[16] (64 bytes) 
#define _K27             ((float *)_K27)                     // f32[16,3,16] (3072 bytes) 
#define _K29             ((float *)_K29)                     // f32[16,3,16] (3072 bytes) 
#define _K32             ((float *)_K32)                     // f32[16] (64 bytes) 
#define _K38             ((float *)_K38)                     // f32[32,3,16] (6144 bytes) 
#define _K40             ((float *)_K40)                     // f32[32,3,32] (12288 bytes) 
#define _K43             ((float *)_K43)                     // f32[32] (128 bytes) 
#define _K49             ((float *)_K49)                     // f32[4,32] (512 bytes) 
#define _K5              ((float *)_K5)                      // f32[1024] (4096 bytes) 
#define _K51             ((float *)_K51)                     // f32[4] (16 bytes) 
#define _K18             ((int8_t *)(_state + 0x000010d0))   // s8[20208] (20208 bytes) 
#define _K4              ((int8_t *)(_state + 0x00000000))   // s8[4304] (4304 bytes) 
#define _K8              ((int *)(_state + 0x00005fc0))      // s32[34] (136 bytes) 
#define _K9              ((float *)(_state + 0x00006048))    // f32[514] (2056 bytes) 
#define _K10             ((float *)(_buffer + 0x00000000))   // f32[1024] (4096 bytes) 
#define _K11             ((float *)(_buffer + 0x00000000))   // f32[513] (2052 bytes) 
#define _K13             ((float *)(_buffer + 0x00000804))   // f32[50] (200 bytes) 
#define _K14             ((float *)(_buffer + 0x00000000))   // f32[50] (200 bytes) 
#define _K15             ((float *)(_buffer + 0x000000c8))   // f32[50] (200 bytes) 
#define _K16             ((float *)(_buffer + 0x00000000))   // f32[50] (200 bytes) 
#define _K17             ((float *)(_buffer + 0x00000000))   // f32[100,50] (20000 bytes) 
#define _K19             ((float *)(_buffer + 0x00004e20))   // f32[50,16] (3200 bytes) 
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[50,16] (3200 bytes) 
#define _K25             ((float *)(_buffer + 0x00000c80))   // f32[50,16] (3200 bytes) 
#define _K26             ((float *)(_buffer + 0x00000000))   // f32[50,16] (3200 bytes) 
#define _K28             ((float *)(_buffer + 0x00000c80))   // f32[50,16] (3200 bytes) 
#define _K3              ((float *)(_buffer + 0x00000000))   // f32[1024] (4096 bytes) 
#define _K30             ((float *)(_buffer + 0x00000000))   // f32[50,16] (3200 bytes) 
#define _K34             ((float *)(_buffer + 0x00000c80))   // f32[50,16] (3200 bytes) 
#define _K36             ((float *)(_buffer + 0x00000000))   // f32[25,16] (1600 bytes) 
#define _K37             ((float *)(_buffer + 0x00000640))   // f32[25,32] (3200 bytes) 
#define _K39             ((float *)(_buffer + 0x000012c0))   // f32[25,32] (3200 bytes) 
#define _K41             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K45             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K47             ((float *)(_buffer + 0x00000000))   // f32[12,32] (1536 bytes) 
#define _K48             ((float *)(_buffer + 0x00000600))   // f32[32] (128 bytes) 
#define _K50             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K52             ((float *)(_buffer + 0x00000010))   // f32[4] (16 bytes) 
#define _K6              ((float *)(_buffer + 0x00001000))   // f32[1024] (4096 bytes) 
#define _K7              ((float *)(_buffer + 0x00002000))   // f32[513,2] (4104 bytes) 

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

static inline void hammingmul_f32(const float* restrict a, const float* restrict b, float* restrict result, int d0, int d1)
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

static inline void addi_f32(
	const float* restrict x,
	int count,
	float immediate,
	float* restrict output)
{
	for (int i = 0; i < count; i++) {
		output[i] = x[i] + immediate;
	}
}

static inline void loge_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		*result++ = logf(*x++);
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
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K4, _K3, 160));
        hammingmul_f32(_K3, _K5, _K6, 1024, 1);
        rdft_ndim_f32(_K6, _K7, 1, 1024, 1, _K8, _K9, _K10);
        norm_f32(_K7, 1, 2, 513, _K11);
        mel_f32(_K11, _K12, 513, 1, 50, _K13);
        addi_f32(_K13, 50, 1, _K14);
        loge_f32(_K14, 50, _K15);
        clip_f32(_K15, 50, 0, 4, _K16);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K18, _K16));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K18, _K17, 10));
    conv1d_flat_f32(_K17, _K20, _K19, 0, 5000, 50, 16, 100, 150);
    add_f32(_K19, _K23, 1, 1, 1, 50, 16, _K21);
    relu_f32(_K21, 800, _K25);
    conv1d_flat_f32(_K25, _K27, _K26, 16, 816, 50, 16, 16, 48);
    conv1d_flat_f32(_K26, _K29, _K28, 16, 816, 50, 16, 16, 48);
    add_f32(_K28, _K32, 1, 1, 1, 50, 16, _K30);
    relu_f32(_K30, 800, _K34);
    maxpool1d_valid_f32(_K34, 2, 2, 16, 25, _K36);
    conv1d_flat_f32(_K36, _K38, _K37, 16, 416, 25, 32, 16, 48);
    conv1d_flat_f32(_K37, _K40, _K39, 32, 832, 25, 32, 32, 96);
    add_f32(_K39, _K43, 1, 1, 1, 25, 32, _K41);
    relu_f32(_K41, 800, _K45);
    maxpool1d_valid_f32(_K45, 2, 2, 32, 12, _K47);
    globav1d_f32(_K47, 12, 32, _K48);
    dott_f32(_K49, _K48, _K50, 32, 4, 1);
    add_f32(_K50, _K51, 1, 1, 1, 1, 4, _K52);
    softmax_f32(_K52, 4, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K4, data_in));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K4, 4, 1024);
    fixwin_initf32(_K18, 200, 100);
}

