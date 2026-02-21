/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 14:50:09 UTC. Any changes will be lost.
* 
* Model ID  ffdd2e01-2b11-4b81-9123-8056eba6a87d
* 
* Memory    Size                      Efficiency
* Buffers   18400 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  41136 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-0
* 
* Class Index | Symbol Label
* 0           | unlabelled
* 1           | air
* 2           | plastic
* 3           | plastic_out
* 4           | wood
* 5           | wood_out
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
* Convolution 1D                 [50,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,40,12]
* Batch Normalization            [50,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [50,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Batch Normalization            [50,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [50,24]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [50,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [50,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [25,24]         float      dequeue
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
*    weight = float[3,24,32]
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
* Dense                          [6]             float      dequeue
*    units = 6
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,6]
*    bias = float[6]
* Activation                     [6]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[6].
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
* (ACC) Accuracy 89.730 %
* (F1S) F1 Score 89.572 %
* 
* Name of class                                               unlabeled              air          plastic      plastic_out             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                2396              342              366                0              487                0
* (FN) False Negative or Incorrect Negative Prediction               82               35               74               13              192               15
* (FP) False Positive or Incorrect Positive Prediction               56               63              204                0               88                0
* (TN) True Negative or Correct Negative Prediction                1468             3562             3358             3989             3235             3987
* (TPR) True Positive Rate or Sensitivity, Recall               96.69 %          90.72 %          83.18 %           0.00 %          71.72 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          96.33 %          98.26 %          94.27 %         100.00 %          97.35 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  97.72 %          84.44 %          64.21 %         100.00 %          84.70 %         100.00 %
* (NPV) Negative Predictive Value                               94.71 %          99.03 %          97.84 %          99.68 %          94.40 %          99.63 %
* (FNR) False Negative Rate or Miss Rate                         3.31 %           9.28 %          16.82 %         100.00 %          28.28 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          3.67 %           1.74 %           5.73 %           0.00 %           2.65 %           0.00 %
* (FDR) False Discovery Rate                                     2.28 %          15.56 %          35.79 %         100.00 %          15.30 %         100.00 %
* (FOR) False Omission Rate                                      5.29 %           0.97 %           2.16 %           0.32 %           5.60 %           0.37 %
* (F1S) F1 Score                                                97.20 %          87.47 %          72.48 %           0.00 %          77.67 %           0.00 %
*/


#define IMAI_TEST_AVG_ACC 0.8973013493253373 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8957198463253007 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 2396, FN: 82, FP: 56, TN: 1468, TPR: 0.9669087974172, TNR: 0.9632545931758, PPV: 0.9771615008156, NPV: 0.9470967741935, FNR: 0.0330912025827, FPR: 0.0367454068241, FDR: 0.0228384991843, FOR: 0.0529032258064, F1S: 0.9720081135902, }, \
 {name: "air", TP: 342, FN: 35, FP: 63, TN: 3562, TPR: 0.9071618037135, TNR: 0.9826206896551, PPV: 0.8444444444444, NPV: 0.9902696691687, FNR: 0.0928381962864, FPR: 0.0173793103448, FDR: 0.1555555555555, FOR: 0.0097303308312, F1S: 0.8746803069053, }, \
 {name: "plastic", TP: 366, FN: 74, FP: 204, TN: 3358, TPR: 0.8318181818181, TNR: 0.9427288040426, PPV: 0.6421052631578, NPV: 0.9784382284382, FNR: 0.1681818181818, FPR: 0.0572711959573, FDR: 0.3578947368421, FOR: 0.0215617715617, F1S: 0.7247524752475, }, \
 {name: "plastic_out", TP: 0, FN: 13, FP: 0, TN: 3989, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9967516241879, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0032483758120, F1S: 0, }, \
 {name: "wood", TP: 487, FN: 192, FP: 88, TN: 3235, TPR: 0.7172312223858, TNR: 0.9735179055070, PPV: 0.8469565217391, NPV: 0.9439743215640, FNR: 0.2827687776141, FPR: 0.0264820944929, FDR: 0.1530434782608, FOR: 0.0560256784359, F1S: 0.7767145135566, }, \
 {name: "wood_out", TP: 0, FN: 15, FP: 0, TN: 3987, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9962518740629, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0037481259370, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 96.579 %
* (F1S) F1 Score 96.239 %
* 
* Name of class                                               unlabeled              air          plastic      plastic_out             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                8122              849             1275                0             1779                0
* (FN) False Negative or Incorrect Negative Prediction              205               70               41               54               14               42
* (FP) False Positive or Incorrect Positive Prediction              116              155               77                0               78                0
* (TN) True Negative or Correct Negative Prediction                4008            11377            11058            12397            10580            12409
* (TPR) True Positive Rate or Sensitivity, Recall               97.54 %          92.38 %          96.88 %           0.00 %          99.22 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.19 %          98.66 %          99.31 %         100.00 %          99.27 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  98.59 %          84.56 %          94.30 %         100.00 %          95.80 %         100.00 %
* (NPV) Negative Predictive Value                               95.13 %          99.39 %          99.63 %          99.57 %          99.87 %          99.66 %
* (FNR) False Negative Rate or Miss Rate                         2.46 %           7.62 %           3.12 %         100.00 %           0.78 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          2.81 %           1.34 %           0.69 %           0.00 %           0.73 %           0.00 %
* (FDR) False Discovery Rate                                     1.41 %          15.44 %           5.70 %         100.00 %           4.20 %         100.00 %
* (FOR) False Omission Rate                                      4.87 %           0.61 %           0.37 %           0.43 %           0.13 %           0.34 %
* (F1S) F1 Score                                                98.06 %          88.30 %          95.58 %           0.00 %          97.48 %           0.00 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9657858806521564 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9623896109537499 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 8122, FN: 205, FP: 116, TN: 4008, TPR: 0.9753812897802, TNR: 0.9718719689621, PPV: 0.9859189123573, NPV: 0.9513410871113, FNR: 0.0246187102197, FPR: 0.0281280310378, FDR: 0.0140810876426, FOR: 0.0486589128886, F1S: 0.9806217929369, }, \
 {name: "air", TP: 849, FN: 70, FP: 155, TN: 11377, TPR: 0.9238302502720, TNR: 0.9865591397849, PPV: 0.8456175298804, NPV: 0.9938848606621, FNR: 0.0761697497279, FPR: 0.0134408602150, FDR: 0.1543824701195, FOR: 0.0061151393378, F1S: 0.8829953198127, }, \
 {name: "plastic", TP: 1275, FN: 41, FP: 77, TN: 11058, TPR: 0.9688449848024, TNR: 0.9930848675348, PPV: 0.9430473372781, NPV: 0.9963059735111, FNR: 0.0311550151975, FPR: 0.0069151324651, FDR: 0.0569526627218, FOR: 0.0036940264888, F1S: 0.9557721139430, }, \
 {name: "plastic_out", TP: 0, FN: 54, FP: 0, TN: 12397, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9956629989559, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0043370010440, F1S: 0, }, \
 {name: "wood", TP: 1779, FN: 14, FP: 78, TN: 10580, TPR: 0.9921918572225, TNR: 0.9926815537624, PPV: 0.9579967689822, NPV: 0.9986784972626, FNR: 0.0078081427774, FPR: 0.0073184462375, FDR: 0.0420032310177, FOR: 0.0013215027373, F1S: 0.9747945205479, }, \
 {name: "wood_out", TP: 0, FN: 42, FP: 0, TN: 12409, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9966267769657, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0033732230342, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 90.947 %
* (F1S) F1 Score 90.778 %
* 
* Name of class                                               unlabeled              air          plastic      plastic_out             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                1756              309              229                0              318                0
* (FN) False Negative or Incorrect Negative Prediction               44               37               47               14              105               13
* (FP) False Positive or Incorrect Positive Prediction               31               35              144                0               50                0
* (TN) True Negative or Correct Negative Prediction                1041             2491             2452             2858             2399             2859
* (TPR) True Positive Rate or Sensitivity, Recall               97.56 %          89.31 %          82.97 %           0.00 %          75.18 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.11 %          98.61 %          94.45 %         100.00 %          97.96 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  98.27 %          89.83 %          61.39 %         100.00 %          86.41 %         100.00 %
* (NPV) Negative Predictive Value                               95.94 %          98.54 %          98.12 %          99.51 %          95.81 %          99.55 %
* (FNR) False Negative Rate or Miss Rate                         2.44 %          10.69 %          17.03 %         100.00 %          24.82 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          2.89 %           1.39 %           5.55 %           0.00 %           2.04 %           0.00 %
* (FDR) False Discovery Rate                                     1.73 %          10.17 %          38.61 %         100.00 %          13.59 %         100.00 %
* (FOR) False Omission Rate                                      4.06 %           1.46 %           1.88 %           0.49 %           4.19 %           0.45 %
* (F1S) F1 Score                                                97.91 %          89.57 %          70.57 %           0.00 %          80.40 %           0.00 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9094707520891365 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9077801162950547 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 1756, FN: 44, FP: 31, TN: 1041, TPR: 0.9755555555555, TNR: 0.9710820895522, PPV: 0.9826524902070, NPV: 0.9594470046082, FNR: 0.0244444444444, FPR: 0.0289179104477, FDR: 0.0173475097929, FOR: 0.0405529953917, F1S: 0.9790911625313, }, \
 {name: "air", TP: 309, FN: 37, FP: 35, TN: 2491, TPR: 0.8930635838150, TNR: 0.9861441013460, PPV: 0.8982558139534, NPV: 0.9853639240506, FNR: 0.1069364161849, FPR: 0.0138558986539, FDR: 0.1017441860465, FOR: 0.0146360759493, F1S: 0.8956521739130, }, \
 {name: "plastic", TP: 229, FN: 47, FP: 144, TN: 2452, TPR: 0.8297101449275, TNR: 0.9445300462249, PPV: 0.6139410187667, NPV: 0.9811924769907, FNR: 0.1702898550724, FPR: 0.0554699537750, FDR: 0.3860589812332, FOR: 0.0188075230092, F1S: 0.7057010785824, }, \
 {name: "plastic_out", TP: 0, FN: 14, FP: 0, TN: 2858, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9951253481894, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0048746518105, F1S: 0, }, \
 {name: "wood", TP: 318, FN: 105, FP: 50, TN: 2399, TPR: 0.7517730496453, TNR: 0.9795835034708, PPV: 0.8641304347826, NPV: 0.9580670926517, FNR: 0.2482269503546, FPR: 0.0204164965291, FDR: 0.1358695652173, FOR: 0.0419329073482, F1S: 0.8040455120101, }, \
 {name: "wood_out", TP: 0, FN: 13, FP: 0, TN: 2859, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9954735376044, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0045264623955, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"unlabelled", "air", "plastic", "plastic_out", "wood", "wood_out"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x01, 0x2e, 0xdd, 0xff, 0x11, 0x2b, 0x81, 0x4b, 0x91, 0x23, 0x80, 0x56, 0xeb, 0xa6, 0xa8, 0x7d}

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

// data_out [6] (24 bytes)
#define IMAI_DATA_OUT_COUNT (6)
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
