/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKProduction : NSObject <NSCopying, NSSecureCoding, PosterDataProtocol> {
    VEKBlueprint * _blueprint;
    PHAssetCollection * _collection;
    NSDictionary * _featuredPersonsInMemoryAsFaceRanges;
    NSArray * _fetchedAssets;
    MiroPickList * _fullPicklist;
    _TtC11AutoEditLib15PicklistService * _fullPicklistService;
    bool  _isPending;
    PHAsset * _keyAsset;
    VEKResult * _lastResult;
    double  _maxDuration;
    unsigned long long  _memoryCategory;
    NSDictionary * _memoryFeaturesPersonInAsset;
    unsigned long long  _memorySubcategory;
    bool  _memoryTypeDisablesCropping;
    NSDate * _memoryViewedDate;
    _TtC11AutoEditLib11MoodService * _moodService;
    bool  _persistedAtLeastOnce;
    _TtC11AutoEditLib18PipelineController * _pipelineController;
    _TtC11AutoEditLib24PipelineExportController * _pipelineExportController;
    NSObject<OS_dispatch_queue> * _pipelineQueue;
    VEKProductionExport * _productionExport;
    double  _requestedDuration;
    NSString * _requestedMood;
    NSString * _subtitle;
    NSSet * _suggestions;
    NSString * _title;
}

@property (nonatomic, retain) VEKBlueprint *blueprint;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *featuredPersonsInMemoryAsFaceRanges;
@property (nonatomic, retain) NSArray *fetchedAssets;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, retain) MiroPickList *fullPicklist;
@property (nonatomic, retain) _TtC11AutoEditLib15PicklistService *fullPicklistService;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPending;
@property (nonatomic, copy) PHAsset *keyAsset;
@property (nonatomic, retain) VEKResult *lastResult;
@property (nonatomic) double maxDuration;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic, retain) NSDictionary *memoryFeaturesPersonInAsset;
@property (nonatomic) unsigned long long memorySubcategory;
@property (nonatomic) bool memoryTypeDisablesCropping;
@property (nonatomic, retain) NSDate *memoryViewedDate;
@property (nonatomic, retain) _TtC11AutoEditLib11MoodService *moodService;
@property (nonatomic) bool persistedAtLeastOnce;
@property (nonatomic, retain) _TtC11AutoEditLib18PipelineController *pipelineController;
@property (nonatomic, retain) _TtC11AutoEditLib24PipelineExportController *pipelineExportController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pipelineQueue;
@property (nonatomic, retain) VEKProductionExport *productionExport;
@property (nonatomic) double requestedDuration;
@property (nonatomic, retain) NSString *requestedMood;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSSet *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blueprint;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)exportWithPresets:(id)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)featuredPersonsInMemoryAsFaceRanges;
- (id)fetchedAssets;
- (id)fontName;
- (id)fullPicklist;
- (id)fullPicklistService;
- (unsigned long long)hash;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPending;
- (id)keyAsset;
- (id)lastResult;
- (void)logAssetTypesForCollection:(id)arg1 description:(id)arg2;
- (void)logCloudToLocalIdentifiersForCollection:(id)arg1;
- (void)makePlayerItemWithNaturalSize:(struct CGSize { double x1; double x2; })arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)makeProjectWithNaturalSize:(struct CGSize { double x1; double x2; })arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (double)maxDuration;
- (unsigned long long)memoryCategory;
- (id)memoryFeaturesPersonInAsset;
- (unsigned long long)memorySubcategory;
- (bool)memoryTypeDisablesCropping;
- (id)memoryViewedDate;
- (id)moodService;
- (void)persistMemory;
- (bool)persisted;
- (bool)persistedAtLeastOnce;
- (long long)pickedItemCount;
- (id)pipelineController;
- (id)pipelineExportController;
- (id)pipelineQueue;
- (id)productionExport;
- (double)requestedDuration;
- (id)requestedMood;
- (void)setBlueprint:(id)arg1;
- (void)setFeaturedPersonsInMemoryAsFaceRanges:(id)arg1;
- (void)setFetchedAssets:(id)arg1;
- (void)setFullPicklist:(id)arg1;
- (void)setFullPicklistService:(id)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLastResult:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setMemoryCategory:(unsigned long long)arg1;
- (void)setMemoryFeaturesPersonInAsset:(id)arg1;
- (void)setMemorySubcategory:(unsigned long long)arg1;
- (void)setMemoryTypeDisablesCropping:(bool)arg1;
- (void)setMemoryViewedDate:(id)arg1;
- (void)setMoodService:(id)arg1;
- (void)setPersistedAtLeastOnce:(bool)arg1;
- (void)setPipelineController:(id)arg1;
- (void)setPipelineExportController:(id)arg1;
- (void)setPipelineQueue:(id)arg1;
- (void)setProductionExport:(id)arg1;
- (void)setRequestedDuration:(double)arg1;
- (void)setRequestedMood:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)suggestions;
- (id)title;

@end
