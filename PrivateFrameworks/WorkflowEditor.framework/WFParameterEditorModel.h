/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFParameterEditorModel : NSObject {
    WFGradient * _buttonGradient;
    WFParameter * _parameter;
    NSError * _resourceError;
    <WFParameterState> * _state;
    NSString * _widgetSizeClass;
}

@property (nonatomic, readonly) WFGradient *buttonGradient;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) <WFParameterState> *state;
@property (nonatomic, readonly) NSString *widgetSizeClass;

- (void).cxx_destruct;
- (id)buttonGradient;
- (id)initWithParameter:(id)arg1 state:(id)arg2;
- (id)initWithParameter:(id)arg1 state:(id)arg2 widgetSizeClass:(id)arg3;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;
- (id)parameter;
- (id)resourceError;
- (id)state;
- (id)widgetSizeClass;

@end
