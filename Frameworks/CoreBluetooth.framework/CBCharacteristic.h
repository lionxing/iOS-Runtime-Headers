/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBUUID, NSArray, NSData, CBService;

@interface CBCharacteristic : NSObject  {
    CBService *_service;
    CBUUID *_UUID;
    unsigned int _properties;
    NSData *_value;
    NSArray *_descriptors;
    BOOL _isBroadcasted;
    BOOL _isNotifying;
}

@property(readonly) BOOL isNotifying;
@property(readonly) BOOL isBroadcasted;
@property(retain) NSArray * descriptors;
@property(retain) NSData * value;
@property(readonly) unsigned int properties;
@property(readonly) CBUUID * UUID;
@property(readonly) CBService * service;


- (id)service;
- (BOOL)isNotifying;
- (BOOL)isBroadcasted;
- (id)descriptors;
- (void)setDescriptors:(id)arg1;
- (unsigned int)properties;
- (id)value;
- (void)setValue:(id)arg1;
- (id)UUID;

@end
