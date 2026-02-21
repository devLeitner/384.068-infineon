/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 15:38:41 UTC. Any changes will be lost.
* 
* Model ID  a4f25cde-9354-4a5a-afa2-b81c5cbd6bdb
* 
* Memory    Size                      Efficiency
* Buffers   19200 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  103928 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-3
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
* Hamming smoothing              [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [40]            float      dequeue
*    num_filters = 40
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
* Add Constant                   [40]            float      dequeue
*    A = 1
* Logarithm                      [40]            float      dequeue
* Clip                           [40]            float      dequeue
*    min = 0
*    max = 4
* Imagimob Speech Features       [40]            float      dequeue
*    output_freq = 100
*    output_features = 40
*    low_cut_freq = 300
*    high_cut_freq = 8000
* Sliding Window (data points)   [100,40]        float      dequeue
*    window_shape = [100,40]
*    stride = 560
*    buffer_multiplier = 1
* Contextual Window (Sliding Window) [100,40]        float      dequeue
*    contextual_length_sec = 1
*    prediction_freq = 7
* Input Layer                    [100,40]        float      dequeue
*    shape = [100,40]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,40,16]
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
* Convolution 1D                 [50,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Batch Normalization            [50,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [50,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [50,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [50,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [25,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [25,64]         float      dequeue
*    filters = 64
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,64]
* Batch Normalization            [25,64]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[64]
*    beta = float[64]
*    mean = float[64]
*    variance = float[64]
* Activation                     [25,64]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [25,64]         float      dequeue
*    filters = 64
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,64,64]
* Batch Normalization            [25,64]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[64]
*    beta = float[64]
*    mean = float[64]
*    variance = float[64]
* Activation                     [25,64]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [12,64]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [64]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[64,4]
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
* (ACC) Accuracy 93.108 %
* (F1S) F1 Score 93.006 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                5562             1839             1963             2457
* (FN) False Negative or Incorrect Negative Prediction              110              191                6              568
* (FP) False Positive or Incorrect Positive Prediction              554                1               33              287
* (TN) True Negative or Correct Negative Prediction                6470            10665            10694             9384
* (TPR) True Positive Rate or Sensitivity, Recall               98.06 %          90.59 %          99.70 %          81.22 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.11 %          99.99 %          99.69 %          97.03 %
* (PPV) Positive Predictive Value or Precision                  90.94 %          99.95 %          98.35 %          89.54 %
* (NPV) Negative Predictive Value                               98.33 %          98.24 %          99.94 %          94.29 %
* (FNR) False Negative Rate or Miss Rate                         1.94 %           9.41 %           0.30 %          18.78 %
* (FPR) False Positive Rate or Fall-Out                          7.89 %           0.01 %           0.31 %           2.97 %
* (FDR) False Discovery Rate                                     9.06 %           0.05 %           1.65 %          10.46 %
* (FOR) False Omission Rate                                      1.67 %           1.76 %           0.06 %           5.71 %
* (F1S) F1 Score                                                94.37 %          95.04 %          99.02 %          85.18 %
*/


#define IMAI_TEST_AVG_ACC 0.9310806553245117 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9300647129750508 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 5562, FN: 110, FP: 554, TN: 6470, TPR: 0.9806064880112, TNR: 0.9211275626423, PPV: 0.9094179202092, NPV: 0.9832826747720, FNR: 0.0193935119887, FPR: 0.0788724373576, FDR: 0.0905820797907, FOR: 0.0167173252279, F1S: 0.9436715303698, }, \
 {name: "brushing_t...", TP: 1839, FN: 191, FP: 1, TN: 10665, TPR: 0.9059113300492, TNR: 0.9999062441402, PPV: 0.9994565217391, NPV: 0.9824060427413, FNR: 0.0940886699507, FPR: 9.3755859741233, FDR: 0.0005434782608, FOR: 0.0175939572586, F1S: 0.9503875968992, }, \
 {name: "hair_drying", TP: 1963, FN: 6, FP: 33, TN: 10694, TPR: 0.9969527679024, TNR: 0.9969236506012, PPV: 0.9834669338677, NPV: 0.9994392523364, FNR: 0.0030472320975, FPR: 0.0030763493987, FDR: 0.0165330661322, FOR: 0.0005607476635, F1S: 0.9901639344262, }, \
 {name: "showering", TP: 2457, FN: 568, FP: 287, TN: 9384, TPR: 0.8122314049586, TNR: 0.9703236480198, PPV: 0.8954081632653, NPV: 0.9429260450160, FNR: 0.1877685950413, FPR: 0.0296763519801, FDR: 0.1045918367346, FOR: 0.0570739549839, F1S: 0.8517940717628, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.377 %
* (F1S) F1 Score 98.374 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               21045             5976             5695             6869
* (FN) False Negative or Incorrect Negative Prediction              298               42               11              302
* (FP) False Positive or Incorrect Positive Prediction              344               42               85              182
* (TN) True Negative or Correct Negative Prediction               18551            34178            34447            32885
* (TPR) True Positive Rate or Sensitivity, Recall               98.60 %          99.30 %          99.81 %          95.79 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.18 %          99.88 %          99.75 %          99.45 %
* (PPV) Positive Predictive Value or Precision                  98.39 %          99.30 %          98.53 %          97.42 %
* (NPV) Negative Predictive Value                               98.42 %          99.88 %          99.97 %          99.09 %
* (FNR) False Negative Rate or Miss Rate                         1.40 %           0.70 %           0.19 %           4.21 %
* (FPR) False Positive Rate or Fall-Out                          1.82 %           0.12 %           0.25 %           0.55 %
* (FDR) False Discovery Rate                                     1.61 %           0.70 %           1.47 %           2.58 %
* (FOR) False Omission Rate                                      1.58 %           0.12 %           0.03 %           0.91 %
* (F1S) F1 Score                                                98.50 %          99.30 %          99.16 %          96.60 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9837715592226254 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9837370865385195 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 21045, FN: 298, FP: 344, TN: 18551, TPR: 0.9860375767230, TNR: 0.9817941254300, PPV: 0.9839169666651, NPV: 0.9841901427131, FNR: 0.0139624232769, FPR: 0.0182058745699, FDR: 0.0160830333348, FOR: 0.0158098572868, F1S: 0.9849761303004, }, \
 {name: "brushing_t...", TP: 5976, FN: 42, FP: 42, TN: 34178, TPR: 0.9930209371884, TNR: 0.9987726475745, PPV: 0.9930209371884, NPV: 0.9987726475745, FNR: 0.0069790628115, FPR: 0.0012273524254, FDR: 0.0069790628115, FOR: 0.0012273524254, F1S: 0.9930209371884, }, \
 {name: "hair_drying", TP: 5695, FN: 11, FP: 85, TN: 34447, TPR: 0.9980722046968, TNR: 0.9975385150005, PPV: 0.9852941176470, NPV: 0.9996807707934, FNR: 0.0019277953031, FPR: 0.0024614849994, FDR: 0.0147058823529, FOR: 0.0003192292065, F1S: 0.9916419989552, }, \
 {name: "showering", TP: 6869, FN: 302, FP: 182, TN: 32885, TPR: 0.9578859294380, TNR: 0.9944960232255, PPV: 0.9741880584314, NPV: 0.9909000512248, FNR: 0.0421140705619, FPR: 0.0055039767744, FDR: 0.0258119415685, FOR: 0.0090999487751, F1S: 0.9659682182534, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 96.796 %
* (F1S) F1 Score 96.860 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                4606             1964             1997             1766
* (FN) False Negative or Incorrect Negative Prediction              275               50               14                3
* (FP) False Positive or Incorrect Positive Prediction               41                8                3              290
* (TN) True Negative or Correct Negative Prediction                5753             8653             8661             8616
* (TPR) True Positive Rate or Sensitivity, Recall               94.37 %          97.52 %          99.30 %          99.83 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.29 %          99.91 %          99.97 %          96.74 %
* (PPV) Positive Predictive Value or Precision                  99.12 %          99.59 %          99.85 %          85.89 %
* (NPV) Negative Predictive Value                               95.44 %          99.43 %          99.84 %          99.97 %
* (FNR) False Negative Rate or Miss Rate                         5.63 %           2.48 %           0.70 %           0.17 %
* (FPR) False Positive Rate or Fall-Out                          0.71 %           0.09 %           0.03 %           3.26 %
* (FDR) False Discovery Rate                                     0.88 %           0.41 %           0.15 %          14.11 %
* (FOR) False Omission Rate                                      4.56 %           0.57 %           0.16 %           0.03 %
* (F1S) F1 Score                                                96.68 %          98.54 %          99.58 %          92.34 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9679625292740047 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9685979442200091 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 4606, FN: 275, FP: 41, TN: 5753, TPR: 0.9436590862528, TNR: 0.9929237141870, PPV: 0.9911771035076, NPV: 0.9543795620437, FNR: 0.0563409137471, FPR: 0.0070762858129, FDR: 0.0088228964923, FOR: 0.0456204379562, F1S: 0.9668345927791, }, \
 {name: "brushing_t...", TP: 1964, FN: 50, FP: 8, TN: 8653, TPR: 0.9751737835153, TNR: 0.9990763191317, PPV: 0.9959432048681, NPV: 0.9942548546478, FNR: 0.0248262164846, FPR: 0.0009236808682, FDR: 0.0040567951318, FOR: 0.0057451453521, F1S: 0.9854490717511, }, \
 {name: "hair_drying", TP: 1997, FN: 14, FP: 3, TN: 8661, TPR: 0.9930382894082, TNR: 0.9996537396121, PPV: 0.9985, NPV: 0.9983861671469, FNR: 0.0069617105917, FPR: 0.0003462603878, FDR: 0.0015, FOR: 0.0016138328530, F1S: 0.9957616554475, }, \
 {name: "showering", TP: 1766, FN: 3, FP: 290, TN: 8616, TPR: 0.9983041266252, TNR: 0.9674376824612, PPV: 0.8589494163424, NPV: 0.9996519317786, FNR: 0.0016958733747, FPR: 0.0325623175387, FDR: 0.1410505836575, FOR: 0.0003480682213, F1S: 0.9233986928104, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xde, 0x5c, 0xf2, 0xa4, 0x54, 0x93, 0x5a, 0x4a, 0xaf, 0xa2, 0xb8, 0x1c, 0x5c, 0xbd, 0x6b, 0xdb}

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

#define IMAI_KEY_MAX (64)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
