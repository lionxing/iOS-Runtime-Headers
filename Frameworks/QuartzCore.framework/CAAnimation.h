/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property(copy) id animationDidStartBlock;
@property(copy) id animationDidStopBlock;
@property int animationID;
@property(copy) id completionBlock;
@property int _mapkit_ID;
@property(readonly) BOOL _mapkit_isScrollingAnimation;
@property(getter=isEnabled) BOOL enabled;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property(retain) id delegate;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(copy) NSString * fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (int (*)())CA_getterForType:(int)arg1;
+ (BOOL)CA_encodePropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)animation;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (BOOL)removedOnCompletion;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; unsigned int x7; unsigned int x8; }*)arg1 layer:(id)arg2;
- (void)setDefaultDuration:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (double)frameInterval;
- (id)valueForKeyPath:(id)arg1;
- (float)speed;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFillMode:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)valueForKey:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)beginTime;
- (void)setSpeed:(float)arg1;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (float)repeatCount;
- (BOOL)autoreverses;
- (id)timingFunction;
- (BOOL)isRemovedOnCompletion;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)fillMode;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (BOOL)_mapkit_isScrollingAnimation;
- (void)set_mapkit_ID:(int)arg1;
- (int)_mapkit_ID;
- (id)completionBlock;
- (void)setCompletionBlock:(id)arg1;
- (void)performCompletionBlock:(BOOL)arg1;
- (int)animationID;
- (void)setAnimationID:(int)arg1;
- (void)setAnimationDidStopBlock:(id)arg1;
- (id)animationDidStopBlock;
- (void)setAnimationDidStartBlock:(id)arg1;
- (id)animationDidStartBlock;

@end
