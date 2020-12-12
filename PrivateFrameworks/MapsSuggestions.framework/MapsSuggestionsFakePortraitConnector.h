/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakePortraitConnector : NSObject <MapsSuggestionsPortraitConnector> {
    unsigned long long  _calledConnectionsStoreRegisterFeedback;
    unsigned long long  _calledIterRankedLocations;
    unsigned long long  _calledIterRecentLocationsForConsumer;
    unsigned long long  _calledLocationQuery;
    unsigned long long  _calledLocationStoreRegisterFeedback;
    unsigned long long  _calledNamedEntityQuery;
    unsigned long long  _calledNamedEntityStoreRegisterFeedback;
    unsigned long long  _calledRankedNamedEntitiesWithQuery;
    NSArray * _configuredConnectionsLocations;
    NSError * _configuredError;
    PPLocationQuery * _configuredLocationQuery;
    NSArray * _configuredNamedEntities;
    PPNamedEntityQuery * _configuredNamedEntityQuery;
    NSMutableDictionary * _configuredRankedLocationsForQuery;
    unsigned long long  _currentConnectionsLocationIndex;
    unsigned long long  _currentRankedLocationIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)calledConnectionsStoreRegisterFeedback;
- (unsigned long long)calledLocationStoreRegisterFeedback;
- (unsigned long long)calledNamedEntityStoreRegisterFeedback;
- (void)configureConnectionLocations:(id)arg1;
- (void)configureError:(id)arg1;
- (void)configureLocationQuery:(id)arg1;
- (void)configureNamedEntites:(id)arg1;
- (void)configureNamedEntityQuery:(id)arg1;
- (void)configureRankedLocations:(id)arg1 forQuery:(id)arg2;
- (void)connectionsStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(id /* block */)arg6;
- (id)locationQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
- (void)locationStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)namedEntityQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
- (void)namedEntityStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)rankedNamedEntitiesWihQuery:(id)arg1 error:(id*)arg2;

@end