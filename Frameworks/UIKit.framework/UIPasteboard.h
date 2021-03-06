/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIImage, UIColor, NSURL;

@interface UIPasteboard : NSObject  {
    NSString *_name;
}

@property(copy) NSString * string;
@property(copy) NSArray * strings;
@property(copy) NSURL * URL;
@property(copy) NSArray * URLs;
@property(copy) UIImage * image;
@property(copy) NSArray * images;
@property(copy) UIColor * color;
@property(copy) NSArray * colors;
@property(readonly) NSString * name;
@property(getter=isPersistent) BOOL persistent;
@property(readonly) int changeCount;
@property(readonly) int numberOfItems;
@property(copy) NSArray * items;

+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)_printPasteboard;
+ (id)_findPasteboard;
+ (id)generalPasteboard;

- (id)string;
- (void)setString:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)colors;
- (void)setColors:(id)arg1;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (void)setURL:(id)arg1;
- (id)strings;
- (void)setStrings:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (BOOL)isPersistent;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)pasteboardTypes;
- (void)addItems:(id)arg1;
- (void)_pasteboardChanged:(id)arg1;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (id)_initWithName:(id)arg1 system:(BOOL)arg2 create:(BOOL)arg3;
- (void)setImages:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (int)numberOfItems;
- (int)changeCount;
- (id)URL;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (id)valueForPasteboardType:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)image;
- (void)setItems:(id)arg1;
- (id)items;
- (id)name;
- (id)images;
- (void)setImage:(id)arg1;
- (void)pl_setAssets:(id)arg1;
- (id)pl_assetsInPhotoLibrary:(id)arg1;
- (BOOL)pl_containsAssets;
- (void)pl_setAsset:(id)arg1;

@end
