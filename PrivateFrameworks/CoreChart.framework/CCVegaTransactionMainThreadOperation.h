/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
 */

@interface CCVegaTransactionMainThreadOperation : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)provideBlock:(id /* block */)arg1;
- (void)runBlock;
- (void)waitForBlockReady;

@end