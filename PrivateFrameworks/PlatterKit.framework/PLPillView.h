/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLPillView : UIView <MTMaterialGrouping, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSArray * _centerContentItems;
    UIStackView * _centerStackView;
    NSArray * _centerStackViewLeadingTrailingConstraints;
    UIView * _leadingAccessoryView;
    MTMaterialView * _materialView;
    NSString * _preferredContentSizeCategory;
    PLPillContentItem * _referenceContentItemForIntrinsicContentSize;
    UIView * _referenceContentItemView;
    MTShadowView * _shadowView;
    UIView * _trailingAccessoryView;
    NSMapTable * _wrapperViewsToLeadingConstraints;
    NSMapTable * _wrapperViewsToTrailingConstraints;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSArray *centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *leadingAccessoryView;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowOutsets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingAccessoryView;

- (void).cxx_destruct;
- (id)_arrangedSubviewForContentItem:(id)arg1;
- (void)_cleanupStackView;
- (void)_configureCenterStackViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (double)_effectiveCornerRadius;
- (double)_effectiveMinWidth;
- (double)_effectivemaxWidth;
- (void)_incomingTopWrapperView:(id*)arg1 incomingBottomWrapperView:(id*)arg2 outgoingWrapperViews:(id)arg3 forOutgoingContentItems:(id)arg4 incomingContentItems:(id)arg5 existingWrapperViews:(id)arg6;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeWithReferenceView:(id)arg1;
- (bool)_isAccessoryPinnedToTopLine;
- (bool)_isWrappingRequiredForView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_referenceContentItemView;
- (void)_updateConstraintForWrapperView:(id)arg1 leading:(bool)arg2 collection:(id)arg3;
- (void)_updateConstraintsForWrapperView:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)centerContentItems;
- (id)init;
- (id)initWithLeadingAccessoryView:(id)arg1;
- (id)initWithLeadingAccessoryView:(id)arg1 trailingAccessoryView:(id)arg2;
- (id)initWithTrailingAccessoryView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leadingAccessoryView;
- (id)materialGroupNameBase;
- (id)preferredContentSizeCategory;
- (id)referenceContentItemForIntrinsicContentSize;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCenterContentItems:(id)arg1;
- (void)setCenterContentItems:(id)arg1 animated:(bool)arg2;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setReferenceContentItemForIntrinsicContentSize:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsets;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentItem:(id)arg1;
- (id)trailingAccessoryView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
