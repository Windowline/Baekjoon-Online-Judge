# VSMNavigationView Class Reference

&nbsp;&nbsp;**Inherits from** <a href="../Classes/VSMMapView.html">VSMMapView</a> :   
UIView  
&nbsp;&nbsp;**Declared in** VSMNavigationView.h<br />  
VSMNavigationView.mm  

## Overview

Navigation 렌더링 관련 기능을 제공하는 class

## Tasks

### Other Methods

[&ndash;&nbsp;setTiltAngle:withAnimation:](#//api/name/setTiltAngle:withAnimation:)  

[&ndash;&nbsp;setRotationAngle:withAnimation:](#//api/name/setRotationAngle:withAnimation:)  

[&ndash;&nbsp;setTrackMode:](#//api/name/setTrackMode:)  

[&ndash;&nbsp;viewWillAppear](#//api/name/viewWillAppear)  

[&ndash;&nbsp;viewWillDisappear](#//api/name/viewWillDisappear)  

[&ndash;&nbsp;setShowRoute:showFlag:](#//api/name/setShowRoute:showFlag:)  

[&ndash;&nbsp;applySelectRouteLine](#//api/name/applySelectRouteLine)  

[&ndash;&nbsp;selectRouteLine:](#//api/name/selectRouteLine:)  

[&ndash;&nbsp;renderRouteLineFitInView:](#//api/name/renderRouteLineFitInView:)  

[&ndash;&nbsp;clearRouteLine](#//api/name/clearRouteLine)  

[&ndash;&nbsp;setShowTrafficInfoOnRouteLine:](#//api/name/setShowTrafficInfoOnRouteLine:)  

[&ndash;&nbsp;showTrafficInfoOnRouteLine](#//api/name/showTrafficInfoOnRouteLine)  

[&ndash;&nbsp;drawRouteForIndex:inRect:showsOilInfo:showsMainRoadInfo:](#//api/name/drawRouteForIndex:inRect:showsOilInfo:showsMainRoadInfo:)  

[&ndash;&nbsp;drawGasStationInfo:lowestPricePoiId:oilType:](#//api/name/drawGasStationInfo:lowestPricePoiId:oilType:)  

[&ndash;&nbsp;setCurrentRGSDI:](#//api/name/setCurrentRGSDI:)  

[&ndash;&nbsp;setDrawRouteData:isReroute:](#//api/name/setDrawRouteData:isReroute:)  

[&ndash;&nbsp;computeScreenCenter:height:viewMode:moveMode:](#//api/name/computeScreenCenter:height:viewMode:moveMode:)  

[&ndash;&nbsp;setRouteData:](#//api/name/setRouteData:)  

[&ndash;&nbsp;setDrawRouteData:keepDepartureFlag:](#//api/name/setDrawRouteData:keepDepartureFlag:)  

[&ndash;&nbsp;setAlternativeRouteInfo:](#//api/name/setAlternativeRouteInfo:)  

[&ndash;&nbsp;objectTheme](#//api/name/objectTheme)  

[&ndash;&nbsp;createObjectTheme:baseTheme:](#//api/name/createObjectTheme:baseTheme:)  

[&ndash;&nbsp;updateObjectTheme:jsonData:](#//api/name/updateObjectTheme:jsonData:)  

[&ndash;&nbsp;dispatchHitTestResult:objectID:meterPoint:property:hitCallout:showCallout:](#//api/name/dispatchHitTestResult:objectID:meterPoint:property:hitCallout:showCallout:)  

[&ndash;&nbsp;dispatchViewLevelChanged:subLevel:](#//api/name/dispatchViewLevelChanged:subLevel:)  

[&ndash;&nbsp;didHitTest:objectID:meterPoint:property:showCallout:](#//api/name/didHitTest:objectID:meterPoint:property:showCallout:)  

[&ndash;&nbsp;drawRectFitInView:northEast:southWest:](#//api/name/drawRectFitInView:northEast:southWest:)  

[&ndash;&nbsp;selectOilInfo:selected:](#//api/name/selectOilInfo:selected:)  

[&ndash;&nbsp;isSelectedOilInfo:](#//api/name/isSelectedOilInfo:)  

[&ndash;&nbsp;unselectAllOilInfo](#//api/name/unselectAllOilInfo)  

### Other Methods

[&nbsp;&nbsp;naviViewMode](#//api/name/naviViewMode) *property* 

[&nbsp;&nbsp;naviMoveMode](#//api/name/naviMoveMode) *property* 

[&nbsp;&nbsp;downloadRouteTile](#//api/name/downloadRouteTile) *property* 

## Properties

<a name="//api/name/downloadRouteTile" title="downloadRouteTile"></a>
### downloadRouteTile

경로가 지나가는 타일 다운로드 설정

`@property (nonatomic) BOOL downloadRouteTile`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/naviMoveMode" title="naviMoveMode"></a>
### naviMoveMode

<pre><code>지도 보기 모드 (진북보기, 진행방향보기, 버드뷰보기)
</code></pre>

`@property (nonatomic, assign) eNaviMoveMode naviMoveMode`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/naviViewMode" title="naviViewMode"></a>
### naviViewMode

<pre><code>내비게이션용 이동 모드 (조회 상태 / 실주행 상태 / 가상주행 상태)
</code></pre>

`@property (nonatomic, assign) eNaviViewMode naviViewMode`

#### Declared In
* `VSMNavigationView.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/applySelectRouteLine" title="applySelectRouteLine"></a>
### applySelectRouteLine

<pre><code>Engine에 지정된 경로를 따라갈 것임을 알려준다.
</code></pre>

`- (void)applySelectRouteLine`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/clearRouteLine" title="clearRouteLine"></a>
### clearRouteLine

<pre><code>지정된 경로를 지운다.
</code></pre>

`- (void)clearRouteLine`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/computeScreenCenter:height:viewMode:moveMode:" title="computeScreenCenter:height:viewMode:moveMode:"></a>
### computeScreenCenter:height:viewMode:moveMode:

Screen Center 값을 계산합니다. 특정 view mode에서 자차의 center 위치를 변경하고자 할 경우 override 합니다.

`- (CGPoint)computeScreenCenter:(int)*width* height:(int)*height* viewMode:(eNaviViewMode)*viewMode* moveMode:(eNaviMoveMode)*moveMode*`

#### Parameters

*width*  
&nbsp;&nbsp;&nbsp;View의 width  

*height*  
&nbsp;&nbsp;&nbsp;View의 height  

*viewMode*  
&nbsp;&nbsp;&nbsp;View의 보기 모드(정북 방향 보기 / 진행 방향 보기 / 버드뷰)  

*moveMode*  
&nbsp;&nbsp;&nbsp;이동 모드(지도 / 내비 / 시뮬레이션)  

#### Return Value
Screen Center

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/createObjectTheme:baseTheme:" title="createObjectTheme:baseTheme:"></a>
### createObjectTheme:baseTheme:

Object theme는 지도 위의 객체(경로선, 교통정보 등)에 대한 스타일을 갖고 있습니다.
THEME_DAY 및 THEME_NIGHT는 기본값으로 제공되며, 신규로 object theme를 생성할 수 있습니다.

`- (BOOL)createObjectTheme:(uint32_t)*theme* baseTheme:(uint32_t)*baseTheme*`

#### Parameters

*theme*  
&nbsp;&nbsp;&nbsp;생성할 theme로 THEME_USER_DEFINE 이상의 값  

*baseTheme*  
&nbsp;&nbsp;&nbsp;명시한 object theme를 기본값으로 생성합니다.  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/didHitTest:objectID:meterPoint:property:showCallout:" title="didHitTest:objectID:meterPoint:property:showCallout:"></a>
### didHitTest:objectID:meterPoint:property:showCallout:

NaviRenderer에서 처리(Marker에 대한 HitTest 처리 결과를 이전 처럼 변경)한 결과를 앱 쪽으로 전달한다.

`- (void)didHitTest:(HitObjectType)*type* objectID:(int)*objectID* meterPoint:(MeterPoint *)*meterPoint* property:(ObjectProperty *)*property* showCallout:(bool *)*showCallout*`

#### Declared In
* `VSMNavigationView.mm`

<a name="//api/name/dispatchHitTestResult:objectID:meterPoint:property:hitCallout:showCallout:" title="dispatchHitTestResult:objectID:meterPoint:property:hitCallout:showCallout:"></a>
### dispatchHitTestResult:objectID:meterPoint:property:hitCallout:showCallout:

엔진에서 수신된 HitTest 결과를 가로채어 NaviRenderer에 전달한다.

`- (void)dispatchHitTestResult:(HitObjectType)*type* objectID:(int)*objectID* meterPoint:(MeterPoint *)*meterPoint* property:(ObjectProperty *)*property* hitCallout:(bool)*hitCallout* showCallout:(bool *)*showCallout*`

#### Declared In
* `VSMNavigationView.mm`

<a name="//api/name/dispatchViewLevelChanged:subLevel:" title="dispatchViewLevelChanged:subLevel:"></a>
### dispatchViewLevelChanged:subLevel:

엔진에서 수신된 View Level 변경 이벤트를 가로채어 NaviRenderer에 전달한다.

`- (void)dispatchViewLevelChanged:(int32_t)*level* subLevel:(int32_t)*subLevel*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/drawGasStationInfo:lowestPricePoiId:oilType:" title="drawGasStationInfo:lowestPricePoiId:oilType:"></a>
### drawGasStationInfo:lowestPricePoiId:oilType:

경로 상의 주유소/유가 정보를 표시한다.

`- (void)drawGasStationInfo:(NSArray *)*poiIds* lowestPricePoiId:(NSUInteger)*lowestPricePoiId* oilType:(NSInteger)*oilType*`

#### Parameters

*poiIds*  
&nbsp;&nbsp;&nbsp;주유소 POI의 ID, 빈 배열을  

*lowestPricePoiId*  
&nbsp;&nbsp;&nbsp;최저가 주유소의 ID, 앱에서 경로 데이터의 주유소 가격 정보를 이용하여 사용자 타입에 맞는 최저가 주유소의 ID를 넘겨줘야 합니다.  

*oilType*  
&nbsp;&nbsp;&nbsp;사용자가 사용하는 유류타입 (0: gasoline, 1: dissel, 2: LPG, 3: Electrocity, 4: PremiumGasoline)  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/drawRectFitInView:northEast:southWest:" title="drawRectFitInView:northEast:southWest:"></a>
### drawRectFitInView:northEast:southWest:

경로 요약

`- (void)drawRectFitInView:(CGRect)*rect* northEast:(VSMMapPoint *)*northEast* southWest:(VSMMapPoint *)*southWest*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/drawRouteForIndex:inRect:showsOilInfo:showsMainRoadInfo:" title="drawRouteForIndex:inRect:showsOilInfo:showsMainRoadInfo:"></a>
### drawRouteForIndex:inRect:showsOilInfo:showsMainRoadInfo:

경로선을 그린다.

`- (void)drawRouteForIndex:(NSInteger)*index* inRect:(CGRect)*rect* showsOilInfo:(BOOL)*showsOilInfo* showsMainRoadInfo:(BOOL)*showsMainRoadInfo*`

#### Parameters

*index*  
&nbsp;&nbsp;&nbsp;도로 ID  

*rect*  
&nbsp;&nbsp;&nbsp;도로 ID  

*showsOilInfo*  
&nbsp;&nbsp;&nbsp;true라면 경로 상의 유가정보를 표출한다.  

*showsMainRoadInfo*  
&nbsp;&nbsp;&nbsp;true라면 주요 도로명을 표출한다.  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/isSelectedOilInfo:" title="isSelectedOilInfo:"></a>
### isSelectedOilInfo:

주유소/충전소 팝업 객체 선택상태를 얻어온다.

`- (BOOL)isSelectedOilInfo:(NSInteger)*oilInfoID*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/objectTheme" title="objectTheme"></a>
### objectTheme

Object Theme 설정

`- (uint32_t)objectTheme`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/renderRouteLineFitInView:" title="renderRouteLineFitInView:"></a>
### renderRouteLineFitInView:

<pre><code>Engine에 지정된 경로중 하나를 View Level에 맞게 출력되도록 선택한다.
</code></pre>

`- (void)renderRouteLineFitInView:(NSInteger)*routeIndex*`

#### Parameters

*routeIndex*  
&nbsp;&nbsp;&nbsp;선택할 경로 ID  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/selectOilInfo:selected:" title="selectOilInfo:selected:"></a>
### selectOilInfo:selected:

주유소/충전소 팝업 객체 선택 / 선택 해제한다.

`- (void)selectOilInfo:(NSInteger)*oilInfoID* selected:(BOOL)*selected*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/selectRouteLine:" title="selectRouteLine:"></a>
### selectRouteLine:

<pre><code>Engine에 지정된 경로중 하나를 선택한다.
</code></pre>

`- (void)selectRouteLine:(NSInteger)*index*`

#### Parameters

*index*  
&nbsp;&nbsp;&nbsp;선택할 경로 ID  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setAlternativeRouteInfo:" title="setAlternativeRouteInfo:"></a>
### setAlternativeRouteInfo:

대안경로 정보

`- (void)setAlternativeRouteInfo:(VSMAlternativeRouteInfo *)*info*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setCurrentRGSDI:" title="setCurrentRGSDI:"></a>
### setCurrentRGSDI:

Safe drive info를 추가한다.
사고다발, 과속카메라, 방지턱 등등 도로 안전 운행 정보를 출력한다.

`- (BOOL)setCurrentRGSDI:(VSMSDI *)*pstSDI*`

#### Parameters

*pstSDI*  
&nbsp;&nbsp;&nbsp;주행 경로 상세 정보, nil값을 넣으면 아무 기능도 안함.  

#### Return Value
parameter가 유효하면 YES

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setDrawRouteData:isReroute:" title="setDrawRouteData:isReroute:"></a>
### setDrawRouteData:isReroute:

주행 경로를 넘겨준다.
navigation sdk를 통해 받은 routeData를 array로 묶어서 전달한다.

`- (BOOL)setDrawRouteData:(NSArray&lt;NSData*&gt; *)*routeDataArray* isReroute:(BOOL)*isReroute*`

#### Parameters

*routeDataArray*  
&nbsp;&nbsp;&nbsp;출발지, 도착지 정보  

*isReroute*  
&nbsp;&nbsp;&nbsp;경로 재탐색 유무  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setDrawRouteData:keepDepartureFlag:" title="setDrawRouteData:keepDepartureFlag:"></a>
### setDrawRouteData:keepDepartureFlag:

VSMRouteData으로 경로선 설정

`- (BOOL)setDrawRouteData:(NSArray&lt;VSMRouteData*&gt; *)*routeItems* keepDepartureFlag:(BOOL)*keepDepartureFlag*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setRotationAngle:withAnimation:" title="setRotationAngle:withAnimation:"></a>
### setRotationAngle:withAnimation:

회전 각도 변경
0도이면 진북 방향을 바라본다.

`- (BOOL)setRotationAngle:(CGFloat)*angle* withAnimation:(BOOL)*isAnim*`

#### Parameters

*angle*  
&nbsp;&nbsp;&nbsp;변경하려는 회전 각도  

*animation*  
&nbsp;&nbsp;&nbsp;애니메이션 사용 유무  

#### Declared In
* `VSMMapView.h`

<a name="//api/name/setRouteData:" title="setRouteData:"></a>
### setRouteData:

최저가 유가 정보만 표출한다.

`- (BOOL)setRouteData:(NSArray&lt;NSData*&gt; *)*routeData*`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setShowRoute:showFlag:" title="setShowRoute:showFlag:"></a>
### setShowRoute:showFlag:

경로선에 그려질 Object를 설정한다.

`- (void)setShowRoute:(BOOL)*show* showFlag:(uint32_t)*showFlag*`

#### Parameters

*show*  
&nbsp;&nbsp;&nbsp;경로선 표시 여부  

*showFlag*  
&nbsp;&nbsp;&nbsp;경로와 함께 표시될 경로 부가 정보. ShowRouteFlag* 참조  

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/setShowTrafficInfoOnRouteLine:" title="setShowTrafficInfoOnRouteLine:"></a>
### setShowTrafficInfoOnRouteLine:

/ [twice] es.kim ////

`- (void)setShowTrafficInfoOnRouteLine:(BOOL)*showTrafficInfoOnRouteLine*`

#### Declared In
* `VSMNavigationView.mm`

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

<a name="//api/name/setTrackMode:" title="setTrackMode:"></a>
### setTrackMode:

Map Move Mode

`- (void)setTrackMode:(MapTrackMode)*mode*`

#### Declared In
* `VSMMapView.h`

<a name="//api/name/showTrafficInfoOnRouteLine" title="showTrafficInfoOnRouteLine"></a>
### showTrafficInfoOnRouteLine

Traffic Info Route line 에 출력

`- (BOOL)showTrafficInfoOnRouteLine`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/unselectAllOilInfo" title="unselectAllOilInfo"></a>
### unselectAllOilInfo

주유소/충전소 팝업 선택해제

`- (void)unselectAllOilInfo`

#### Declared In
* `VSMNavigationView.h`

<a name="//api/name/updateObjectTheme:jsonData:" title="updateObjectTheme:jsonData:"></a>
### updateObjectTheme:jsonData:

object theme 내의 스타일을 업데이트 합니다.

`- (BOOL)updateObjectTheme:(uint32_t)*theme* jsonData:(NSString *)*jsonData*`

#### Parameters

*theme*  
&nbsp;&nbsp;&nbsp;테마  

*jsonData*  
&nbsp;&nbsp;&nbsp;속성 (참조 : <a href="https://tde.sktelecom.com/wiki/display/TMAPVSMSDK/Theme">https://tde.sktelecom.com/wiki/display/TMAPVSMSDK/Theme</a> )  

#### Declared In
* `VSMNavigationView.h`

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

