/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFGetFileAction : WFStorageServiceAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)filePathKey;
- (id)filenamePlaceholderText;
- (bool)multipleSelectionEnabled;
- (bool)outputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)runWithRemoteUserInterface:(id)arg1 path:(id)arg2 input:(id)arg3 storageService:(id)arg4;
- (void)selectedStorageServiceChanged;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)showPickerKey;
- (id)targetContentAttribution;
- (void)updateVisibleParameters;

@end