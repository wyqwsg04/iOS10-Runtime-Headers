/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray;

@interface SKSoundSource : NSObject  {
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

@property bool shouldLoop;
@property double gain;
@property struct CGPoint { double x1; double x2; } position;
@property(readonly) bool isPlaying;
@property(readonly) int completedBufferCount;
@property(readonly) int queuedBufferCount;

+ (id)sourceWithBuffer:(id)arg1;
+ (id)source;

- (void)setShouldLoop:(bool)arg1;
- (bool)shouldLoop;
- (void)purgeCompletedBuffers;
- (int)queuedBufferCount;
- (int)completedBufferCount;
- (void)queueBuffer:(id)arg1;
- (void)play;
- (bool)isPlaying;
- (double)gain;
- (void)setGain:(double)arg1;
- (void)pause;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)stop;
- (struct CGPoint { double x1; double x2; })position;

@end