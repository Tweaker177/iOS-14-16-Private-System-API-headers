* Generated by RuntimeBrowser
   Platform: iOS 15.7.2 (19H218) arm64
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay (1)
 */
//some cool methods for custom coloring, 
//and manipulating the time left before arrival in 
//CarPlay, to act further or closer than you are, 
//assuming the person looking at it isn't that familiar with the map view.
//Image generated using OCRuntimeBrowser iOS 15.7.2, with several tweaks installed already, 
//but few that should have any affect on the results of this header.
//Only have a couple tweaks I didn't personally write (besides libs and Frameworks)

@interface CPTravelEstimates : NSObject <NSSecureCoding> {
    NSMeasurement * _distanceRemaining;
    NSMeasurement * _distanceRemainingDisplay;
    double  _timeRemaining;
    unsigned long long  _timeRemainingColor;
}

@property (nonatomic, readonly, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly, copy) NSMeasurement *distanceRemainingDisplay;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic) unsigned long long timeRemainingColor;

+ (id)_greenColor;
+ (id)_orangeColor;
+ (id)_redColor;
+ (bool)supportsSecureCoding;
+ (id)timeRemainingColorForColor:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)distanceRemaining;
- (id)distanceRemainingDisplay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemaining:(id)arg1 distanceRemainingDisplay:(id)arg2 timeRemaining:(double)arg3;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;
- (void)setTimeRemainingColor:(unsigned long long)arg1;
- (double)timeRemaining;
- (unsigned long long)timeRemainingColor;

@end