/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STCallingStatusDomainData : NSObject <NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STActivityAttributionCatalog * _attributionCatalog;
}

@property (nonatomic, readonly, copy) NSSet *activeCallAttributions;
@property (nonatomic, readonly, copy) NSSet *activeVideoConferenceAttributions;
@property (nonatomic, readonly, copy) STActivityAttributionCatalog *attributionCatalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *ringingCallAttributions;
@property (nonatomic, readonly, copy) NSSet *ringingVideoConferenceAttributions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAttributionCatalog:(id)arg1;
- (id)activeCallAttributions;
- (id)activeVideoConferenceAttributions;
- (id)attributionCatalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributionCatalog:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)ringingCallAttributions;
- (id)ringingVideoConferenceAttributions;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end