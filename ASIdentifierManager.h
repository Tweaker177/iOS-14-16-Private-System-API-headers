/* Generated by RuntimeBrowser
   Platform: iOS 14.2 (18B111) arm64
   Image: /System/Library/Frameworks/AdSupport.framework/AdSupport (1)
 */

@interface ASIdentifierManager : NSObject

@property (nonatomic, readonly) NSUUID *advertisingIdentifier;
@property (getter=isAdvertisingTrackingEnabled, nonatomic, readonly) bool advertisingTrackingEnabled;

+ (id)sharedManager;

- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (bool)isAdvertisingTrackingEnabled;

@end