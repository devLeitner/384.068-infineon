/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 19:05:02 UTC. Any changes will be lost.
* 
* Model ID  aaa3d46c-0416-446a-8754-52e3eeb796c4
* 
* Memory    Size                      Efficiency
* Buffers   76800 bytes (RAM)         100 %
* State     8392 bytes (RAM)          100 %
* Readonly  59176 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv2d-small-accuracy-2
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
* Reshape                        [60,20,1]       float      dequeue
*    shape = [60,20,1]
*    trainable = True
* Convolution 2D                 [30,10,16]      float      dequeue
*    filters = 16
*    kernel_size = [3,3]
*    strides = [2,2]
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,3,1,16]
* Batch Normalization            [30,10,16]      float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 3
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [30,10,16]      float      dequeue
*    activation = relu
*    trainable = True
* Convolution 2D                 [30,10,32]      float      dequeue
*    filters = 32
*    kernel_size = [3,3]
*    strides = [1,1]
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,3,16,32]
* Batch Normalization            [30,10,32]      float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 3
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [30,10,32]      float      dequeue
*    activation = relu
*    trainable = True
* Convolution 2D                 [30,10,32]      float      dequeue
*    filters = 32
*    kernel_size = [3,3]
*    strides = [1,1]
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,3,32,32]
* Batch Normalization            [30,10,32]      float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 3
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [30,10,32]      float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 2D                 [15,5,32]       float      dequeue
*    pool_size = [2,2]
*    strides = [2,2]
*    padding = valid
*    trainable = True
* Global average pooling 2D      [32]            float      dequeue
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
* (ACC) Accuracy 99.861 %
* (F1S) F1 Score 99.861 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                1278                0              161                0
* (FN) False Negative or Incorrect Negative Prediction                1                0                1                0
* (FP) False Positive or Incorrect Positive Prediction                1                0                1                0
* (TN) True Negative or Correct Negative Prediction                 161             1441             1278             1441
* (TPR) True Positive Rate or Sensitivity, Recall               99.92 %         100.00 %          99.38 %         100.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.38 %         100.00 %          99.92 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  99.92 %         100.00 %          99.38 %         100.00 %
* (NPV) Negative Predictive Value                               99.38 %         100.00 %          99.92 %         100.00 %
* (FNR) False Negative Rate or Miss Rate                         0.08 %         100.00 %           0.62 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          0.62 %           0.00 %           0.08 %           0.00 %
* (FDR) False Discovery Rate                                     0.08 %         100.00 %           0.62 %         100.00 %
* (FOR) False Omission Rate                                      0.62 %           0.00 %           0.08 %           0.00 %
* (F1S) F1 Score                                                99.92 %         100.00 %          99.38 %         100.00 %
*/


