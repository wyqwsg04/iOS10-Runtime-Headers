/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController {
    UIActivityIndicatorView * __activityIndicatorView;
    bool  __showsActivityIndicator;
    unsigned long long  _feedbackCollectionType;
}

@property (nonatomic, readonly) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic) bool _showsActivityIndicator;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (void)_dislikedIt:(id)arg1;
- (void)_doFileRadar:(id)arg1;
- (void)_fileRadar:(id)arg1;
- (void)_likedIt:(id)arg1;
- (void)_provideFeedback:(id)arg1;
- (bool)_showsActivityIndicator;
- (id)initWithCollectionType:(unsigned long long)arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)set_showsActivityIndicator:(bool)arg1;
- (void)viewDidLoad;

@end