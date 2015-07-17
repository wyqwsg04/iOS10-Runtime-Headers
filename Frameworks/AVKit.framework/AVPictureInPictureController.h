/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureController : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate> {
    <AVPictureInPictureControllerDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureControllerWillStartPictureInPicture : 1; 
        unsigned int pictureInPictureControllerDidStartPictureInPicture : 1; 
        unsigned int pictureInPictureControllerFailedToStartPictureInPicture_withError : 1; 
        unsigned int pictureInPictureControllerWillStopPictureInPicture : 1; 
        unsigned int pictureInPictureControllerDidStopPictureInPicture : 1; 
        unsigned int pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1; 
    }  _delegateRespondsTo;
    NSObject<OS_dispatch_source> * _fullScreenCheckTimer;
    unsigned int  _isFullScreen;
    unsigned int  _isPlaying;
    unsigned int  _observePlayerLayerPlayer;
    PGPictureInPictureProxy * _pictureInPictureProxy;
    AVPictureInPictureViewController * _pictureInPictureViewController;
    AVPlayerController * _playerController;
    AVPlayerControllerTimeResolver * _timeResolver;
    CALayer<AVVideoLayer> * _videoLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPictureInPictureActive, nonatomic, readonly) BOOL pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) BOOL pictureInPicturePossible;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) BOOL pictureInPictureSuspended;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)isPictureInPictureSupported;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;

- (void).cxx_destruct;
- (void)_checkIsFullScreenAndUpdateShouldStartPictureInPictureEnteringBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_playerLayerVideoRectInScreen;
- (void)_updatePlaybackProgress;
- (void)_updateShouldStartPictureInPictureEnteringBackground;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithVideoLayer:(id)arg1;
- (BOOL)isPictureInPictureActive;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureSuspended;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(int)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(int)arg2 reason:(int)arg3;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(int)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(int)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(int)arg2 reason:(int)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;
- (id)playerController;
- (id)playerLayer;
- (void)playerLayerLayoutDidChange;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;

@end