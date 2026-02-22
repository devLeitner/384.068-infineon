/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 21:41:57 UTC. Any changes will be lost.
* 
* Model ID  8612f003-727d-46a8-8519-6e699cbe2314
* 
* Memory    Size                      Efficiency
* Buffers   23200 bytes (RAM)         100 %
* State     26704 bytes (RAM)         100 %
* Readonly  57760 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-2
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
* (ACC) Accuracy 99.420 %
* (F1S) F1 Score 99.421 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                2899             3588             1756             2732
* (FN) False Negative or Incorrect Negative Prediction               27               36                1                0
* (FP) False Positive or Incorrect Positive Prediction                1                1               19               43
* (TN) True Negative or Correct Negative Prediction                8112             7414             9263             8264
* (TPR) True Positive Rate or Sensitivity, Recall               99.08 %          99.01 %          99.94 %         100.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.99 %          99.99 %          99.80 %          99.48 %
* (PPV) Positive Predictive Value or Precision                  99.97 %          99.97 %          98.93 %          98.45 %
* (NPV) Negative Predictive Value                               99.67 %          99.52 %          99.99 %         100.00 %
* (FNR) False Negative Rate or Miss Rate                         0.92 %           0.99 %           0.06 %           0.00 %
* (FPR) False Positive Rate or Fall-Out                          0.01 %           0.01 %           0.20 %           0.52 %
* (FDR) False Discovery Rate                                     0.03 %           0.03 %           1.07 %           1.55 %
* (FOR) False Omission Rate                                      0.33 %           0.48 %           0.01 %           0.00 %
* (F1S) F1 Score                                                99.52 %          99.49 %          99.43 %          99.22 %
*/


