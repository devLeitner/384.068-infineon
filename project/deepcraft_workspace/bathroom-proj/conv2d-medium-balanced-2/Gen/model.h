/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 15:37:48 UTC. Any changes will be lost.
* 
* Model ID  637e1baa-9f33-4283-b135-b0586fbde36d
* 
* Memory    Size                      Efficiency
* Buffers   76800 bytes (RAM)         100 %
* State     8392 bytes (RAM)          100 %
* Readonly  132904 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv2d-medium-balanced-2
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
* Convolution 2D                 [15,5,32]       float      dequeue
*    filters = 32
*    kernel_size = [3,3]
*    strides = [1,1]
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,3,32,32]
* Convolution 2D                 [15,5,32]       float      dequeue
*    filters = 32
*    kernel_size = [3,3]
*    strides = [1,1]
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,3,32,32]
* Batch Normalization            [15,5,32]       float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 3
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [15,5,32]       float      dequeue
*    activation = relu
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
* (ACC) Accuracy 73.921 %
* (F1S) F1 Score 65.127 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 233                0              161                0
* (FN) False Negative or Incorrect Negative Prediction                8              130                1                0
* (FP) False Positive or Incorrect Positive Prediction              131                0                0                8
* (TN) True Negative or Correct Negative Prediction                 161              403              371              525
* (TPR) True Positive Rate or Sensitivity, Recall               96.68 %           0.00 %          99.38 %         100.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          55.14 %         100.00 %         100.00 %          98.50 %
* (PPV) Positive Predictive Value or Precision                  64.01 %         100.00 %         100.00 %           0.00 %
* (NPV) Negative Predictive Value                               95.27 %          75.61 %          99.73 %         100.00 %
* (FNR) False Negative Rate or Miss Rate                         3.32 %         100.00 %           0.62 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                         44.86 %           0.00 %           0.00 %           1.50 %
* (FDR) False Discovery Rate                                    35.99 %         100.00 %           0.00 %         100.00 %
* (FOR) False Omission Rate                                      4.73 %          24.39 %           0.27 %           0.00 %
* (F1S) F1 Score                                                77.02 %           0.00 %          99.69 %           0.00 %
*/


