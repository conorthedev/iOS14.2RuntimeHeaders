/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequestBehaviorSpec : NSObject <NSCopying, NSSecureCoding, PLVideoChoosingOptions> {
    long long  _deliveryMode;
    bool  _mediumHighQualityAllowed;
    bool  _networkAccessAllowed;
    bool  _restrictToPlayableOnCurrentDevice;
    bool  _streamingAllowed;
    long long  _streamingVideoIntent;
    long long  _version;
    bool  _videoComplementAllowed;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deliveryMode;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMediumHighQualityAllowed, nonatomic) bool mediumHighQualityAllowed;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) bool restrictToPlayableOnCurrentDevice;
@property (getter=isStreamingAllowed, nonatomic) bool streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (readonly) Class superclass;
@property (nonatomic) long long version;
@property (getter=isVideoComplementAllowed, nonatomic) bool videoComplementAllowed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)isVideoComplementAllowed;
- (bool)restrictToPlayableOnCurrentDevice;
- (void)setDeliveryMode:(long long)arg1;
- (void)setMediumHighQualityAllowed:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setRestrictToPlayableOnCurrentDevice:(bool)arg1;
- (void)setStreamingAllowed:(bool)arg1;
- (void)setStreamingVideoIntent:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (void)setVideoComplementAllowed:(bool)arg1;
- (id)shortDescription;
- (long long)streamingVideoIntent;
- (long long)version;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end
