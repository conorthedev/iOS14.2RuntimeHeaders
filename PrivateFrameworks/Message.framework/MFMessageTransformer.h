/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageTransformer : NSObject <EFLoggable> {
    EMBlockedSenderManager * _blockedSenderManager;
    MFMailboxProvider * _mailboxProvider;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFMailboxProvider *mailboxProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMUserProfileProvider> *userProfileProvider;

+ (id)log;

- (void).cxx_destruct;
- (id)_transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(id /* block */)arg4;
- (id)blockedSenderManager;
- (id)initWithMailboxProvider:(id)arg1 userProfileProvider:(id)arg2 blockedSenderManager:(id)arg3;
- (id)mailboxProvider;
- (id)transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(id /* block */)arg3;
- (id)transformLegacyMailMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)userProfileProvider;

@end