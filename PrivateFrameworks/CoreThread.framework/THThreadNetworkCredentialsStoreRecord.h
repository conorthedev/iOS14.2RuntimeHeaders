/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
 */

@interface THThreadNetworkCredentialsStoreRecord : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    THThreadNetworkCredentials * _credentials;
    NSString * _keychainAccessGroup;
    NSDate * _lastModificationDate;
    THThreadNetwork * _network;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) THThreadNetworkCredentials *credentials;
@property (nonatomic, readonly) NSString *keychainAccessGroup;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) THThreadNetwork *network;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (id)credentials;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetwork:(id)arg1 credentials:(id)arg2 uniqueIdentifier:(id)arg3 keychainAccessGroup:(id)arg4 creationDate:(id)arg5 lastModificationDate:(id)arg6;
- (id)keychainAccessGroup;
- (id)lastModificationDate;
- (id)network;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)computedUniqueIdentifierForNetwork:(id)arg1 keychainAccessGroup:(id)arg2;
+ (id)keyChainQueryForDeleteOperationForUniqueIdentifier:(id)arg1;
+ (id)keyChainQueryForFetchAllOperation;
+ (id)keyChainQueryForFetchOneOperationForUniqueIdentifier:(id)arg1;
+ (id)keyChainQueryForFetchOperationForNetwork:(id)arg1;
+ (id)recordFromKeychainDictionary:(id)arg1;

- (id)computedUniqueIdentifier;
- (id)keyChainItemRepresentationForAddOperation;
- (id)keyChainItemRepresentationForUpdateOperation;
- (id)keyChainQueryForUpdateOperation;

@end
