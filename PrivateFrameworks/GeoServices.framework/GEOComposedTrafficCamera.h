/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficCamera * _trafficCamera;
}

@property (nonatomic, readonly) unsigned int cameraPriority;
@property (nonatomic, readonly) bool hasCameraPriority;
@property (nonatomic, readonly) bool hasSpeedLimitText;
@property (nonatomic, readonly) bool hasSpeedThreshold;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) double speedThreshold;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)cameraPriority;
- (id)description;
- (id)detailFormatForLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCameraPriority;
- (bool)hasSpeedLimitText;
- (bool)hasSpeedThreshold;
- (unsigned int)highlightDistance;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5;
- (id)position;
- (id)speedLimitText;
- (double)speedThreshold;
- (id)titleFormatForLocation:(id)arg1;
- (int)type;

@end