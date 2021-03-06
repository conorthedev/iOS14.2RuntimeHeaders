/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
 */

@interface HDSHFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDFeatureAvailabilityExtensionObserver, HKSPSleepStorePrivateObserver> {
    long long  _currentOnboardingVersion;
    HDFeatureAvailabilityManager * _manager;
    bool  _needsMigration;
    NSString * _observedDefaultsKey;
    HKObserverSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _sleepDaemonDefaults;
    id /* block */  _sleepStoreProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentSleepEventRecordWithError:(id*)arg1;
- (id)_currentSleepEventRecordWithSleepStore:(id)arg1 error:(id*)arg2;
- (id)_migrateOnboardingAndReturnCompletedVersion;
- (id)_migrateOnboardingIfNeededAndReturnCompletedVersion;
- (void)_notifyObserversForOnboardingCompletedVersionChange;
- (void)_registerForSleepUserDefaultsChangesIfNecessary;
- (void)_saveOnboardingCompletedVersion:(long long)arg1 completion:(id /* block */)arg2;
- (void)_sleepUserDefaultsDidChangeForKey:(id)arg1;
- (void)_unregisterForSleepUserDefaultsChanges;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)deviceForPairingID:(id)arg1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (id)featureIdentifier;
- (id)highestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 sleepStoreProvider:(id /* block */)arg2 featureIdentifier:(id)arg3 currentOnboardingVersion:(long long)arg4;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2;
- (id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(id /* block */)arg2;
- (void)unitTest_notifyObserversForOnboardingCompletedVersionChange;
- (void)unregisterObserver:(id)arg1;

@end
