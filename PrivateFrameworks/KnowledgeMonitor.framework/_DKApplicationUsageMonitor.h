/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayLayoutObserver> {
    NSDictionary * _inUseApplicationEvents;
    FBSDisplayLayoutMonitor * _monitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *inUseApplicationEvents;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *monitor;
@property (readonly) Class superclass;

+ (id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2 usageType:(long long)arg3 usageTrusted:(bool)arg4;
+ (id)eventStream;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)arg1;
- (id)inUseApplicationEvents;
- (id)init;
- (void)invalidateInstantState;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)monitor;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)setInUseApplicationEvents:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateActiveApplicationsWithLayout:(id)arg1;
- (void)updateAppDataInContextStore;
- (void)updateInUseApplications:(id)arg1 activeApplications:(id)arg2;

@end