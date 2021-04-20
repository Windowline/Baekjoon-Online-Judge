//
//  VSMMapViewDefine.h
//  TAModule
//
//  Created by 1001921 on 2015. 4. 5..
//
//

#import <UIKit/UIKit.h>

@class ObjectProperty;
@class VSMMapPoint;

enum : uint32_t {
    THEME_DAY = 1,
    THEME_NIGHT,
    THEME_USER_DEFINE
};

typedef NS_ENUM(NSUInteger, RoadCategoryLevel) {
    RoadCategory_L0 = 1 << 0 | 1 << 1,
    RoadCategory_L1 = 1 << 2 | 1 << 3 | 1 << 4 | 1 << 5 | 1 << 6,
    RoadCategory_L2 = 1 << 7 | 1 << 8 | 1 << 9 | 1 << 11 | 1 << 12,
    RoadCategory_SeaRoute = 1 << 10
};

typedef NS_ENUM(NSInteger, CameraAnimationReason) {
    CameraAnimationByUserGesture,
    CameraAnimationByAPI,
    CameraAnimationByInternal
};

typedef NS_ENUM(NSInteger, CameraAnimationFlags) {
    CameraAnimation_Level         = 0x00000001,
    CameraAnimation_Position      = 0x00000002,
    CameraAnimation_Angle         = 0x00000004,
    CameraAnimation_3dAngle       = 0x00000008,
    CameraAnimation_All           = 0x0000ffff
};

typedef NS_ENUM(NSInteger, BuildingShowType) {
    BuildingShowType_NONE = 0,
    BuildingShowType_2D,
    BuildingShowType_3D,
    BuildingShowType_2D3D,
};


// Map Mode
typedef enum
{
    MapTrackModeNormal,		    // 일반 지도 이동 모드
    MapTrackModeTrack,			// 현위치가 지도 중심
    MapTrackModeTrackAndHeadUp	// 현위치가 지도 중심 + 현위치 bearing이 지도 상단
}MapTrackMode;

typedef enum
{
    MapViewLevelChangeTypeZoomOut = 1,
    MapViewLevelChangeTypeZoomIn,
    MapViewLevelChangeTypeZoomCustom,
}MapViewLevelChangeType;

//typedef enum
//{
//    RouteTypeBasic = 0,
//    RouteTypePassed,
//    RouteTypeAlternative,
//}RouteType;

typedef enum  {
    ShowRouteFlagAccident          = 1<<0,
    ShowRouteFlagRouteLine         = 1<<1,
    ShowRouteFlagTBT               = 1<<2,
    //ShowRouteFlagSDI               = 1<<3,
    ShowRouteFlagFlag              = 1<<4,
    ShowRouteFlagOilInfo           = 1<<5,
    ShowRouteFlagMainRoadName      = 1<<6,
    ShowRouteFlagDestline          = 1<<7
}ShowRouteFlag;

typedef enum {
    BUILDING_FILTER_NONE = 0,   // No Filtering
    BUILDING_FILTER_L1,         // 중,소형 건물 2D rendering
    BUILDING_FILTER_L2          // 건물 밀집도에 따라 중,소형 건물 2D rendering
}VSMBuildingFilterMode;

typedef enum
{
    HitObjectTypeNone                 = -1,
    HitObjectTypePOI,
    HitObjectTypeMarker,
    HitObjectTypeOIL,
    HitObjectTypeTraffic,
    HitObjectTypeEVPOI,
    HitObjectTypeAlternativeRoute,
    HitObjectTypeFlag,
    HitObjectTypeRouteLine,
    HitObjectTypeUserDefine           = 99,
}HitObjectType;

typedef void (^HitTestCompleteBlock)(HitObjectType type,
                                     int objectID,
                                     VSMMapPoint* point,
                                     ObjectProperty* property,
                                     bool hitCallOut,
                                     bool *showCallout);

typedef enum {
    ObjectPOI       = 0,
    ObjectTraffic
} VSMObjectType;

