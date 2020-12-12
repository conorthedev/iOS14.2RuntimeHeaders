/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepAnalysis : NSObject {
    double  _averageTimeAsleep;
    double  _averageTimeInBed;
    long long  _numberOfAsleepSamples;
    NSArray * _sleepDays;
}

@property (nonatomic, readonly) double averageTimeAsleep;
@property (nonatomic, readonly) double averageTimeInBed;
@property (nonatomic, readonly) long long numberOfAsleepSamples;
@property (nonatomic, readonly, copy) NSArray *sleepDays;

+ (id)emptyAnalysis;

- (void).cxx_destruct;
- (double)averageTimeAsleep;
- (double)averageTimeInBed;
- (id)initWithSleepDays:(id)arg1 numberOfAsleepSamples:(long long)arg2 averageTimeInBed:(double)arg3 averageTimeAlseep:(double)arg4;
- (long long)numberOfAsleepSamples;
- (id)sleepDays;

@end