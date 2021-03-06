/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBSetupAssistantHollowController : OBWelcomeController <OBSetupAssistantSupport> {
    OBHollowButton * _contentButton;
}

@property (nonatomic, retain) OBHollowButton *contentButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4;
- (id)contentButton;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)setContentButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
