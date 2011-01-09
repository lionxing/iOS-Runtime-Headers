/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetWriterInputWritingHelper;



@interface AVAssetWriterInputMediaDataRequester : NSObject 
{
    AVAssetWriterInputWritingHelper *_writingHelper;
    struct dispatch_queue_s { } *_requestQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestBlock;

}

@property(readonly) ? *requestBlock;
@property(readonly) dispatch_queue_s *requestQueue;


- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)finalize;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)initWithAssetWriterInputWritingHelper:(id)arg1 requestQueue:(struct dispatch_queue_s { }*)arg2 requestBlock:(id)arg3;
- (id)requestBlock;
- (struct dispatch_queue_s { }*)requestQueue;

@end