//
//  VSMMapView.h
//  Tmap4
//
//  Created by flintlock on 2014. 10. 27..
//  Copyright (c) 2014년 M&Service. All rights reserved.
//


#import <UIKit/UIKit.h>
#include <AvailabilityMacros.h>

#import "VSMMapViewDefine.h"
#import "VSMMarkerBase.h"
#import "VSMMarkerManager.h"
#import "VSMTransformObject.h"

@class VSMHandle;
@class VSMLocationManager;
@class VSMMapPoint;
@class MeterPoint;

@protocol OnWillRenderFrameDelegate <NSObject>
-(void)onWillRenderFrame;
@end

/** Map 출력을 담당하는 Class
 */
@interface VSMMapView : UIView <HitObjectNativeDelegate>

/** 화면 사이즈 변경 이벤트
 */
@property (atomic, weak) id<MapViewResizeDelegate> _Nullable MapViewResizeDelegate;

/** Touch 동작 이벤트
 */
@property (nonatomic, weak) id<MapTouchDelegate> mapTouchDelegate;

/** Map 관련 이벤트
 */
@property (nonatomic, weak) id<MapDataDelegate> mapDataDelegate;

/** POI Scale 변경 이벤트
*/
@property (nonatomic, weak) id<PoiScaleChangeDelegate> poiScaleChangeDelegate;

/** Map Title Angle
 */
@property (nonatomic, assign, readonly, getter=getTiltAngle) CGFloat tiltAngle;

/** Map Rotate Angle
 */
@property (nonatomic, assign, readonly, getter=getRotationAngle) CGFloat rotateAngle;

/** Map Move Mode
 */
@property (nonatomic, assign) MapTrackMode trackMode;

/** 터치 지원 여부 (default: YES)
 */
@property (nonatomic, assign) bool enableTouch;

/** POI 출력 여부 (default: YES)
 */
@property (nonatomic, assign) bool showPOI;

/** 빌딩 출력 높이 (0.0 ~ 1.0)
 */
@property (nonatomic, assign) float buildingHeight;

/** Building Pattern 적용 여부 (default: NO)
 */
@property (nonatomic, assign) bool enableBuildingPattern;

/** 지하철 출력 여부 (default: YES)
 */
@property (nonatomic, assign) bool enableRenderSubwayLines;

/** 지하철/고속철도/경전철/일반철도/인천공항 노선 표출 출력 여부 (default: YES)
 */
@property (nonatomic, assign) bool enableRenderRailroads;

/** Building Filter 설정
 */
@property (nonatomic, assign) VSMBuildingFilterMode buildingFilterMode;

/** Traffic Info 지도 에 출력
 */
@property (nonatomic, assign) bool showTrafficInfoOnMap;

/** 유고/돌발 정보를 지도에 출력
 */
@property (nonatomic, assign) bool showAccidentInfo;

/** Screen width
 */
@property (nonatomic, assign, readonly) GLint currentWidth;

/** Screen height
 */
@property (nonatomic, assign, readonly) GLint currentHeight;

/** Screen에서 Position icon 이 출력될 center 영역 (0, 0) ~ (1, 1)
 */
@property (nonatomic) CGPoint screenCenter;

/** Render millisecond time (default 30frame/1초)
 */
@property (nonatomic, assign) NSInteger renderTime;

@property (nonatomic, assign) NSInteger densityDpi DEPRECATED_MSG_ATTRIBUTE("use customDensityDpi instead.");

@property (nonatomic, assign) NSInteger customDensityDpi;

@property (nonatomic, strong, readonly, nonnull) VSMHandle* vsmHandle;

@property (nonatomic, assign) CGFloat poiScale;

/** Poi 텍스트 크기 비율. 기본값 1.25
 */
@property (nonatomic, assign) CGFloat poiCaptionScale;

/** Poi 아이콘 크기 비율. 기본값 1.25
*/
@property (nonatomic, assign) CGFloat poiIconScale;

@property (nonatomic, strong) VSMTransformObject* transObject;


/** 도로 외곽선 출력 여부 (default: NO)
 */
@property (nonatomic, assign) bool showRoadOutline;

/** 도로명 POI 출력 여부 (default: NO)
 */
