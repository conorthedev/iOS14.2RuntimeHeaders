/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFParameterLayoutView : UIView {
    <WFParameterLayoutViewDelegate> * _delegate;
    bool  _highlighted;
    UIColor * _highlightedBackgroundColor;
    UIColor * _normalBackgroundColor;
    bool  _selectable;
}

@property (nonatomic) <WFParameterLayoutViewDelegate> *delegate;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIColor *normalBackgroundColor;
@property (getter=isSelectable, nonatomic) bool selectable;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)delegate;
- (void)fadeOutHighlight;
- (void)highlight;
- (id)highlightedBackgroundColor;
- (bool)isHighlighted;
- (bool)isSelectable;
- (id)normalBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setNormalBackgroundColor:(id)arg1;
- (void)setSelectable:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)unhighlight;
- (void)updateBackgroundColor;

@end
