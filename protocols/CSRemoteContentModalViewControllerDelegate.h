/* Generated by RuntimeBrowser.
 */

@protocol CSRemoteContentModalViewControllerDelegate <NSObject>

@required

- (void)remoteContentModalViewController:(CSRemoteContentModalViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteContentModalViewController:(CSRemoteContentModalViewController *)arg1 didUpdateWithPreferences:(SBSRemoteContentPreferences *)arg2;
- (bool)remoteContentModalViewController:(void *)arg1 requestsDismissalForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CSRemoteContentModalViewController *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
