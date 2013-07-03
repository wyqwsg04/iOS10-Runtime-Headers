/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton  {
    unsigned int _isHighlighted : 1;
    unsigned int _isSelected : 1;
}

+ (id)minusCenterImage;
+ (id)plusImage;
+ (float)defaultWidth;
+ (id)minusImage;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (BOOL)isRotated;
- (void)toggleRotate:(BOOL)arg1;
- (BOOL)isHiding;
- (void)setHiding:(BOOL)arg1;
- (id)initWithRemoveControl:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isRotating;

@end