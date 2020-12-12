/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    ICPlayActivityController * _playActivityController;
    NSMutableArray * _radioPlayActivityEvents;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICPlayActivityController *playActivityController;
@property (nonatomic, readonly) NSMutableArray *radioPlayActivityEvents;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;
- (bool)_finalizePAFEvents:(id)arg1;
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 cursor:(id)arg3;
- (bool)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemMetadataPingEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4;
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;
- (id)init;
- (id)playActivityController;
- (id)radioPlayActivityEvents;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end