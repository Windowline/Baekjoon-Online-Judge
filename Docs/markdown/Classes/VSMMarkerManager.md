# VSMMarkerManager Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMMarkerManager.h<br />  
VSMMarkerManager.mm  

## Overview

VSMMapView에 종속적인 마커 관리자 객체

## Tasks

### 

[&ndash;&nbsp;removeAllMarkers](#//api/name/removeAllMarkers)  

[&ndash;&nbsp;addMarker:](#//api/name/addMarker:)  

[&ndash;&nbsp;removeMarker:](#//api/name/removeMarker:)  

[&ndash;&nbsp;getBounds](#//api/name/getBounds)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/addMarker:" title="addMarker:"></a>
### addMarker:

marker를 추가한다.

`- (BOOL)addMarker:(VSMMarkerBase *)*marker*`

#### Parameters

*marker*  
&nbsp;&nbsp;&nbsp;마커 데이터 객체  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMarkerManager.h`

<a name="//api/name/getBounds" title="getBounds"></a>
### getBounds

internal use, 마커의 위경도 bbox

`- (LatLonBounds *)getBounds`

#### Declared In
* `VSMMarkerManager.h`

<a name="//api/name/removeAllMarkers" title="removeAllMarkers"></a>
### removeAllMarkers

모든 marker 제거

`- (void)removeAllMarkers`

#### Declared In
* `VSMMarkerManager.h`

<a name="//api/name/removeMarker:" title="removeMarker:"></a>
### removeMarker:

marker를 제거한다.

`- (BOOL)removeMarker:(VSMMarkerBase *)*marker*`

#### Parameters

*marker*  
&nbsp;&nbsp;&nbsp;마커 데이터 객체  

#### Return Value
boolean 변환 성공 여부.

#### Declared In
* `VSMMarkerManager.h`

