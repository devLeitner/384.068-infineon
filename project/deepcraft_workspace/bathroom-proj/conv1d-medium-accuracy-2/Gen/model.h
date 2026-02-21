/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 15:48:24 UTC. Any changes will be lost.
* 
* Model ID  8a73844b-0471-407a-86fe-af29585e6213
* 
* Memory    Size                      Efficiency
* Buffers   19200 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  54008 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-2
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
* (ACC) Accuracy 93.329 %
* (F1S) F1 Score 93.210 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                5419             2021             1968             2441
* (FN) False Negative or Incorrect Negative Prediction              253                9                1              584
* (FP) False Positive or Incorrect Positive Prediction              583              101                3              160
* (TN) True Negative or Correct Negative Prediction                6441            10565            10724             9511
* (TPR) True Positive Rate or Sensitivity, Recall               95.54 %          99.56 %          99.95 %          80.69 %
* (TNR) True Negative Rate or Specificity, Selectivity          91.70 %          99.05 %          99.97 %          98.35 %
* (PPV) Positive Predictive Value or Precision                  90.29 %          95.24 %          99.85 %          93.85 %
* (NPV) Negative Predictive Value                               96.22 %          99.91 %          99.99 %          94.21 %
* (FNR) False Negative Rate or Miss Rate                         4.46 %           0.44 %           0.05 %          19.31 %
* (FPR) False Positive Rate or Fall-Out                          8.30 %           0.95 %           0.03 %           1.65 %
* (FDR) False Discovery Rate                                     9.71 %           4.76 %           0.15 %           6.15 %
* (FOR) False Omission Rate                                      3.78 %           0.09 %           0.01 %           5.79 %
* (F1S) F1 Score                                                92.84 %          97.35 %          99.90 %          86.78 %
*/


