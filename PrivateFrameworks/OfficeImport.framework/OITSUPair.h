/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    id mFirst;
    id mSecond;
}

+ (id)pairWithPair:(id)arg1;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (id)pair;

- (void)p_SetSecond:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (id)initWithPair:(id)arg1;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)init;
- (id)second;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end