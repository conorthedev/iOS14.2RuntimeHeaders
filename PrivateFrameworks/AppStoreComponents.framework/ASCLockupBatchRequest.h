/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCLockupBatchRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _context;
    NSSet * _ids;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSSet *ids;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSArray *requests;

+ (id)lockupBatchRequestsFromRequests:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)ids;
- (id)initWithCoder:(id)arg1;
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)lockupBatchRequestWithIDs:(id)arg1;
- (id)requests;

@end
