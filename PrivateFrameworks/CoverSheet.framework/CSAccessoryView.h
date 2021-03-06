/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSAccessoryView : CSCoverSheetViewBase {
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly) double animationDurationBeforeDismissal;
@property (nonatomic, readonly) CSAccessoryConfiguration *configuration;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

- (void).cxx_destruct;
- (double)animationDurationBeforeDismissal;
- (id)configuration;
- (bool)isReduceMotionEnabled;
- (bool)isReduceTransparencyEnabled;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setLegibilitySettings:(id)arg1;

@end
