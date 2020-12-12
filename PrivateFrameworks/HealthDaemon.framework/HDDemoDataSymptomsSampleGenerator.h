/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataSymptomsSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextCommonColdSymptomsTime;
    double  _nextFoodPoisoningSymptomsTime;
    double  _nextSingleRandomSymptomTime;
}

@property (nonatomic) double nextCommonColdSymptomsTime;
@property (nonatomic) double nextFoodPoisoningSymptomsTime;
@property (nonatomic) double nextSingleRandomSymptomTime;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateSingleSymptomSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateSymptomSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 nextTime:(double)arg4 condition:(long long)arg5 sampleTypes:(id)arg6 frequency:(double)arg7 objectCollection:(id)arg8;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextCommonColdSymptomsTime;
- (double)nextFoodPoisoningSymptomsTime;
- (double)nextSingleRandomSymptomTime;
- (void)setNextCommonColdSymptomsTime:(double)arg1;
- (void)setNextFoodPoisoningSymptomsTime:(double)arg1;
- (void)setNextSingleRandomSymptomTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end