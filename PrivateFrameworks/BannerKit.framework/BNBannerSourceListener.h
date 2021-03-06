/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNBannerSourceListener : NSObject <BNBannerHostSceneViewControllerObserving, BNBannerSourceClientToHostInterface, BSInvalidatable, BSServiceConnectionListenerDelegate> {
    NSSet * _authorizedBundleIDs;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    <BNBannerSourceListenerDelegate> * _delegate;
    FBSDisplayConfiguration * _displayConfiguration;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requesterIDsToPresentables;
    NSMutableSet * _unpreparedPresentables;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSourceListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)__layoutDescriptionWithReply:(id /* block */)arg1;
- (void)__postPresentableWithSpecification:(id)arg1 options:(id)arg2 userInfo:(id)arg3 reply:(id /* block */)arg4;
- (void)__recommendSuspension:(id)arg1 forReason:(id)arg2 revokingCurrent:(id)arg3 reply:(id /* block */)arg4;
- (void)__revokePresentablesWithIdentification:(id)arg1 withAnimation:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 reply:(id /* block */)arg5;
- (void)_addConnection:(id)arg1;
- (void)_addPresentable:(id)arg1;
- (void)_addUnpreparedPresentable:(id)arg1;
- (id)_createSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 preferredContentSize:(struct CGSize { double x1; double x2; })arg3 contentOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2;
- (bool)_isPresentableWaitingToBeMadeReady:(id)arg1;
- (bool)_isPrototypeFeaturesEnabled;
- (void)_removeConnection:(id)arg1;
- (void)_removePresentable:(id)arg1;
- (void)_removePresentableWithIdentification:(id)arg1;
- (void)_removePresentablesFromRequesterWithIdentifier:(id)arg1 passingTest:(id /* block */)arg2;
- (void)_removeUnpreparedPresentable:(id)arg1;
- (id)_removeUnpreparedPresentablesWithIdentification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAuthorizedBundleIDs:(id)arg1;
- (id)initWithServiceDomain:(id)arg1 displayConfiguration:(id)arg2 authorizedBundleIDs:(id)arg3;
- (void)invalidate;
- (void)layoutDescriptionDidChange:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)sceneDidInvalidateForBannerHostSceneViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
