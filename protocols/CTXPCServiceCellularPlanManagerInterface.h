/* Generated by RuntimeBrowser.
 */

@protocol CTXPCServiceCellularPlanManagerInterface

@required

- (void)addPlanWith:(void *)arg1 appName:(void *)arg2 appType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: CTCellularPlanProvisioningRequest *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)addPlanWith:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CTCellularPlanProvisioningOnDeviceActivationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)bootstrapPlanTransferForEndpoint:(void *)arg1 usingMessageSession:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, CUMessageSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSError *)cancelCellularPlanTransfer:(CTPlan *)arg1 fromDevice:(CTDeviceIdentifier *)arg2;
- (NSError *)cancelPlanTransfer:(CTRemotePlanIdentifier *)arg1 fromDevice:(CTDeviceIdentifier *)arg2;
- (void)deleteTransferPlansForImei:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deleteZone:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)endPlanTransferForEndPoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getCameraScanInfoForCardData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTCellularPlanManagerCameraScanAction *, NSError *, void*
- (void)getCurrentIMessageIccidsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getRemoteDeviceForTransferWithEID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDevice *, NSError *, void*
- (void)getRemoteDevicesForTransferWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, NSError *, void*
- (void)getTransferPlanListWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, NSError *, void*
- (void)getTransferPlansWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, bool, NSError *, void*
- (void)hiddenTransferPlans:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)hideTransferCellularPlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTPlan *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)hideTransferPlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)installPendingPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)installPendingPlanList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTPlanList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isAnyPlanOfTransferCapability:(void *)arg1 availableForThisDeviceWithCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isAnyPlanTransferableFromThisDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)plansPendingInstallWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)remotePlanSignupInfoFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, NSError *, void*
- (void)supportsPlanProvisioning:(void *)arg1 carrierDescriptors:(void *)arg2 smdpUrl:(void *)arg3 iccidPrefix:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)transferCellularPlan:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTPlan *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferCellularPlans:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTPlanList *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferPlan:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferPlans:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTRemotePlanIdentifierList *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferRemotePlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unhideTransferPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end