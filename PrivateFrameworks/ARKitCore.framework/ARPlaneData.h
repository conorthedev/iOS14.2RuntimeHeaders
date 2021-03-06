/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARPlaneData : NSObject <ARResultData> {
    ARCV3DSurfaceDetectionResult * _detectionResult;
    unsigned long long  _detectionTypeMask;
    NSDictionary * _planeIdentifiers;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _renderingToVision;
    bool  _sceneUnderstandingEnabled;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionToRendering;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ARCV3DSurfaceDetectionResult *detectionResult;
@property (nonatomic, readonly) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool sceneUnderstandingEnabled;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionToRendering;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_planeToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 pivot:(float)arg2;
+ (float)_surfaceOrientedPivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1;
+ (id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1;
+ (void)setSemanticsFromCV3D:(struct CV3DSurfaceDetectionSemantics { double x1[12]; int x2; }*)arg1 sceneUnderstandingEnabled:(bool)arg2 onPlane:(id)arg3;

- (void).cxx_destruct;
- (id)_anchorForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 identifier:(id)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (struct { })_boundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (id)_geometryForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 planeBounds:(struct { })arg4;
- (id)_gridExtentForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (struct { })_orientedBoundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (void)_updateExtentsForPlaneAnchor:(id)arg1 plane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg2 pivot:(float)arg3;
- (id)_updatedAnchor:(id)arg1 forPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; double x13; struct CV3DSurfaceDetectionSemantics {} *x14; }*)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (long long)_worldAlignmentRotationForReferenceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 planeAlignment:(long long)arg2;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)detectionResult;
- (unsigned long long)detectionTypeMask;
- (id)initWithARPlaneData:(id)arg1;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(bool)arg3;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 detectionTypeMask:(unsigned long long)arg2 sceneUnderstandingEnabled:(bool)arg3 visionToRendering:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (bool)sceneUnderstandingEnabled;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionToRendering;

@end
