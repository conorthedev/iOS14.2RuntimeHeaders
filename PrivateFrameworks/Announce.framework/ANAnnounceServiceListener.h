/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceDelegate, ANAnnounceServiceInterface, NSXPCListenerDelegate> {
    ANAnnounceService * _announceService;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) ANAnnounceService *announceService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleError:(long long)arg1 requestSentCompletionHandler:(id /* block */)arg2;
- (void)_handleError:(long long)arg1 sentCompletionHandler:(id /* block */)arg2;
- (void)_sendReplyRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRequestWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRequestWithNames:(id)arg1 completion:(id /* block */)arg2;
- (void)_translateSentHandlerResponseAnnouncement:(id)arg1 error:(id)arg2 toRequestSentHandler:(id /* block */)arg3;
- (id)announceService;
- (void)announcementForID:(id)arg1 reply:(id /* block */)arg2;
- (void)contextFromAnnouncement:(id)arg1 reply:(id /* block */)arg2;
- (void)failedToDeliverAnnouncement:(id)arg1 error:(id)arg2;
- (void)getReceivedAnnouncementsWithCompletionHandler:(id /* block */)arg1;
- (void)getScanningDeviceCandidates:(id /* block */)arg1;
- (void)getUnplayedAnnouncementsWithCompletionHandler:(id /* block */)arg1;
- (void)homeNamesForContext:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 reply:(id /* block */)arg2;
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 reply:(id /* block */)arg2;
- (void)isLocalDeviceInRoom:(id)arg1 reply:(id /* block */)arg2;
- (void)lastPlayedAnnouncementInfo:(id /* block */)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)localParticipant:(id /* block */)arg1;
- (void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(id /* block */)arg4;
- (void)prewarm:(id /* block */)arg1;
- (void)receivedAnnouncement:(id)arg1;
- (void)receivedAnnouncementIDs:(id /* block */)arg1;
- (void)sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequestLegacy:(id)arg1 completion:(id /* block */)arg2;

@end