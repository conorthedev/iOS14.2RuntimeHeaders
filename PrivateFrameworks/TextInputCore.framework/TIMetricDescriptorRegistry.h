/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMetricDescriptorRegistry : NSObject {
    NSDictionary * _config;
    NSMutableSet * _invalidMetricNames;
    bool  _loaded;
    NSMutableDictionary * _metricDescriptors;
}

@property (nonatomic, readonly) NSDictionary *config;
@property (nonatomic, readonly) NSMutableSet *invalidMetricNames;
@property (nonatomic) bool loaded;
@property (nonatomic, readonly) NSMutableDictionary *metricDescriptors;

+ (id)registryWithConfig:(id)arg1;
+ (id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;

- (void).cxx_destruct;
- (id)config;
- (id)contextFromError:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
- (id)invalidMetricNames;
- (void)loadMetricDescriptors;
- (bool)loaded;
- (id)metricDescriptorWithName:(id)arg1;
- (id)metricDescriptors;
- (void)setLoaded:(bool)arg1;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;

@end