#define IMAI_TEST_AVG_ACC 0.994202373403388 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9942084059114504 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 2899, FN: 27, FP: 1, TN: 8112, TPR: 0.9907723855092, TNR: 0.9998767410329, PPV: 0.9996551724137, NPV: 0.9966826391448, FNR: 0.0092276144907, FPR: 0.0001232589670, FDR: 0.0003448275862, FOR: 0.0033173608551, F1S: 0.9951939581187, }, \
 {name: "Air", TP: 3588, FN: 36, FP: 1, TN: 7414, TPR: 0.9900662251655, TNR: 0.9998651382333, PPV: 0.9997213708553, NPV: 0.9951677852348, FNR: 0.0099337748344, FPR: 0.0001348617666, FDR: 0.0002786291446, FOR: 0.0048322147651, F1S: 0.9948703729377, }, \
 {name: "Floor", TP: 2732, FN: 0, FP: 43, TN: 8264, TPR: 1, TNR: 0.9948236427109, PPV: 0.9845045045045, NPV: 1, FNR: 0, FPR: 0.0051763572890, FDR: 0.0154954954954, FOR: 0, F1S: 0.9921917559469, }, \
 {name: "Carpet", TP: 1756, FN: 1, FP: 19, TN: 9263, TPR: 0.9994308480364, TNR: 0.9979530273647, PPV: 0.9892957746478, NPV: 0.9998920552677, FNR: 0.0005691519635, FPR: 0.0020469726352, FDR: 0.0107042253521, FOR: 0.0001079447322, F1S: 0.9943374858437, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 99.103 %
* (F1S) F1 Score 99.102 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                9364             6503             9086             8421
* (FN) False Negative or Incorrect Negative Prediction              189               11              102                0
* (FP) False Positive or Incorrect Positive Prediction               99               60               84               59
* (TN) True Negative or Correct Negative Prediction               24024            27102            24404            25196
* (TPR) True Positive Rate or Sensitivity, Recall               98.02 %          99.83 %          98.89 %         100.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.59 %          99.78 %          99.66 %          99.77 %
* (PPV) Positive Predictive Value or Precision                  98.95 %          99.09 %          99.08 %          99.30 %
* (NPV) Negative Predictive Value                               99.22 %          99.96 %          99.58 %         100.00 %
* (FNR) False Negative Rate or Miss Rate                         1.98 %           0.17 %           1.11 %           0.00 %
* (FPR) False Positive Rate or Fall-Out                          0.41 %           0.22 %           0.34 %           0.23 %
* (FDR) False Discovery Rate                                     1.05 %           0.91 %           0.92 %           0.70 %
* (FOR) False Omission Rate                                      0.78 %           0.04 %           0.42 %           0.00 %
* (F1S) F1 Score                                                98.49 %          99.46 %          98.99 %          99.65 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9910321890960921 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9910162514589635 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 9364, FN: 189, FP: 99, TN: 24024, TPR: 0.9802156390662, TNR: 0.9958960328317, PPV: 0.9895382014160, NPV: 0.9921942758022, FNR: 0.0197843609337, FPR: 0.0041039671682, FDR: 0.0104617985839, FOR: 0.0078057241977, F1S: 0.9848548590660, }, \
 {name: "Air", TP: 6503, FN: 11, FP: 60, TN: 27102, TPR: 0.9983113294442, TNR: 0.9977910315882, PPV: 0.9908578394027, NPV: 0.9995942905617, FNR: 0.0016886705557, FPR: 0.0022089684117, FDR: 0.0091421605972, FOR: 0.0004057094382, F1S: 0.9945706201728, }, \
 {name: "Floor", TP: 8421, FN: 0, FP: 59, TN: 25196, TPR: 1, TNR: 0.9976638289447, PPV: 0.9930424528301, NPV: 1, FNR: 0, FPR: 0.0023361710552, FDR: 0.0069575471698, FOR: 0, F1S: 0.9965090823028, }, \
 {name: "Carpet", TP: 9086, FN: 102, FP: 84, TN: 24404, TPR: 0.9888985633434, TNR: 0.9965697484482, PPV: 0.9908396946564, NPV: 0.9958377540194, FNR: 0.0111014366565, FPR: 0.0034302515517, FDR: 0.0091603053435, FOR: 0.0041622459805, F1S: 0.9898681773613, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.207 %
* (F1S) F1 Score 97.198 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                2156             4334             2369             2663
* (FN) False Negative or Incorrect Negative Prediction               67               34               20              210
* (FP) False Positive or Incorrect Positive Prediction               13              236               33               49
* (TN) True Negative or Correct Negative Prediction                9617             7249             9431             8931
* (TPR) True Positive Rate or Sensitivity, Recall               96.99 %          99.22 %          99.16 %          92.69 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.87 %          96.85 %          99.65 %          99.45 %
* (PPV) Positive Predictive Value or Precision                  99.40 %          94.84 %          98.63 %          98.19 %
* (NPV) Negative Predictive Value                               99.31 %          99.53 %          99.79 %          97.70 %
* (FNR) False Negative Rate or Miss Rate                         3.01 %           0.78 %           0.84 %           7.31 %
* (FPR) False Positive Rate or Fall-Out                          0.13 %           3.15 %           0.35 %           0.55 %
* (FDR) False Discovery Rate                                     0.60 %           5.16 %           1.37 %           1.81 %
* (FOR) False Omission Rate                                      0.69 %           0.47 %           0.21 %           2.30 %
* (F1S) F1 Score                                                98.18 %          96.98 %          98.89 %          95.36 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9720745802750359 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9719816076994975 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 2156, FN: 67, FP: 13, TN: 9617, TPR: 0.9698605488079, TNR: 0.9986500519210, PPV: 0.9940064545873, NPV: 0.9930813713341, FNR: 0.0301394511920, FPR: 0.0013499480789, FDR: 0.0059935454126, FOR: 0.0069186286658, F1S: 0.9817850637522, }, \
 {name: "Air", TP: 4334, FN: 34, FP: 236, TN: 7249, TPR: 0.9922161172161, TNR: 0.9684702738810, PPV: 0.9483588621444, NPV: 0.9953315941233, FNR: 0.0077838827838, FPR: 0.0315297261189, FDR: 0.0516411378555, FOR: 0.0046684058766, F1S: 0.9697918997538, }, \
 {name: "Floor", TP: 2663, FN: 210, FP: 49, TN: 8931, TPR: 0.9269056735120, TNR: 0.9945434298440, PPV: 0.9819321533923, NPV: 0.9770265835247, FNR: 0.0730943264879, FPR: 0.0054565701559, FDR: 0.0180678466076, FOR: 0.0229734164752, F1S: 0.9536257833482, }, \
 {name: "Carpet", TP: 2369, FN: 20, FP: 33, TN: 9431, TPR: 0.9916282963583, TNR: 0.9965131022823, PPV: 0.9862614487926, NPV: 0.9978838218177, FNR: 0.0083717036416, FPR: 0.0034868977176, FDR: 0.0137385512073, FOR: 0.0021161781822, F1S: 0.9889375913170, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"unlabelled", "Air", "Floor", "Carpet"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x03, 0xf0, 0x12, 0x86, 0x7d, 0x72, 0xa8, 0x46, 0x85, 0x19, 0x6e, 0x69, 0x9c, 0xbe, 0x23, 0x14}

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

#define IMAI_KEY_MAX (54)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
