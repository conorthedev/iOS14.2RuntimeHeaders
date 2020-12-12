/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo * _clientInfo;
    AMSMediaTokenService * _mediaTokenService;
    unsigned long long  _options;
}

+ (id)_createMediaTokenServiceForClientInfo:(id)arg1 requester:(id)arg2;
+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3;
+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_didFetchMediaToken:(id)arg1 withError:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
- (id)initWithClientInfo:(id)arg1;
- (id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end