/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack  {
    AVCompositionTrackInternal *_priv;
}

@property(readonly) NSArray * segments;


- (void)dealloc;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void)finalize;
- (id)segments;

@end
