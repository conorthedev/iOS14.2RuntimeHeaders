/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWNodeError : NSObject {
    int  _errorCode;
    FigCaptureRecordingSettings * _recordingSettings;
    FigCaptureStillImageSettings * _requestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _resolvedStillImageCaptureSettings;
    NSString * _sourceNodeDescription;
    long long  _uniqueID;
}

@property (readonly) int errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;
@property (readonly) NSString *sourceNodeDescription;

+ (id)newError:(int)arg1 sourceNode:(id)arg2;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4;

- (id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5;
- (void)dealloc;
- (int)errorCode;
- (unsigned long long)hash;
- (id)recordingSettings;
- (id)requestedStillImageCaptureSettings;
- (id)resolvedStillImageCaptureSettings;
- (id)sourceNodeDescription;

@end