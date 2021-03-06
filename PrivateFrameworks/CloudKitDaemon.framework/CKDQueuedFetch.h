/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedFetch : NSObject {
    bool  _allowsBackgroundNetworking;
    bool  _allowsCellularAccess;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSMutableDictionary * _completionHandlersByItemID;
    CKDClientContext * _context;
    NSString * _deviceIdentifier;
    bool  _isFinished;
    unsigned long long  _lastCompletionHandlerCount;
    NSDate * _lastRequestDate;
    NSOperationQueue * _operationQueue;
    CKDClientProxy * _proxy;
    long long  _qos;
    long long  _scope;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSDate * _startDate;
    bool  _useEncryption;
    long long  _usesBackgroundSession;
}

@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSMutableDictionary *completionHandlersByItemID;
@property (nonatomic) CKDClientContext *context;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) bool isFinished;
@property (nonatomic) unsigned long long lastCompletionHandlerCount;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) CKDClientProxy *proxy;
@property (nonatomic) long long qos;
@property (nonatomic) long long scope;
@property (nonatomic, readonly) bool shouldStart;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) bool useEncryption;
@property (nonatomic) long long usesBackgroundSession;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addCallbackForItemWithID:(id)arg1 callback:(id /* block */)arg2;
- (id)allItemIDs;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)callbackQueue;
- (id)callbacksForItemWithID:(id)arg1;
- (bool)canBeUsedForOperation:(id)arg1;
- (id /* block */)completionHandler;
- (id)completionHandlersByItemID;
- (id)context;
- (id)description;
- (id)deviceIdentifier;
- (id)fetchOperationForItemIDs:(id)arg1;
- (void)finishFetchOperationWithError:(id)arg1;
- (id)init;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (bool)isFinished;
- (unsigned long long)lastCompletionHandlerCount;
- (id)lastRequestDate;
- (int)numberOfCallbacks;
- (id)operationInfo;
- (Class)operationInfoClass;
- (id)operationQueue;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)proxy;
- (long long)qos;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (long long)scope;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlersByItemID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setLastCompletionHandlerCount:(unsigned long long)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setQos:(long long)arg1;
- (void)setScope:(long long)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUseEncryption:(bool)arg1;
- (void)setUsesBackgroundSession:(long long)arg1;
- (bool)shouldStart;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (bool)useEncryption;
- (long long)usesBackgroundSession;

@end
