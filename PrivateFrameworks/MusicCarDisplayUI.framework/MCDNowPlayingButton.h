/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingButton : UIButton {
    CALayer * _focusColorLayer;
    double  _height;
    bool  _hidesLeadingBorder;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutFrameSize;
    CALayer * _leadingBorder;
}

@property (nonatomic) double height;
@property (nonatomic) bool hidesLeadingBorder;

+ (id)buttonWithHeight:(double)arg1;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)focusedViewDidChange;
- (double)height;
- (bool)hidesLeadingBorder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeight:(double)arg1;
- (void)setHidesLeadingBorder:(bool)arg1;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
