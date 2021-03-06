/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFScriptDownloadManager : NSObject <NSURLSessionDelegate> {
    <CFScriptDownloadDelegate> * _delegate;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <CFScriptDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)_decryptedDataForScriptEncryptedData:(id)arg1 forScript:(id)arg2;
- (id)_filePathForScriptArchiveIdentifier:(id)arg1;
- (id)_hmacVerificationEventContextWithEncryptionParameters:(id)arg1 script:(id)arg2 scriptData:(id)arg3;
- (bool)_isValidDecryptedData:(id)arg1 forScript:(id)arg2;
- (bool)_isValidURL:(id)arg1;
- (void)_saveDecryptedData:(id)arg1 script:(id)arg2;
- (id)_scriptStringFromData:(id)arg1;
- (bool)_verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4;
- (id)delegate;
- (void)downloadScript:(id)arg1 onDispatchGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateTasks;
- (id)session;

@end
