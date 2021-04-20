//
//  VSMMarkerPolyline.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 25..
//

#import "VSMMarkerBase.h"

@interface LineDashStyleData : NSObject
@property (nonatomic, assign) NSInteger lineDash1;
@property (nonatomic, assign) NSInteger lineDash2;
@property (nonatomic, assign) NSInteger lineDash3;
@property (nonatomic, assign) NSInteger lineDash4;
@end

@class UIColor;
@class UIImage;
@class VSMMapPoint;

@interface VSMMarkerPolylineParams : VSMMarkerBaseParams

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

/** Line width
 */
@property (nonatomic, assign) float lineWidth;

/** Line Dash Style
 */
@property (nonatomic, copy) LineDashStyleData* lineDash;

/** Icon
 */
@property (nonatomic, strong) UIImage* icon;

@end

@interface VSMMarkerPolyline : VSMMarkerBase

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

/** Line width
 */
@property (nonatomic, assign) float lineWidth;

/** Line Dash Style
 */
@property (nonatomic, copy) LineDashStyleData* lineDash;

/** Icon
 */
@property (nonatomic, strong) UIImage* icon;

- (id)initWithID:(NSString*)markerID params:(VSMMarkerPolylineParams *)params;

@end