#define IMAI_TEST_AVG_ACC 0.9332860743541272 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9321046122519973 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 5419, FN: 253, FP: 583, TN: 6441, TPR: 0.9553949224259, TNR: 0.9169988610478, PPV: 0.9028657114295, NPV: 0.9622049596653, FNR: 0.0446050775740, FPR: 0.0830011389521, FDR: 0.0971342885704, FOR: 0.0377950403346, F1S: 0.9283878704814, }, \
 {name: "brushing_t...", TP: 2021, FN: 9, FP: 101, TN: 10565, TPR: 0.9955665024630, TNR: 0.9905306581661, PPV: 0.9524033930254, NPV: 0.9991488556837, FNR: 0.0044334975369, FPR: 0.0094693418338, FDR: 0.0475966069745, FOR: 0.0008511443162, F1S: 0.9735067437379, }, \
 {name: "hair_drying", TP: 1968, FN: 1, FP: 3, TN: 10724, TPR: 0.9994921279837, TNR: 0.9997203318728, PPV: 0.9984779299847, NPV: 0.9999067599067, FNR: 0.0005078720162, FPR: 0.0002796681271, FDR: 0.0015220700152, FOR: 9.3240093240093, F1S: 0.9989847715736, }, \
 {name: "showering", TP: 2441, FN: 584, FP: 160, TN: 9511, TPR: 0.8069421487603, TNR: 0.9834556922758, PPV: 0.9384851980007, NPV: 0.9421495789995, FNR: 0.1930578512396, FPR: 0.0165443077241, FDR: 0.0615148019992, FOR: 0.0578504210004, F1S: 0.8677568432278, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.459 %
* (F1S) F1 Score 98.460 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               20962             6015             5699             6942
* (FN) False Negative or Incorrect Negative Prediction              381                3                7              229
* (FP) False Positive or Incorrect Positive Prediction              125              221               61              213
* (TN) True Negative or Correct Negative Prediction               18770            33999            34471            32854
* (TPR) True Positive Rate or Sensitivity, Recall               98.21 %          99.95 %          99.88 %          96.81 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.34 %          99.35 %          99.82 %          99.36 %
* (PPV) Positive Predictive Value or Precision                  99.41 %          96.46 %          98.94 %          97.02 %
* (NPV) Negative Predictive Value                               98.01 %          99.99 %          99.98 %          99.31 %
* (FNR) False Negative Rate or Miss Rate                         1.79 %           0.05 %           0.12 %           3.19 %
* (FPR) False Positive Rate or Fall-Out                          0.66 %           0.65 %           0.18 %           0.64 %
* (FDR) False Discovery Rate                                     0.59 %           3.54 %           1.06 %           2.98 %
* (FOR) False Omission Rate                                      1.99 %           0.01 %           0.02 %           0.69 %
* (F1S) F1 Score                                                98.81 %          98.17 %          99.41 %          96.91 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9845916795069337 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9846011065847547 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 20962, FN: 381, FP: 125, TN: 18770, TPR: 0.9821487138640, TNR: 0.9933844932521, PPV: 0.9940721771707, NPV: 0.9801054775207, FNR: 0.0178512861359, FPR: 0.0066155067478, FDR: 0.0059278228292, FOR: 0.0198945224792, F1S: 0.9880744756068, }, \
 {name: "brushing_t...", TP: 6015, FN: 3, FP: 221, TN: 33999, TPR: 0.9995014955134, TNR: 0.9935417884278, PPV: 0.9645606157793, NPV: 0.9999117698958, FNR: 0.0004985044865, FPR: 0.0064582115721, FDR: 0.0354393842206, FOR: 8.8230104111522, F1S: 0.9817202546107, }, \
 {name: "hair_drying", TP: 5699, FN: 7, FP: 61, TN: 34471, TPR: 0.9987732211706, TNR: 0.9982335225298, PPV: 0.9894097222222, NPV: 0.9997969719821, FNR: 0.0012267788293, FPR: 0.0017664774701, FDR: 0.0105902777777, FOR: 0.0002030280178, F1S: 0.9940694226408, }, \
 {name: "showering", TP: 6942, FN: 229, FP: 213, TN: 32854, TPR: 0.9680658206665, TNR: 0.9935585326760, PPV: 0.9702306079664, NPV: 0.9930780158994, FNR: 0.0319341793334, FPR: 0.0064414673239, FDR: 0.0297693920335, FOR: 0.0069219841005, F1S: 0.9691470054446, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.293 %
* (F1S) F1 Score 97.330 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                4644             1986             1997             1759
* (FN) False Negative or Incorrect Negative Prediction              237               28               14               10
* (FP) False Positive or Incorrect Positive Prediction               47               11                4              227
* (TN) True Negative or Correct Negative Prediction                5747             8650             8660             8679
* (TPR) True Positive Rate or Sensitivity, Recall               95.14 %          98.61 %          99.30 %          99.43 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.19 %          99.87 %          99.95 %          97.45 %
* (PPV) Positive Predictive Value or Precision                  99.00 %          99.45 %          99.80 %          88.57 %
* (NPV) Negative Predictive Value                               96.04 %          99.68 %          99.84 %          99.88 %
* (FNR) False Negative Rate or Miss Rate                         4.86 %           1.39 %           0.70 %           0.57 %
* (FPR) False Positive Rate or Fall-Out                          0.81 %           0.13 %           0.05 %           2.55 %
* (FDR) False Discovery Rate                                     1.00 %           0.55 %           0.20 %          11.43 %
* (FOR) False Omission Rate                                      3.96 %           0.32 %           0.16 %           0.12 %
* (F1S) F1 Score                                                97.03 %          99.03 %          99.55 %          93.69 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9729274004683841 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9732950211828639 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 4644, FN: 237, FP: 47, TN: 5747, TPR: 0.9514443761524, TNR: 0.9918881601656, PPV: 0.9899808143253, NPV: 0.9603943850267, FNR: 0.0485556238475, FPR: 0.0081118398343, FDR: 0.0100191856746, FOR: 0.0396056149732, F1S: 0.9703301295445, }, \
 {name: "brushing_t...", TP: 1986, FN: 28, FP: 11, TN: 8650, TPR: 0.9860973187686, TNR: 0.9987299388061, PPV: 0.9944917376064, NPV: 0.9967734501037, FNR: 0.0139026812313, FPR: 0.0012700611938, FDR: 0.0055082623935, FOR: 0.0032265498962, F1S: 0.9902767389678, }, \
 {name: "hair_drying", TP: 1997, FN: 14, FP: 4, TN: 8660, TPR: 0.9930382894082, TNR: 0.9995383194829, PPV: 0.9980009995002, NPV: 0.9983859810929, FNR: 0.0069617105917, FPR: 0.0004616805170, FDR: 0.0019990004997, FOR: 0.0016140189070, F1S: 0.9955134596211, }, \
 {name: "showering", TP: 1759, FN: 10, FP: 227, TN: 8679, TPR: 0.9943470887507, TNR: 0.9745115652369, PPV: 0.8856998992950, NPV: 0.9988491195764, FNR: 0.0056529112492, FPR: 0.0254884347630, FDR: 0.1143001007049, FOR: 0.0011508804235, F1S: 0.9368841544607, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x4b, 0x84, 0x73, 0x8a, 0x71, 0x04, 0x7a, 0x40, 0x86, 0xfe, 0xaf, 0x29, 0x58, 0x5e, 0x62, 0x13}

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
