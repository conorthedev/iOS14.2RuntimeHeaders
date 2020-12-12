/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObjectDatabaseImportRequest : NSObject {
    NSDate * _expirationDate;
    id  _payload;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) id payload;
@property (nonatomic, retain) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)_initWithPayload:(id)arg1;
- (id)expirationDate;
- (id)payload;
- (void)setExpirationDate:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userIdentity;

@end