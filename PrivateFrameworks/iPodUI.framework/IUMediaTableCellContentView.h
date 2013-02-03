/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaTableCell, IUTableCellConfiguration, NSMutableArray;

@interface IUMediaTableCellContentView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _drawAsDisabled : 1;
    unsigned int _drawInAlternateStyle : 1;
    unsigned int _editing : 1;
    unsigned int _highlighted : 1;
    unsigned int _selected : 1;
    unsigned int _useSubviewLayout : 1;
    unsigned int _hideArtwork : 1;
    } _backgroundSize;
    IUMediaTableCell *_cell;
    NSMutableArray *_configManagedSubviews;
    IUTableCellConfiguration *_configuration;
    NSMutableArray *_subviews;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } artworkFrame;
@property struct CGSize { float x1; float x2; } backgroundSize;
@property IUMediaTableCell * cell;
@property(retain) IUTableCellConfiguration * configuration;
@property(getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisible;
@property BOOL drawAsDisabled;
@property BOOL drawInAlternateStyle;
@property BOOL hideArtwork;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;

- (void)_drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (id)_scriptingInfo;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (void)_updateSubviewBackgrounds;
- (BOOL)_useSubviewLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })artworkFrame;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (id)cell;
- (id)configuration;
- (void)dealloc;
- (BOOL)drawAsDisabled;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawInAlternateStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hideArtwork;
- (BOOL)isDeleteConfirmationVisible;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCell:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationNeedsDisplay;
- (void)setDeleteConfirmationVisible:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setDrawInAlternateStyle:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideArtwork:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end