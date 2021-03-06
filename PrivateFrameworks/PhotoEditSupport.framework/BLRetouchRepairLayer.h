/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class BLImagePatchList, NSMutableData, UIImage;

@interface BLRetouchRepairLayer : BLRetouchEffectLayer {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _brushStrokeRect;
    BOOL _isNotFinalStroke;
    int _repairAnalysisBufferHeight;
    int _repairAnalysisBufferRowBytes;
    int _repairAnalysisBufferWidth;
    UIImage *_repairAnalysisImage;
    struct CGContext { } *_repairAnalysisImageContextRef;
    NSMutableData *_repairAnalysisImageRasterData;
    BLImagePatchList *_repairPatchList;
    UIImage *_repairSourceImage;
    int _totalStrokeArea;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } brushStrokeRect;
@property(retain) UIImage * repairAnalysisImage;
@property(retain) BLImagePatchList * repairPatchList;
@property(retain) UIImage * repairSourceImage;
@property int totalStrokeArea;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })brushStrokeRect;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawBrushAtLocation:(struct CGPoint { float x1; float x2; })arg1 opacity:(float)arg2 erase:(BOOL)arg3 magicEdges:(BOOL)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;
- (id)init;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andScale:(float)arg3;
- (id)repairAnalysisImage;
- (id)repairPatchList;
- (id)repairSourceImage;
- (void)setBrushStrokeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBrushStrokes:(id)arg1;
- (void)setRepairAnalysisImage:(id)arg1;
- (void)setRepairPatchList:(id)arg1;
- (void)setRepairSourceImage:(id)arg1;
- (void)setTotalStrokeArea:(int)arg1;
- (BOOL)solidBrush;
- (void)strokeDidFinish;
- (int)totalStrokeArea;

@end
