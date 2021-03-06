/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue *mLegendGeometryFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } legendModelGeometryFrame;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (void)clearAll;
- (void)clearLayoutSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendModelGeometryFrame;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (float)p_legendModelWidth;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForRenderingLabel:(unsigned int)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4 outElementSize:(struct CGSize { float x1; float x2; }*)arg5 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg6;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (void)resetLayoutSize;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingBadge:(unsigned int)arg1 cellType:(int)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 cellType:(int)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 cellType:(int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabel:(unsigned int)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 outElementSize:(struct CGSize { float x1; float x2; }*)arg5 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg6;
- (void)updateLegendGeometryFrameFromLegendModelCache;

@end
