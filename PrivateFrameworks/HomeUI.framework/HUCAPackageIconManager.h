/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCAPackageIconManager : NSObject {
    NSCache * _packageDataCache;
    NSCache * _packageReuseQueue;
    <NAScheduler> * _prefetchScheduler;
}

@property (nonatomic, retain) NSCache *packageDataCache;
@property (nonatomic, retain) NSCache *packageReuseQueue;
@property (nonatomic, retain) <NAScheduler> *prefetchScheduler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_loadPackageWithIconDescriptor:(id)arg1;
- (id)_packageDataForIconDescriptor:(id)arg1;
- (id)_queueForIconDescriptorIdentifier:(id)arg1;
- (id)init;
- (id)packageDataCache;
- (id)packageForIconDescriptor:(id)arg1;
- (id)packageReuseQueue;
- (id)prefetchIconDescriptors:(id)arg1;
- (id)prefetchScheduler;
- (void)reclaimPackage:(id)arg1 forIconDescriptor:(id)arg2;
- (void)setPackageDataCache:(id)arg1;
- (void)setPackageReuseQueue:(id)arg1;
- (void)setPrefetchScheduler:(id)arg1;

@end
