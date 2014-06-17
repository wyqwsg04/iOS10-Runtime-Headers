/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class UIView, NSBundle, _UICAPackageView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper  {
    NSBundle *_loadedBundle;
    _UICAPackageView *_packageView;
    UIView *_rootView;
}

+ (id)thumbnailImageForOptions:(id)arg1;
+ (id)presetWallpaperOptions;
+ (id)identifier;

- (void)setWallpaperOptions:(id)arg1;
- (void)_loadView;
- (void)_unloadView;
- (void)dealloc;
- (void)setAnimating:(bool)arg1;
- (void)layoutSubviews;

@end