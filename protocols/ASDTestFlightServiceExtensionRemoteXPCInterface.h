/* Generated by RuntimeBrowser.
 */

@protocol ASDTestFlightServiceExtensionRemoteXPCInterface <ASDTestFlightServiceExtensionXPCInterface>

@required

- (void)didReachTerminalPhaseWithBetaBundleID:(void *)arg1 terminalPhase:(void *)arg2 error:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didReceivePushMessages:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didReceivePushToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reloadAppsFromServerWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionTimeWillExpire;

@end
