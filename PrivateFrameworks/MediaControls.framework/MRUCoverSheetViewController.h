/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUCoverSheetViewController : UIViewController <MTVisualStylingRequiring, UIGestureRecognizerDelegate> {
    <MRUCoverSheetViewControllerDelegate> * _delegate;
    MediaControlsInteractionRecognizer * _interactionRecognizer;
    MRUNowPlayingViewController * _nowPlayingViewController;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUCoverSheetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsInteractionRecognizer *interactionRecognizer;
@property (nonatomic, retain) MRUNowPlayingViewController *nowPlayingViewController;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)didReceiveInteraction:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)interactionRecognizer;
- (id)nowPlayingViewController;
- (id)requiredVisualStyleCategories;
- (void)setDelegate:(id)arg1;
- (void)setInteractionRecognizer:(id)arg1;
- (void)setNowPlayingViewController:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)stylingProvider;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
