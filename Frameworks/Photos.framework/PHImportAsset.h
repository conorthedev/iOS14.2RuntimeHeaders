/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem> {
    id  _assetId;
    PHImportAsset * _audioAsset;
    id  _avchdAssetId;
    PHImportAsset * _base;
    NSString * _basenameForOriginalAdjustment;
    PHImportAsset * _burstPick;
    bool  _canReference;
    unsigned long long  _copyMethod;
    NSString * _createdFileName;
    NSSet * _duplicateAssets;
    unsigned char  _duplicateStateConfidence;
    NSMutableDictionary * _duplicates;
    NSDate * _exifImageDate;
    NSDate * _fileCreationDate;
    NSData * _fileData;
    NSString * _fileExtension;
    unsigned char  _fileLocation;
    NSDate * _fileModificationDate;
    NSString * _fileName;
    NSMutableDictionary * _filePresenters;
    unsigned long long  _fileSize;
    AVAssetImageGenerator * _imageGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSString * _importIdentifier;
    bool  _isDuplicate;
    PHImportAsset * _largeMovieRender;
    PHImportAsset * _largeRender;
    NSDate * _lastDuplicateCheck;
    NSObject<OS_dispatch_queue> * _loadSidecars;
    IPAMetadata * _metadata;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _metadataLock;
    PHImportAsset * _miniRender;
    PHImportAsset * _rawAsset;
    NSMutableArray * _relatedBurstAssets;
    unsigned short  _resourceSubType;
    long long  _resourceType;
    NSMutableDictionary * _sidecarAssetsByType;
    bool  _sidecarsLoaded;
    PHImportSource * _source;
    PHImportAsset * _spatialOverCapture;
    PHImportSource * _strongSource;
    PHImportAsset * _thumbnailRender;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    bool  _treatAsUnsupportedRAW;
    NSURL * _url;
    NSDictionary * _userInfo;
    NSDictionary * _userMetadata;
    NSString * _uti;
    id  _uuid;
    PHImportAsset * _videoComplement;
}

