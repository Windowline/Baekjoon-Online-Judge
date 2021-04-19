# VSMLocationComponent Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMLocationComponent.h<br />  
VSMLocationComponent.mm  

## Overview

현위치의 스타일을 변경하기 위한 기능을 제공합니다.

## Tasks

### 

[&ndash;&nbsp;initWithMapView:](#//api/name/initWithMapView:)  

[&ndash;&nbsp;icon](#//api/name/icon)  

[&ndash;&nbsp;iconSize](#//api/name/iconSize)  

[&ndash;&nbsp;iconVisible](#//api/name/iconVisible)  

[&ndash;&nbsp;accuracyVisible](#//api/name/accuracyVisible)  

[&ndash;&nbsp;accuracyFillColor](#//api/name/accuracyFillColor)  

[&ndash;&nbsp;accuracyStrokeColor](#//api/name/accuracyStrokeColor)  

[&ndash;&nbsp;accuracyStrokeWidth](#//api/name/accuracyStrokeWidth)  

[&ndash;&nbsp;updateLocation:](#//api/name/updateLocation:)  

[&ndash;&nbsp;destroy](#//api/name/destroy)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/accuracyFillColor" title="accuracyFillColor"></a>
### accuracyFillColor

정확도를 표시하는 원의 fill 색상을 설정합니다.

`- (UIColor *)accuracyFillColor`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/accuracyStrokeColor" title="accuracyStrokeColor"></a>
### accuracyStrokeColor

정확도를 표시하는 원의 stroke 색상을 설정합니다.

`- (UIColor *)accuracyStrokeColor`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/accuracyStrokeWidth" title="accuracyStrokeWidth"></a>
### accuracyStrokeWidth

정확도를 표시하는 원의 stroke 두께를 설정합니다.

`- (float)accuracyStrokeWidth`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/accuracyVisible" title="accuracyVisible"></a>
### accuracyVisible

정확도를 표시하는 원의 표시 여부를 설정합니다.

`- (BOOL)accuracyVisible`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/destroy" title="destroy"></a>
### destroy

Internal Use Only

`- (void)destroy`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/icon" title="icon"></a>
### icon

현위치 아이콘을 설정합니다.

`- (VSMMarkerLocationIcon *)icon`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/iconSize" title="iconSize"></a>
### iconSize

현위치 아이콘을 크기를 설정합니다.

`- (CGSize)iconSize`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/iconVisible" title="iconVisible"></a>
### iconVisible

현위치 아이콘 표시 여부를 설정합니다.

`- (BOOL)iconVisible`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/initWithMapView:" title="initWithMapView:"></a>
### initWithMapView:

생성자

`- (instancetype)initWithMapView:(VSMMapView *)*mapView*`

#### Declared In
* `VSMLocationComponent.h`

<a name="//api/name/updateLocation:" title="updateLocation:"></a>
### updateLocation:

Internal Use Only

`- (void)updateLocation:(VSMLocation *)*location*`

#### Declared In
* `VSMLocationComponent.h`