/** Map View Touch deletage
 */
@protocol MapTouchDelegate <NSObject>

@optional
/** Map View Touch Began 이벤트
 */
- (void) mapViewTouchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;

/** Map View Touch Ended 이벤트
 */
- (void) mapViewTouchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;

/** Map View Touch Canceled 이벤트
 */
- (void) mapViewTouchesCancled:(NSSet *)touches withEvent:(UIEvent *)event;

/** Map View Long Press 이벤트
 */
- (void) mapViewLongPressed:(CGPoint)location;

/**
 * Single Tab event
 *
 * @param mapView 터치한 Map View
 */
- (void) mapViewDidSingleTap:(UIView *)mapView screenPoint:(CGPoint)screenPoint;

/**
 * Double Tab event
 *
 * @param mapView 터치한 Map View
 */
- (void) mapViewDidDoubleTap:(UIView *)mapView screenPoint:(CGPoint)screenPoint;

/**
 * Pinch In event
 *
 * @param mapView Pinch In Map View
 */
- (void) mapViewWillPinchIn:(UIView *)mapView;

/**
 * Pinch Out event
 *
 * @param mapView Pinch Out Map View
 */
- (void) mapViewWillPinchOut:(UIView *)mapView;

/**
 * Panning event
 *
 * @param mapView Panning Map View
 */
- (void) mapViewWillStartPan:(UIView *)mapView;

@end

/** Map View 관련 deletage
 */
@protocol MapDataDelegate <NSObject>

@optional
/** Map View Level 변경 이벤트
	@param value 변경된 level
 */
- (void) viewLevelChanged:(NSInteger)value;

/** 현위치 변경 이벤트
	@param point 변경된 위경도 좌표
 */
- (void) positionChanged:(VSMMapPoint*)point;

/**
 * 진북 기준 Angle 변경 이벤트
 *
 * @param angle 변경된 Angle
 */
- (void) viewAngleChanged:(float)angle;

/**
 * Tilt 변경 이벤트
 *
 * @param tiltAngle 변경된 Tilt
 */
- (void) viewTiltChanged:(float)tiltAngle;


/** Address 변경 이벤트
 @param text 변경된 주소
 */
- (void) addressTextChanged:(NSString*)text;

/** Screen Center 변경 이벤트
 @param worldX 변경된 월드 좌표
 @param worldY 변경된 월드 좌표
 */
- (void) screenCenterChanged:(NSInteger)worldX worldY:(NSInteger)worldY;

/** Api에 의한 카메라 이동 시작 이벤트
 */
- (void) cameraAnimationBegan;

/** Api에 의한 카메라 이동 종료 이벤트
 */
- (void) cameraAnimationEnded;

/** 사용자 터치 시작 이벤트
 */
- (void) userGestureBegan;

/** 사용자 터치 조작 종료 이벤트(추후 deaccelation이 발생할 수 있음)
 @param cameraAnimationEnabled 사용자 입력 이후 카메라 애니메이션이 작동여부
 */
- (void) userGestureEnded:(BOOL)cameraAnimationEnabled;

@end

@protocol HitObjectNativeDelegate <NSObject>

/** Hit Test 결과 이벤트
 @param objectID 선택한 객체의 아이디
 @param point 선택한 객체의 위경도 좌표
 @param property
 @param hitCallout
 @param showCallout
 */

-(void)onHitObject:(HitObjectType)type
          objectID:(int)objectID
             point:(VSMMapPoint*)point
          property:(ObjectProperty*)property
        hitCallout:(bool)hitCallout
       showCallout:(bool*)showCallout;
@end

@protocol MapViewResizeDelegate <NSObject>

@optional

/** Map view screen resize 변경 이벤트
 @param x
 @param y
 @param width
 @param height
*/
-(void)mapViewResized:(int)x
                    y:(int)y
                width:(int)width
               height:(int)height;

@end


@protocol PoiScaleChangeDelegate <NSObject>

-(void) poiScaleChanged:(float)poiScale;

@end
