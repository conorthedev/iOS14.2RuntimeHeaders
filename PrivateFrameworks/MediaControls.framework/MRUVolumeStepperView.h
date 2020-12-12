/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUVolumeStepperView : UIView <MRUVisualStylingProviderObserver> {
    UIView * _decreaseBackground;
    MPButton * _decreaseButton;
    UIView * _increaseBackground;
    MPButton * _increaseButton;
    MRUVisualStylingProvider * _stylingProvider;
    MPVolumeController * _volumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIView *decreaseBackground;
@property (nonatomic, retain) MPButton *decreaseButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *increaseBackground;
@property (nonatomic, retain) MPButton *increaseButton;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPVolumeController *volumeController;

- (void).cxx_destruct;
- (id)decreaseBackground;
- (id)decreaseButton;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (id)increaseBackground;
- (id)increaseButton;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDecreaseBackground:(id)arg1;
- (void)setDecreaseButton:(id)arg1;
- (void)setIncreaseBackground:(id)arg1;
- (void)setIncreaseButton:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (id)volumeController;

@end