//
//  VSMMarker.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 25..
//

#import <Foundation/Foundation.h>

enum : uint32_t {
    RENDERING_ORDER_BEFORE_2D           = 0,
    RENDERING_ORDER_AFTER_2D            = 1,
    RENDERING_ORDER_BEFORE_3D           = 2,
    RENDERING_ORDER_AFTER_3D            = 3,
    RENDERING_ORDER_BEFORE_POI          = 4,
    RENDERING_ORDER_AFTER_POI           = 5,
    RENDERING_ORDER_BEFORE_POINT_MARKER = 6,
    RENDERING_ORDER_POINT_MARKER        = 7,
    RENDERING_ORDER_AFTER_POINT_MARKER  = 8
};

/** Marker Base Param Class
 */
@interface VSMMarkerBaseParams : NSObject

/** Visible 여부
 */
@property (nonatomic, assign) BOOL visible;

/** Touch 지원 여부
 */
@property (nonatomic, assign) BOOL touchable;

/** Show priority
 */
@property (nonatomic, assign) float showPriority;

@property (nonatomic, assign) uint32_t renderOrder;

@property (nonatomic, assign) uint32_t minViewLevel;

@property (nonatomic, assign) uint32_t maxViewLevel;

@end

/** Marker Base Class
 */
@interface VSMMarkerBase : NSObject

/** Marker ID generation method
 */
+ (NSString*)getAutoID;

/** constructor
 */
- (id)initWithID:(NSString*)markerID params:(VSMMarkerBaseParams*)params;

/** Marker ID
 */
@property (nonatomic, copy, readonly) NSString* markerID;

/** internal id.
 */
@property (nonatomic, assign, readonly) NSUInteger objectId;

/** You can use the tag to associate an Object with this marker.
 * To prevent memory leaks, you should call setTag(null).
 */
@property (nonatomic, strong) NSObject* tag;

/** Visible 여부
 */
@property (nonatomic, assign) BOOL visible;

/** Touch 지원 여부
 */
@property (nonatomic, assign) BOOL touchable;

/** Show priority (Marker간 z-order)
 */
@property (nonatomic, assign) float showPriority;

@property (nonatomic, assign) uint32_t renderOrder;

@property (nonatomic, assign, readonly) uint32_t minViewLevel;

@property (nonatomic, assign, readonly) uint32_t maxViewLevel;

-(void)setViewLevel:(NSUInteger)minViewLevel maxViewLevel:(NSUInteger)maxViewLevel;

+(NSUInteger) minViewLevel;
+(NSUInteger) maxViewLevel;

@end
