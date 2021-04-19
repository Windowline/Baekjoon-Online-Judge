# MapTouchDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMMapViewDefine.h  

## Overview

Map View Touch deletage

## Tasks

### 

[&ndash;&nbsp;mapViewTouchesBegan:withEvent:](#//api/name/mapViewTouchesBegan:withEvent:)  

[&ndash;&nbsp;mapViewTouchesEnded:withEvent:](#//api/name/mapViewTouchesEnded:withEvent:)  

[&ndash;&nbsp;mapViewTouchesCancled:withEvent:](#//api/name/mapViewTouchesCancled:withEvent:)  

[&ndash;&nbsp;mapViewLongPressed:](#//api/name/mapViewLongPressed:)  

[&ndash;&nbsp;mapViewDidSingleTap:screenPoint:](#//api/name/mapViewDidSingleTap:screenPoint:)  

[&ndash;&nbsp;mapViewDidDoubleTap:screenPoint:](#//api/name/mapViewDidDoubleTap:screenPoint:)  

[&ndash;&nbsp;mapViewWillPinchIn:](#//api/name/mapViewWillPinchIn:)  

[&ndash;&nbsp;mapViewWillPinchOut:](#//api/name/mapViewWillPinchOut:)  

[&ndash;&nbsp;mapViewWillStartPan:](#//api/name/mapViewWillStartPan:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/mapViewDidDoubleTap:screenPoint:" title="mapViewDidDoubleTap:screenPoint:"></a>
### mapViewDidDoubleTap:screenPoint:

Double Tab event

`- (void)mapViewDidDoubleTap:(UIView *)*mapView* screenPoint:(CGPoint)*screenPoint*`

#### Parameters

*mapView*  
&nbsp;&nbsp;&nbsp;터치한 Map View  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewDidSingleTap:screenPoint:" title="mapViewDidSingleTap:screenPoint:"></a>
### mapViewDidSingleTap:screenPoint:

Single Tab event

`- (void)mapViewDidSingleTap:(UIView *)*mapView* screenPoint:(CGPoint)*screenPoint*`

#### Parameters

*mapView*  
&nbsp;&nbsp;&nbsp;터치한 Map View  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewLongPressed:" title="mapViewLongPressed:"></a>
### mapViewLongPressed:

Map View Long Press 이벤트

`- (void)mapViewLongPressed:(CGPoint)*location*`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewTouchesBegan:withEvent:" title="mapViewTouchesBegan:withEvent:"></a>
### mapViewTouchesBegan:withEvent:

Map View Touch Began 이벤트

`- (void)mapViewTouchesBegan:(NSSet *)*touches* withEvent:(UIEvent *)*event*`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewTouchesCancled:withEvent:" title="mapViewTouchesCancled:withEvent:"></a>
### mapViewTouchesCancled:withEvent:

Map View Touch Canceled 이벤트

`- (void)mapViewTouchesCancled:(NSSet *)*touches* withEvent:(UIEvent *)*event*`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewTouchesEnded:withEvent:" title="mapViewTouchesEnded:withEvent:"></a>
### mapViewTouchesEnded:withEvent:

Map View Touch Ended 이벤트

`- (void)mapViewTouchesEnded:(NSSet *)*touches* withEvent:(UIEvent *)*event*`

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewWillPinchIn:" title="mapViewWillPinchIn:"></a>
### mapViewWillPinchIn:

Pinch In event

`- (void)mapViewWillPinchIn:(UIView *)*mapView*`

#### Parameters

*mapView*  
&nbsp;&nbsp;&nbsp;Pinch In Map View  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewWillPinchOut:" title="mapViewWillPinchOut:"></a>
### mapViewWillPinchOut:

Pinch Out event

`- (void)mapViewWillPinchOut:(UIView *)*mapView*`

#### Parameters

*mapView*  
&nbsp;&nbsp;&nbsp;Pinch Out Map View  

#### Declared In
* `VSMMapViewDefine.h`

<a name="//api/name/mapViewWillStartPan:" title="mapViewWillStartPan:"></a>
### mapViewWillStartPan:

Panning event

`- (void)mapViewWillStartPan:(UIView *)*mapView*`

#### Parameters

*mapView*  
&nbsp;&nbsp;&nbsp;Panning Map View  

#### Declared In
* `VSMMapViewDefine.h`

