/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
 */

@interface PlayVideoIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSURL *urlToLaunch;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
