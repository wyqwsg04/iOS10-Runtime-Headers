/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewServiceReplyAwaitingTrampoline, NSLock;

@interface _UIViewServiceReplyAwaitingProxy : NSObject <_UIViewServiceProxy_ReplyAwaiting> {
    id _target;
    _UIViewServiceReplyAwaitingTrampoline *_trampoline;
    NSLock *_trampolineLock;
}

+ (id)proxyWithTarget:(id)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (id)_awaitingReply;

@end