#define IMAI_TEST_AVG_ACC 0.7392120075046904 // Accuracy
#define IMAI_TEST_AVG_F1S 0.6512724279146334 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 233, FN: 8, FP: 131, TN: 161, TPR: 0.9668049792531, TNR: 0.5513698630136, PPV: 0.6401098901098, NPV: 0.9526627218934, FNR: 0.0331950207468, FPR: 0.4486301369863, FDR: 0.3598901098901, FOR: 0.0473372781065, F1S: 0.7702479338842, }, \
 {name: "brushing_t...", TP: 0, FN: 130, FP: 0, TN: 403, TPR: 0, TNR: 1, PPV: 1, NPV: 0.7560975609756, FNR: 1, FPR: 0, FDR: 1, FOR: 0.2439024390243, F1S: 0, }, \
 {name: "hair_drying", TP: 161, FN: 1, FP: 0, TN: 371, TPR: 0.9938271604938, TNR: 1, PPV: 1, NPV: 0.9973118279569, FNR: 0.0061728395061, FPR: 0, FDR: 0, FOR: 0.0026881720430, F1S: 0.9969040247678, }, \
 {name: "showering", TP: 0, FN: 0, FP: 8, TN: 525, TPR: 1, TNR: 0.9849906191369, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0150093808630, FDR: 1, FOR: 0, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 99.605 %
* (F1S) F1 Score 99.605 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3067              385              485             1613
* (FN) False Negative or Incorrect Negative Prediction                4                7                2                9
* (FP) False Positive or Incorrect Positive Prediction               14                0                1                7
* (TN) True Negative or Correct Negative Prediction                2487             5180             5084             3943
* (TPR) True Positive Rate or Sensitivity, Recall               99.87 %          98.21 %          99.59 %          99.45 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.44 %         100.00 %          99.98 %          99.82 %
* (PPV) Positive Predictive Value or Precision                  99.55 %         100.00 %          99.79 %          99.57 %
* (NPV) Negative Predictive Value                               99.84 %          99.87 %          99.96 %          99.77 %
* (FNR) False Negative Rate or Miss Rate                         0.13 %           1.79 %           0.41 %           0.55 %
* (FPR) False Positive Rate or Fall-Out                          0.56 %           0.00 %           0.02 %           0.18 %
* (FDR) False Discovery Rate                                     0.45 %           0.00 %           0.21 %           0.43 %
* (FOR) False Omission Rate                                      0.16 %           0.13 %           0.04 %           0.23 %
* (F1S) F1 Score                                                99.71 %          99.10 %          99.69 %          99.51 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9960516870064609 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9960474912075147 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3067, FN: 4, FP: 14, TN: 2487, TPR: 0.9986974926733, TNR: 0.9944022391043, PPV: 0.9954560207724, NPV: 0.9983942191890, FNR: 0.0013025073266, FPR: 0.0055977608956, FDR: 0.0045439792275, FOR: 0.0016057808109, F1S: 0.9970741222366, }, \
 {name: "brushing_t...", TP: 385, FN: 7, FP: 0, TN: 5180, TPR: 0.9821428571428, TNR: 1, PPV: 1, NPV: 0.9986504723346, FNR: 0.0178571428571, FPR: 0, FDR: 0, FOR: 0.0013495276653, F1S: 0.9909909909909, }, \
 {name: "hair_drying", TP: 485, FN: 2, FP: 1, TN: 5084, TPR: 0.9958932238193, TNR: 0.9998033431661, PPV: 0.9979423868312, NPV: 0.9996067636649, FNR: 0.0041067761806, FPR: 0.0001966568338, FDR: 0.0020576131687, FOR: 0.0003932363350, F1S: 0.9969167523124, }, \
 {name: "showering", TP: 1613, FN: 9, FP: 7, TN: 3943, TPR: 0.9944512946979, TNR: 0.9982278481012, PPV: 0.9956790123456, NPV: 0.9977226720647, FNR: 0.0055487053020, FPR: 0.0017721518987, FDR: 0.0043209876543, FOR: 0.0022773279352, F1S: 0.9950647748303, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 95.432 %
* (F1S) F1 Score 95.520 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                1416              363              118              652
* (FN) False Negative or Incorrect Negative Prediction               94               15                5                8
* (FP) False Positive or Incorrect Positive Prediction               14                0                1              107
* (TN) True Negative or Correct Negative Prediction                1147             2293             2547             1904
* (TPR) True Positive Rate or Sensitivity, Recall               93.77 %          96.03 %          95.93 %          98.79 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.79 %         100.00 %          99.96 %          94.68 %
* (PPV) Positive Predictive Value or Precision                  99.02 %         100.00 %          99.16 %          85.90 %
* (NPV) Negative Predictive Value                               92.43 %          99.35 %          99.80 %          99.58 %
* (FNR) False Negative Rate or Miss Rate                         6.23 %           3.97 %           4.07 %           1.21 %
* (FPR) False Positive Rate or Fall-Out                          1.21 %           0.00 %           0.04 %           5.32 %
* (FDR) False Discovery Rate                                     0.98 %           0.00 %           0.84 %          14.10 %
* (FOR) False Omission Rate                                      7.57 %           0.65 %           0.20 %           0.42 %
* (F1S) F1 Score                                                96.33 %          97.98 %          97.52 %          91.90 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9543242231374017 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9552006108246601 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 1416, FN: 94, FP: 14, TN: 1147, TPR: 0.9377483443708, TNR: 0.9879414298018, PPV: 0.9902097902097, NPV: 0.9242546333601, FNR: 0.0622516556291, FPR: 0.0120585701981, FDR: 0.0097902097902, FOR: 0.0757453666398, F1S: 0.9632653061224, }, \
 {name: "brushing_t...", TP: 363, FN: 15, FP: 0, TN: 2293, TPR: 0.9603174603174, TNR: 1, PPV: 1, NPV: 0.9935008665511, FNR: 0.0396825396825, FPR: 0, FDR: 0, FOR: 0.0064991334488, F1S: 0.9797570850202, }, \
 {name: "hair_drying", TP: 118, FN: 5, FP: 1, TN: 2547, TPR: 0.9593495934959, TNR: 0.9996075353218, PPV: 0.9915966386554, NPV: 0.9980407523510, FNR: 0.0406504065040, FPR: 0.0003924646781, FDR: 0.0084033613445, FOR: 0.0019592476489, F1S: 0.9752066115702, }, \
 {name: "showering", TP: 652, FN: 8, FP: 107, TN: 1904, TPR: 0.9878787878787, TNR: 0.9467926404773, PPV: 0.8590250329380, NPV: 0.9958158995815, FNR: 0.0121212121212, FPR: 0.0532073595226, FDR: 0.1409749670619, FOR: 0.0041841004184, F1S: 0.9189570119802, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xaa, 0x1b, 0x7e, 0x63, 0x33, 0x9f, 0x83, 0x42, 0xb1, 0x35, 0xb0, 0x58, 0x6f, 0xbd, 0xe3, 0x6d}

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

#define IMAI_KEY_MAX (49)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
