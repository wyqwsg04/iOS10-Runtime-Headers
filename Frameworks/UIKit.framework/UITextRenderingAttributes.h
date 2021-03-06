/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRenderingAttributes : NSObject <NSCopying> {
    double  _actualFontSize;
    double  _actualTrackingAdjustment;
    long long  _alignment;
    long long  _baselineAdjustment;
    bool  _drawUnderline;
    UIFont * _font;
    bool  _includeEmoji;
    long long  _lineBreakMode;
    double  _lineSpacing;
    double  _minimumFontSize;
    double  _minimumTrackingAdjustment;
    double  _trackingAdjustment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _truncationRect;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
