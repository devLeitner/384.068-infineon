/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 20:58:34 UTC. Any changes will be lost.
* 
* Model ID  a81a0e9e-6d47-447f-a178-78906459f59b
* 
* Memory    Size                      Efficiency
* Buffers   6720 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  70248 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-large-accuracy-0
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
* (ACC) Accuracy 90.816 %
* (F1S) F1 Score 90.681 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 976                0              302              670
* (FN) False Negative or Incorrect Negative Prediction               16                0                1              180
* (FP) False Positive or Incorrect Positive Prediction              181                0                0               16
* (TN) True Negative or Correct Negative Prediction                 972             2145             1842             1279
* (TPR) True Positive Rate or Sensitivity, Recall               98.39 %         100.00 %          99.67 %          78.82 %
* (TNR) True Negative Rate or Specificity, Selectivity          84.30 %         100.00 %         100.00 %          98.76 %
* (PPV) Positive Predictive Value or Precision                  84.36 %         100.00 %         100.00 %          97.67 %
* (NPV) Negative Predictive Value                               98.38 %         100.00 %          99.95 %          87.66 %
* (FNR) False Negative Rate or Miss Rate                         1.61 %         100.00 %           0.33 %          21.18 %
* (FPR) False Positive Rate or Fall-Out                         15.70 %           0.00 %           0.00 %           1.24 %
* (FDR) False Discovery Rate                                    15.64 %         100.00 %           0.00 %           2.33 %
* (FOR) False Omission Rate                                      1.62 %           0.00 %           0.05 %          12.34 %
* (F1S) F1 Score                                                90.83 %         100.00 %          99.83 %          87.24 %
*/


