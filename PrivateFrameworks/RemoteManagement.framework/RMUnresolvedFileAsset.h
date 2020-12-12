/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset> {
    RMAsset * _asset;
    NSURL * _downloadToFileURL;
    NSDictionary * _queryParameters;
}

@property (nonatomic, retain) RMAsset *asset;
@property (nonatomic, retain) NSURL *downloadToFileURL;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *queryParameters;

- (void).cxx_destruct;
- (id)asset;
- (id)downloadToFileURL;
- (id)identifier;
- (id)initWithAsset:(id)arg1 queryParameters:(id)arg2 downloadToFileURL:(id)arg3;
- (id)queryParameters;
- (void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAsset:(id)arg1;
- (void)setDownloadToFileURL:(id)arg1;
- (void)setQueryParameters:(id)arg1;

@end