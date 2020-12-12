/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRTCCStorePassThrough : NSObject <SRTCCStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bundleIdentifiersDisabledForService:(id)arg1;
- (id)bundleIdentifiersForService:(id)arg1;
- (id)informationForBundleId:(id)arg1;
- (bool)isOverriddenForService:(id)arg1;
- (bool)resetService:(id)arg1;
- (bool)resetService:(id)arg1 forBundleId:(id)arg2;
- (bool)setOverride:(bool)arg1 forService:(id)arg2;
- (bool)setValue:(bool)arg1 forService:(id)arg2 bundleId:(id)arg3;

@end