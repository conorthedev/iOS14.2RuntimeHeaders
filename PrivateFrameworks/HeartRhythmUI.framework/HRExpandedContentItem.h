/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRExpandedContentItem : NSObject {
    HRExpandedContentItemLearnMore * _learnMore;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, retain) HRExpandedContentItemLearnMore *learnMore;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)_atrialFibrillationExpandedContentItemsAlgVersionOne;
+ (id)_highOrLowAbove120Below50HeartRateExpandedContentItemsAlgVersionOne;
+ (id)_inconclusiveExpandedContentItemsAlgVersionOneWithLearnMoreDelegate:(id)arg1;
+ (id)_sinusRhythmExpandedContentItemsAlgVersionOne;
+ (id)atrialFibrillationItemsForAlgorithmVersion:(long long)arg1;
+ (id)highOrLowAbove120Below50HeartRateItemsForAlgorithmVersion:(long long)arg1;
+ (id)inconclusiveItemsForAlgorithmVersion:(long long)arg1 upgradingFromAlgorithmVersion:(long long)arg2 learnMoreDelegate:(id)arg3;
+ (id)itemWithType:(long long)arg1 title:(id)arg2;
+ (id)sinusRhythmItemsForAlgorithmVersion:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 title:(id)arg2;
- (id)learnMore;
- (void)setLearnMore:(id)arg1;
- (id)title;
- (long long)type;

@end
