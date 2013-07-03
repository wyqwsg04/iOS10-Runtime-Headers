/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIImage, CUIShapeEffectPreset, NSDictionary;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition  {
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}


- (BOOL)_generateReferenceImage;
- (id)referenceImage;
- (id)coreUIOptions;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_initializeCoreUIOptions:(id)arg1;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (id)effectPreset;
- (void)dealloc;

@end