@property (nonatomic, assign) bool showRoadNamePoi;

/** 경로선 위 도로명 POI 출력 여부 (default: NO)
 */
@property (nonatomic, assign) bool showRoadNamePoiOnRoute;

/** [Internal use only] 도로네트워크 출력 여부 (default: NO)
 */
@property (nonatomic, assign) bool showRoadNetworkLine;

/**    사용자 차량의 유종 타입. (휘발유:0, 디젤:1, LPG:2, 전기차:3, 고급휘발유:4)
 */
@property (nonatomic, assign) NSInteger oilType;

/** 건물 출력 여부 (0: None, 1: 2D only, 2: 3D only, 3: 2D & 3D)
 */
@property (nonatomic, assign) BuildingShowType showBuildingType;

// app 에서 세팅하는 것으로 변경.
/** 정확한 scale값이 들어오면 YES를 리턴한다.
 */
//@property (nonatomic, assign) BOOL preciseScaleFactor;

/** 최소 zoom level
 */
@property (nonatomic, readonly, getter=getMinZoomLevel) NSInteger minZoomLevel;

/** 최대 zoom level
 */
@property (nonatomic, readonly, getter=getMaxZoomLevel) NSInteger maxZoomLevel;

/** UIView 의 viewDidLoad 함수
 */
- (void) viewDidLoad;

/** UIView 의 viewWillAppear 함수
 */
- (void) viewWillAppear;

/** UIView 의 viewWillDisappear 함수
 */
- (void) viewWillDisappear;

/**    MapView의 View Level을 지정한다.
 @param level 지도 View Level 값.
 @param isSmooth 지도의 View Level 변경시 Smooth 효과 지정 유무.
 */
- (void) setMapViewLevel:(NSInteger)level isSmooth:(BOOL)isSmooth;

/**    MapView의 View Level을 한단계 지정한다.
 
 @param type level 설정 Type. (MapViewLevelChangeType)
 */
- (void) startSmoothZoom:(MapViewLevelChangeType)type;

/**    Map에 설정된 Level을 리턴한다.
 @param mainLevel 얻고자 하는 mainLevel
 @param subLevel 얻고자 하는 subLevel (0 ~ 999)
 */
- (void) getZoomLevel:(NSInteger*)mainLevel
             subLevel:(NSInteger*)subLevel;

/**    Map Level을 설정한다.
 @param mainLevel level
 @param subLevel subLevel (0~999)
 @param animated Level 변경시, animation 효과 적용 여부
 */
- (void) setZoomLevel:(NSInteger)mainLevel
             subLevel:(NSInteger)subLevel
             animated:(BOOL)animated;

/**    [deprecated] Map center를 설정한다.
 
 @param screenX Map의 중심점이될 World X 좌표.
 @param screenY Map의 중심점이될 World Y 좌표.
 */
- (bool) setMapCenter:(int)screenX screenY:(int)screenY isAnim:(bool)isAnim;

/**    screen좌표 상의 world 좌표를 화면 중심으로 이동 시킨다.
 
 @param screenX Map의 중심점이될 World X 좌표.
 @param screenY Map의 중심점이될 World Y 좌표.
 */
- (BOOL) mapMoveToByScreen:(NSInteger)screenX
                   screenY:(NSInteger)screenY
                    isAnim:(BOOL)isAnim;

/** Map의 중심점을 이동한다.
 
 @param longitude Map의 중심점이될 longitude 좌표.
 @param latitude Map의 중심점이될 latitude 좌표.
 @param isAnim 이동시 Animation 효과 여부.
 
 @return boolean 지동 이동 지정 성공 여부.
 */
- (bool) setMapCenter:(double)longitude latitude:(double)latitude isAnim:(bool)isAnim;

/** WGS84 좌표를 Screen 좌표로 변환한다. (Deprecated API)
 @param longitude longitude 좌표
 @param latitude latitude 좌표
 @param screenX screen X 좌표
 @param screenY screen Y 좌표
 
 @return boolean 변환 성공 여부.
 */
- (bool) wgs84ToScreen:(double)longitude latitude:(double)latitude screenX:(int* _Nonnull)screenX screenY:(int* _Nonnull)screenY DEPRECATED_ATTRIBUTE;


