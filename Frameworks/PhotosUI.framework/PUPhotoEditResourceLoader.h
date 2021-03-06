/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditResourceLoader : NSObject {
    unsigned long long  __contentEditingRequestID;
    NSMutableArray * __enqueuedRequests;
    <PUEditableAsset> * _asset;
    PUPhotoEditResourceLoadRequest * _currentRequest;
    PUEditableMediaProvider * _mediaProvider;
    long long  _resourcesAvailability;
}

@property (setter=_setContentEditingRequestID:, nonatomic) unsigned long long _contentEditingRequestID;
@property (setter=_setEnqueuedRequests:, nonatomic, retain) NSMutableArray *_enqueuedRequests;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isCheckingForResourceAvailability, nonatomic, readonly) bool checkingAvailability;
@property (nonatomic, retain) PUPhotoEditResourceLoadRequest *currentRequest;
@property (getter=isDownloadingResources, nonatomic, readonly) bool downloadingResources;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (setter=_setResourcesAvailability:, nonatomic) long long resourcesAvailability;
@property (getter=areResourcesAvailable, nonatomic, readonly) bool resourcesAvailable;

+ (id)compositionFromPHAdjustmentData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_adjustmentDataIsSupported:(id)arg1;
- (unsigned long long)_contentEditingRequestID;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)arg1;
- (id)_enqueuedRequests;
- (void)_handleSuccess:(bool)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4;
- (void)_initiateRequest:(id)arg1;
- (void)_processContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)_processLoadedContentEditingInput:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)_requestContentEditingInputForRequest:(id)arg1 networkAccessAllowed:(bool)arg2;
- (void)_setContentEditingRequestID:(unsigned long long)arg1;
- (void)_setEnqueuedRequests:(id)arg1;
- (void)_setResourcesAvailability:(long long)arg1;
- (bool)areResourcesAvailable;
- (id)asset;
- (void)cancelAllRequests;
- (id)currentRequest;
- (void)enqueueRequest:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (bool)isCheckingForResourceAvailability;
- (bool)isDownloadingResources;
- (id)mediaProvider;
- (long long)resourcesAvailability;
- (void)setCurrentRequest:(id)arg1;
- (long long)workImageVersionForContentEditingInput:(id)arg1;

@end
