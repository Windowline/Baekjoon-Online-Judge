# VSMLocation Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMLocation.h<br />  
VSMLocation.mm  

## Overview

위치 정보를 갖고 있는 immutable 객체

## Tasks

### 

[&ndash;&nbsp;initWithLongitude:latitude:bearing:accuracy:](#//api/name/initWithLongitude:latitude:bearing:accuracy:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/initWithLongitude:latitude:bearing:accuracy:" title="initWithLongitude:latitude:bearing:accuracy:"></a>
### initWithLongitude:latitude:bearing:accuracy:

새로운 VSMLocation 객체를 생성합니다.

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
* `VSMLocation.h`

