/* Generated by RuntimeBrowser.
 */

@protocol ATXBackupDataProviderDelegate <NSObject>

@required

- (NSDictionary *)filenamesAndDataForBackupShouldPareDown:(bool)arg1;
- (bool)restoreFromBackup:(NSDictionary *)arg1;

@end