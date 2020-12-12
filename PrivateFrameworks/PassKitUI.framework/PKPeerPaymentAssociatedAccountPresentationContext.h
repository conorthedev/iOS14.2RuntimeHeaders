/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject {
    PKFamilyMember * _member;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) PKFamilyMember *member;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFAFamilyMember:(id)arg1 options:(id)arg2;
- (id)initWithPKFamilyMember:(id)arg1 options:(id)arg2;
- (id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2;
- (id)member;
- (void)setMember:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end