/* Generated by RuntimeBrowser.
 */

@protocol TRIInternalServiceProtocol

@required

- (bool)deregisterNamespaceWithNamespaceName:(NSString *)arg1 withTeamId:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)dynamicNamespaceRecordsWithError:(id*)arg1;
- (NSArray *)experimentNotificationsWithExperimentId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 error:(id*)arg4;
- (NSArray *)experimentRecordsWithError:(id*)arg1;
- (NSDate *)lastFetchDateForContainer:(int)arg1 teamId:(NSString *)arg2 error:(id*)arg3;
- (bool)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 withTeamId:(NSString *)arg4 appContainerId:(NSString *)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id*)arg8;
- (bool)setLastFetchDate:(NSDate *)arg1 forContainer:(int)arg2 teamId:(NSString *)arg3 error:(id*)arg4;
- (bool)startNamespaceDownloadWithName:(NSString *)arg1 withTeamId:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 error:(id*)arg4;
- (bool)submitTask:(TRIBaseTask *)arg1 options:(TRITaskQueuingOptions *)arg2 error:(id*)arg3;
- (NSArray *)taskRecordsWithError:(id*)arg1;

@end
