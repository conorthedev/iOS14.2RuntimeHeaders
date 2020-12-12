/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDCacheDeleteService : NSObject {
    FPDExtensionManager * _extensionManager;
}

@property (nonatomic, retain) FPDExtensionManager *extensionManager;

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1;

- (void).cxx_destruct;
- (id)allStorageVolumes;
- (void)dumpStateTo:(id)arg1;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)arg1;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(bool)arg3 activity:(id)arg4 handler:(id /* block */)arg5;
- (void)evictItems:(id)arg1;
- (id)evictableByProviderDomainID:(int)arg1 activity:(id)arg2;
- (id)extensionManager;
- (bool)getVolume:(int*)arg1 forPath:(id)arg2;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1 activity:(id)arg2;
- (id)queryWithAttributes:(id)arg1;
- (void)registerActivity;
- (void)setExtensionManager:(id)arg1;
- (bool)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2;
- (void)start;
- (id)volumesByProviderDomain;

@end