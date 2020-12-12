/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFParameterValuePickerTableViewCell : UITableViewCell {
    UIStackView * _contentStackView;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _iconImageViewWidgetConstraint;
    UIStackView * _labelsStackView;
    WFParameter<WFParameterValuePickable> * _parameter;
    WFCodableAttributeBackedSubstitutableState * _state;
    NSLayoutConstraint * _subtitleHeightConstraint;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleTopConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIStackView *contentStackView;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, readonly) NSLayoutConstraint *iconImageViewWidgetConstraint;
@property (nonatomic, readonly) UIStackView *labelsStackView;
@property (nonatomic, retain) WFParameter<WFParameterValuePickable> *parameter;
@property (nonatomic, retain) WFCodableAttributeBackedSubstitutableState *state;
@property (nonatomic, readonly) NSLayoutConstraint *subtitleHeightConstraint;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) NSLayoutConstraint *subtitleTopConstraint;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)configurationState;
- (id)contentStackView;
- (id)defaultContentConfiguration;
- (id)iconImageView;
- (id)iconImageViewWidgetConstraint;
- (id)labelsStackView;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)subtitleHeightConstraint;
- (id)subtitleLabel;
- (id)subtitleTopConstraint;
- (void)tintColorDidChange;
- (id)titleLabel;
- (void)updateConfigurationUsingState:(id)arg1;

@end