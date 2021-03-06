/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAProfilePictureStore : NSObject {
    FAFamilyCircle * _familyCircle;
    NSMutableDictionary * _profileImages;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) FAFamilyCircle *familyCircle;
@property (nonatomic, readonly, copy) NSDictionary *profileImages;

+ (id)_dataForImage:(id)arg1;
+ (id)profilePictureForContact:(id)arg1 serverImageData:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 diameter:(double)arg5;
+ (double)screenScale;

- (void).cxx_destruct;
- (void)_postReloadNotification;
- (void)_traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)familyCircle;
- (void)fetchProfileImagesWithCompletion:(id /* block */)arg1;
- (id)initWithFamilyCircle:(id)arg1;
- (id)profileImages;
- (id)profilePictureForFamilyMember:(id)arg1;
- (id)profilePictureForFamilyMember:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePictureForFamilyMemberWithAltDSID:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePicturesWithDiameter:(double)arg1;
- (id)resizedPictureWithData:(id)arg1 diameter:(double)arg2;
- (void)setFamilyCircle:(id)arg1;

@end
