# VSMLocationManager Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMLocationManager.h<br />  
VSMLocationManager.mm  

## Tasks

### Other Methods

[&ndash;&nbsp;initWithMapView:](#//api/name/initWithMapView:)  

[&ndash;&nbsp;updateLocation](#//api/name/updateLocation)  

[&ndash;&nbsp;destroy](#//api/name/destroy)  

### Other Methods

[&nbsp;&nbsp;lastLocation](#//api/name/lastLocation) *property* 

[&nbsp;&nbsp;locationComponent](#//api/name/locationComponent) *property* 

[&nbsp;&nbsp;locationProviderDelegate](#//api/name/locationProviderDelegate) *property* 

## Properties

<a name="//api/name/lastLocation" title="lastLocation"></a>
### lastLocation

지도에 설정된 마지막 위치 정보

`@property (atomic, strong, readonly) VSMLocation *lastLocation`

#### Declared In
* `VSMLocationManager.h`

<a name="//api/name/locationComponent" title="locationComponent"></a>
### locationComponent

현위치의 스타일을 변경할 수 있는 객체

`@property (nonatomic, strong, readonly) VSMLocationComponent *locationComponent`

#### Declared In
* `VSMLocationManager.h`

<a name="//api/name/locationProviderDelegate" title="locationProviderDelegate"></a>
### locationProviderDelegate

현위치 업데이트를 위한 VSMLocationProvider

`@property (atomic, weak, nullable) id&lt;VSMLocationProviderDelegate&gt; locationProviderDelegate`

#### Declared In
* `VSMLocationManager.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/destroy" title="destroy"></a>
### destroy

Internal Use Only

`- (void)destroy`

#### Declared In
* `VSMLocationManager.h`

<a name="//api/name/initWithMapView:" title="initWithMapView:"></a>
### initWithMapView:

생성자

`- (instancetype)initWithMapView:(VSMMapView *)*mapView*`

#### Declared In
* `VSMLocationManager.h`

<a name="//api/name/updateLocation" title="updateLocation"></a>
### updateLocation

Internal Use Only

`- (void)updateLocation`

#### Declared In
* `VSMLocationManager.h`

