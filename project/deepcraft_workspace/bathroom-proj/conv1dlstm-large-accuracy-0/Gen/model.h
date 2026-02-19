/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 20:44:57 UTC. Any changes will be lost.
* 
* Model ID  e7b63d75-dd54-49fa-9162-62588aeca3ed
* 
* Memory    Size                      Efficiency
* Buffers   6720 bytes (RAM)          100 %
* State     8648 bytes (RAM)          100 %
* Readonly  103528 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1dlstm-large-accuracy-0
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
* Convolution 1D                 [30,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,20,16]
* Batch Normalization            [30,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [30,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
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
* Convolution 1D                 [7,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [7,32]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [7,32]          float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [7,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [7,32]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [7,32]          float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [3,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Long Short-Term Memory         [3,32]          float      dequeue
*    units = 32
*    activation = tanh
*    recurrent_activation = sigmoid
*    use_bias = True
*    return_sequences = True
*    return_state = False
*    stateful = False
*    go_backwards = False
*    trainable = True
*    kernel = float[32,128]
*    recurrent_kernel = float[32,128]
*    bias = float[128]
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
* (ACC) Accuracy 90.536 %
* (F1S) F1 Score 90.391 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 983                0              302              657
* (FN) False Negative or Incorrect Negative Prediction                9                0                1              193
* (FP) False Positive or Incorrect Positive Prediction              194                1                0                8
* (TN) True Negative or Correct Negative Prediction                 959             2144             1842             1287
* (TPR) True Positive Rate or Sensitivity, Recall               99.09 %         100.00 %          99.67 %          77.29 %
* (TNR) True Negative Rate or Specificity, Selectivity          83.17 %          99.95 %         100.00 %          99.38 %
* (PPV) Positive Predictive Value or Precision                  83.52 %           0.00 %         100.00 %          98.80 %
* (NPV) Negative Predictive Value                               99.07 %         100.00 %          99.95 %          86.96 %
* (FNR) False Negative Rate or Miss Rate                         0.91 %         100.00 %           0.33 %          22.71 %
* (FPR) False Positive Rate or Fall-Out                         16.83 %           0.05 %           0.00 %           0.62 %
* (FDR) False Discovery Rate                                    16.48 %         100.00 %           0.00 %           1.20 %
* (FOR) False Omission Rate                                      0.93 %           0.00 %           0.05 %          13.04 %
* (F1S) F1 Score                                                90.64 %           0.00 %          99.83 %          86.73 %
*/


#define IMAI_TEST_AVG_ACC 0.9053613053613053 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9039086767517898 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 983, FN: 9, FP: 194, TN: 959, TPR: 0.9909274193548, TNR: 0.8317432784041, PPV: 0.8351741716227, NPV: 0.9907024793388, FNR: 0.0090725806451, FPR: 0.1682567215958, FDR: 0.1648258283772, FOR: 0.0092975206611, F1S: 0.9064084831719, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 1, TN: 2144, TPR: 1, TNR: 0.9995337995337, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0004662004662, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 302, FN: 1, FP: 0, TN: 1842, TPR: 0.9966996699669, TNR: 1, PPV: 1, NPV: 0.9994574064026, FNR: 0.0033003300330, FPR: 0, FDR: 0, FOR: 0.0005425935973, F1S: 0.9983471074380, }, \
 {name: "showering", TP: 657, FN: 193, FP: 8, TN: 1287, TPR: 0.7729411764705, TNR: 0.9938223938223, PPV: 0.9879699248120, NPV: 0.8695945945945, FNR: 0.2270588235294, FPR: 0.0061776061776, FDR: 0.0120300751879, FOR: 0.1304054054054, F1S: 0.8673267326732, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.786 %
* (F1S) F1 Score 98.794 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3124              388              306              902
* (FN) False Negative or Incorrect Negative Prediction               51                4                1                2
* (FP) False Positive or Incorrect Positive Prediction                4                1                7               46
* (TN) True Negative or Correct Negative Prediction                1599             4385             4464             3828
* (TPR) True Positive Rate or Sensitivity, Recall               98.39 %          98.98 %          99.67 %          99.78 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.75 %          99.98 %          99.84 %          98.81 %
* (PPV) Positive Predictive Value or Precision                  99.87 %          99.74 %          97.76 %          95.15 %
* (NPV) Negative Predictive Value                               96.91 %          99.91 %          99.98 %          99.95 %
* (FNR) False Negative Rate or Miss Rate                         1.61 %           1.02 %           0.33 %           0.22 %
* (FPR) False Positive Rate or Fall-Out                          0.25 %           0.02 %           0.16 %           1.19 %
* (FDR) False Discovery Rate                                     0.13 %           0.26 %           2.24 %           4.85 %
* (FOR) False Omission Rate                                      3.09 %           0.09 %           0.02 %           0.05 %
* (F1S) F1 Score                                                99.13 %          99.36 %          98.71 %          97.41 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9878610297195479 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9879435412111469 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3124, FN: 51, FP: 4, TN: 1599, TPR: 0.9839370078740, TNR: 0.9975046787273, PPV: 0.9987212276214, NPV: 0.9690909090909, FNR: 0.0160629921259, FPR: 0.0024953212726, FDR: 0.0012787723785, FOR: 0.0309090909090, F1S: 0.9912739965095, }, \
 {name: "brushing_t...", TP: 388, FN: 4, FP: 1, TN: 4385, TPR: 0.9897959183673, TNR: 0.9997720018239, PPV: 0.9974293059125, NPV: 0.9990886306675, FNR: 0.0102040816326, FPR: 0.0002279981760, FDR: 0.0025706940874, FOR: 0.0009113693324, F1S: 0.9935979513444, }, \
 {name: "hair_drying", TP: 306, FN: 1, FP: 7, TN: 4464, TPR: 0.9967426710097, TNR: 0.9984343547304, PPV: 0.9776357827476, NPV: 0.9997760358342, FNR: 0.0032573289902, FPR: 0.0015656452695, FDR: 0.0223642172523, FOR: 0.0002239641657, F1S: 0.9870967741935, }, \
 {name: "showering", TP: 902, FN: 2, FP: 46, TN: 3828, TPR: 0.9977876106194, TNR: 0.9881259679917, PPV: 0.9514767932489, NPV: 0.9994778067885, FNR: 0.0022123893805, FPR: 0.0118740320082, FDR: 0.0485232067510, FOR: 0.0005221932114, F1S: 0.9740820734341, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 93.902 %
* (F1S) F1 Score 93.812 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 542              377              162              659
* (FN) False Negative or Incorrect Negative Prediction              111                1                0                1
* (FP) False Positive or Incorrect Positive Prediction                1               11                3               98
* (TN) True Negative or Correct Negative Prediction                1199             1464             1688             1095
* (TPR) True Positive Rate or Sensitivity, Recall               83.00 %          99.74 %         100.00 %          99.85 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.92 %          99.25 %          99.82 %          91.79 %
* (PPV) Positive Predictive Value or Precision                  99.82 %          97.16 %          98.18 %          87.05 %
* (NPV) Negative Predictive Value                               91.53 %          99.93 %         100.00 %          99.91 %
* (FNR) False Negative Rate or Miss Rate                        17.00 %           0.26 %           0.00 %           0.15 %
* (FPR) False Positive Rate or Fall-Out                          0.08 %           0.75 %           0.18 %           8.21 %
* (FDR) False Discovery Rate                                     0.18 %           2.84 %           1.82 %          12.95 %
* (FOR) False Omission Rate                                      8.47 %           0.07 %           0.00 %           0.09 %
* (F1S) F1 Score                                                90.64 %          98.43 %          99.08 %          93.01 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9390178089584458 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9381166139242574 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 542, FN: 111, FP: 1, TN: 1199, TPR: 0.8300153139356, TNR: 0.9991666666666, PPV: 0.9981583793738, NPV: 0.9152671755725, FNR: 0.1699846860643, FPR: 0.0008333333333, FDR: 0.0018416206261, FOR: 0.0847328244274, F1S: 0.9063545150501, }, \
 {name: "brushing_t...", TP: 377, FN: 1, FP: 11, TN: 1464, TPR: 0.9973544973544, TNR: 0.9925423728813, PPV: 0.9716494845360, NPV: 0.9993174061433, FNR: 0.0026455026455, FPR: 0.0074576271186, FDR: 0.0283505154639, FOR: 0.0006825938566, F1S: 0.9843342036553, }, \
 {name: "hair_drying", TP: 162, FN: 0, FP: 3, TN: 1688, TPR: 1, TNR: 0.9982259018332, PPV: 0.9818181818181, NPV: 1, FNR: 0, FPR: 0.0017740981667, FDR: 0.0181818181818, FOR: 0, F1S: 0.9908256880733, }, \
 {name: "showering", TP: 659, FN: 1, FP: 98, TN: 1095, TPR: 0.9984848484848, TNR: 0.9178541492036, PPV: 0.8705416116248, NPV: 0.9990875912408, FNR: 0.0015151515151, FPR: 0.0821458507963, FDR: 0.1294583883751, FOR: 0.0009124087591, F1S: 0.9301340860973, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x75, 0x3d, 0xb6, 0xe7, 0x54, 0xdd, 0xfa, 0x49, 0x91, 0x62, 0x62, 0x58, 0x8a, 0xec, 0xa3, 0xed}

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

#define IMAI_KEY_MAX (121)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
