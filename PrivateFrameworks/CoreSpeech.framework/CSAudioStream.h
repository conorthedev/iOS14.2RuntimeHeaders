/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate> {
    NSString * _UUID;
    <CSAudioStreamProvidingDelegate> * _delegate;
    unsigned long long  _lastForwardedSampleCount;
    NSString * _name;
    bool  _scheduledFutureSample;
    CSAudioStartStreamOption * _startStreamOption;
    <CSAudioStreamProviding> * _streamProvider;
    CSAudioStreamRequest * _streamRequest;
    bool  _streaming;
    NSUUID * _streamingUUID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioStreamProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool scheduledFutureSample;
@property (nonatomic, retain) CSAudioStartStreamOption *startStreamOption;
@property (nonatomic) <CSAudioStreamProviding> *streamProvider;
@property (nonatomic, retain) CSAudioStreamRequest *streamRequest;
@property bool streaming;
@property (retain) NSUUID *streamingUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;
- (bool)isNarrowBand;
- (bool)isStreaming;
- (unsigned long long)lastForwardedSampleCount;
- (id)name;
- (bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id*)arg2;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)recordSettings;
- (bool)scheduledFutureSample;
- (void)setDelegate:(id)arg1;
- (void)setLastForwardedSampleCount:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setScheduledFutureSample:(bool)arg1;
- (void)setStartStreamOption:(id)arg1;
- (void)setStreamProvider:(id)arg1;
- (void)setStreamRequest:(id)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setStreamingUUID:(id)arg1;
- (void)startAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;
- (id)startStreamOption;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;
- (id)streamProvider;
- (id)streamRequest;
- (bool)streaming;
- (id)streamingUUID;

@end
