# MapDataDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMMapViewDefine.h  

## Overview

Map View 관련 deletage

## Tasks

### 

[&ndash;&nbsp;viewLevelChanged:](#//api/name/viewLevelChanged:)  

[&ndash;&nbsp;positionChanged:](#//api/name/positionChanged:)  

[&ndash;&nbsp;viewAngleChanged:](#//api/name/viewAngleChanged:)  

[&ndash;&nbsp;viewTiltChanged:](#//api/name/viewTiltChanged:)  

[&ndash;&nbsp;addressTextChanged:](#//api/name/addressTextChanged:)  

[&ndash;&nbsp;screenCenterChanged:worldY:](#//api/name/screenCenterChanged:worldY:)  

[&ndash;&nbsp;cameraAnimationBegan](#//api/name/cameraAnimationBegan)  

[&ndash;&nbsp;cameraAnimationEnded](#//api/name/cameraAnimationEnded)  

[&ndash;&nbsp;userGestureBegan](#//api/name/userGestureBegan)  

[&ndash;&nbsp;userGestureEnded:](#//api/name/userGestureEnded:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/addressTextChanged:" title="addressTextChanged:"></a>
### addressTextChanged:

Address 변경 이벤트

`- (void)addressTextChanged:(NSString *)*text*`

#### Parameters

*text*  
&nbsp;&nbsp;&nbsp;변경된 주소  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/cameraAnimationBegan" title="cameraAnimationBegan"></a>
### cameraAnimationBegan

Api에 의한 카메라 이동 시작 이벤트

`- (void)cameraAnimationBegan`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/cameraAnimationEnded" title="cameraAnimationEnded"></a>
### cameraAnimationEnded

Api에 의한 카메라 이동 종료 이벤트

`- (void)cameraAnimationEnded`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/positionChanged:" title="positionChanged:"></a>
### positionChanged:

현위치 변경 이벤트

`- (void)positionChanged:(VSMMapPoint *)*point*`

#### Parameters

*point*  
&nbsp;&nbsp;&nbsp;변경된 위경도 좌표  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/screenCenterChanged:worldY:" title="screenCenterChanged:worldY:"></a>
### screenCenterChanged:worldY:

Screen Center 변경 이벤트

`- (void)screenCenterChanged:(NSInteger)*worldX* worldY:(NSInteger)*worldY*`

#### Parameters

*worldX*  
&nbsp;&nbsp;&nbsp;변경된 월드 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경된 월드 좌표  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/userGestureBegan" title="userGestureBegan"></a>
### userGestureBegan

사용자 터치 시작 이벤트

`- (void)userGestureBegan`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/userGestureEnded:" title="userGestureEnded:"></a>
### userGestureEnded:

사용자 터치 조작 종료 이벤트(추후 deaccelation이 발생할 수 있음)

`- (void)userGestureEnded:(BOOL)*cameraAnimationEnabled*`

#### Parameters

*cameraAnimationEnabled*  
&nbsp;&nbsp;&nbsp;사용자 입력 이후 카메라 애니메이션이 작동여부  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/viewAngleChanged:" title="viewAngleChanged:"></a>
### viewAngleChanged:

진북 기준 Angle 변경 이벤트

`- (void)viewAngleChanged:(float)*angle*`

#### Parameters

*angle*  
&nbsp;&nbsp;&nbsp;변경된 Angle  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/viewLevelChanged:" title="viewLevelChanged:"></a>
### viewLevelChanged:

Map View Level 변경 이벤트

`- (void)viewLevelChanged:(NSInteger)*value*`

#### Parameters

*value*  
&nbsp;&nbsp;&nbsp;변경된 level  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/viewTiltChanged:" title="viewTiltChanged:"></a>
### viewTiltChanged:

Tilt 변경 이벤트

`- (void)viewTiltChanged:(float)*tiltAngle*`

#### Parameters

*tiltAngle*  
&nbsp;&nbsp;&nbsp;변경된 Tilt  

#### Declared In
* `VSMMapViewDefine.h`

