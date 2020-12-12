/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager * _ageGatingManager;
    HDAppSubscriptionManager * _appSubscriptionManager;
    HDAWDSubmissionManager * _awdSubmissionManager;
    HDCurrentActivitySummaryHelper * _currentActivitySummaryHelper;
    HDDataCollectionManager * _dataCollectionManager;
    HDDemoDataManager * _demoDataManager;
    HDFitnessMachineManager * _fitnessMachineManager;
    HDNanoSyncManager * _nanoSyncManager;
    HDNotificationManager * _notificationManager;
    HDServiceConnectionManager * _serviceConnectionManager;
    HDHealthServiceManager * _serviceManager;
    HDTinkerPrivacyAlertCoordinator * _tinkerPrivacyAlertCoordinator;
    HDWorkoutManager * _workoutManager;
}

- (void).cxx_destruct;
- (void)_applyPPTUpdates;
- (id)_newAWDSubmissionManager;
- (id)_newAppSubscriptionManager;
- (id)_newNanoSyncManager;
- (id)_newNotificationManager;
- (id)_newWorkoutManager;
- (id)activityCacheManager;
- (id)appSubscriptionManager;
- (id)awdSubmissionManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)fitnessMachineManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;
- (id)nanoSyncManager;
- (id)notificationManager;
- (id)serviceConnectionManager;
- (id)serviceManager;
- (void)terminationCleanup;
- (id)tinkerPrivacyAlertCoordinator;
- (void)unitTest_setNanoSyncManager:(id)arg1;
- (void)unitTest_setServiceManager:(id)arg1;
- (id)workoutManager;

@end