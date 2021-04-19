# VSMMatchedLocation Class Reference

&nbsp;&nbsp;**Inherits from** <a href="../Classes/VSMLocation.html">VSMLocation</a> :   
NSObject  
&nbsp;&nbsp;**Declared in** VSMMatchedLocation.h<br />  
VSMMatchedLocation.mm  

## Overview

경로에 매칭된 위치 정보를 갖는 객체

## Tasks

### Other Methods

[&ndash;&nbsp;initWithLongitude:latitude:bearing:accuracy:index:routeId:](#//api/name/initWithLongitude:latitude:bearing:accuracy:index:routeId:)  

[&ndash;&nbsp;initWithLongitude:latitude:bearing:accuracy:](#//api/name/initWithLongitude:latitude:bearing:accuracy:)  

[&ndash;&nbsp;initWithLocation:](#//api/name/initWithLocation:)  

### Other Methods

[&nbsp;&nbsp;index](#//api/name/index) *property* 

[&nbsp;&nbsp;routeId](#//api/name/routeId) *property* 

## Properties

<a name="//api/name/index" title="index"></a>
### index

맵매칭된 경로 vertex index

`@property (nonatomic, assign, readonly) int32_t index`

#### Declared In
* `VSMMatchedLocation.h`

<a name="//api/name/routeId" title="routeId"></a>
### routeId

맵매칭에 사용된 경로의 id

`@property (nonatomic, assign, readonly) int32_t routeId`

#### Declared In
* `VSMMatchedLocation.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/initWithLocation:" title="initWithLocation:"></a>
### initWithLocation:

새로운 VSMMatchedLocation 객체를 생성합니다.

`- (instancetype)initWithLocation:(VSMLocation *)*location*`

#### Parameters

*location*  
&nbsp;&nbsp;&nbsp;위치 정보 객체  

#### Declared In
* `VSMMatchedLocation.h`

<a name="//api/name/initWithLongitude:latitude:bearing:accuracy:" title="initWithLongitude:latitude:bearing:accuracy:"></a>
### initWithLongitude:latitude:bearing:accuracy:

새로운 VSMMatchedLocation 객체를 생성합니다.

`- (instancetype)initWithLongitude:(double)*longitude* latitude:(double)*latitude* bearing:(float)*bearing* accuracy:(float)*accuracy*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;경도  

*latitude*  
&nbsp;&nbsp;&nbsp;위도  

*bearing*  
&nbsp;&nbsp;&nbsp;방향 각도  

*accuracy*  
&nbsp;&nbsp;&nbsp;정확도 (미터 단위)  

#### Declared In
* `VSMMatchedLocation.h`

<a name="//api/name/initWithLongitude:latitude:bearing:accuracy:index:routeId:" title="initWithLongitude:latitude:bearing:accuracy:index:routeId:"></a>
### initWithLongitude:latitude:bearing:accuracy:index:routeId:

새로운 VSMMatchedLocation 객체를 생성합니다.

`- (instancetype)initWithLongitude:(double)*longitude* latitude:(double)*latitude* bearing:(float)*bearing* accuracy:(float)*accuracy* index:(int32_t)*index* routeId:(int32_t)*routeId*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;경도  

*latitude*  
&nbsp;&nbsp;&nbsp;위도  

*bearing*  
&nbsp;&nbsp;&nbsp;방향 각도  

*accuracy*  
&nbsp;&nbsp;&nbsp;정확도 (미터 단위)  

*index*  
&nbsp;&nbsp;&nbsp;맵매칭된 경로 vertex <a href="#//api/name/index">index</a>  

*routeId*  
&nbsp;&nbsp;&nbsp;맵매칭에 사용된 경로의 id  

#### Declared In
* `VSMMatchedLocation.h`

