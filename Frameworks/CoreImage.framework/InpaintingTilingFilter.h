/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface InpaintingTilingFilter : NSObject

+ (double)computeDistanceMultiplierForMask:(id)arg1 andTileSize:(int)arg2;
+ (id)computeTileCentersForNarrowDiagonalMask:(id)arg1 tileSize:(int)arg2 maxBaseDistanceBetweenPoints:(int)arg3 maxRelativeMaskAreaSize:(float)arg4;
+ (void)computeTileSize:(int*)arg1 andMaxDistanceBetweenTiles:(double*)arg2 forExpandedMaskBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)initializeBoundaryPreservingTile;
+ (bool)isMaskNarrowDiagonal:(id)arg1 maskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxDiagonalMaskEdgeSize:(int)arg4 maxRelativeMaskAreaSize:(float)arg5;
+ (bool)isMaskRelativeAreaTooLargeForTiling:(id)arg1 maskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 andMaxRelativeAreaSize:(double)arg4;
+ (bool)isMaskSmallOrElongated:(id)arg1 maskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxElogatedMaskEdgeSize:(int)arg4;
+ (id)performInpaintingTilingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;

@end
