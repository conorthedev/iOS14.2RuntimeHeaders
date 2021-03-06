/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext> {
    HMDHomeMediaSystemHandler * _mediaSystemController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) HMDHomeMediaSystemHandler *mediaSystemController;
@property (readonly) HMDLogEventDailyScheduler *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMediaSystemController:(id)arg1;
- (id)mediaSystemController;
- (void)registerLogEventDailyProvider:(id)arg1;
- (id)scheduler;
- (void)submitLogEvent:(id)arg1;

@end
