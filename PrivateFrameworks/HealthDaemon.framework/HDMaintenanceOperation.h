/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMaintenanceOperation : NSOperation {
    double  _startedTime;
}

+ (id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(id /* block */)arg2;
+ (id)maintenanceOperationWithName:(id)arg1 queue:(id)arg2 synchronousBlock:(id /* block */)arg3;

- (void)_operationDidFinish;
- (void)_operationDidStart;
- (id)init;
- (id)initWithName:(id)arg1;

@end
