# VSMMapView Class Reference

&nbsp;&nbsp;**Inherits from** UIView  
&nbsp;&nbsp;**Conforms to** <a href="../Protocols/HitObjectNativeDelegate.html">HitObjectNativeDelegate</a>  
&nbsp;&nbsp;**Declared in** VSMMapView.h<br />  
VSMMapView.mm  

## Overview

Map 출력을 담당하는 Class

## Tasks

### Other Methods

[&nbsp;&nbsp;MapViewResizeDelegate](#//api/name/MapViewResizeDelegate) *property* 

[&nbsp;&nbsp;mapTouchDelegate](#//api/name/mapTouchDelegate) *property* 

[&nbsp;&nbsp;mapDataDelegate](#//api/name/mapDataDelegate) *property* 

[&nbsp;&nbsp;poiScaleChangeDelegate](#//api/name/poiScaleChangeDelegate) *property* 

[&nbsp;&nbsp;tiltAngle](#//api/name/tiltAngle) *property* 

[&nbsp;&nbsp;rotateAngle](#//api/name/rotateAngle) *property* 

[&nbsp;&nbsp;trackMode](#//api/name/trackMode) *property* 

[&nbsp;&nbsp;enableTouch](#//api/name/enableTouch) *property* 

[&nbsp;&nbsp;showPOI](#//api/name/showPOI) *property* 

[&nbsp;&nbsp;buildingHeight](#//api/name/buildingHeight) *property* 

[&nbsp;&nbsp;enableBuildingPattern](#//api/name/enableBuildingPattern) *property* 

[&nbsp;&nbsp;enableRenderSubwayLines](#//api/name/enableRenderSubwayLines) *property* 

[&nbsp;&nbsp;enableRenderRailroads](#//api/name/enableRenderRailroads) *property* 

[&nbsp;&nbsp;buildingFilterMode](#//api/name/buildingFilterMode) *property* 

[&nbsp;&nbsp;showTrafficInfoOnMap](#//api/name/showTrafficInfoOnMap) *property* 

[&nbsp;&nbsp;showAccidentInfo](#//api/name/showAccidentInfo) *property* 

[&nbsp;&nbsp;currentWidth](#//api/name/currentWidth) *property* 

[&nbsp;&nbsp;currentHeight](#//api/name/currentHeight) *property* 

[&nbsp;&nbsp;screenCenter](#//api/name/screenCenter) *property* 

[&nbsp;&nbsp;renderTime](#//api/name/renderTime) *property* 

[&nbsp;&nbsp;poiCaptionScale](#//api/name/poiCaptionScale) *property* 

[&nbsp;&nbsp;poiIconScale](#//api/name/poiIconScale) *property* 

[&nbsp;&nbsp;showRoadOutline](#//api/name/showRoadOutline) *property* 

[&nbsp;&nbsp;showRoadNamePoi](#//api/name/showRoadNamePoi) *property* 

[&nbsp;&nbsp;showRoadNamePoiOnRoute](#//api/name/showRoadNamePoiOnRoute) *property* 

[&nbsp;&nbsp;showRoadNetworkLine](#//api/name/showRoadNetworkLine) *property* 

[&nbsp;&nbsp;oilType](#//api/name/oilType) *property* 

[&nbsp;&nbsp;showBuildingType](#//api/name/showBuildingType) *property* 

[&nbsp;&nbsp;minZoomLevel](#//api/name/minZoomLevel) *property* 

[&nbsp;&nbsp;maxZoomLevel](#//api/name/maxZoomLevel) *property* 

[&ndash;&nbsp;viewDidLoad](#//api/name/viewDidLoad)  

[&ndash;&nbsp;viewWillAppear](#//api/name/viewWillAppear)  

[&ndash;&nbsp;viewWillDisappear](#//api/name/viewWillDisappear)  

[&ndash;&nbsp;setMapViewLevel:isSmooth:](#//api/name/setMapViewLevel:isSmooth:)  

[&ndash;&nbsp;startSmoothZoom:](#//api/name/startSmoothZoom:)  

[&ndash;&nbsp;getZoomLevel:subLevel:](#//api/name/getZoomLevel:subLevel:)  

[&ndash;&nbsp;setZoomLevel:subLevel:animated:](#//api/name/setZoomLevel:subLevel:animated:)  

[&ndash;&nbsp;setMapCenter:screenY:isAnim:](#//api/name/setMapCenter:screenY:isAnim:)  

[&ndash;&nbsp;mapMoveToByScreen:screenY:isAnim:](#//api/name/mapMoveToByScreen:screenY:isAnim:)  

[&ndash;&nbsp;setMapCenter:latitude:isAnim:](#//api/name/setMapCenter:latitude:isAnim:)  

[&ndash;&nbsp;wgs84ToScreen:latitude:screenX:screenY:](#//api/name/wgs84ToScreen:latitude:screenX:screenY:)  

[&ndash;&nbsp;wgs84ToScreen:latitude:point:](#//api/name/wgs84ToScreen:latitude:point:)  

[&ndash;&nbsp;screenToWgs84:screenY:longitude:latitude:](#//api/name/screenToWgs84:screenY:longitude:latitude:)  

[&ndash;&nbsp;screenToWgs84:longitude:latitude:](#//api/name/screenToWgs84:longitude:latitude:)  

[&ndash;&nbsp;getMarkerManager](#//api/name/getMarkerManager)  

[&ndash;&nbsp;showUserDefineCalloutPopup:popupID:longitude:latitude:](#//api/name/showUserDefineCalloutPopup:popupID:longitude:latitude:)  

[&ndash;&nbsp;removeUserDefineCalloutPopups:](#//api/name/removeUserDefineCalloutPopups:)  

[&ndash;&nbsp;hitTest:y:block:](#//api/name/hitTest:y:block:)  

[&ndash;&nbsp;hitTest:block:](#//api/name/hitTest:block:)  

[&ndash;&nbsp;setScrollGesturesEnabled:](#//api/name/setScrollGesturesEnabled:)  

[&ndash;&nbsp;setRotateGesturesEnabled:](#//api/name/setRotateGesturesEnabled:)  

[&ndash;&nbsp;setTiltGesturesEnabled:](#//api/name/setTiltGesturesEnabled:)  

[&ndash;&nbsp;setScaleGesturesEnabled:](#//api/name/setScaleGesturesEnabled:)  

[&ndash;&nbsp;requestRender](#//api/name/requestRender)  

[&ndash;&nbsp;setTiltAngle:withAnimation:](#//api/name/setTiltAngle:withAnimation:)  

[&ndash;&nbsp;setRotationAngle:withAnimation:](#//api/name/setRotationAngle:withAnimation:)  

[&ndash;&nbsp;setRotationAngle:withRotationMode:](#//api/name/setRotationAngle:withRotationMode:)  

[&ndash;&nbsp;drawMBRAll:northeast:southwest:](#//api/name/drawMBRAll:northeast:southwest:)  

[&nbsp;&nbsp;showsGPSAccuracyCircle](#//api/name/showsGPSAccuracyCircle) *property* 

[&ndash;&nbsp;triggerRepaint](#//api/name/triggerRepaint)  

### Other Methods

[&ndash;&nbsp;onHitObject:objectID:point:property:hitCallout:showCallout:](#//api/name/onHitObject:objectID:point:property:hitCallout:showCallout:)  

## Properties

<a name="//api/name/MapViewResizeDelegate" title="MapViewResizeDelegate"></a>
### MapViewResizeDelegate

화면 사이즈 변경 이벤트

`@property (atomic, weak) id&lt;&gt; _Nullable MapViewResizeDelegate`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/buildingFilterMode" title="buildingFilterMode"></a>
### buildingFilterMode

Building Filter 설정

`@property (nonatomic, assign) VSMBuildingFilterMode buildingFilterMode`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/buildingHeight" title="buildingHeight"></a>
### buildingHeight

빌딩 출력 높이 (0.0 ~ 1.0)

`@property (nonatomic, assign) float buildingHeight`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/currentHeight" title="currentHeight"></a>
### currentHeight

Screen height

`@property (nonatomic, assign, readonly) GLint currentHeight`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/currentWidth" title="currentWidth"></a>
### currentWidth

Screen width

`@property (nonatomic, assign, readonly) GLint currentWidth`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/enableBuildingPattern" title="enableBuildingPattern"></a>
### enableBuildingPattern

Building Pattern 적용 여부 (default: NO)

`@property (nonatomic, assign) bool enableBuildingPattern`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/enableRenderRailroads" title="enableRenderRailroads"></a>
### enableRenderRailroads

지하철/고속철도/경전철/일반철도/인천공항 노선 표출 출력 여부 (default: YES)

`@property (nonatomic, assign) bool enableRenderRailroads`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/enableRenderSubwayLines" title="enableRenderSubwayLines"></a>
### enableRenderSubwayLines

지하철 출력 여부 (default: YES)

`@property (nonatomic, assign) bool enableRenderSubwayLines`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/enableTouch" title="enableTouch"></a>
### enableTouch

터치 지원 여부 (default: YES)

`@property (nonatomic, assign) bool enableTouch`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/mapDataDelegate" title="mapDataDelegate"></a>
### mapDataDelegate

Map 관련 이벤트

`@property (nonatomic, weak) id&lt;MapDataDelegate&gt; mapDataDelegate`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/mapTouchDelegate" title="mapTouchDelegate"></a>
### mapTouchDelegate

Touch 동작 이벤트

`@property (nonatomic, weak) id&lt;MapTouchDelegate&gt; mapTouchDelegate`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/maxZoomLevel" title="maxZoomLevel"></a>
### maxZoomLevel

최대 zoom level

`@property (nonatomic, readonly, getter=getMaxZoomLevel) NSInteger maxZoomLevel`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/minZoomLevel" title="minZoomLevel"></a>
### minZoomLevel

최소 zoom level

`@property (nonatomic, readonly, getter=getMinZoomLevel) NSInteger minZoomLevel`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/oilType" title="oilType"></a>
### oilType

<pre><code>사용자 차량의 유종 타입. (휘발유:0, 디젤:1, LPG:2, 전기차:3, 고급휘발유:4)
</code></pre>

`@property (nonatomic, assign) NSInteger oilType`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/poiCaptionScale" title="poiCaptionScale"></a>
### poiCaptionScale

Poi 텍스트 크기 비율. 기본값 1.25

`@property (nonatomic, assign) CGFloat poiCaptionScale`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/poiIconScale" title="poiIconScale"></a>
### poiIconScale

Poi 아이콘 크기 비율. 기본값 1.25

`@property (nonatomic, assign) CGFloat poiIconScale`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/poiScaleChangeDelegate" title="poiScaleChangeDelegate"></a>
### poiScaleChangeDelegate

POI Scale 변경 이벤트

`@property (nonatomic, weak) id&lt;PoiScaleChangeDelegate&gt; poiScaleChangeDelegate`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/renderTime" title="renderTime"></a>
### renderTime

Render millisecond time (default 30frame/1초)

`@property (nonatomic, assign) NSInteger renderTime`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/rotateAngle" title="rotateAngle"></a>
### rotateAngle

Map Rotate Angle

`@property (nonatomic, assign, readonly, getter=getRotationAngle) CGFloat rotateAngle`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/screenCenter" title="screenCenter"></a>
### screenCenter

Screen에서 Position icon 이 출력될 center 영역 (0, 0) ~ (1, 1)

`@property (nonatomic) CGPoint screenCenter`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showAccidentInfo" title="showAccidentInfo"></a>
### showAccidentInfo

유고/돌발 정보를 지도에 출력

`@property (nonatomic, assign) bool showAccidentInfo`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showBuildingType" title="showBuildingType"></a>
### showBuildingType

건물 출력 여부 (0: None, 1: 2D only, 2: 3D only, 3: 2D &amp; 3D)

`@property (nonatomic, assign) BuildingShowType showBuildingType`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showPOI" title="showPOI"></a>
### showPOI

POI 출력 여부 (default: YES)

`@property (nonatomic, assign) bool showPOI`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showRoadNamePoi" title="showRoadNamePoi"></a>
### showRoadNamePoi

도로명 POI 출력 여부 (default: NO)

`@property (nonatomic, assign) bool showRoadNamePoi`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showRoadNamePoiOnRoute" title="showRoadNamePoiOnRoute"></a>
### showRoadNamePoiOnRoute

경로선 위 도로명 POI 출력 여부 (default: NO)

`@property (nonatomic, assign) bool showRoadNamePoiOnRoute`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showRoadNetworkLine" title="showRoadNetworkLine"></a>
### showRoadNetworkLine

[Internal use only] 도로네트워크 출력 여부 (default: NO)

`@property (nonatomic, assign) bool showRoadNetworkLine`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showRoadOutline" title="showRoadOutline"></a>
### showRoadOutline

도로 외곽선 출력 여부 (default: NO)

`@property (nonatomic, assign) bool showRoadOutline`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showTrafficInfoOnMap" title="showTrafficInfoOnMap"></a>
### showTrafficInfoOnMap

Traffic Info 지도 에 출력

`@property (nonatomic, assign) bool showTrafficInfoOnMap`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showsGPSAccuracyCircle" title="showsGPSAccuracyCircle"></a>
### showsGPSAccuracyCircle

GPS 정확도 원 표출 여부 (default: NO)

`@property (nonatomic) BOOL showsGPSAccuracyCircle`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/tiltAngle" title="tiltAngle"></a>
### tiltAngle

Map Title Angle

`@property (nonatomic, assign, readonly, getter=getTiltAngle) CGFloat tiltAngle`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/trackMode" title="trackMode"></a>
### trackMode

Map Move Mode

`@property (nonatomic, assign) MapTrackMode trackMode`

#### Declared In
* `VSMMapView.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/drawMBRAll:northeast:southwest:" title="drawMBRAll:northeast:southwest:"></a>
### drawMBRAll:northeast:southwest:

주어진 화면 영역에 지도의 bound가 들어오도록 한다.
단, 지도에 tilt 및 rotation이 적용된 경우는 동작을 보장하지 않는다.

`- (BOOL)drawMBRAll:(CGRect)*screenRect* northeast:(VSMMapPoint *)*northeast* southwest:(VSMMapPoint *)*southwest*`

#### Parameters

*screenRect*  
&nbsp;&nbsp;&nbsp;화면 영역  

*northeast*  
&nbsp;&nbsp;&nbsp;bound의 북동쪽 위치  

*southwest*  
&nbsp;&nbsp;&nbsp;bound의 남서쪽 위치  

#### Return Value
성공 여부

#### Declared In
* `VSMMapView.h`

<a name="//api/name/getMarkerManager" title="getMarkerManager"></a>
### getMarkerManager

** Marker API 객체

`- (VSMMarkerManager *_Nonnull)getMarkerManager`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/getZoomLevel:subLevel:" title="getZoomLevel:subLevel:"></a>
### getZoomLevel:subLevel:

<pre><code>Map에 설정된 Level을 리턴한다.
</code></pre>

`- (void)getZoomLevel:(NSInteger *)*mainLevel* subLevel:(NSInteger *)*subLevel*`

#### Parameters

*mainLevel*  
&nbsp;&nbsp;&nbsp;얻고자 하는 mainLevel  

*subLevel*  
&nbsp;&nbsp;&nbsp;얻고자 하는 subLevel (0 ~ 999)  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/hitTest:block:" title="hitTest:block:"></a>
### hitTest:block:

Hit test

`- (bool)hitTest:(CGPoint)*point* block:(HitTestCompleteBlock)*block*`

#### Parameters

*point*  
&nbsp;&nbsp;&nbsp;Hit test screen 좌표(dp)  

*block*  
&nbsp;&nbsp;&nbsp;Hit test 검출된 정보 전달 block  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/hitTest:y:block:" title="hitTest:y:block:"></a>
### hitTest:y:block:

Hit test(deprecated API)

`- (bool)hitTest:(float)*screenPixelX* y:(float)*screenPixelY* block:(HitTestCompleteBlock)*block*`

#### Parameters

*screenPixelX*  
&nbsp;&nbsp;&nbsp;Hit test X 픽셀좌표(pixel)  

*screenPixelY*  
&nbsp;&nbsp;&nbsp;Hit test Y 픽셀좌표(pixel)  

*block*  
&nbsp;&nbsp;&nbsp;Hit test 검출된 정보 전달 block  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/mapMoveToByScreen:screenY:isAnim:" title="mapMoveToByScreen:screenY:isAnim:"></a>
### mapMoveToByScreen:screenY:isAnim:

<pre><code>screen좌표 상의 world 좌표를 화면 중심으로 이동 시킨다.
</code></pre>

`- (BOOL)mapMoveToByScreen:(NSInteger)*screenX* screenY:(NSInteger)*screenY* isAnim:(BOOL)*isAnim*`

#### Parameters

*screenX*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 World X 좌표.  

*screenY*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 World Y 좌표.  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/onHitObject:objectID:point:property:hitCallout:showCallout:" title="onHitObject:objectID:point:property:hitCallout:showCallout:"></a>
### onHitObject:objectID:point:property:hitCallout:showCallout:

Hit Test 결과 이벤트

`- (void)onHitObject:(HitObjectType)*type* objectID:(int)*objectID* point:(VSMMapPoint *)*point* property:(ObjectProperty *)*property* hitCallout:(bool)*hitCallout* showCallout:(bool *)*showCallout*`

#### Parameters

*objectID*  
&nbsp;&nbsp;&nbsp;선택한 객체의 아이디  

*point*  
&nbsp;&nbsp;&nbsp;선택한 객체의 위경도 좌표
@param property
@param hitCallout
@param showCallout  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/removeUserDefineCalloutPopups:" title="removeUserDefineCalloutPopups:"></a>
### removeUserDefineCalloutPopups:

User define의 callout popup 을 제거한다.

`- (void)removeUserDefineCalloutPopups:(bool)*isAnim*`

#### Parameters

*isAnim*  
&nbsp;&nbsp;&nbsp;Animation 적용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/requestRender" title="requestRender"></a>
### requestRender

화면 갱신 요청

`- (void)requestRender`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/screenToWgs84:longitude:latitude:" title="screenToWgs84:longitude:latitude:"></a>
### screenToWgs84:longitude:latitude:

Screen 좌표를 WGS84 좌표로 변환한다.

`- (BOOL)screenToWgs84:(CGPoint)*point* longitude:(double *_Nonnull)*longitude* latitude:(double *_Nonnull)*latitude*`

#### Parameters

*point*  
&nbsp;&nbsp;&nbsp;screen 좌표(dp)  

*longitude*  
&nbsp;&nbsp;&nbsp;longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;latitude 좌표  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMapView.h`

<a name="//api/name/screenToWgs84:screenY:longitude:latitude:" title="screenToWgs84:screenY:longitude:latitude:"></a>
### screenToWgs84:screenY:longitude:latitude:

Screen 좌표를 WGS84 좌표로 변환한다. (Deprecated API)

`- (bool)screenToWgs84:(float)*screenX* screenY:(float)*screenY* longitude:(double *_Nonnull)*longitude* latitude:(double *_Nonnull)*latitude*`

#### Parameters

*screenX*  
&nbsp;&nbsp;&nbsp;screen X 좌표  

*screenY*  
&nbsp;&nbsp;&nbsp;screen Y 좌표  

*longitude*  
&nbsp;&nbsp;&nbsp;longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;latitude 좌표  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setMapCenter:latitude:isAnim:" title="setMapCenter:latitude:isAnim:"></a>
### setMapCenter:latitude:isAnim:

Map의 중심점을 이동한다.

`- (bool)setMapCenter:(double)*longitude* latitude:(double)*latitude* isAnim:(bool)*isAnim*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 longitude 좌표.  

*latitude*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 latitude 좌표.  

*isAnim*  
&nbsp;&nbsp;&nbsp;이동시 Animation 효과 여부.  

#### Return Value
boolean 지동 이동 지정 성공 여부.

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setMapCenter:screenY:isAnim:" title="setMapCenter:screenY:isAnim:"></a>
### setMapCenter:screenY:isAnim:

<pre><code>[deprecated] Map center를 설정한다.
</code></pre>

`- (bool)setMapCenter:(int)*screenX* screenY:(int)*screenY* isAnim:(bool)*isAnim*`

#### Parameters

*screenX*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 World X 좌표.  

*screenY*  
&nbsp;&nbsp;&nbsp;Map의 중심점이될 World Y 좌표.  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setMapViewLevel:isSmooth:" title="setMapViewLevel:isSmooth:"></a>
### setMapViewLevel:isSmooth:

<pre><code>MapView의 View Level을 지정한다.
</code></pre>

`- (void)setMapViewLevel:(NSInteger)*level* isSmooth:(BOOL)*isSmooth*`

#### Parameters

*level*  
&nbsp;&nbsp;&nbsp;지도 View Level 값.  

*isSmooth*  
&nbsp;&nbsp;&nbsp;지도의 View Level 변경시 Smooth 효과 지정 유무.  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setRotateGesturesEnabled:" title="setRotateGesturesEnabled:"></a>
### setRotateGesturesEnabled:

Rotate Gesture 사용 여부 설정

`- (void)setRotateGesturesEnabled:(BOOL)*enabled*`

#### Parameters

*enabled*  
&nbsp;&nbsp;&nbsp;rotate gesture 사용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setRotationAngle:withAnimation:" title="setRotationAngle:withAnimation:"></a>
### setRotationAngle:withAnimation:

회전 각도 변경
0도이면 진북 방향을 바라본다.

`- (BOOL)setRotationAngle:(CGFloat)*angle* withAnimation:(BOOL)*animation*`

#### Parameters

*angle*  
&nbsp;&nbsp;&nbsp;변경하려는 회전 각도  

*animation*  
&nbsp;&nbsp;&nbsp;애니메이션 사용 유무  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setRotationAngle:withRotationMode:" title="setRotationAngle:withRotationMode:"></a>
### setRotationAngle:withRotationMode:

회전 각도 변경
0도이면 진북 방향을 바라본다.

`- (BOOL)setRotationAngle:(CGFloat)*angle* withRotationMode:(NSInteger)*rotationMode*`

#### Parameters

*angle*  
&nbsp;&nbsp;&nbsp;변경하려는 회전 각도  (0도 ~ 360도)  

*rotationMode*  
&nbsp;&nbsp;&nbsp;회전 방식 ( 0: 회전 없이 바로 각도 설정, 1: 자동, 2: 강제로 시계방향(clock-wise)회전, 3: 강제로 반시계방향 회전(counter-clock-wise)  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setScaleGesturesEnabled:" title="setScaleGesturesEnabled:"></a>
### setScaleGesturesEnabled:

Scale Gesture 사용 여부 설정

`- (void)setScaleGesturesEnabled:(BOOL)*enabled*`

#### Parameters

*enabled*  
&nbsp;&nbsp;&nbsp;scale gesture 사용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setScrollGesturesEnabled:" title="setScrollGesturesEnabled:"></a>
### setScrollGesturesEnabled:

Scroll Gesture 사용 여부 설정

`- (void)setScrollGesturesEnabled:(BOOL)*enabled*`

#### Parameters

*enabled*  
&nbsp;&nbsp;&nbsp;scroll gesture 사용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setTiltAngle:withAnimation:" title="setTiltAngle:withAnimation:"></a>
### setTiltAngle:withAnimation:

<pre><code>틸트 각도 변경.
</code></pre>

0도일 경우 2D뷰를 바라본다. 축적별로 각도 제한이 존재하며 제한 각도 이상의 값을 설정하지 못한다.

`- (BOOL)setTiltAngle:(CGFloat)*angle* withAnimation:(BOOL)*animation*`

#### Parameters

*angle*  
&nbsp;&nbsp;&nbsp;Tilt(끄덕각)각도 지정, 최대 값을 넘길 경우 최대 각도로 설정 된다.  

*animation*  
&nbsp;&nbsp;&nbsp;애니메이션 사용 유무  

#### Return Value
뷰 핸들 객체가 유효하면 YES리턴.

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setTiltGesturesEnabled:" title="setTiltGesturesEnabled:"></a>
### setTiltGesturesEnabled:

Tilt Gesture 사용 여부 설정

`- (void)setTiltGesturesEnabled:(BOOL)*enabled*`

#### Parameters

*enabled*  
&nbsp;&nbsp;&nbsp;tilt gesture 사용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setZoomLevel:subLevel:animated:" title="setZoomLevel:subLevel:animated:"></a>
### setZoomLevel:subLevel:animated:

<pre><code>Map Level을 설정한다.
</code></pre>

`- (void)setZoomLevel:(NSInteger)*mainLevel* subLevel:(NSInteger)*subLevel* animated:(BOOL)*animated*`

#### Parameters

*mainLevel*  
&nbsp;&nbsp;&nbsp;level  

*subLevel*  
&nbsp;&nbsp;&nbsp;subLevel (0~999)  

*animated*  
&nbsp;&nbsp;&nbsp;Level 변경시, animation 효과 적용 여부  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showUserDefineCalloutPopup:popupID:longitude:latitude:" title="showUserDefineCalloutPopup:popupID:longitude:latitude:"></a>
### showUserDefineCalloutPopup:popupID:longitude:latitude:

User define의 callout popup 을 출력한다.

`- (void)showUserDefineCalloutPopup:(NSString *)*popupText* popupID:(int)*popupID* longitude:(double)*longitude* latitude:(double)*latitude*`

#### Parameters

*popupText*  
&nbsp;&nbsp;&nbsp;출력할 문구  

*popupID*  
&nbsp;&nbsp;&nbsp;id  

*longitude*  
&nbsp;&nbsp;&nbsp;longitude  

*latitude*  
&nbsp;&nbsp;&nbsp;latitude  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/startSmoothZoom:" title="startSmoothZoom:"></a>
### startSmoothZoom:

<pre><code>MapView의 View Level을 한단계 지정한다.
</code></pre>

`- (void)startSmoothZoom:(MapViewLevelChangeType)*type*`

#### Parameters

*type*  
&nbsp;&nbsp;&nbsp;level 설정 Type. (MapViewLevelChangeType)  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/triggerRepaint" title="triggerRepaint"></a>
### triggerRepaint

다음 frame이 그려지도록 요청한다.

`- (void)triggerRepaint`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/viewDidLoad" title="viewDidLoad"></a>
### viewDidLoad

UIView 의 viewDidLoad 함수

`- (void)viewDidLoad`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/viewWillAppear" title="viewWillAppear"></a>
### viewWillAppear

UIView 의 viewWillAppear 함수

`- (void)viewWillAppear`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/viewWillDisappear" title="viewWillDisappear"></a>
### viewWillDisappear

UIView 의 viewWillDisappear 함수

`- (void)viewWillDisappear`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/wgs84ToScreen:latitude:point:" title="wgs84ToScreen:latitude:point:"></a>
### wgs84ToScreen:latitude:point:

WGS84 좌표를 Screen 좌표로 변환한다.

`- (BOOL)wgs84ToScreen:(double)*longitude* latitude:(double)*latitude* point:(CGPoint *_Nonnull)*outPoint*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;latitude 좌표  

*outPoint*  
&nbsp;&nbsp;&nbsp;위경도의 화면상 좌표(dp)  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMapView.h`

<a name="//api/name/wgs84ToScreen:latitude:screenX:screenY:" title="wgs84ToScreen:latitude:screenX:screenY:"></a>
### wgs84ToScreen:latitude:screenX:screenY:

WGS84 좌표를 Screen 좌표로 변환한다. (Deprecated API)

`- (bool)wgs84ToScreen:(double)*longitude* latitude:(double)*latitude* screenX:(int *_Nonnull)*screenX* screenY:(int *_Nonnull)*screenY*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;latitude 좌표  

*screenX*  
&nbsp;&nbsp;&nbsp;screen X 좌표  

*screenY*  
&nbsp;&nbsp;&nbsp;screen Y 좌표  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMapView.h`

