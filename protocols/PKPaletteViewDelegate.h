/* Generated by RuntimeBrowser.
 */

@protocol PKPaletteViewDelegate <PKPaletteViewPositionObserving>

@required

- (void)paletteViewDidToggleRuler:(PKDrawingPaletteView *)arg1;
- (void)paletteViewSelectedToolInkDidChange:(PKDrawingPaletteView *)arg1;
- (NSUndoManager *)paletteViewUndoManager:(PKPaletteView *)arg1;

@optional

- (UIResponder *)paletteViewCurrentFirstResponder:(PKPaletteView *)arg1;
- (void)paletteViewFirstResponderDidUpdate:(PKDrawingPaletteView *)arg1;
- (bool)shouldHandlePencilInteractionWhenNotVisible:(PKDrawingPaletteView *)arg1;

@end