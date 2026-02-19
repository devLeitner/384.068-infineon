/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 21:14:46 UTC. Any changes will be lost.
* 
* Model ID  dfa339d9-26f1-4c93-be0c-312936829f29
* 
* Memory    Size                      Efficiency
* Buffers   20160 bytes (RAM)         76 %
* State     8392 bytes (RAM)          100 %
* Readonly  137064 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-large-balanced-3
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
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,20,32]
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [60,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [60,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [30,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [30,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,48]
* Convolution 1D                 [30,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Batch Normalization            [30,48]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[48]
*    beta = float[48]
*    mean = float[48]
*    variance = float[48]
* Activation                     [30,48]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [15,48]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [15,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Convolution 1D                 [15,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Batch Normalization            [15,48]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[48]
*    beta = float[48]
*    mean = float[48]
*    variance = float[48]
* Activation                     [15,48]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,48]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [48]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[48,4]
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

#ifndef _IMAI_MODEL_H_
#define _IMAI_MODEL_H_
#ifdef _MSC_VER
#pragma once
#endif

#include <stdint.h>

typedef struct {    
    char *name;
    double TP; // True Positive or Correct Positive Prediction
    double FN; // False Negative or Incorrect Negative Prediction
    double FP; // False Positive or Incorrect Positive Prediction
    double TN; // True Negative or Correct Negative Prediction
    double TPR; // True Positive Rate or Sensitivity, Recall
    double TNR; // True Negative Rate or Specificity, Selectivity
    double PPV; // Positive Predictive Value or Precision
    double NPV; // Negative Predictive Value
    double FNR; // False Negative Rate or Miss Rate
    double FPR; // False Positive Rate or Fall-Out
    double FDR; // False Discovery Rate
    double FOR; // False Omission Rate
    double F1S; // F1 Score
} IMAI_stats;

/*
* Tensorflow Test Set
* 
* (ACC) Accuracy 88.485 %
* (F1S) F1 Score 88.256 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 984                0              302              612
* (FN) False Negative or Incorrect Negative Prediction                8                0                1              238
* (FP) False Positive or Incorrect Positive Prediction              239                3                0                5
* (TN) True Negative or Correct Negative Prediction                 914             2142             1842             1290
* (TPR) True Positive Rate or Sensitivity, Recall               99.19 %         100.00 %          99.67 %          72.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          79.27 %          99.86 %         100.00 %          99.61 %
* (PPV) Positive Predictive Value or Precision                  80.46 %           0.00 %         100.00 %          99.19 %
* (NPV) Negative Predictive Value                               99.13 %         100.00 %          99.95 %          84.42 %
* (FNR) False Negative Rate or Miss Rate                         0.81 %         100.00 %           0.33 %          28.00 %
* (FPR) False Positive Rate or Fall-Out                         20.73 %           0.14 %           0.00 %           0.39 %
* (FDR) False Discovery Rate                                    19.54 %         100.00 %           0.00 %           0.81 %
* (FOR) False Omission Rate                                      0.87 %           0.00 %           0.05 %          15.58 %
* (F1S) F1 Score                                                88.85 %           0.00 %          99.83 %          83.44 %
*/


#define IMAI_TEST_AVG_ACC 0.8848484848484849 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8825553899833851 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 984, FN: 8, FP: 239, TN: 914, TPR: 0.9919354838709, TNR: 0.7927146574154, PPV: 0.8045789043336, NPV: 0.9913232104121, FNR: 0.0080645161290, FPR: 0.2072853425845, FDR: 0.1954210956663, FOR: 0.0086767895878, F1S: 0.8884875846501, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 3, TN: 2142, TPR: 1, TNR: 0.9986013986013, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0013986013986, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 302, FN: 1, FP: 0, TN: 1842, TPR: 0.9966996699669, TNR: 1, PPV: 1, NPV: 0.9994574064026, FNR: 0.0033003300330, FPR: 0, FDR: 0, FOR: 0.0005425935973, F1S: 0.9983471074380, }, \
 {name: "showering", TP: 612, FN: 238, FP: 5, TN: 1290, TPR: 0.72, TNR: 0.9961389961389, PPV: 0.9918962722852, NPV: 0.8442408376963, FNR: 0.28, FPR: 0.0038610038610, FDR: 0.0081037277147, FOR: 0.1557591623036, F1S: 0.8343558282208, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.828 %
* (F1S) F1 Score 98.834 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3131              389              306              896
* (FN) False Negative or Incorrect Negative Prediction               44                3                1                8
* (FP) False Positive or Incorrect Positive Prediction                7                6                3               40
* (TN) True Negative or Correct Negative Prediction                1596             4380             4468             3834
* (TPR) True Positive Rate or Sensitivity, Recall               98.61 %          99.23 %          99.67 %          99.12 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.56 %          99.86 %          99.93 %          98.97 %
* (PPV) Positive Predictive Value or Precision                  99.78 %          98.48 %          99.03 %          95.73 %
* (NPV) Negative Predictive Value                               97.32 %          99.93 %          99.98 %          99.79 %
* (FNR) False Negative Rate or Miss Rate                         1.39 %           0.77 %           0.33 %           0.88 %
* (FPR) False Positive Rate or Fall-Out                          0.44 %           0.14 %           0.07 %           1.03 %
* (FDR) False Discovery Rate                                     0.22 %           1.52 %           0.97 %           4.27 %
* (FOR) False Omission Rate                                      2.68 %           0.07 %           0.02 %           0.21 %
* (F1S) F1 Score                                                99.19 %          98.86 %          99.35 %          97.39 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9882796149016325 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9883406414923859 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3131, FN: 44, FP: 7, TN: 1596, TPR: 0.9861417322834, TNR: 0.9956331877729, PPV: 0.9977692797960, NPV: 0.9731707317073, FNR: 0.0138582677165, FPR: 0.0043668122270, FDR: 0.0022307202039, FOR: 0.0268292682926, F1S: 0.9919214319657, }, \
 {name: "brushing_t...", TP: 389, FN: 3, FP: 6, TN: 4380, TPR: 0.9923469387755, TNR: 0.9986320109439, PPV: 0.9848101265822, NPV: 0.9993155373032, FNR: 0.0076530612244, FPR: 0.0013679890560, FDR: 0.0151898734177, FOR: 0.0006844626967, F1S: 0.9885641677255, }, \
 {name: "hair_drying", TP: 306, FN: 1, FP: 3, TN: 4468, TPR: 0.9967426710097, TNR: 0.9993290091702, PPV: 0.9902912621359, NPV: 0.9997762362944, FNR: 0.0032573289902, FPR: 0.0006709908297, FDR: 0.0097087378640, FOR: 0.0002237637055, F1S: 0.9935064935064, }, \
 {name: "showering", TP: 896, FN: 8, FP: 40, TN: 3834, TPR: 0.9911504424778, TNR: 0.9896747547754, PPV: 0.9572649572649, NPV: 0.9979177511712, FNR: 0.0088495575221, FPR: 0.0103252452245, FDR: 0.0427350427350, FOR: 0.0020822488287, F1S: 0.9739130434782, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 94.981 %
* (F1S) F1 Score 94.952 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 575              378              162              645
* (FN) False Negative or Incorrect Negative Prediction               78                0                0               15
* (FP) False Positive or Incorrect Positive Prediction               15                6                0               72
* (TN) True Negative or Correct Negative Prediction                1185             1469             1691             1121
* (TPR) True Positive Rate or Sensitivity, Recall               88.06 %         100.00 %         100.00 %          97.73 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.75 %          99.59 %         100.00 %          93.96 %
* (PPV) Positive Predictive Value or Precision                  97.46 %          98.44 %         100.00 %          89.96 %
* (NPV) Negative Predictive Value                               93.82 %         100.00 %         100.00 %          98.68 %
* (FNR) False Negative Rate or Miss Rate                        11.94 %           0.00 %           0.00 %           2.27 %
* (FPR) False Positive Rate or Fall-Out                          1.25 %           0.41 %           0.00 %           6.04 %
* (FDR) False Discovery Rate                                     2.54 %           1.56 %           0.00 %          10.04 %
* (FOR) False Omission Rate                                      6.18 %           0.00 %           0.00 %           1.32 %
* (F1S) F1 Score                                                92.52 %          99.21 %         100.00 %          93.68 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9498111171073934 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9495237331747586 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 575, FN: 78, FP: 15, TN: 1185, TPR: 0.8805513016845, TNR: 0.9875, PPV: 0.9745762711864, NPV: 0.9382422802850, FNR: 0.1194486983154, FPR: 0.0125, FDR: 0.0254237288135, FOR: 0.0617577197149, F1S: 0.9251810136765, }, \
 {name: "brushing_t...", TP: 378, FN: 0, FP: 6, TN: 1469, TPR: 1, TNR: 0.9959322033898, PPV: 0.984375, NPV: 1, FNR: 0, FPR: 0.0040677966101, FDR: 0.015625, FOR: 0, F1S: 0.9921259842519, }, \
 {name: "hair_drying", TP: 162, FN: 0, FP: 0, TN: 1691, TPR: 1, TNR: 1, PPV: 1, NPV: 1, FNR: 0, FPR: 0, FDR: 0, FOR: 0, F1S: 1, }, \
 {name: "showering", TP: 645, FN: 15, FP: 72, TN: 1121, TPR: 0.9772727272727, TNR: 0.9396479463537, PPV: 0.8995815899581, NPV: 0.9867957746478, FNR: 0.0227272727272, FPR: 0.0603520536462, FDR: 0.1004184100418, FOR: 0.0132042253521, F1S: 0.9368191721132, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xd9, 0x39, 0xa3, 0xdf, 0xf1, 0x26, 0x93, 0x4c, 0xbe, 0x0c, 0x31, 0x29, 0x36, 0x82, 0x9f, 0x29}

// First nibble is bit encoding, second nibble is number of bytes
#define IMAGINET_TYPES_NONE	(0x0)
#define IMAGINET_TYPES_FLOAT32	(0x14)
#define IMAGINET_TYPES_FLOAT64	(0x18)
#define IMAGINET_TYPES_INT8	(0x21)
#define IMAGINET_TYPES_INT16	(0x22)
#define IMAGINET_TYPES_INT32	(0x24)
#define IMAGINET_TYPES_INT64	(0x28)
#define IMAGINET_TYPES_QDYN8	(0x31)
#define IMAGINET_TYPES_QDYN16	(0x32)
#define IMAGINET_TYPES_QDYN32	(0x34)

// data_in [1] (4 bytes)
#define IMAI_DATA_IN_COUNT (1)
#define IMAI_DATA_IN_TYPE float
#define IMAI_DATA_IN_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_IN_SCALE (1)
#define IMAI_DATA_IN_OFFSET (0)
#define IMAI_DATA_IN_IS_QUANTIZED (0)

// data_out [4] (16 bytes)
#define IMAI_DATA_OUT_COUNT (4)
#define IMAI_DATA_OUT_TYPE float
#define IMAI_DATA_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_OUT_SCALE (1)
#define IMAI_DATA_OUT_OFFSET (0)
#define IMAI_DATA_OUT_IS_QUANTIZED (0)

#define IMAI_KEY_MAX (58)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
