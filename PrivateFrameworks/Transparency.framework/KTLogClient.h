/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTLogClient : TransparencyLogClient {
    bool  _configured;
    NSURL * _consistencyProofURI;
    double  _expirationTime;
    NSURL * _publicKeysURI;
    NSURL * _queryURI;
    NSURL * _revisionLogProofURI;
}

@property bool configured;
@property (retain) NSURL *consistencyProofURI;
@property double expirationTime;
@property (retain) NSURL *publicKeysURI;
@property (retain) NSURL *queryURI;
@property (retain) NSURL *revisionLogProofURI;

+ (id)configBagRequest;
+ (id)configBagURL;
+ (id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3;
+ (id)formatEventName:(id)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (void)clearState:(id*)arg1;
- (bool)configurationExpired;
- (void)configure:(id /* block */)arg1;
- (bool)configureFromNetworkBag:(id)arg1 error:(id*)arg2;
- (bool)configureWithDisk:(id*)arg1;
- (bool)configured;
- (id)consistencyProofURI;
- (id)copyConfigurationBag:(id*)arg1;
- (void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 retry:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)downloadMessage:(id)arg1 uri:(id)arg2 uuid:(id)arg3 application:(id)arg4 retry:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)downloadPublicKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadQuery:(id)arg1 uuid:(id)arg2 retry:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)downloadRevisionLogInclusionProof:(id)arg1 uuid:(id)arg2 retry:(bool)arg3 completionHandler:(id /* block */)arg4;
- (double)expirationTime;
- (void)fetchConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchMessage:(id)arg1 uri:(id)arg2 uuid:(id)arg3 application:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchPublicKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRevisionLogInclusionProof:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)processConfigBagData:(id)arg1 error:(id*)arg2;
- (id)publicKeysURI;
- (id)queryURI;
- (id)readConfigFromDisk:(id*)arg1;
- (id)revisionLogProofURI;
- (void)setConfigured:(bool)arg1;
- (void)setConsistencyProofURI:(id)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setPublicKeysURI:(id)arg1;
- (void)setQueryURI:(id)arg1;
- (void)setRevisionLogProofURI:(id)arg1;
- (bool)validateConfigBagCertificates:(id)arg1 error:(id*)arg2;
- (bool)validateConfigBagEntries:(id)arg1 error:(id*)arg2;
- (bool)validateConfigBagSignature:(id)arg1 error:(id*)arg2;
- (bool)validateConfigEntries:(id)arg1 error:(id*)arg2;
- (bool)writeConfigToDisk:(id)arg1 error:(id*)arg2;

@end