/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _disabledBundlesForContexts;
    NSMutableDictionary * _globalDisplayPreferencesForContexts;
    id /* block */  _userDisplayPreferencesDidChangeCallback;
}

@property (nonatomic, readonly) NSArray *allContexts;
@property (nonatomic, readonly) NSMutableSet *bundlesDisabledInAllContexts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMutableDictionary *disabledBundlesForContexts;
@property (nonatomic, retain) NSMutableDictionary *globalDisplayPreferencesForContexts;
@property (nonatomic, copy) id /* block */ userDisplayPreferencesDidChangeCallback;

- (void).cxx_destruct;
- (void)_notifyListener;
- (void)_registerForNotifications;
- (void)_updateGlobalToggleState;
- (id)allContexts;
- (id)bundlesDisabledInAllContexts;
- (id)callbackQueue;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disabledBundleIdentifiersInContext:(id)arg1;
- (id)disabledBundlesForContexts;
- (id)globalDisplayPreferencesForContexts;
- (id)init;
- (void)setDisabledBundlesForContexts:(id)arg1;
- (void)setGlobalDisplayPreferencesForContexts:(id)arg1;
- (void)setUserDisplayPreferencesDidChangeCallback:(id /* block */)arg1;
- (bool)suggestionsDisabledInContext:(id)arg1;
- (id /* block */)userDisplayPreferencesDidChangeCallback;

@end
