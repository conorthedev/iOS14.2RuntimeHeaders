/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailService, QLThumbnailServiceSurfaceGeneratorProtocol> {
    QLThumbnailProvider * _thumbnailProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLThumbnailProvider *thumbnailProvider;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 generatorData:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 additionalResourcesWrapper:(id)arg6 generatorData:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)ioSurfaceForRequest:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)protocolHost;
- (id)protocolHostWithErrorHandler:(id /* block */)arg1;
- (void)setThumbnailProvider:(id)arg1;
- (id)thumbnailProvider;

@end