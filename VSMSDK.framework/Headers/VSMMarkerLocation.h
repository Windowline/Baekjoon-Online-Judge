#import <UIKit/UIKit.h>

#import "VSMMarkerBase.h"

NS_ASSUME_NONNULL_BEGIN

@class VSMMapPoint;

@interface VSMMarkerLocationIcon : NSObject

/** Icon
 */
@property (nonatomic, strong, nullable) UIImage* icon;

/** Icon3D
 */
@property (nonatomic, strong, nullable) UIImage* icon3D;

@end

@interface VSMMarkerLocationParams : VSMMarkerBaseParams

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** Icon
 */
@property (nonatomic, strong) VSMMarkerLocationIcon *icon;

/** Icon Width/Height
 */
@property (nonatomic, assign) CGSize iconSize;

/** bearing
 */
@property (nonatomic, assign) float bearing;

@end

/** Location Marker class
 */
@interface VSMMarkerLocation : VSMMarkerBase

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** Icon
 */
@property (nonatomic, strong) VSMMarkerLocationIcon *icon;

/** Icon Width/Height
 */
@property (nonatomic, assign) CGSize iconSize;

/** bearing
 */
@property (nonatomic, assign) float bearing;

/** constructor
 */
- (id)initWithID:(NSString*)markerID params:(VSMMarkerLocationParams*)params;

@end

NS_ASSUME_NONNULL_END
