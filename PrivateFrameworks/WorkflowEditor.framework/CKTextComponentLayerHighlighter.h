/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKTextComponentLayerHighlighter : NSObject {
    CKHighlightOverlayLayer * _highlightOverlayLayer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightedRange;
    CKTextComponentLayer * _textComponentLayer;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightedRange;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightedRange;
- (id)initWithTextComponentLayer:(id)arg1;
- (void)layoutHighlight;
- (void)setHighlightedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end