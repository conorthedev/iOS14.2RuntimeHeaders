/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving> {
    MPModelPlayEvent * _lastRecordedPlayEvent;
    NSOperationQueue * _operationQueue;
    MPCPlaybackEngine * _playbackEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelPlayEvent *lastRecordedPlayEvent;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)lastRecordedPlayEvent;
- (id)operationQueue;
- (id)playbackEngine;
- (void)setLastRecordedPlayEvent:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
