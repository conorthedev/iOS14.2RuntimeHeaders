/* Generated by RuntimeBrowser.
 */

@protocol HDSPSleepScheduleModelObserver <NSObject>

@optional

- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id <HDSPSource>)arg2 didUpdateSleepEventRecord:(HKSPSleepEventRecord *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id <HDSPSource>)arg2 didUpdateSleepSchedule:(HKSPSleepSchedule *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id <HDSPSource>)arg2 didUpdateSleepScheduleModel:(HKSPSleepScheduleModel *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id <HDSPSource>)arg2 didUpdateSleepSettings:(HKSPSleepSettings *)arg3;

@end