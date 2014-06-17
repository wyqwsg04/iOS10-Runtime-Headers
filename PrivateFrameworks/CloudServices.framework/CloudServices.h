/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@class NSObject<OS_dispatch_queue>;

@interface CloudServices : NSObject  {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
}

@property NSObject<OS_dispatch_queue> * replyQueue;

+ (id)_CreateLakituConnection;

- (id)verifyCertificateWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)listSMSTargetsWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)deleteRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)updateRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)recoverRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)storeRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)changeSMSTargetWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)replyQueue;
- (void)setReplyQueue:(id)arg1;
- (void).cxx_destruct;

@end