/** WGS84 좌표를 Screen 좌표로 변환한다.
 @param longitude longitude 좌표
 @param latitude latitude 좌표
 @param outPoint 위경도의 화면상 좌표(dp)
 
 @return boolean 변환 성공 여부.
 */
- (BOOL) wgs84ToScreen:(double)longitude
              latitude:(double)latitude
                 point:(CGPoint* _Nonnull)outPoint;

/** Screen 좌표를 WGS84 좌표로 변환한다. (Deprecated API)
 @param screenX screen X 좌표
 @param screenY screen Y 좌표
 @param longitude longitude 좌표
 @param latitude latitude 좌표
 
 @return boolean 변환 성공 여부.
 */
- (bool) screenToWgs84:(float)screenX screenY:(float)screenY longitude:(double* _Nonnull)longitude latitude:(double* _Nonnull)latitude DEPRECATED_ATTRIBUTE;

/** Screen 좌표를 WGS84 좌표로 변환한다.
 @param point screen 좌표(dp)
 @param longitude longitude 좌표
 @param latitude latitude 좌표
 
 @return boolean 변환 성공 여부.
 */
- (BOOL) screenToWgs84:(CGPoint)point longitude:(double* _Nonnull)longitude latitude:(double* _Nonnull)latitude;

///** Marker API 객체
// */
- (VSMMarkerManager* _Nonnull) getMarkerManager;

/** User define의 callout popup 을 출력한다.
 
 @param popupText 출력할 문구
 @param popupID id
 @param longitude longitude
 @param latitude latitude
 */
- (void) showUserDefineCalloutPopup:(NSString*)popupText popupID:(int)popupID longitude:(double)longitude latitude:(double)latitude;

/** User define의 callout popup 을 제거한다.
 
 @param isAnim Animation 적용 여부
 */
- (void) removeUserDefineCalloutPopups:(bool)isAnim;

/** Hit test(deprecated API)
 
 @param screenPixelX Hit test X 픽셀좌표(pixel)
 @param screenPixelY Hit test Y 픽셀좌표(pixel)
 @param block Hit test 검출된 정보 전달 block
 */
- (bool) hitTest:(float)screenPixelX y:(float)screenPixelY block:(HitTestCompleteBlock)block;

/** Hit test
 
 @param point Hit test screen 좌표(dp)
 @param block Hit test 검출된 정보 전달 block
 */
- (bool) hitTest:(CGPoint)point block:(HitTestCompleteBlock)block;

/**
 * Scroll Gesture 사용 여부 설정
 * @param enabled scroll gesture 사용 여부
 */
- (void) setScrollGesturesEnabled:(BOOL)enabled;

/**
 * Rotate Gesture 사용 여부 설정
 * @param enabled rotate gesture 사용 여부
 */
- (void) setRotateGesturesEnabled:(BOOL)enabled;

/**
 * Tilt Gesture 사용 여부 설정
 * @param enabled tilt gesture 사용 여부
 */
- (void) setTiltGesturesEnabled:(BOOL)enabled;

/**
 * Scale Gesture 사용 여부 설정
 * @param enabled scale gesture 사용 여부
 */
- (void) setScaleGesturesEnabled:(BOOL)enabled;

/**
 * 화면 갱신 요청
 */
- (void) requestRender;


/**    틸트 각도 변경.
 0도일 경우 2D뷰를 바라본다. 축적별로 각도 제한이 존재하며 제한 각도 이상의 값을 설정하지 못한다.
 
 @param angle Tilt(끄덕각)각도 지정, 최대 값을 넘길 경우 최대 각도로 설정 된다.
 @param animation 애니메이션 사용 유무
 
 @return 뷰 핸들 객체가 유효하면 YES리턴.
 */
-(BOOL)setTiltAngle:(CGFloat)angle withAnimation:(BOOL)animation;

/** 회전 각도 변경
 0도이면 진북 방향을 바라본다.
 @param angle 변경하려는 회전 각도
 @param animation 애니메이션 사용 유무
 */
-(BOOL)setRotationAngle:(CGFloat)angle
          withAnimation:(BOOL)animation;

