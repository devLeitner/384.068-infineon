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


#define IMAI_TEST_AVG_ACC 0.9438472942920682 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9426053063861939 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 2368, FN: 41, FP: 255, TN: 2732, TPR: 0.9829804898298, TNR: 0.9146300636089, PPV: 0.9027830728173, NPV: 0.9852145690587, FNR: 0.0170195101701, FPR: 0.0853699363910, FDR: 0.0972169271826, FOR: 0.0147854309412, F1S: 0.9411764705882, }, \
 {name: "brushing_t...", TP: 854, FN: 11, FP: 1, TN: 4530, TPR: 0.9872832369942, TNR: 0.9997792981681, PPV: 0.9988304093567, NPV: 0.9975776260735, FNR: 0.0127167630057, FPR: 0.0002207018318, FDR: 0.0011695906432, FOR: 0.0024223739264, F1S: 0.9930232558139, }, \
 {name: "hair_drying", TP: 837, FN: 0, FP: 5, TN: 4554, TPR: 1, TNR: 0.9989032682605, PPV: 0.9940617577197, NPV: 1, FNR: 0, FPR: 0.0010967317394, FDR: 0.0059382422802, FOR: 0, F1S: 0.9970220369267, }, \
 {name: "showering", TP: 1034, FN: 251, FP: 42, TN: 4069, TPR: 0.8046692607003, TNR: 0.9897835076623, PPV: 0.9609665427509, NPV: 0.9418981481481, FNR: 0.1953307392996, FPR: 0.0102164923376, FDR: 0.0390334572490, FOR: 0.0581018518518, F1S: 0.8759000423549, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.685 %
* (F1S) F1 Score 98.688 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                8903             2536             2428             3016
* (FN) False Negative or Incorrect Negative Prediction              150               23               16               36
* (FP) False Positive or Incorrect Positive Prediction               51               27               26              121
* (TN) True Negative or Correct Negative Prediction                8004            14522            14638            13935
* (TPR) True Positive Rate or Sensitivity, Recall               98.34 %          99.10 %          99.35 %          98.82 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.37 %          99.81 %          99.82 %          99.14 %
* (PPV) Positive Predictive Value or Precision                  99.43 %          98.95 %          98.94 %          96.14 %
* (NPV) Negative Predictive Value                               98.16 %          99.84 %          99.89 %          99.74 %
* (FNR) False Negative Rate or Miss Rate                         1.66 %           0.90 %           0.65 %           1.18 %
* (FPR) False Positive Rate or Fall-Out                          0.63 %           0.19 %           0.18 %           0.86 %
* (FDR) False Discovery Rate                                     0.57 %           1.05 %           1.06 %           3.86 %
* (FOR) False Omission Rate                                      1.84 %           0.16 %           0.11 %           0.26 %
* (F1S) F1 Score                                                98.88 %          99.02 %          99.14 %          97.46 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9868482581248539 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9868826271695363 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 8903, FN: 150, FP: 51, TN: 8004, TPR: 0.9834309068816, TNR: 0.9936685288640, PPV: 0.9943042215769, NPV: 0.9816041206769, FNR: 0.0165690931183, FPR: 0.0063314711359, FDR: 0.0056957784230, FOR: 0.0183958793230, F1S: 0.9888376742377, }, \
 {name: "brushing_t...", TP: 2536, FN: 23, FP: 27, TN: 14522, TPR: 0.9910121141070, TNR: 0.9981442023506, PPV: 0.9894654701521, NPV: 0.9984187005843, FNR: 0.0089878858929, FPR: 0.0018557976493, FDR: 0.0105345298478, FOR: 0.0015812994156, F1S: 0.9902381882077, }, \
 {name: "hair_drying", TP: 2428, FN: 16, FP: 26, TN: 14638, TPR: 0.9934533551554, TNR: 0.9982269503546, PPV: 0.9894050529747, NPV: 0.9989081479459, FNR: 0.0065466448445, FPR: 0.0017730496453, FDR: 0.0105949470252, FOR: 0.0010918520540, F1S: 0.9914250714577, }, \
 {name: "showering", TP: 3016, FN: 36, FP: 121, TN: 13935, TPR: 0.9882044560943, TNR: 0.9913915765509, PPV: 0.9614281160344, NPV: 0.9974232338415, FNR: 0.0117955439056, FPR: 0.0086084234490, FDR: 0.0385718839655, FOR: 0.0025767661584, F1S: 0.9746324123444, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.599 %
* (F1S) F1 Score 97.620 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                2003              839              849              740
* (FN) False Negative or Incorrect Negative Prediction               68               21                6               14
* (FP) False Positive or Incorrect Positive Prediction               38                1                1               69
* (TN) True Negative or Correct Negative Prediction                2431             3679             3684             3717
* (TPR) True Positive Rate or Sensitivity, Recall               96.72 %          97.56 %          99.30 %          98.14 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.46 %          99.97 %          99.97 %          98.18 %
* (PPV) Positive Predictive Value or Precision                  98.14 %          99.88 %          99.88 %          91.47 %
* (NPV) Negative Predictive Value                               97.28 %          99.43 %          99.84 %          99.62 %
* (FNR) False Negative Rate or Miss Rate                         3.28 %           2.44 %           0.70 %           1.86 %
* (FPR) False Positive Rate or Fall-Out                          1.54 %           0.03 %           0.03 %           1.82 %
* (FDR) False Discovery Rate                                     1.86 %           0.12 %           0.12 %           8.53 %
* (FOR) False Omission Rate                                      2.72 %           0.57 %           0.16 %           0.38 %
* (F1S) F1 Score                                                97.42 %          98.71 %          99.59 %          94.69 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9759911894273128 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9761969127417318 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 2003, FN: 68, FP: 38, TN: 2431, TPR: 0.9671656204732, TNR: 0.9846091535034, PPV: 0.9813816756491, NPV: 0.9727891156462, FNR: 0.0328343795267, FPR: 0.0153908464965, FDR: 0.0186183243508, FOR: 0.0272108843537, F1S: 0.9742217898832, }, \
 {name: "brushing_t...", TP: 839, FN: 21, FP: 1, TN: 3679, TPR: 0.9755813953488, TNR: 0.9997282608695, PPV: 0.9988095238095, NPV: 0.9943243243243, FNR: 0.0244186046511, FPR: 0.0002717391304, FDR: 0.0011904761904, FOR: 0.0056756756756, F1S: 0.9870588235294, }, \
 {name: "hair_drying", TP: 849, FN: 6, FP: 1, TN: 3684, TPR: 0.9929824561403, TNR: 0.9997286295793, PPV: 0.9988235294117, NPV: 0.9983739837398, FNR: 0.0070175438596, FPR: 0.0002713704206, FDR: 0.0011764705882, FOR: 0.0016260162601, F1S: 0.9958944281524, }, \
 {name: "showering", TP: 740, FN: 14, FP: 69, TN: 3717, TPR: 0.9814323607427, TNR: 0.9817749603803, PPV: 0.9147095179233, NPV: 0.9962476547842, FNR: 0.0185676392572, FPR: 0.0182250396196, FDR: 0.0852904820766, FOR: 0.0037523452157, F1S: 0.9468969929622, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x84, 0x39, 0x65, 0x7e, 0xea, 0xe1, 0x5d, 0x43, 0xa3, 0x54, 0x6c, 0xe6, 0x6e, 0xc3, 0x45, 0xe3}

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

#define IMAI_KEY_MAX (46)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
