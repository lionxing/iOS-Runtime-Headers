/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVCamera, NSMutableArray, NSArray;

@interface IMAVCameraController : NSObject  {
    NSMutableArray *_cameras;
    struct dispatch_queue_s { } *_queue;
}

@property(readonly) NSArray * cameras;
@property(retain) IMAVCamera * currentCamera;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)currentCamera;
- (void)_loadSavedCamera;
- (void)_rebuildCameraList;
- (void)setCurrentCamera:(id)arg1;
- (id)cameras;

@end
