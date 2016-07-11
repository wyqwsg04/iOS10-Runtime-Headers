/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityEventMessage : OSActivityEvent {
    NSMutableArray * _argumentData;
    NSData * _bufferData;
    NSData * _bufferPrivateData;
}

@property (retain) NSMutableArray *argumentData;
@property (readonly) NSMutableArray *arguments;
@property (retain) NSData *bufferData;
@property (retain) NSData *bufferPrivateData;
@property (readonly, copy) NSString *format;

- (void).cxx_destruct;
- (id)argumentData;
- (id)arguments;
- (id)bufferData;
- (id)bufferPrivateData;
- (void)fillEventData:(const char *)arg1 length:(unsigned long long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long long)arg4;
- (id)format;
- (void)setArgumentData:(id)arg1;
- (void)setBufferData:(id)arg1;
- (void)setBufferPrivateData:(id)arg1;

@end