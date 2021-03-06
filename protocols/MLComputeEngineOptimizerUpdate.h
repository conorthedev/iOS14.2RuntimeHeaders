/* Generated by RuntimeBrowser.
 */

@protocol MLComputeEngineOptimizerUpdate <NSObject>

@required

- (void)convertUpdatesToTensorDataForLayer:(MLCLayer *)arg1;
- (void)convertUpdatesToTensorDataForTensorParameters:(MLCTensor *)arg1;
- (void)reloadParameterDataFromHostToDeviceMemoryForTensor:(MLCTensor *)arg1;
- (void)setOptimizerLearningRate:(NSArray *)arg1 learningRate:(float)arg2;
- (void)setOptimizerTimeStep:(NSArray *)arg1 timeStep:(unsigned long long)arg2;
- (void)sumSharedGradientsForConvolutionLayerTensorParameter:(MLCTensor *)arg1 layerIndexForSummedGradients:(unsigned long long)arg2;
- (void)sumSharedGradientsForNormalizationLayerTensorParameter:(MLCTensor *)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(bool)arg3;
- (void)synchronizeOptimizerUpdatesForTensor:(MLCTensor *)arg1;
- (void)synchronizeUpdatesForLayer:(MLCLayer *)arg1;
- (void)updateBatchNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4 meanTensor:(MLCTensor *)arg5 varianceTensor:(MLCTensor *)arg6;
- (void)updateConvolutionLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(MLCTensorParameter *)arg3 biasesParameter:(MLCTensorParameter *)arg4;
- (void)updateEmbeddingLayer:(NSArray *)arg1 weightsParameter:(MLCTensorParameter *)arg2 optimizer:(NSArray *)arg3;
- (void)updateFullyConnectedLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(MLCTensorParameter *)arg3 biasesParameter:(MLCTensorParameter *)arg4;
- (void)updateGroupNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4;
- (void)updateInstanceNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4;
- (void)updateLayerNormalizationLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 betaParameter:(MLCTensorParameter *)arg3 gammaParameter:(MLCTensorParameter *)arg4;
- (void)updateMultiheadAttentionLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 weightsParameter:(NSArray *)arg3 biasesParameter:(NSArray *)arg4;
- (void)updateRNNLayer:(NSArray *)arg1 optimizer:(NSArray *)arg2 inputWeightsParameter:(NSArray *)arg3 hiddenWeightsParameter:(NSArray *)arg4 biasesParameter:(NSArray *)arg5;
- (void)updateTensorParameter:(MLCTensorParameter *)arg1 optimizer:(NSArray *)arg2 gradient:(MLCTensor *)arg3;

@end
