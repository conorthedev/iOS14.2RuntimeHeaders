/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCoreModelRowOptions : NSObject {
    AVTCoreModelRowDisplayCondition * _displayCondition;
    unsigned long long  _displayMode;
    NSString * _framingMode;
    AVTCoreModelFramingModeOverrides * _framingModeOverrides;
    AVTAvatarPose * _poseOverride;
    NSArray * _presetOverrides;
    bool  _separator;
    unsigned long long  _sortingOption;
}

@property (nonatomic, readonly) AVTCoreModelRowDisplayCondition *displayCondition;
@property (nonatomic, readonly) unsigned long long displayMode;
@property (nonatomic, readonly, copy) NSString *framingMode;
@property (nonatomic, readonly) AVTCoreModelFramingModeOverrides *framingModeOverrides;
@property (nonatomic, readonly, copy) AVTAvatarPose *poseOverride;
@property (nonatomic, readonly, copy) NSArray *presetOverrides;
@property (nonatomic, readonly) bool separator;
@property (nonatomic, readonly) unsigned long long sortingOption;

+ (unsigned long long)displayModeFromString:(id)arg1;
+ (unsigned long long)sortingOptionFromString:(id)arg1;

- (void).cxx_destruct;
- (id)displayCondition;
- (unsigned long long)displayMode;
- (id)framingMode;
- (id)framingModeOverrides;
- (id)initWithFramingMode:(id)arg1 separatorFlag:(bool)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(unsigned long long)arg6 displayCondition:(id)arg7 sortingOption:(unsigned long long)arg8;
- (id)poseOverride;
- (id)presetOverrides;
- (bool)separator;
- (unsigned long long)sortingOption;

@end