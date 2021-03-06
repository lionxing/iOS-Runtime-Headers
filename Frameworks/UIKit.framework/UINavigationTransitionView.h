/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIWindow, UIView;

@interface UINavigationTransitionView : UIView <NSCoding> {
    id _delegate;
    UIView *_fromView;
    UIView *_toView;
    int _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    float _fromViewAlpha;
    unsigned int _isTransitioning : 1;
    unsigned int _popoverWillCleanUpNavigationTransition : 1;
    unsigned int _usesRoundedCorners : 1;
}

@property id delegate;
@property(readonly) UIView * fromView;
@property BOOL usesRoundedCorners;
@property(readonly) BOOL isTransitioning;
@property BOOL popoverWillCleanUpNavigationTransition;

+ (double)defaultDurationForTransition:(int)arg1;

- (void)dealloc;
- (void)_cleanupTransitionFromPopover;
- (BOOL)popoverWillCleanUpNavigationTransition;
- (void)setPopoverWillCleanUpNavigationTransition:(BOOL)arg1;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)_cleanupTransition;
- (void)_navigationTransitionDidStop;
- (BOOL)usesRoundedCorners;
- (void)setUsesRoundedCorners:(BOOL)arg1;
- (id)fromView;
- (BOOL)transition:(int)arg1 toView:(id)arg2;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (BOOL)isTransitioning;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
