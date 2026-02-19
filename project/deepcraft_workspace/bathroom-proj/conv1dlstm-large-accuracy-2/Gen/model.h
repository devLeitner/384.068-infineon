/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 20:48:22 UTC. Any changes will be lost.
* 
* Model ID  00aa0e87-e846-4675-9101-9e574c7987e1
* 
* Memory    Size                      Efficiency
* Buffers   9600 bytes (RAM)          90 %
* State     8648 bytes (RAM)          100 %
* Readonly  96296 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1dlstm-large-accuracy-2
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
* Convolution 1D                 [60,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,20,16]
* Batch Normalization            [60,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [60,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [60,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [60,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [60,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [60,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [60,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [60,16]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [30,16]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [30,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Batch Normalization            [30,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [30,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [30,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [30,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [30,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [15,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
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
* Long Short-Term Memory         [7,32]          float      dequeue
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
* (ACC) Accuracy 90.862 %
* (F1S) F1 Score 90.797 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 979                0              299              671
* (FN) False Negative or Incorrect Negative Prediction               13                0                4              179
* (FP) False Positive or Incorrect Positive Prediction              180                3                0               13
* (TN) True Negative or Correct Negative Prediction                 973             2142             1842             1282
* (TPR) True Positive Rate or Sensitivity, Recall               98.69 %         100.00 %          98.68 %          78.94 %
* (TNR) True Negative Rate or Specificity, Selectivity          84.39 %          99.86 %         100.00 %          99.00 %
* (PPV) Positive Predictive Value or Precision                  84.47 %           0.00 %         100.00 %          98.10 %
* (NPV) Negative Predictive Value                               98.68 %         100.00 %          99.78 %          87.75 %
* (FNR) False Negative Rate or Miss Rate                         1.31 %         100.00 %           1.32 %          21.06 %
* (FPR) False Positive Rate or Fall-Out                         15.61 %           0.14 %           0.00 %           1.00 %
* (FDR) False Discovery Rate                                    15.53 %         100.00 %           0.00 %           1.90 %
* (FOR) False Omission Rate                                      1.32 %           0.00 %           0.22 %          12.25 %
* (F1S) F1 Score                                                91.03 %           0.00 %          99.34 %          87.48 %
*/


#define IMAI_TEST_AVG_ACC 0.9086247086247087 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9079674969394662 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 979, FN: 13, FP: 180, TN: 973, TPR: 0.9868951612903, TNR: 0.8438855160450, PPV: 0.8446937014667, NPV: 0.9868154158215, FNR: 0.0131048387096, FPR: 0.1561144839549, FDR: 0.1553062985332, FOR: 0.0131845841784, F1S: 0.9102742910274, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 3, TN: 2142, TPR: 1, TNR: 0.9986013986013, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0013986013986, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 299, FN: 4, FP: 0, TN: 1842, TPR: 0.9867986798679, TNR: 1, PPV: 1, NPV: 0.9978331527627, FNR: 0.0132013201320, FPR: 0, FDR: 0, FOR: 0.0021668472372, F1S: 0.9933554817275, }, \
 {name: "showering", TP: 671, FN: 179, FP: 13, TN: 1282, TPR: 0.7894117647058, TNR: 0.9899613899613, PPV: 0.9809941520467, NPV: 0.8774811772758, FNR: 0.2105882352941, FPR: 0.0100386100386, FDR: 0.0190058479532, FOR: 0.1225188227241, F1S: 0.8748370273794, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 97.488 %
* (F1S) F1 Score 97.515 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3096              387              286              889
* (FN) False Negative or Incorrect Negative Prediction               79                5               21               15
* (FP) False Positive or Incorrect Positive Prediction               12               20                2               86
* (TN) True Negative or Correct Negative Prediction                1591             4366             4469             3788
* (TPR) True Positive Rate or Sensitivity, Recall               97.51 %          98.72 %          93.16 %          98.34 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.25 %          99.54 %          99.96 %          97.78 %
* (PPV) Positive Predictive Value or Precision                  99.61 %          95.09 %          99.31 %          91.18 %
* (NPV) Negative Predictive Value                               95.27 %          99.89 %          99.53 %          99.61 %
* (FNR) False Negative Rate or Miss Rate                         2.49 %           1.28 %           6.84 %           1.66 %
* (FPR) False Positive Rate or Fall-Out                          0.75 %           0.46 %           0.04 %           2.22 %
* (FDR) False Discovery Rate                                     0.39 %           4.91 %           0.69 %           8.82 %
* (FOR) False Omission Rate                                      4.73 %           0.11 %           0.47 %           0.39 %
* (F1S) F1 Score                                                98.55 %          96.87 %          96.13 %          94.62 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9748848890749268 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9751549684260717 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3096, FN: 79, FP: 12, TN: 1591, TPR: 0.9751181102362, TNR: 0.9925140361821, PPV: 0.9961389961389, NPV: 0.9526946107784, FNR: 0.0248818897637, FPR: 0.0074859638178, FDR: 0.0038610038610, FOR: 0.0473053892215, F1S: 0.9855164730224, }, \
 {name: "brushing_t...", TP: 387, FN: 5, FP: 20, TN: 4366, TPR: 0.9872448979591, TNR: 0.9954400364797, PPV: 0.9508599508599, NPV: 0.9988560970029, FNR: 0.0127551020408, FPR: 0.0045599635202, FDR: 0.0491400491400, FOR: 0.0011439029970, F1S: 0.9687108886107, }, \
 {name: "hair_drying", TP: 286, FN: 21, FP: 2, TN: 4469, TPR: 0.9315960912052, TNR: 0.9995526727801, PPV: 0.9930555555555, NPV: 0.9953229398663, FNR: 0.0684039087947, FPR: 0.0004473272198, FDR: 0.0069444444444, FOR: 0.0046770601336, F1S: 0.9613445378151, }, \
 {name: "showering", TP: 889, FN: 15, FP: 86, TN: 3788, TPR: 0.9834070796460, TNR: 0.9778007227671, PPV: 0.9117948717948, NPV: 0.9960557454641, FNR: 0.0165929203539, FPR: 0.0221992772328, FDR: 0.0882051282051, FOR: 0.0039442545358, F1S: 0.9462480042575, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 94.981 %
* (F1S) F1 Score 94.992 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 600              371              160              629
* (FN) False Negative or Incorrect Negative Prediction               53                7                2               31
* (FP) False Positive or Incorrect Positive Prediction               32                1                1               59
* (TN) True Negative or Correct Negative Prediction                1168             1474             1690             1134
* (TPR) True Positive Rate or Sensitivity, Recall               91.88 %          98.15 %          98.77 %          95.30 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.33 %          99.93 %          99.94 %          95.05 %
* (PPV) Positive Predictive Value or Precision                  94.94 %          99.73 %          99.38 %          91.42 %
* (NPV) Negative Predictive Value                               95.66 %          99.53 %          99.88 %          97.34 %
* (FNR) False Negative Rate or Miss Rate                         8.12 %           1.85 %           1.23 %           4.70 %
* (FPR) False Positive Rate or Fall-Out                          2.67 %           0.07 %           0.06 %           4.95 %
* (FDR) False Discovery Rate                                     5.06 %           0.27 %           0.62 %           8.58 %
* (FOR) False Omission Rate                                      4.34 %           0.47 %           0.12 %           2.66 %
* (F1S) F1 Score                                                93.39 %          98.93 %          99.07 %          93.32 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9498111171073934 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9499209506793627 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 600, FN: 53, FP: 32, TN: 1168, TPR: 0.9188361408882, TNR: 0.9733333333333, PPV: 0.9493670886075, NPV: 0.9565929565929, FNR: 0.0811638591117, FPR: 0.0266666666666, FDR: 0.0506329113924, FOR: 0.0434070434070, F1S: 0.9338521400778, }, \
 {name: "brushing_t...", TP: 371, FN: 7, FP: 1, TN: 1474, TPR: 0.9814814814814, TNR: 0.9993220338983, PPV: 0.9973118279569, NPV: 0.9952734638757, FNR: 0.0185185185185, FPR: 0.0006779661016, FDR: 0.0026881720430, FOR: 0.0047265361242, F1S: 0.9893333333333, }, \
 {name: "hair_drying", TP: 160, FN: 2, FP: 1, TN: 1690, TPR: 0.9876543209876, TNR: 0.9994086339444, PPV: 0.9937888198757, NPV: 0.9988179669030, FNR: 0.0123456790123, FPR: 0.0005913660555, FDR: 0.0062111801242, FOR: 0.0011820330969, F1S: 0.9907120743034, }, \
 {name: "showering", TP: 629, FN: 31, FP: 59, TN: 1134, TPR: 0.9530303030303, TNR: 0.9505448449287, PPV: 0.9142441860465, NPV: 0.9733905579399, FNR: 0.0469696969696, FPR: 0.0494551550712, FDR: 0.0857558139534, FOR: 0.0266094420600, F1S: 0.9332344213649, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x87, 0x0e, 0xaa, 0x00, 0x46, 0xe8, 0x75, 0x46, 0x91, 0x01, 0x9e, 0x57, 0x4c, 0x79, 0x87, 0xe1}

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

#define IMAI_KEY_MAX (123)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
