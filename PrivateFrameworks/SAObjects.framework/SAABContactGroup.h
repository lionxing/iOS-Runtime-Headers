/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject  {
}

@property(copy) NSString * groupName;
@property(retain) SASource * groupSource;

+ (id)contactGroup;
+ (id)contactGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (id)groupSource;
- (void)setGroupSource:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;

@end