/** 회전 각도 변경
0도이면 진북 방향을 바라본다.
@param angle 변경하려는 회전 각도  (0도 ~ 360도)
@param rotationMode 회전 방식 ( 0: 회전 없이 바로 각도 설정, 1: 자동, 2: 강제로 시계방향(clock-wise)회전, 3: 강제로 반시계방향 회전(counter-clock-wise)
*/
-(BOOL)setRotationAngle:(CGFloat)angle
       withRotationMode:(NSInteger)rotationMode;

/**
 * 주어진 화면 영역에 지도의 bound가 들어오도록 한다.
 * 단, 지도에 tilt 및 rotation이 적용된 경우는 동작을 보장하지 않는다.
 *
 * @param screenRect 화면 영역
 * @param northeast bound의 북동쪽 위치
 * @param southwest bound의 남서쪽 위치
 * @return 성공 여부
 */
-(BOOL)drawMBRAll:(CGRect)screenRect
        northeast:(VSMMapPoint*)northeast
        southwest:(VSMMapPoint*)southwest;

#pragma mark - GPS Accuracy Drawing API
/** GPS 정확도 원 표출 여부 (default: NO)
 */
@property (nonatomic) BOOL showsGPSAccuracyCircle;

- (void) SetEyeOffset:(CGPoint) normalizedScreenPoint;

- (void) stopCameraAnimation:(CameraAnimationFlags)animationFlags;

- (void) setProperty:(NSString*)key
               value:(NSString*)value;

#pragma mark - Map Style

- (void) setMapStyle:(NSString*) styleName;


-(void) setShowRoadCategory:(RoadCategoryLevel)roadCategory
                       show:(BOOL)show;
-(BOOL) showRoadCategory:(RoadCategoryLevel)roadCategory;

-(void) setShowLinkCategory:(NSInteger)category
                       show:(BOOL)show;
-(BOOL) showLinkCategory:(NSInteger)category;

-(void) setShowLinkFacility:(NSInteger)category
                       show:(BOOL)show;
-(BOOL) showLinkFacility:(NSInteger)category;
    
@property (nonatomic, strong) UIImage* capturedImage;
@property (nonatomic, assign) BOOL screenCaptureMode;
- (nullable UIImage*) captureScreen:(CGSize)size;

#pragma mark - Location

@property (nonatomic, strong, readonly, nonnull) VSMLocationManager* locationManager;

#pragma mark - OnWillRenderFrameDelegate

-(void) addOnWillRenderFrameDelegate:(nonnull id<OnWillRenderFrameDelegate>)delegate;

-(void) removeOnWillRenderFrameDelegate:(nonnull id<OnWillRenderFrameDelegate>)delegate;

#pragma mark - Effective Region

-(void) setMapEffectiveRegion:(CGRect)screenRect;

-(void) moveIntoEffectiveRegion:(nonnull VSMMarkerBase*)marker withAnimation:(BOOL)animation;

-(void) moveIntoEffectiveRegion:(int)objectId objectType:(VSMObjectType)objectType withAnimation:(BOOL)animation;

#pragma mark - Traffic

-(void) setTrafficInfoFilterOut:(const uint32_t* _Nullable)linkIds linkCount:(uint32_t)linkCount;

#pragma mark - MapEngine으로부터 수신한 HitTest 결과 처리 (Don't override)

- (void)dispatchHitTestResult:(HitObjectType)type
                     objectID:(int)objectID
                   meterPoint:(MeterPoint* _Nonnull)meterPoint
                     property:(ObjectProperty* _Nonnull)property
                   hitCallout:(bool)hitCallout
                  showCallout:(bool* _Nullable)showCallout;

- (void)dispatchViewLevelChanged:(int32_t)level subLevel:(int32_t)subLevel;
- (void)dispatchPositionChanged:(MeterPoint* _Nonnull)meterPoint;
- (void)dispatchViewAngleChanged:(float)angle;
- (void)dispatchViewTiltChanged:(float)tiltAngle;

#pragma mark - Dirty Rendering

/** 다음 frame이 그려지도록 요청한다.
 */
- (void)triggerRepaint;

- (void)setStackGroupVisibility:(NSString*)stackGroupName visibility:(BOOL)visibility;
- (void)setPOICategoryGroupVisibility:(NSString*)categoryGroupName visibility:(BOOL)visibility;

@end
