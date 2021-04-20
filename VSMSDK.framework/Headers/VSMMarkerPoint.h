//
//  VSMMarkerPoint.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 25..
//

#import <UIKit/UIKit.h>

#import "VSMMarkerBase.h"

typedef enum
{
    MarkerRender_SymbolOnly,
    MarkerRender_TextOnly,
    MarkerRender_All,
} MarkerRenderType;

typedef enum
{
    MarkerOverlapAllow_None,
    MarkerOverlapAllow_Text,
    MarkerOverlapAllow_Icon,
} MarkerOverlapAllowOption;

@class VSMMapPoint;

@interface VSMMarkerPointParams : VSMMarkerBaseParams

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** Text
 */
@property (nonatomic, copy) NSString* text;

/** Icon
 */
@property (nonatomic, strong) UIImage* icon;

/** Icon Width/Height
 */
@property (nonatomic, assign) CGSize iconSize;

/** Icon Anchor
 */
@property (nonatomic, assign) CGPoint iconAnchor;

/** Text offset
 */
@property (nonatomic, assign) CGPoint textOffset;

/** Marker Render Type
 */
@property (nonatomic, assign) MarkerRenderType markerRenderType;

/** Fill color
 */
@property (nonatomic, strong) UIColor* fillColor;

/** Stroke color
 */
@property (nonatomic, strong) UIColor* strokeColor;

/** Stroke Width
 */
@property (nonatomic, assign) float strokeWidth;

/** Font Size
 */
@property (nonatomic, assign) float fontSize;

/** rotation
 */
@property (nonatomic, assign) float rotation;

/** Cover ther poi
 */
@property (nonatomic, assign) BOOL coverPoi;

/** poi와 겹침시 ranking값
 */
@property (nonatomic, assign) int32_t grade;

@property (nonatomic, assign) BOOL animationEnabled;
@property (nonatomic, assign) BOOL overlapTestEnabled;
@property (nonatomic, assign) MarkerOverlapAllowOption overlapAllowOption;
@property (nonatomic, assign) BOOL blockIconScale;
@property (nonatomic, assign) BOOL blockLabelScale;

@end

/** Point Marker class
 */
@interface VSMMarkerPoint : VSMMarkerBase

/** Position
 */
@property (nonatomic, strong) VSMMapPoint* position;

/** Text
 */
@property (nonatomic, copy) NSString* text;

/** Icon
 */
@property (nonatomic, strong) UIImage* icon;

/** Icon Width/Height
 */
@property (nonatomic, assign) CGSize iconSize;

/** Icon Anchor
 */
@property (nonatomic, assign) CGPoint iconAnchor;

/** Text offset
 */
@property (nonatomic, assign) CGPoint textOffset;

/** Marker Render Type
 */
@property (nonatomic, assign) MarkerRenderType markerRenderType;

/** Fill color
 */
@property (nonatomic, strong) UIColor* fillColor;

/** Stroke color
 */
@property (nonatomic, strong) UIColor* strokeColor;

/** Stroke Width
 */
@property (nonatomic, assign) float strokeWidth;

/** Font Size
 */
@property (nonatomic, assign) float fontSize;

/** rotation
 */
@property (nonatomic, assign) float rotation;

/** constructor
 */
- (id)initWithID:(NSString*)markerID params:(VSMMarkerPointParams*)params;

/** Cover ther poi
 */
@property (nonatomic, assign) BOOL coverPoi;

/** poi와 겹침시 ranking값
 */
@property (nonatomic, assign) int32_t grade;

@property (nonatomic, assign) BOOL animationEnabled;
@property (nonatomic, assign) BOOL overlapTestEnabled;
@property (nonatomic, assign) MarkerOverlapAllowOption overlapAllowOption;
@property (nonatomic, assign) BOOL blockIconScale;
@property (nonatomic, assign) BOOL blockLabelScale;

@end
