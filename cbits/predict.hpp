#ifndef __TENSORRT_PREDICT_HPP__
#define __TENSORRT_PREDICT_HPP__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef void *PredictorContext;
PredictorContext NewTensorRT(char *model_file, char *trained_file, int batchSize,
                             char *outputLayer);
void DeleteTensorRT(PredictorContext pred);
const char *PredictTensorRT(PredictorContext pred, float *input,
                            const char *input_layer_name,
                            const char *output_layer_name, const int batchSize);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __TENSORRT_PREDICT_HPP__