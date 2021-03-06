/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMAbstractView, NSString, DOMMessagePort;

@interface DOMMessageEvent : DOMEvent  {
}

@property(retain,readonly) NSString * data;
@property(copy,readonly) NSString * origin;
@property(copy,readonly) NSString * lastEventId;
@property(retain,readonly) DOMAbstractView * source;
@property(retain,readonly) DOMMessagePort * messagePort;


- (id)source;
- (id)origin;
- (id)data;
- (id)lastEventId;
- (id)messagePort;
- (void)initMessageEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;

@end
