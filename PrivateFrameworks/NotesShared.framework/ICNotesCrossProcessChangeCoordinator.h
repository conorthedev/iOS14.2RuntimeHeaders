/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNotesCrossProcessChangeCoordinator : NSObject {
    NSManagedObjectContext * _destinationContext;
    NSPersistentStoreCoordinator * _sourceCoordinator;
}

@property (nonatomic, retain) NSManagedObjectContext *destinationContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *sourceCoordinator;

- (void).cxx_destruct;
- (void)dealloc;
- (id)destinationContext;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2;
- (void)postAccountDidChangeNotification;
- (void)postCrossProcessNotificationName:(id)arg1;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(id /* block */)arg2;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)setDestinationContext:(id)arg1;
- (void)setSourceCoordinator:(id)arg1;
- (id)sourceCoordinator;

@end