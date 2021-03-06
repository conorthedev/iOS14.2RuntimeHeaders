/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMStoreStream : NSObject <BMSourceStream, BMStream> {
    BMStreamsAccessClient * _accessClient;
    bool  _isPublic;
    BMStoreSource * _source;
    BMStoreConfig * _storeConfig;
    NSString * _streamIdentifier;
    BMStoreValidator * _validator;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)_publisher;
- (id)identifier;
- (id)init;
- (id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 isPublic:(bool)arg3;
- (void)pruneWithPredicateBlock:(id /* block */)arg1;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)source;
- (id)validator;

@end
