/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating> {
    <MFPlaybackStackController><MFQueueManagement> * _playbackStackController;
}

@property (nonatomic, readonly) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) <MFPlaybackStackController><MFQueueManagement> *playbackStackController;
@property (nonatomic) bool shouldDeferItemLoading;
@property (nonatomic) bool shouldExpectEmptyQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentItem;
- (id)initWithStackController:(id)arg1;
- (id)items;
- (id)playbackStackController;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)reset;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (void)setShouldExpectEmptyQueue:(bool)arg1;
- (bool)shouldDeferItemLoading;
- (bool)shouldExpectEmptyQueue;

@end