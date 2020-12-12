/* Generated by RuntimeBrowser.
 */

@protocol BCSMetricFactoryProtocol <NSObject>

@required

- (BCSBusinessLinkFetchMetric *)businessLinkFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkHashFetchMetric *)businessLinkHashFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkRegisteredMetric *)businessLinkRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSChatSuggestFetchMetric *)chatSuggestFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSChatSuggestRegisteredMetric *)chatSuggestRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSConfigPrefetchMetric *)configPrefetchMetricForConfigType:(long long)arg1;
- (BCSConfigResolutionMetric *)configResolutionMetricForConfigType:(long long)arg1;
- (BCSItemResolutionMetric *)itemResolutionMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (<BCSMeasurementFactoryProtocol> *)measurementFactory;
- (BCSMegashardPrefetchMetric *)megashardPrefetchMetricForType:(long long)arg1;
- (BCSShardResolutionMetric *)shardResolutionMetricForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;

@end