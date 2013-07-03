/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString;

@interface PKMediaName : NSObject  {
    NSString *_mediaName;
    NSString *_mediaClass;
    NSString *_baseName;
    NSString *_widthStr;
    int _units;
    double _widthInUnits;
    double _heightInUnits;
    double _conversionFactor;
}

@property(retain) NSString * mediaName;
@property(retain) NSString * mediaClass;
@property(retain) NSString * baseName;
@property(readonly) BOOL isRoll;
@property double widthInUnits;
@property double heightInUnits;
@property(retain) NSString * widthStr;
@property(readonly) double width;
@property(readonly) double height;
@property(readonly) NSString * unitStr;
@property int units;
@property double conversionFactor;

+ (id)pkMediaNameWithString:(id)arg1;

- (double)height;
- (double)width;
- (id)widthStr;
- (id)mediaName;
- (double)conversionFactor;
- (id)mediaClass;
- (int)units;
- (void)setUnits:(int)arg1;
- (void)setHeightInUnits:(double)arg1;
- (void)setWidthInUnits:(double)arg1;
- (void)setConversionFactor:(double)arg1;
- (void)setWidthStr:(id)arg1;
- (void)setBaseName:(id)arg1;
- (void)setMediaClass:(id)arg1;
- (void)parseMediaName:(id)arg1;
- (void)setMediaName:(id)arg1;
- (double)heightInUnits;
- (double)widthInUnits;
- (id)unitStr;
- (id)baseName;
- (BOOL)isRoll;
- (id)initWithString:(id)arg1;
- (void)dealloc;

@end