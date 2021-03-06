/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {
    NSString * _contentIdentifier;
    PXPhotoKitLivePhotoVideoContentProviderSpec * _spec;
    PXVideoStabilizeOperation * _stabilizeOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) Class superclass;

+ (id)postProcessingOperationQueue;

- (void).cxx_destruct;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id /* block */)arg1;
- (void)cancelLoading;
- (id)contentIdentifier;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 spec:(id)arg3;
- (bool)needsPostprocessing;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)spec;

@end
