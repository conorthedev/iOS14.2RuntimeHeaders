/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMiddlewareChain : NSObject {
    SEL  _builderSelector;
    NSEnumerator * _middlewareEnumerator;
}

@property (nonatomic) SEL builderSelector;

+ (void)_addBuilderProtocol:(id)arg1;
+ (id)builderProxyForProtocol:(id)arg1;
+ (void)registerReturnType:(const char *)arg1 returnValueBlock:(id)arg2;

- (void).cxx_destruct;
- (SEL)builderSelector;
- (id)initWithMiddleware:(id)arg1 protocol:(id)arg2;
- (id)nextObject;
- (void)setBuilderSelector:(SEL)arg1;

@end