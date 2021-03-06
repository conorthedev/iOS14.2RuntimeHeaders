/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NSString * _atrialFibrillationDetectionOnboardingCountryCode;
    NSString * _electrocardiogramOnboardingCountryCode;
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
}

@property (nonatomic, copy) NSString *atrialFibrillationDetectionOnboardingCountryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *electrocardiogramOnboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeWatch;
- (struct { long long x1; long long x2; long long x3; })_operatingSystemVersionForWatchOSVersion:(unsigned int)arg1;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
- (id)electrocardiogramOnboardingCountryCode;
- (id)init;
- (id)pairedDeviceRegistry;
- (void)setAtrialFibrillationDetectionOnboardingCountryCode:(id)arg1;
- (void)setElectrocardiogramOnboardingCountryCode:(id)arg1;
- (void)setPairedDeviceRegistry:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })watchAtrialFibrillationDetectionVersion;
- (id)watchBuildType;
- (id)watchCompanionDevicePlatform;
- (struct { long long x1; long long x2; long long x3; })watchElectrocardiogramVersion;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (id)watchProductType;
- (id)watchRegion;

@end
