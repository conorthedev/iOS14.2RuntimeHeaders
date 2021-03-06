/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSystemComponent : HMFObject <HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDAccessory * _accessory;
    <HMFLocking> * _lock;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMMediaSystemRole * _role;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDMediaProfile *mediaProfile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMMediaSystemRole *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (id)componentsWithLeftComponent:(id)arg1 leftAccessory:(id)arg2 rightComponent:(id)arg3 rightAccessory:(id)arg4;
+ (bool)decodeComponents:(id)arg1 leftUUID:(id*)arg2 leftAccessory:(id*)arg3 rightUUID:(id*)arg4 rightAccessory:(id*)arg5;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;
- (id)logIdentifier;
- (id)mediaProfile;
- (id)privateDescription;
- (id)propertyQueue;
- (id)role;
- (id)serialize;
- (void)setRole:(id)arg1;
- (id)uuid;

@end
