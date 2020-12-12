/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDBulletinBoard * _bulletinBoard;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    bool  _hasCameraConfiguredForRecording;
    HMDHome * _home;
    HMFTimer * _notificationDebounceTimer;
    bool  _notificationEnabled;
    HMDResidentReachabilityContext * _reachabilityContext;
    id /* block */  _timerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) bool hasCameraConfiguredForRecording;
@property (readonly) bool hasReachableResidentSupportingCameraRecording;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) bool isCameraReachabilityNotificationDisabledForAllSettings;
@property (retain) HMFTimer *notificationDebounceTimer;
@property bool notificationEnabled;
@property (retain) HMDResidentReachabilityContext *reachabilityContext;
@property (readonly) Class superclass;
@property (readonly, copy) id /* block */ timerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_evaluateReachabilityBulletin;
- (void)_handleCameraProfileSettingsDidChange:(id)arg1;
- (void)_handleCameraProfileUnconfigured:(id)arg1;
- (void)_handleNetworkReachabilityChange:(id)arg1;
- (void)_handleResidentAdded:(id)arg1;
- (void)_handleResidentRemoved:(id)arg1;
- (void)_handleResidentUpdated:(id)arg1;
- (void)_startDebounceTimer;
- (bool)anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
- (id)bulletinBoard;
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2;
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)deviceMonitor;
- (bool)hasCameraConfiguredForRecording;
- (bool)hasReachableResidentSupportingCameraRecording;
- (id)home;
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2;
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(id /* block */)arg3 bulletinBoard:(id)arg4;
- (bool)isCameraReachabilityNotificationDisabledForAllSettings;
- (id)logIdentifier;
- (id)notificationDebounceTimer;
- (bool)notificationEnabled;
- (id)reachabilityContext;
- (void)setNotificationDebounceTimer:(id)arg1;
- (void)setNotificationEnabled:(bool)arg1;
- (void)setReachabilityContext:(id)arg1;
- (bool)shouldPostReachableNotification;
- (bool)shouldPostUnreachableNotification;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (void)updateNotificationEnabled;
- (id)workQueue;

@end