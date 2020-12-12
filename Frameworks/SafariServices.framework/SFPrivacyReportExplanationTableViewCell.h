/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell {
    <SFPrivacyReportExplanationTableViewCellDelegate> * _delegate;
    bool  _expanded;
    NSArray * _iconConstraints;
    SFPrivacyReportIconView * _iconView;
    UIButton * _sizingToggleButton;
    UILabel * _textLabel;
    UIButton * _toggleButton;
    bool  _wideLayout;
}

@property (nonatomic) <SFPrivacyReportExplanationTableViewCellDelegate> *delegate;
@property (getter=isExpanded, nonatomic) bool expanded;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)_toggleExpanded:(id)arg1;
- (void)_updateToggleButtonText;
- (void)_updateUsesWideLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isExpanded;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;

@end