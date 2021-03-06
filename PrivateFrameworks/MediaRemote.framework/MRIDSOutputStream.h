/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRIDSOutputStream : MRAVBufferedOutputStream {
    MRIDSConnectivityManager * _connection;
    NSString * _destination;
    IDSService * _service;
    NSString * _session;
    long long  _type;
}

- (void).cxx_destruct;
- (bool)hasSpaceAvailable;
- (id)initWithConnection:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