#define IMAI_TEST_AVG_ACC 0.9986120749479528 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9986120749479528 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 1278, FN: 1, FP: 1, TN: 161, TPR: 0.9992181391712, TNR: 0.9938271604938, PPV: 0.9992181391712, NPV: 0.9938271604938, FNR: 0.0007818608287, FPR: 0.0061728395061, FDR: 0.0007818608287, FOR: 0.0061728395061, F1S: 0.9992181391712, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 0, TN: 1441, TPR: 1, TNR: 1, PPV: 1, NPV: 1, FNR: 1, FPR: 0, FDR: 1, FOR: 0, F1S: 1, }, \
 {name: "hair_drying", TP: 161, FN: 1, FP: 1, TN: 1278, TPR: 0.9938271604938, TNR: 0.9992181391712, PPV: 0.9938271604938, NPV: 0.9992181391712, FNR: 0.0061728395061, FPR: 0.0007818608287, FDR: 0.0061728395061, FOR: 0.0007818608287, F1S: 0.9938271604938, }, \
 {name: "showering", TP: 0, FN: 0, FP: 0, TN: 1441, TPR: 1, TNR: 1, PPV: 1, NPV: 1, FNR: 1, FPR: 0, FDR: 1, FOR: 0, F1S: 1, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 95.257 %
* (F1S) F1 Score 95.236 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                2285              389              423             1582
* (FN) False Negative or Incorrect Negative Prediction               55                3                3              172
* (FP) False Positive or Incorrect Positive Prediction              178                2                2               51
* (TN) True Negative or Correct Negative Prediction                2394             4518             4484             3107
* (TPR) True Positive Rate or Sensitivity, Recall               97.65 %          99.23 %          99.30 %          90.19 %
* (TNR) True Negative Rate or Specificity, Selectivity          93.08 %          99.96 %          99.96 %          98.39 %
* (PPV) Positive Predictive Value or Precision                  92.77 %          99.49 %          99.53 %          96.88 %
* (NPV) Negative Predictive Value                               97.75 %          99.93 %          99.93 %          94.75 %
* (FNR) False Negative Rate or Miss Rate                         2.35 %           0.77 %           0.70 %           9.81 %
* (FPR) False Positive Rate or Fall-Out                          6.92 %           0.04 %           0.04 %           1.61 %
* (FDR) False Discovery Rate                                     7.23 %           0.51 %           0.47 %           3.12 %
* (FOR) False Omission Rate                                      2.25 %           0.07 %           0.07 %           5.25 %
* (F1S) F1 Score                                                95.15 %          99.36 %          99.41 %          93.42 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9525651465798045 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9523603417560547 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 2285, FN: 55, FP: 178, TN: 2394, TPR: 0.9764957264957, TNR: 0.9307931570762, PPV: 0.9277304100690, NPV: 0.9775418538178, FNR: 0.0235042735042, FPR: 0.0692068429237, FDR: 0.0722695899309, FOR: 0.0224581461821, F1S: 0.9514886529252, }, \
 {name: "brushing_t...", TP: 389, FN: 3, FP: 2, TN: 4518, TPR: 0.9923469387755, TNR: 0.9995575221238, PPV: 0.9948849104859, NPV: 0.9993364299933, FNR: 0.0076530612244, FPR: 0.0004424778761, FDR: 0.0051150895140, FOR: 0.0006635700066, F1S: 0.9936143039591, }, \
 {name: "hair_drying", TP: 423, FN: 3, FP: 2, TN: 4484, TPR: 0.9929577464788, TNR: 0.9995541685242, PPV: 0.9952941176470, NPV: 0.9993314018275, FNR: 0.0070422535211, FPR: 0.0004458314757, FDR: 0.0047058823529, FOR: 0.0006685981724, F1S: 0.9941245593419, }, \
 {name: "showering", TP: 1582, FN: 172, FP: 51, TN: 3107, TPR: 0.9019384264538, TNR: 0.9838505383153, PPV: 0.9687691365584, NPV: 0.9475449832265, FNR: 0.0980615735461, FPR: 0.0161494616846, FDR: 0.0312308634415, FOR: 0.0524550167734, F1S: 0.9341600236197, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.152 %
* (F1S) F1 Score 97.158 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                1158              378              184              634
* (FN) False Negative or Incorrect Negative Prediction               43                0                0               26
* (FP) False Positive or Incorrect Positive Prediction               26                1                1               41
* (TN) True Negative or Correct Negative Prediction                1196             2044             2238             1722
* (TPR) True Positive Rate or Sensitivity, Recall               96.42 %         100.00 %         100.00 %          96.06 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.87 %          99.95 %          99.96 %          97.67 %
* (PPV) Positive Predictive Value or Precision                  97.80 %          99.74 %          99.46 %          93.93 %
* (NPV) Negative Predictive Value                               96.53 %         100.00 %         100.00 %          98.51 %
* (FNR) False Negative Rate or Miss Rate                         3.58 %           0.00 %           0.00 %           3.94 %
* (FPR) False Positive Rate or Fall-Out                          2.13 %           0.05 %           0.04 %           2.33 %
* (FDR) False Discovery Rate                                     2.20 %           0.26 %           0.54 %           6.07 %
* (FOR) False Omission Rate                                      3.47 %           0.00 %           0.00 %           1.49 %
* (F1S) F1 Score                                                97.11 %          99.87 %          99.73 %          94.98 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9715229054890632 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9715775930913034 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 1158, FN: 43, FP: 26, TN: 1196, TPR: 0.9641965029142, TNR: 0.9787234042553, PPV: 0.9780405405405, NPV: 0.9652945924132, FNR: 0.0358034970857, FPR: 0.0212765957446, FDR: 0.0219594594594, FOR: 0.0347054075867, F1S: 0.9710691823899, }, \
 {name: "brushing_t...", TP: 378, FN: 0, FP: 1, TN: 2044, TPR: 1, TNR: 0.9995110024449, PPV: 0.9973614775725, NPV: 1, FNR: 0, FPR: 0.0004889975550, FDR: 0.0026385224274, FOR: 0, F1S: 0.9986789960369, }, \
 {name: "hair_drying", TP: 184, FN: 0, FP: 1, TN: 2238, TPR: 1, TNR: 0.9995533720410, PPV: 0.9945945945945, NPV: 1, FNR: 0, FPR: 0.0004466279589, FDR: 0.0054054054054, FOR: 0, F1S: 0.9972899728997, }, \
 {name: "showering", TP: 634, FN: 26, FP: 41, TN: 1722, TPR: 0.9606060606060, TNR: 0.9767441860465, PPV: 0.9392592592592, NPV: 0.9851258581235, FNR: 0.0393939393939, FPR: 0.0232558139534, FDR: 0.0607407407407, FOR: 0.0148741418764, F1S: 0.9498127340823, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x6c, 0xd4, 0xa3, 0xaa, 0x16, 0x04, 0x6a, 0x44, 0x87, 0x54, 0x52, 0xe3, 0xee, 0xb7, 0x96, 0xc4}

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

#define IMAI_KEY_MAX (45)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
