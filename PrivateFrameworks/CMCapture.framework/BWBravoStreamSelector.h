/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWBravoStreamSelector : NSObject {
    bool  _allowSwitchesWithFineMovement;
    BWFigVideoCaptureStream * _currentMasterStream;
    float  _initialFocusDistance;
    int  _initialLuxLevel;
    bool  _lockWhenExposureAndFocusAreStable;
    BWFigVideoCaptureStream * _lockedStream;
    float  _minFocusDistanceChangeForSceneChange;
    float  _minLuxLevelChangeForSceneChange;
    float  _previousZoomFactor;
    BWFigVideoCaptureStream * _recommendedMasterStream;
    bool  _resetSceneChangeMonitoring;
    bool  _sceneChangeDetected;
    int  _selectionBehavior;
    BWFigVideoCaptureStream * _slaveStreamBlockingFocusAndExposureStability;
    BWFigVideoCaptureStream * _superWideStream;
    float  _teleAEGainHysteresisLag;
    float  _teleMaxAEGain;
    int  _teleMaxGainReachedCounter;
    int  _teleMaxSubsequentFramesAtMaxGain;
    BWFigVideoCaptureStream * _teleStream;
    int  _teleToWideFocusDistance;
    long long  _timeOfLastZoomFactorChange;
    bool  _usesLensMakersFocusDistance;
    bool  _waitingForSlaveFocusAfterZoomChange;
    BWFigVideoCaptureStream * _wideStream;
    int  _wideToTeleFocusDistance;
}

@property (getter=isLensMakersFocusDistanceRequired, nonatomic, readonly) bool lensMakersFocusDistanceRequired;
@property (nonatomic) int selectionBehavior;
@property (nonatomic, readonly) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability;
@property (nonatomic) float teleMaxAEGain;

+ (void)initialize;

- (void)_attemptLockWithFrameStatistics:(id)arg1;
- (bool)_exposureAllowsSwitchToRecommendedMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2;
- (bool)_exposureAndFocusStableForSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2;
- (bool)_focusIsStable:(id)arg1;
- (id)_preferredMasterStreamForFrameStatisticsByPortType:(id)arg1;
- (bool)_selectionBehaviorAllowsSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3 blockedByExposureFocusStability:(bool*)arg4;
- (void)_updateSceneChangeMonitorWithFrameStatisticsByPortType:(id)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3;
- (void)dealloc;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3 superWideStream:(id)arg4;
- (bool)isLensMakersFocusDistanceRequired;
- (void)lockWhenExposureAndFocusAreStable;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2;
- (int)selectionBehavior;
- (void)setSelectionBehavior:(int)arg1;
- (void)setTeleMaxAEGain:(float)arg1;
- (id)slaveStreamBlockingFocusAndExposureStability;
- (float)teleMaxAEGain;
- (bool)telephotoLimitsReachedForFrameStatistiscsByPortType:(id)arg1;
- (void)unlock;

@end