@property (nonatomic, readonly) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSNumber *aperture;
@property (nonatomic, readonly) unsigned long long approximateBytesRequiredToImport;
@property (nonatomic, readonly) NSString *assetDescription;
@property (readonly) id assetId;
@property (nonatomic, readonly) unsigned long long assetSizeIncludingRelatedAssets;
@property (nonatomic, retain) PHImportAsset *audioAsset;
@property (readonly) id avchdAssetId;
@property (nonatomic, retain) PHImportAsset *base;
@property (nonatomic, readonly) NSNumber *bitrate;
@property (nonatomic, retain) PHImportAsset *burstPick;
@property (nonatomic, readonly) NSString *burstUUID;
@property (nonatomic, readonly) NSString *cameraMake;
@property (nonatomic, readonly) NSString *cameraModel;
@property (nonatomic, readonly) bool canDelete;
@property (nonatomic, readonly) bool canReference;
@property (nonatomic, readonly) NSString *codec;
@property (nonatomic) unsigned long long copyMethod;
@property (nonatomic, retain) NSString *createdFileName;
@property (readonly) NSDate *dateKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *duplicateAssets;
@property unsigned char duplicateStateConfidence;
@property (retain) NSMutableDictionary *duplicates;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, retain) NSDate *exifImageDate;
@property (nonatomic, readonly) NSTimeZone *exifTimeZone;
@property (nonatomic, readonly) NSNumber *exposureBias;
@property (nonatomic, retain) NSDate *fileCreationDate;
@property (nonatomic, retain) NSData *fileData;
@property (nonatomic, retain) NSString *fileExtension;
@property (nonatomic) unsigned char fileLocation;
@property (nonatomic, retain) NSDate *fileModificationDate;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSMutableDictionary *filePresenters;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, readonly) NSNumber *flashFired;
@property (nonatomic, readonly) NSNumber *focalLength;
@property (nonatomic, readonly) NSNumber *fps;
@property (nonatomic, readonly) bool hasAdjustments;
@property (nonatomic, readonly) bool hasAudioAttachment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSString *importIdentifier;
@property (nonatomic, readonly) bool isAVCHD;
@property (nonatomic, readonly) bool isAudio;
@property (nonatomic, readonly) bool isBurst;
@property bool isDuplicate;
@property (nonatomic, readonly) bool isGIF;
@property (nonatomic, readonly) bool isGrouped;
@property (nonatomic, readonly) bool isHDR;
@property (nonatomic, readonly) bool isHEIF;
@property (nonatomic, readonly) bool isImage;
@property (nonatomic, readonly) bool isJPEG;
@property (nonatomic, readonly) bool isJPEG2000;
@property (nonatomic, readonly) bool isJpegPlusRAW;
@property (nonatomic, readonly) bool isLivePhoto;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isPDF;
@property (nonatomic, readonly) bool isPNG;
@property (nonatomic, readonly) bool isPSD;
@property (nonatomic, readonly) bool isRAW;
@property (nonatomic, readonly) bool isSDOF;
@property (nonatomic, readonly) bool isSidecar;
@property (nonatomic, readonly) bool isSloMo;
@property (nonatomic, readonly) bool isTIFF;
@property (nonatomic, readonly) bool isTagged;
@property (nonatomic, readonly) bool isTimelapse;
@property (nonatomic, readonly) bool isViewable;
@property (nonatomic, readonly) NSNumber *iso;
@property (nonatomic, readonly) NSSet *keywordTitles;
@property (nonatomic, retain) PHImportAsset *largeMovieRender;
@property (nonatomic, retain) PHImportAsset *largeRender;
@property (retain) NSDate *lastDuplicateCheck;
@property (nonatomic, readonly) NSString *lensModel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loadSidecars;
@property (nonatomic, retain) IPAMetadata *metadata;
@property (nonatomic, readonly) NSNumber *meteringMode;
@property (nonatomic, retain) PHImportAsset *miniRender;
@property (readonly) id nameKey;
@property (readonly) id originatingAssetID;
@property (nonatomic, readonly) NSString *parentFolderPath;
@property (nonatomic, retain) PHImportAsset *rawAsset;
@property (nonatomic, retain) NSMutableArray *relatedBurstAssets;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic) unsigned short resourceSubType;
@property (nonatomic) long long resourceType;
@property (nonatomic, readonly) NSNumber *sampleRate;
@property (nonatomic, readonly) NSNumber *shutterSpeed;
@property (nonatomic, readonly) NSArray *sidecarAssets;
@property (nonatomic, retain) NSMutableDictionary *sidecarAssetsByType;
@property (nonatomic) bool sidecarsLoaded;
@property (readonly) id sizeKey;
@property (nonatomic, readonly) PHImportSource *source;
@property (nonatomic, retain) PHImportAsset *spatialOverCapture;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHImportAsset *thumbnailRender;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSNumber *trackFormat;
@property (nonatomic) bool treatAsUnsupportedRAW;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *uti;
@property (nonatomic, retain) id uuid;
@property (nonatomic, retain) PHImportAsset *videoComplement;
@property (nonatomic, readonly) NSNumber *whiteBalance;

