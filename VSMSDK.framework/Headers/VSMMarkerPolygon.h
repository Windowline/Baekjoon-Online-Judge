//
//  VSMMarkerPolygon.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 25..
//

#import "VSMMarkerBase.h"

@class UIColor;
@class VSMMapPoint;

@interface VSMMarkerPolygonParams : VSMMarkerBaseParams

/** Points
 */
@property (nonatomic, strong) NSArray<VSMMapPoint*>* points;

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

@interface VSMMarkerPolygon : VSMMarkerBase

/** Points
 */
@property (nonatomic, strong) NSArray<VSMMapPoint*>* points;

/** Fill color
 */
@property (nonatomic, strong) UIColor* fillColor;

/** Stroke color
 */
@property (nonatomic, strong) UIColor* strokeColor;

/** Stroke Width
 */
@property (nonatomic, assign) float strokeWidth;

- (id)initWithID:(NSString*)markerID params:(VSMMarkerPolygonParams *)params;

@end
