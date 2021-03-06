/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAPhoneSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * phoneLogIds;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)phoneLogIds;
- (void)setPhoneLogIds:(id)arg1;
- (id)encodedClassName;

@end
