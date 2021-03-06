/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString * _groupIdentifier;
    bool  _lastFetchSucceeded;
    NSString * _routeIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) bool lastFetchSucceeded;
@property (nonatomic, copy) NSString *routeIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)currentDevice;

- (void).cxx_destruct;
- (void)_activeDeviceInfoChanged:(id)arg1;
- (void)_updateDeviceInfoWithCompletion:(id /* block */)arg1;
- (void)getGroupIdentifierWithCompletion:(id /* block */)arg1;
- (void)getRouteIdentifierWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)lastFetchSucceeded;
- (id)routeIdentifier;
- (id)serialQueue;
- (void)setLastFetchSucceeded:(bool)arg1;
- (void)setRouteIdentifier:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
