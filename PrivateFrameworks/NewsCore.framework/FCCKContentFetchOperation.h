/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentFetchOperation : FCNetworkOperation {
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    id /* block */  _fetchRecordsCompletionBlock;
    bool  _getPermanentAssetURLs;
    int  _networkEventType;
    id /* block */  _perRecordCompletionBlock;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSArray * _requestUUIDs;
    NSDictionary * _resultRecordsByRecordID;
}

@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic) bool getPermanentAssetURLs;
@property (nonatomic) int networkEventType;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, copy) NSArray *requestUUIDs;
@property (nonatomic, retain) NSDictionary *resultRecordsByRecordID;

- (void).cxx_destruct;
- (id)_operationForRecordID:(id)arg1;
- (id)database;
- (id)desiredKeys;
- (id /* block */)fetchRecordsCompletionBlock;
- (bool)getPermanentAssetURLs;
- (id)init;
- (int)networkEventType;
- (void)operationWillFinishWithError:(id)arg1;
- (id /* block */)perRecordCompletionBlock;
- (void)performOperation;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)requestUUIDs;
- (id)resultRecordsByRecordID;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setGetPermanentAssetURLs:(bool)arg1;
- (void)setNetworkEventType:(int)arg1;
- (void)setPerRecordCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResultRecordsByRecordID:(id)arg1;
- (id)throttleGroup;
- (bool)validateOperation;

@end