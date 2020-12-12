/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarEnvironment : NSObject {
    SCNNode * _animojiCamera;
    AVTAvatar * _avatar;
    SCNNode * _customCamera;
    SCNNode * _defaultLightingNode;
    SCNNode * _defaultPointOfView;
    SCNNode * _environmentNode;
    SCNNode * _memojiCameraGroup;
    SCNScene * _scene;
    SCNMaterial * _shadowPlaneMaterial;
    SCNNode * _specializedLightingNode;
    SCNNode * _trackingLostIndicator;
    bool  _trackingLostIndicatorVisible;
    SCNNode * _whitePlane;
}

@property (nonatomic, readonly) SCNNode *defaultPointOfView;
@property (nonatomic, readonly) SCNNode *environmentNode;
@property (nonatomic, readonly) bool faceIsFullyVisible;
@property (nonatomic) float fadeFactor;
@property (nonatomic) bool showReticle;

- (void).cxx_destruct;
- (void)avatarDidChange:(id)arg1 arMode:(bool)arg2;
- (id)defaultEnvironmentNode;
- (id)defaultPointOfView;
- (void)didSnapshot;
- (id)environmentNode;
- (bool)faceIsFullyVisible;
- (float)fadeFactor;
- (void)hideReticle;
- (void)hideTrackingLossIndicator;
- (id)initAndInstallInScene:(id)arg1;
- (void)setFadeFactor:(float)arg1;
- (void)setShowReticle:(bool)arg1;
- (bool)showReticle;
- (void)showTrackingLossIndicator;
- (void)updateARMode:(bool)arg1;
- (void)updateCustomCameras;
- (void)updateSpecializedLighting;
- (void)willSnapshot;

@end