/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingResidentElector : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    HMDHomeManager * _homeManager;
    HMFUnfairLock * _lock;
    NSMutableDictionary * _readyToRecordByCameraUUIDString;
    HMISystemResourceUsageMonitor * _systemResourceUsageMonitor;
    unsigned long long  _totalNumberOfStreams;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) Class superclass;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property unsigned long long totalNumberOfStreams;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateReadyToRecordMetric;
- (void)handleResidentMeshInitialized:(id)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;
- (bool)isReadyToRecordForCameraWithUUID:(id)arg1;
- (id)preferredResidentDevicesForCamera:(id)arg1 deviceFilter:(id /* block */)arg2;
- (id)readyToRecordByCameraUUIDString;
- (void)recordingDidEndForCameraWithUUID:(id)arg1;
- (void)recordingDidStartForCameraWithUUID:(id)arg1;
- (void)removeDataForCameraWithUUID:(id)arg1;
- (void)setReadyToRecord:(bool)arg1 forCameraWithUUID:(id)arg2;
- (void)setTotalNumberOfStreams:(unsigned long long)arg1;
- (void)start;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (id)systemResourceUsageMonitor;
- (unsigned long long)totalNumberOfStreams;

@end
