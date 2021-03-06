/* Generated by RuntimeBrowser.
 */

@protocol MRUEndpointMetadataControllerObserver <NSObject>

@required

- (bool)metadataControllerShouldAutomaticallyUpdateReponse:(MRUEndpointMetadataController *)arg1;

@optional

- (void)metadataController:(MRUEndpointMetadataController *)arg1 didLoadNewResponse:(MPCPlayerResponse *)arg2;
- (void)metadataController:(MRUEndpointMetadataController *)arg1 didUpdateApplicationIcon:(UIImage *)arg2;
- (void)metadataController:(MRUEndpointMetadataController *)arg1 didUpdateShowMediaSuggestions:(bool)arg2;
- (void)metadataControllerDidChangeState:(MRUEndpointMetadataController *)arg1;
- (void)metadataControllerDidUpdateRoutingAvailability:(MRUEndpointMetadataController *)arg1;
- (void)metadataControllerRouteDidUpdate:(MRUEndpointMetadataController *)arg1;

@end
