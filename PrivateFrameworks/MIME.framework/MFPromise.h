/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPromise : NSObject {
    MFFuture * _future;
}

@property (readonly) MFFuture *future;

+ (id)promise;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)future;
- (id)init;
- (bool)respondsToSelector:(SEL)arg1;

@end