+ (id)assetFileForURL:(id)arg1 source:(id)arg2;
+ (id)assetFileForURL:(id)arg1 source:(id)arg2 withUuid:(id)arg3;
+ (void)determineIfTIFFIsRAW:(id)arg1 url:(id)arg2;
+ (bool)isOriginalAdjustmentData:(id)arg1;
+ (bool)isValidAsSidecar:(id)arg1;
+ (id)loadDatesForAssetSequence:(id)arg1 atEnd:(id /* block */)arg2;
+ (id)loadDatesForAssets:(id)arg1 atEnd:(id /* block */)arg2;
+ (void)logImageDateFileDateDifferencesForAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_accessMetadata:(id /* block */)arg1;
- (void)_addRelatedRecordsToRecord:(id)arg1 primaryRecord:(id)arg2;
- (void)_loadSidecarFiles;
- (void)_setMetadata:(id)arg1;
- (id)aaeSidecar;
- (id)accessibilityDescription;
- (void)addBurstAsset:(id)arg1;
- (void)addSidecarAsset:(id)arg1;
- (id)aperture;
- (unsigned long long)approximateBytesRequiredToImport;
- (id)assetDescription;
- (id)assetId;
- (unsigned long long)assetSizeIncludingRelatedAssets;
- (id)audioAsset;
- (struct CGImage { }*)avThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)avchdAssetId;
- (id)base;
- (id)basenameForOriginalAdjustmentData;
- (id)bitrate;
- (id)burstPick;
- (int)burstPickType;
- (id)burstUUID;
- (id)cameraMake;
- (id)cameraModel;
- (bool)canDelete;
- (bool)canPreserveFolderStructure;
- (bool)canReference;
- (struct CGSize { double x1; double x2; })cgImageSize;
- (id)checkForSidecarWithExtension:(id)arg1;
- (id)checkForSidecarWithName:(id)arg1;
- (id)codec;
- (bool)configureWithUTI:(id)arg1 supportedType:(unsigned char)arg2;
- (id)copyFromURL:(id)arg1 toURL:(id)arg2;
- (unsigned long long)copyMethod;
- (void)copyToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createdFileName;
- (struct CGSize { double x1; double x2; })cropEXIFThumbSize:(struct CGSize { double x1; double x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (id)dateKey;
- (id)description;
- (id)descriptionWithPrefix:(id)arg1;
- (id)duplicateAssets;
- (id)duplicateAssetsForLibrary:(id)arg1;
- (unsigned char)duplicateStateConfidence;
- (id)duplicates;
- (id)duration;
- (id)exifImageDate;
- (id)exifTimeZone;
- (id)exposureBias;
- (id)fileCreationDate;
- (id)fileData;
- (id)fileExtension;
- (unsigned char)fileLocation;
- (id)fileModificationDate;
- (id)fileName;
- (id)filePresenters;
- (unsigned long long)fileSize;
- (id)flashFired;
- (id)focalLength;
- (id)fps;
- (id)groupingUUID;
- (bool)hasAdjustments;
- (bool)hasAudioAttachment;
- (bool)hasOriginalResourceType;
- (unsigned long long)hash;
- (id)imageGenerator;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGImage { }*)imageThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)importIdentifier;
- (id)importRecordForPrimaryAsset;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 url:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4;
- (bool)isAVCHD;
- (bool)isAppropriateForUI;
- (bool)isAudio;
- (bool)isBase;
- (bool)isBlessed:(id)arg1 includeXmp:(bool)arg2;
- (bool)isBurst;
- (bool)isDuplicate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImportAsset:(id)arg1;
- (bool)isGIF;
- (bool)isGrouped;
- (bool)isHDR;
- (bool)isHEIF;
- (bool)isImage;
- (bool)isJPEG;
- (bool)isJPEG2000;
- (bool)isJpegPlusRAW;
- (bool)isLivePhoto;
- (bool)isMovie;
- (bool)isOriginalAdjustmentData;
- (bool)isPDF;
- (bool)isPNG;
- (bool)isPSD;
- (bool)isPrimary;
- (bool)isRAW;
- (bool)isRender;
- (bool)isRepresentation;
- (bool)isSDOF;
- (bool)isSidecar;
- (bool)isSloMo;
- (bool)isSpatialOverCapture;
- (bool)isTIFF;
- (bool)isTagged;
- (bool)isTimelapse;
- (bool)isValidForReference;
- (bool)isValidMetadata:(id)arg1;
- (bool)isVideoComplementOf:(id)arg1;
- (bool)isViewable;
- (id)iso;
- (id)keywordTitles;
- (id)largeMovieRender;
- (id)largeRender;
- (id)lastDuplicateCheck;
- (id)lensModel;
- (void)loadMetadataAsync:(id /* block */)arg1;
- (void)loadMetadataSync;
- (void)loadSidecarFiles;
- (id)loadSidecars;
- (id)mediaGroupId;
- (id)metadata;
- (id)meteringMode;
- (id)miniRender;
- (id)nameKey;
- (id)originalAaeSidecar;
- (id)originatingAssetID;
- (id)parentFolderPath;
- (bool)performAdditionalLivePhotoChecksOnImageAsset:(id)arg1;
- (id)rawAsset;
- (id)relatedAssets;
- (id)relatedBurstAssets;
- (unsigned long long)relatedBytes;
- (struct CGImage { }*)removeBlackBarsFromExifThumbnail:(struct CGImage { }*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2;
- (void)removeSidecarAsset:(id)arg1;
- (id)representedObject;
- (unsigned short)resourceSubType;
- (long long)resourceType;
- (id)resourceTypes;
- (id)sampleRate;
- (void)setAudioAsset:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBurstPick:(id)arg1;
- (void)setCopyMethod:(unsigned long long)arg1;
- (void)setCreatedFileName:(id)arg1;
- (void)setDuplicateStateConfidence:(unsigned char)arg1;
- (void)setDuplicates:(id)arg1;
- (void)setDuplicates:(id)arg1 forLibrary:(id)arg2;
- (void)setExifImageDate:(id)arg1;
- (void)setFileCreationDate:(id)arg1;
- (void)setFileData:(id)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setFileLocation:(unsigned char)arg1;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFilePresenters:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImportIdentifier:(id)arg1;
- (void)setIsDuplicate:(bool)arg1;
- (void)setLargeMovieRender:(id)arg1;
- (void)setLargeRender:(id)arg1;
- (void)setLastDuplicateCheck:(id)arg1;
- (void)setLoadSidecars:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMiniRender:(id)arg1;
- (void)setRawAsset:(id)arg1;
- (void)setRelatedBurstAssets:(id)arg1;
- (void)setResourceSubType:(unsigned short)arg1;
- (void)setResourceType:(long long)arg1;
- (void)setSidecarAssetsByType:(id)arg1;
- (void)setSidecarsLoaded:(bool)arg1;
- (void)setSpatialOverCapture:(id)arg1;
- (void)setThumbnailRender:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTreatAsUnsupportedRAW:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserMetadata:(id)arg1;
- (void)setUti:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVideoComplement:(id)arg1;
- (id)shutterSpeed;
- (unsigned long long)sidecarAssetBytes;
- (id)sidecarAssets;
- (id)sidecarAssetsByType;
- (id)sidecarInfoDictionaries;
- (id)sidecarInfoDictionary;
- (bool)sidecarsLoaded;
- (id)sizeKey;
- (id)slmSidecar;
- (id)source;
- (id)spatialOverCapture;
- (id)spatialOverCaptureIdentifier;
- (id)stripMarkerFromName:(id)arg1 markerLocation:(unsigned long long)arg2;
- (void)takeAsVideoComplement:(id)arg1;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(id /* block */)arg2;
- (id)thumbnailForSize:(unsigned long long)arg1 priority:(unsigned char)arg2 atEnd:(id /* block */)arg3;
- (id)thumbnailRender;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (void)thumbnailUsingRequest:(id)arg1 atEnd:(id /* block */)arg2;
- (id)timezoneCorrectedExifImageDate;
- (id)title;
- (id)trackFormat;
- (bool)treatAsUnsupportedRAW;
- (void)updateIsRAW:(bool)arg1 uti:(id)arg2;
- (id)url;
- (id)userInfo;
- (id)userMetadata;
- (id)uti;
- (id)uuid;
- (id)validateMetadataForImportRecord:(id)arg1;
- (id)videoComplement;
- (id)whiteBalance;
- (id)xmpSidecar;

@end