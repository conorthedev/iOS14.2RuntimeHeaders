/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface DeploymentMetricHandler : NSObject {
    bool  _isInternalInstall;
    AnalyticsStoreMOHandler * _storeMOHandler;
}

@property (nonatomic) bool isInternalInstall;
@property (nonatomic, retain) AnalyticsStoreMOHandler *storeMOHandler;

- (void).cxx_destruct;
- (bool)appendBssAnalyticsToMetric:(id)arg1 bssMo:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (void)appendJoinsSummaryToMetric:(id)arg1 ssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (bool)appendNetworkAnalyticsToMetric:(id)arg1 ssid:(id)arg2 deploymentUuid:(id)arg3 maxAgeInDays:(unsigned long long)arg4;
- (id)copyBssidsForDeployment:(id)arg1 deploymentUuid:(id)arg2;
- (unsigned long long)dwellTimeInBand:(id)arg1 bandIs24:(bool)arg2 bssid:(id)arg3 maxAgeInDays:(unsigned long long)arg4;
- (id)initWithAnalyticsStore:(id)arg1;
- (bool)isInternalInstall;
- (id)leavesSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (bool)metricNeedsSubmission:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3;
- (void)networkDeploymentMetricCheckAndSubmit:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3;
- (unsigned long long)numBssInBand:(id)arg1 bandIs24:(bool)arg2;
- (id)roamsSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setStoreMOHandler:(id)arg1;
- (id)storeMOHandler;
- (void)submitBssAnalyticsMetrics:(id)arg1 deploymentUuid:(id)arg2 stitchIndex:(long long)arg3;

@end
