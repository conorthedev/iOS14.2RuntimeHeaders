/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling> {
    <RMExtensionConfigurationApplicator> * _applicator;
    RMAssetResolver * _assetResolver;
    RMConfigurationSubscriberClient * _configurationSubscriberClient;
    NSConditionLock * _configurationSubscriberClientLock;
    NSArray * _configurationTypes;
    RMPolicyStore * _policyStore;
}

@property (nonatomic, readonly) <RMExtensionConfigurationApplicator> *applicator;
@property (nonatomic, retain) RMAssetResolver *assetResolver;
@property (nonatomic, retain) RMConfigurationSubscriberClient *configurationSubscriberClient;
@property (nonatomic, readonly) NSArray *configurationTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RMPolicyStore *policyStore;
@property (readonly) Class superclass;

+ (id)sharedSubscriber;

- (void).cxx_destruct;
- (id)applicator;
- (id)assetResolver;
- (id)configurationSubscriberClient;
- (id)configurationTypes;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConfigurationSubscriberClient:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5;
- (id)policyStore;
- (void)setAssetResolver:(id)arg1;
- (void)setConfigurationSubscriberClient:(id)arg1;
- (void)setPolicyStore:(id)arg1;

@end