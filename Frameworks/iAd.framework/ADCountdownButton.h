/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCountdownButton : UIControl {
    UIImageView *_backgroundView;
    BOOL _dimmed;
    UIImage *_dimmedIconImage;
    UIImage *_iconImage;
    UIImageView *_iconView;
    CAShapeLayer *_outlineProgressLayer;
    UIView *_outlineView;
}

@property (nonatomic, retain) UIImageView *backgroundView;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, retain) UIImage *dimmedIconImage;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) CAShapeLayer *outlineProgressLayer;
@property (nonatomic, retain) UIView *outlineView;

+ (id)_closeBoxImage;
+ (id)_inactiveCloseBoxImage;

- (unsigned long long)accessibilityTraits;
- (id)backgroundView;
- (double)countdownProgress;
- (void)dealloc;
- (BOOL)dimmed;
- (id)dimmedIconImage;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)iconImage;
- (id)iconView;
- (id)init;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (id)outlineProgressLayer;
- (id)outlineView;
- (void)setBackgroundView:(id)arg1;
- (void)setCountdownProgress:(double)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDimmedIconImage:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setOutlineProgressLayer:(id)arg1;
- (void)setOutlineView:(id)arg1;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(id /* block */)arg2;

@end
