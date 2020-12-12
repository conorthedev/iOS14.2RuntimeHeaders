/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar * _calendar;
    PKCompoundInterestCalculatorConfiguration * _configuration;
    NSMutableDictionary * _toDateCache;
}

@property (nonatomic, readonly) PKCompoundInterestCalculatorConfiguration *configuration;

- (void).cxx_destruct;
- (id)_additionalBalanceForProcessingDate:(id)arg1;
- (id)_creditsForProcessingDate:(id)arg1;
- (bool)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2;
- (bool)_interestCanBeCalculated;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(bool)arg3;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(bool)arg3;
- (id)compoundInterest;
- (id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2;
- (id)compoundInterestWithPaymentOfAmount:(id)arg1;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1;

@end