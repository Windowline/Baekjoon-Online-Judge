#import "VSMMarkerBase.h"

NS_ASSUME_NONNULL_BEGIN

@class UIColor;
@class UIImage;

@interface VSMRouteLineStyle : NSObject
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float outlineWidth;
@property (nonatomic, strong) UIColor* colorBasic;
@property (nonatomic, strong) UIColor* colorPassed;
@property (nonatomic, strong) NSArray<UIColor*>* colorCongestion;   // 0: no data, 1: good, 2: slow, 3: bad
@property (nonatomic, strong) UIColor* outlineColorBasic;
@property (nonatomic, strong) UIColor* outlineColorPassed;
@property (nonatomic, strong) NSArray<UIColor*>* outlineColorCongestion;   // 0: no data, 1: good, 2: slow, 3: bad
@property (nonatomic, strong) UIColor* oppositeColor;
@property (nonatomic, strong) UIColor* oppositeOutlineColor;
@end

@interface VSMRouteTurnArrowStyle : NSObject
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float outlineWidth;
@property (nonatomic, assign) float length;
@property (nonatomic, assign) float headSize;
@property (nonatomic, strong) UIColor* color;
@property (nonatomic, strong) UIColor* outlineColor;
@property (nonatomic, assign) int32_t maxCountShow;
@end

@interface VSMRouteDirectionIndicatorStyle : NSObject
@property (nonatomic, assign) float size;
@property (nonatomic, assign) float interval;
@property (nonatomic, assign) float alpha;
@property (nonatomic, strong) UIImage* image;
@end

@interface VSMMarkerRouteLineParams : VSMMarkerBaseParams

@property (nonatomic, strong) NSData* routeData;
@property (nonatomic, assign) BOOL showTurnArrow;
@property (nonatomic, assign) BOOL showDirectionIndicator;
@property (nonatomic, assign) BOOL showTraffic;
@property (nonatomic, assign) float progress;

@property (nonatomic, strong) VSMRouteLineStyle* lineStyle;
@property (nonatomic, strong) VSMRouteTurnArrowStyle* turnArrowStyle;
@property (nonatomic, strong) VSMRouteDirectionIndicatorStyle* directionIndicatorStyle;

@end

@interface VSMMarkerRouteLine : VSMMarkerBase

@property (nonatomic, assign) BOOL showTurnArrow;
@property (nonatomic, assign) BOOL showDirectionIndicator;
@property (nonatomic, assign) BOOL showTraffic;
@property (nonatomic, assign) float progress;

@property (nonatomic, strong) VSMRouteLineStyle* lineStyle;
@property (nonatomic, strong) VSMRouteTurnArrowStyle* turnArrowStyle;
@property (nonatomic, strong) VSMRouteDirectionIndicatorStyle* directionIndicatorStyle;

- (instancetype)initWithID:(NSString*)markerID params:(VSMMarkerRouteLineParams *)params;

- (void)setRouteData:(NSData *)routeData;

@end

NS_ASSUME_NONNULL_END
