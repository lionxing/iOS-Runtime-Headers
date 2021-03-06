/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableArray, UIImage;

@interface TLVibrationRecorderProgressView : UIProgressView  {
    double _currentTimeInterval;
    double _maximumTimeInterval;
    UIImage *_resizableDotImage;
    struct CGSize { 
        float width; 
        float height; 
    } _dotSize;
    struct CGSize { 
        float width; 
        float height; 
    } _dotInsets;
    NSMutableArray *_dots;
    id _dotForCurrentVibrationComponent;
    double _currentVibrationComponentDidBeginTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    unsigned int _roundedCornersCompensationDelayMode;
}

@property double currentTimeInterval;
@property unsigned int roundedCornersCompensationDelayMode;


- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (void)setRoundedCornersCompensationDelayMode:(unsigned int)arg1;
- (unsigned int)roundedCornersCompensationDelayMode;
- (void)setCurrentTimeInterval:(double)arg1;
- (double)currentTimeInterval;
- (id)initWithProgressViewStyle:(int)arg1 maximumTimeInterval:(double)arg2;

@end
