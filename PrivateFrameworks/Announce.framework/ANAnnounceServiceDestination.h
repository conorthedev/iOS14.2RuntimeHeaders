/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANAnnounceServiceDestination : NSObject {
    NSArray * _accessories;
    NSArray * _devices;
    HMHome * _home;
    NSArray * _users;
}

@property (nonatomic, retain) NSArray *accessories;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSArray *users;

+ (id)_destinationForHomePods:(id)arg1 rapportConnection:(id)arg2;
+ (id)destinationForHome:(id)arg1 excludingRooms:(id)arg2 rapportConnection:(id)arg3;
+ (id)destinationForHome:(id)arg1 rapportConnection:(id)arg2;
+ (id)destinationForRooms:(id)arg1 inHome:(id)arg2 rapportConnection:(id)arg3;
+ (id)relayDestinationForHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)accessories;
- (bool)addAccessory:(id)arg1;
- (bool)addDeviceWithID:(id)arg1 rapportConnection:(id)arg2;
- (bool)addUser:(id)arg1 inHome:(id)arg2;
- (id)devices;
- (id)home;
- (id)idsIdentifiersForService:(id)arg1;
- (id)init;
- (id)participantsWithService:(id)arg1;
- (void)removeDeviceWithID:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)users;

@end