/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppExtensionAssertion : NSObject {
    HDAppAssertionManager * _assertionManager;
    NSString * _bundleIdentifier;
    long long  _connectionErrorCount;
    <HDAppExtensionAssertionDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _graceTimer;
    bool  _invalidated;
    double  _lastAssertionAttempt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _pendingAssertion;
    NSMutableDictionary * _pendingAssertionCompletions;
    NSMutableDictionary * _pendingDataTypeCodesToAnchors;
    HDProfile * _profile;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    id /* block */  _unitTest_errorCountDidIncrement;
    id /* block */  _unitTest_extensionWillTimeout;
    bool  _unitTest_timersWithShortTimeout;
}

@property (nonatomic) HDAppAssertionManager *assertionManager;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) long long connectionErrorCount;
@property (nonatomic) <HDAppExtensionAssertionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *graceTimer;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic) double lastAssertionAttempt;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) double nextAssertionAttempt;
@property (nonatomic) bool pendingAssertion;
@property (nonatomic, retain) NSMutableDictionary *pendingAssertionCompletions;
@property (nonatomic, retain) NSMutableDictionary *pendingDataTypeCodesToAnchors;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, readonly) bool shouldAssert;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic, copy) id /* block */ unitTest_errorCountDidIncrement;
@property (nonatomic, copy) id /* block */ unitTest_extensionWillTimeout;
@property (nonatomic) bool unitTest_timersWithShortTimeout;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_lock_cancelTimeoutTimers;
- (void)_notifyAppExtensionForDataType:(long long)arg1;
- (void)_notifyAppExtensionOfUpcomingTimeout;
- (long long)_unitTest_connectionErrorCount;
- (bool)_unitTest_invalidated;
- (double)_unitTest_lastAssertionAttempt;
- (unsigned long long)_unitTest_pendingAssertionCompletionsCount;
- (id)_unitTest_pendingDataTypeCodesToAnchors;
- (void)assertAndUpdateWithCompletion:(id /* block */)arg1;
- (id)assertionManager;
- (id)bundleIdentifier;
- (long long)connectionErrorCount;
- (id)delegate;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(id /* block */)arg3;
- (id)extension;
- (id)graceTimer;
- (void)incrementErrorCount;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (bool)invalidated;
- (double)lastAssertionAttempt;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (double)nextAssertionAttempt;
- (bool)pendingAssertion;
- (id)pendingAssertionCompletions;
- (id)pendingDataTypeCodesToAnchors;
- (id)profile;
- (void)setAssertionManager:(id)arg1;
- (void)setConnectionErrorCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGraceTimer:(id)arg1;
- (void)setLastAssertionAttempt:(double)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPendingAssertion:(bool)arg1;
- (void)setPendingAssertionCompletions:(id)arg1;
- (void)setPendingDataTypeCodesToAnchors:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setUnitTest_errorCountDidIncrement:(id /* block */)arg1;
- (void)setUnitTest_extensionWillTimeout:(id /* block */)arg1;
- (void)setUnitTest_timersWithShortTimeout:(bool)arg1;
- (bool)shouldAssert;
- (id)timeoutTimer;
- (id /* block */)unitTest_errorCountDidIncrement;
- (id /* block */)unitTest_extensionWillTimeout;
- (bool)unitTest_timersWithShortTimeout;

@end
