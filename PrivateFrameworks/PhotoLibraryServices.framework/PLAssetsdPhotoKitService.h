/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLAssetsdPhotoKitServiceProtocol, PLPerformChangesRequestService> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyChangesRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)clientDescription;
- (void)commitRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)getUUIDsForCloudIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (id)persistentStoreCoordinator;

@end