/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocation, LBSGCell;

@interface LBSGDeviceLocation : PBCodable  {
    LBSGLocation *_location;
    LBSGCell *_cell;
}

@property(readonly) BOOL hasLocation;
@property(retain) LBSGLocation * location;
@property(readonly) BOOL hasCell;
@property(retain) LBSGCell * cell;


- (id)description;
- (void)dealloc;
- (BOOL)hasLocation;
- (void)setCell:(id)arg1;
- (id)cell;
- (id)dictionaryRepresentation;
- (id)location;
- (void)setLocation:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasCell;

@end
