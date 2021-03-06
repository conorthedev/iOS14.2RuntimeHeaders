/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASWebAuthenticationSession : NSObject {
    SFAuthenticationSession * _authenticationSession;
    id /* block */  _originalCompletionHandler;
    bool  _prefersEphemeralWebBrowserSession;
    <ASWebAuthenticationPresentationContextProviding> * _presentationContextProvider;
    ASWebAuthenticationSession * _referenceToSelf;
}

@property (nonatomic, readonly) bool canStart;
@property (nonatomic) bool prefersEphemeralWebBrowserSession;
@property (nonatomic) <ASWebAuthenticationPresentationContextProviding> *presentationContextProvider;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)_startDryRun:(bool)arg1;
- (bool)canStart;
- (void)cancel;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)prefersEphemeralWebBrowserSession;
- (id)presentationContextProvider;
- (void)setPrefersEphemeralWebBrowserSession:(bool)arg1;
- (void)setPresentationContextProvider:(id)arg1;
- (bool)start;

@end
