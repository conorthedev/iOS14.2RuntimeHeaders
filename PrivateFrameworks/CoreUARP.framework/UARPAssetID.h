/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPAssetID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetVersion;
    bool  _deploymentAllowed;
    NSArray * _deploymentRules;
    long long  _downloadStatus;
    NSNumber * _firmwareFileSize;
    NSString * _localPath;
    NSObject<OS_os_log> * _log;
    NSString * _releaseDate;
    long long  _releaseNotesAvailabilityStatus;
    long long  _releaseNotesDownloadStatus;
    NSNumber * _releaseNotesFileSize;
    NSString * _releaseNotesLocalPath;
    NSString * _releaseNotesRemotePath;
    NSString * _remoteBuildManifestPlistPath;
    NSString * _remotePath;
    long long  _type;
    long long  _updateAvailabilityStatus;
}

@property (readonly, copy) NSString *assetVersion;
@property (readonly) bool deploymentAllowed;
@property (readonly) NSArray *deploymentRules;
@property (readonly) long long downloadStatus;
@property (readonly) NSNumber *firmwareFileSize;
@property (readonly, copy) NSString *localPath;
@property (readonly) NSString *releaseDate;
@property (readonly) long long releaseNotesAvailabilityStatus;
@property (readonly) long long releaseNotesDownloadStatus;
@property (readonly) NSNumber *releaseNotesFileSize;
@property (readonly) NSString *releaseNotesLocalPath;
@property (readonly) NSString *releaseNotesRemotePath;
@property (copy) NSString *remotePath;
@property (readonly) long long type;
@property (readonly) long long updateAvailabilityStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createUARPDeploymentRules:(id)arg1;
- (bool)analyticsIsEqual:(id)arg1;
- (id)assetVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deploymentAllowed;
- (id)deploymentRules;
- (id)description;
- (long long)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareFileSize;
- (id)initInMemory;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationType:(long long)arg1 remotePath:(id)arg2;
- (id)initWithLocationType:(long long)arg1 remotePath:(id)arg2 releaseNotesRemotePath:(id)arg3;
- (bool)isDeploymentAllowed;
- (bool)isEqual:(id)arg1;
- (id)localPath;
- (void)processUARPDeploymentRules:(id)arg1;
- (id)rawDescription;
- (id)releaseDate;
- (long long)releaseNotesAvailabilityStatus;
- (long long)releaseNotesDownloadStatus;
- (id)releaseNotesFileSize;
- (id)releaseNotesLocalPath;
- (id)releaseNotesRemotePath;
- (id)remoteBuildManifestPlistPath;
- (id)remotePath;
- (void)setAssetVersion:(id)arg1;
- (void)setDeploymentAllowed:(bool)arg1;
- (void)setDeploymentRules:(id)arg1;
- (void)setDownloadStatus:(long long)arg1;
- (void)setFirmwareFileSize:(id)arg1;
- (void)setLocalPath:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseNotesAvailabilityStatus:(long long)arg1;
- (void)setReleaseNotesDownloadStatus:(long long)arg1;
- (void)setReleaseNotesFileSize:(id)arg1;
- (void)setReleaseNotesLocalPath:(id)arg1;
- (void)setReleaseNotesRemotePath:(id)arg1;
- (void)setRemoteBuildManifestPlistPath:(id)arg1;
- (void)setRemotePath:(id)arg1;
- (void)setUpdateAvailabilityStatus:(long long)arg1;
- (long long)type;
- (const char *)typeString;
- (long long)updateAvailabilityStatus;

@end
