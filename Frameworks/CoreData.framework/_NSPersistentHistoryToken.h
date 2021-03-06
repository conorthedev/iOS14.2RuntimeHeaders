/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary * _storeTokens;
}

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (long long)compareToken:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)storeTokens;

@end
