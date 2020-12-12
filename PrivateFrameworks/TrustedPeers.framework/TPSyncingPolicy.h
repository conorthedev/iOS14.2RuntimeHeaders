/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPSyncingPolicy : NSObject <NSSecureCoding> {
    NSArray * _keyViewMapping;
    NSString * _model;
    int  _syncUserControllableViews;
    NSSet * _userControllableViews;
    TPPolicyVersion * _version;
    NSSet * _viewList;
    NSSet * _viewsToPiggybackTLKs;
}

@property (readonly) NSArray *keyViewMapping;
@property (readonly) NSString *model;
@property (readonly) int syncUserControllableViews;
@property (readonly) NSSet *userControllableViews;
@property (readonly) TPPolicyVersion *version;
@property (readonly) NSSet *viewList;
@property (readonly) NSSet *viewsToPiggybackTLKs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 version:(id)arg2 viewList:(id)arg3 userControllableViews:(id)arg4 syncUserControllableViews:(int)arg5 viewsToPiggybackTLKs:(id)arg6 keyViewMapping:(id)arg7;
- (bool)isSyncingEnabledForView:(id)arg1;
- (id)keyViewMapping;
- (id)mapDictionaryToView:(id)arg1;
- (id)model;
- (int)syncUserControllableViews;
- (bool)syncUserControllableViewsAsBoolean;
- (id)userControllableViews;
- (id)version;
- (id)viewList;
- (id)viewsToPiggybackTLKs;

@end