#define IMAI_TEST_AVG_ACC 0.9081585081585082 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9068058050365 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 976, FN: 16, FP: 181, TN: 972, TPR: 0.9838709677419, TNR: 0.8430182133564, PPV: 0.8435609334485, NPV: 0.9838056680161, FNR: 0.0161290322580, FPR: 0.1569817866435, FDR: 0.1564390665514, FOR: 0.0161943319838, F1S: 0.9083294555607, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 0, TN: 2145, TPR: 1, TNR: 1, PPV: 1, NPV: 1, FNR: 1, FPR: 0, FDR: 1, FOR: 0, F1S: 1, }, \
 {name: "hair_drying", TP: 302, FN: 1, FP: 0, TN: 1842, TPR: 0.9966996699669, TNR: 1, PPV: 1, NPV: 0.9994574064026, FNR: 0.0033003300330, FPR: 0, FDR: 0, FOR: 0.0005425935973, F1S: 0.9983471074380, }, \
 {name: "showering", TP: 670, FN: 180, FP: 16, TN: 1279, TPR: 0.7882352941176, TNR: 0.9876447876447, PPV: 0.9766763848396, NPV: 0.8766278272789, FNR: 0.2117647058823, FPR: 0.0123552123552, FDR: 0.0233236151603, FOR: 0.1233721727210, F1S: 0.8723958333333, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.535 %
* (F1S) F1 Score 98.549 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3110              388              306              904
* (FN) False Negative or Incorrect Negative Prediction               65                4                1                0
* (FP) False Positive or Incorrect Positive Prediction                3                2                4               61
* (TN) True Negative or Correct Negative Prediction                1600             4384             4467             3813
* (TPR) True Positive Rate or Sensitivity, Recall               97.95 %          98.98 %          99.67 %         100.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.81 %          99.95 %          99.91 %          98.43 %
* (PPV) Positive Predictive Value or Precision                  99.90 %          99.49 %          98.71 %          93.68 %
* (NPV) Negative Predictive Value                               96.10 %          99.91 %          99.98 %         100.00 %
* (FNR) False Negative Rate or Miss Rate                         2.05 %           1.02 %           0.33 %           0.00 %
* (FPR) False Positive Rate or Fall-Out                          0.19 %           0.05 %           0.09 %           1.57 %
* (FDR) False Discovery Rate                                     0.10 %           0.51 %           1.29 %           6.32 %
* (FOR) False Omission Rate                                      3.90 %           0.09 %           0.02 %           0.00 %
* (F1S) F1 Score                                                98.92 %          99.23 %          99.19 %          96.74 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9853495186270406 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9854886340185122 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3110, FN: 65, FP: 3, TN: 1600, TPR: 0.9795275590551, TNR: 0.9981285090455, PPV: 0.9990362993896, NPV: 0.9609609609609, FNR: 0.0204724409448, FPR: 0.0018714909544, FDR: 0.0009637006103, FOR: 0.0390390390390, F1S: 0.9891857506361, }, \
 {name: "brushing_t...", TP: 388, FN: 4, FP: 2, TN: 4384, TPR: 0.9897959183673, TNR: 0.9995440036479, PPV: 0.9948717948717, NPV: 0.9990884229717, FNR: 0.0102040816326, FPR: 0.0004559963520, FDR: 0.0051282051282, FOR: 0.0009115770282, F1S: 0.9923273657289, }, \
 {name: "hair_drying", TP: 306, FN: 1, FP: 4, TN: 4467, TPR: 0.9967426710097, TNR: 0.9991053455602, PPV: 0.9870967741935, NPV: 0.9997761862130, FNR: 0.0032573289902, FPR: 0.0008946544397, FDR: 0.0129032258064, FOR: 0.0002238137869, F1S: 0.9918962722852, }, \
 {name: "showering", TP: 904, FN: 0, FP: 61, TN: 3813, TPR: 1, TNR: 0.9842540010325, PPV: 0.9367875647668, NPV: 1, FNR: 0, FPR: 0.0157459989674, FDR: 0.0632124352331, FOR: 0, F1S: 0.9673622257891, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 94.711 %
* (F1S) F1 Score 94.712 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 571              367              162              655
* (FN) False Negative or Incorrect Negative Prediction               82               11                0                5
* (FP) False Positive or Incorrect Positive Prediction                4                2                3               89
* (TN) True Negative or Correct Negative Prediction                1196             1473             1688             1104
* (TPR) True Positive Rate or Sensitivity, Recall               87.44 %          97.09 %         100.00 %          99.24 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.67 %          99.86 %          99.82 %          92.54 %
* (PPV) Positive Predictive Value or Precision                  99.30 %          99.46 %          98.18 %          88.04 %
* (NPV) Negative Predictive Value                               93.58 %          99.26 %         100.00 %          99.55 %
* (FNR) False Negative Rate or Miss Rate                        12.56 %           2.91 %           0.00 %           0.76 %
* (FPR) False Positive Rate or Fall-Out                          0.33 %           0.14 %           0.18 %           7.46 %
* (FDR) False Discovery Rate                                     0.70 %           0.54 %           1.82 %          11.96 %
* (FOR) False Omission Rate                                      6.42 %           0.74 %           0.00 %           0.45 %
* (F1S) F1 Score                                                93.00 %          98.26 %          99.08 %          93.30 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9471127900701565 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9471215022496156 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 571, FN: 82, FP: 4, TN: 1196, TPR: 0.8744257274119, TNR: 0.9966666666666, PPV: 0.9930434782608, NPV: 0.9358372456964, FNR: 0.1255742725880, FPR: 0.0033333333333, FDR: 0.0069565217391, FOR: 0.0641627543035, F1S: 0.9299674267100, }, \
 {name: "brushing_t...", TP: 367, FN: 11, FP: 2, TN: 1473, TPR: 0.9708994708994, TNR: 0.9986440677966, PPV: 0.9945799457994, NPV: 0.9925876010781, FNR: 0.0291005291005, FPR: 0.0013559322033, FDR: 0.0054200542005, FOR: 0.0074123989218, F1S: 0.9825970548862, }, \
 {name: "hair_drying", TP: 162, FN: 0, FP: 3, TN: 1688, TPR: 1, TNR: 0.9982259018332, PPV: 0.9818181818181, NPV: 1, FNR: 0, FPR: 0.0017740981667, FDR: 0.0181818181818, FOR: 0, F1S: 0.9908256880733, }, \
 {name: "showering", TP: 655, FN: 5, FP: 89, TN: 1104, TPR: 0.9924242424242, TNR: 0.9253981559094, PPV: 0.8803763440860, NPV: 0.9954914337240, FNR: 0.0075757575757, FPR: 0.0746018440905, FDR: 0.1196236559139, FOR: 0.0045085662759, F1S: 0.9330484330484, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x9e, 0x0e, 0x1a, 0xa8, 0x47, 0x6d, 0x7f, 0x44, 0xa1, 0x78, 0x78, 0x90, 0x64, 0x59, 0xf5, 0x9b}

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

#define IMAI_KEY_MAX (76)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
