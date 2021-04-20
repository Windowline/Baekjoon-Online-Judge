//
//  VSMMarkerCircle.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 25..
//

#import "VSMMarkerBase.h"

@class VSMMapPoint;
@class UIColor;

@interface VSMMarkerCircleParams : VSMMarkerBaseParams

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** radius
 */
@property (nonatomic, assign) float radius;

/** visibleRadius
 */
@property (nonatomic, assign) BOOL visibleRadius;

/** Fill color
 */
@property (nonatomic, strong) UIColor* fillColor;

/** Stroke color
 */
@property (nonatomic, strong) UIColor* strokeColor;

/** Stroke Width
 */
@property (nonatomic, assign) float strokeWidth;

@end

@interface VSMMarkerCircle : VSMMarkerBase

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** radius
 */
@property (nonatomic, assign) float radius;

/** visibleRadius
 */
@property (nonatomic, assign) BOOL visibleRadius;

/** Fill color
 */
@property (nonatomic, strong) UIColor* fillColor;

/** Stroke color
 */
@property (nonatomic, strong) UIColor* strokeColor;

/** Stroke Width
 */
@property (nonatomic, assign) float strokeWidth;

/** constructor
 */
- (id)initWithID:(NSString*)markerID params:(VSMMarkerCircleParams*)params;

@end
