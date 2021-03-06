/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANXPCTransactionManager : NSObject {
    NSMutableDictionary * _activeTransactions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *activeTransactions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_cancelTimer:(id)arg1;
- (id)_createTransaction:(id)arg1;
- (void)_createTransaction:(id)arg1 expiration:(double)arg2;
- (void)_removeTransaction:(id)arg1;
- (void)_resetTimer:(id)arg1 expiration:(double)arg2;
- (void)_startTimer:(id)arg1 expiration:(double)arg2;
- (void)_transaction:(id)arg1 setActive:(bool)arg2;
- (void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;
- (id)activeTransactions;
- (id)init;
- (id)queue;
- (void)transaction:(id)arg1 setActive:(bool)arg2;
- (void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;

@end
