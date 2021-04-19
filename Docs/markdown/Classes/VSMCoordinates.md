# VSMCoordinates Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMCoordinates.h<br />  
VSMCoordinates.mm  

## Overview

<pre><code>VSM 좌표 변환 class
</code></pre>

## Tasks

### 

[+&nbsp;convertWorldToWgs84:worldY:longitude:latitude:](#//api/name/convertWorldToWgs84:worldY:longitude:latitude:)  

[+&nbsp;convertWorldToSk:worldY:skX:skY:](#//api/name/convertWorldToSk:worldY:skX:skY:)  

[+&nbsp;convertWorldToBessel:worldY:longitude:latitude:](#//api/name/convertWorldToBessel:worldY:longitude:latitude:)  

[+&nbsp;convertWgs84ToWorld:latitude:worldX:worldY:](#//api/name/convertWgs84ToWorld:latitude:worldX:worldY:)  

[+&nbsp;convertWgs84ToSk:latitude:skX:skY:](#//api/name/convertWgs84ToSk:latitude:skX:skY:)  

[+&nbsp;convertWgs84ToBessel:latitude:longitude:latitude:](#//api/name/convertWgs84ToBessel:latitude:longitude:latitude:)  

[+&nbsp;convertSkToWorld:skY:worldX:worldY:](#//api/name/convertSkToWorld:skY:worldX:worldY:)  

[+&nbsp;convertSkToWgs84:skY:longitude:latitude:](#//api/name/convertSkToWgs84:skY:longitude:latitude:)  

[+&nbsp;convertSkToBessel:skY:longitude:latitude:](#//api/name/convertSkToBessel:skY:longitude:latitude:)  

[+&nbsp;convertBesselToWorld:latitude:worldX:worldY:](#//api/name/convertBesselToWorld:latitude:worldX:worldY:)  

[+&nbsp;convertBesselToWgs84:latitude:longitude:latitude:](#//api/name/convertBesselToWgs84:latitude:longitude:latitude:)  

[+&nbsp;convertBesselToSk:latitude:skX:skY:](#//api/name/convertBesselToSk:latitude:skX:skY:)  

[+&nbsp;getOnlineAddress:isStreedName:](#//api/name/getOnlineAddress:isStreedName:)  

[+&nbsp;getAreaName:](#//api/name/getAreaName:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/convertBesselToSk:latitude:skX:skY:" title="convertBesselToSk:latitude:skX:skY:"></a>
### convertBesselToSk:latitude:skX:skY:

Bessel 좌표를 SK 좌표로 변환한다.

`+ (BOOL)convertBesselToSk:(double)*longitude* latitude:(double)*latitude* skX:(double *)*skX* skY:(double *)*skY*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel latitude 좌표  

*skX*  
&nbsp;&nbsp;&nbsp;변경된 SK X 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경된 SK Y 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertBesselToWgs84:latitude:longitude:latitude:" title="convertBesselToWgs84:latitude:longitude:latitude:"></a>
### convertBesselToWgs84:latitude:longitude:latitude:

Bessel 좌표를 WGS84 좌표로 변환한다.

`+ (BOOL)convertBesselToWgs84:(double)*longitude* latitude:(double)*latitude* longitude:(double *)*Wgs84Lon* latitude:(double *)*Wgs84Lat*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel latitude 좌표  

*Wgs84Lon*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 longitude 좌표  

*Wgs84Lat*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertBesselToWorld:latitude:worldX:worldY:" title="convertBesselToWorld:latitude:worldX:worldY:"></a>
### convertBesselToWorld:latitude:worldX:worldY:

Bessel 좌표를 World 좌표로 변환한다.

`+ (BOOL)convertBesselToWorld:(double)*longitude* latitude:(double)*latitude* worldX:(double *)*worldX* worldY:(double *)*worldY*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 Bessel latitude 좌표  

*worldX*  
&nbsp;&nbsp;&nbsp;변경된 World X 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경된 World Y 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertSkToBessel:skY:longitude:latitude:" title="convertSkToBessel:skY:longitude:latitude:"></a>
### convertSkToBessel:skY:longitude:latitude:

SK 좌표를 Bessel 좌표로 변환한다.

`+ (BOOL)convertSkToBessel:(double)*skX* skY:(double)*skY* longitude:(double *)*longitude* latitude:(double *)*latitude*`

#### Parameters

*skX*  
&nbsp;&nbsp;&nbsp;변경할 SK X 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경할 SK Y 좌표  

*longitude*  
&nbsp;&nbsp;&nbsp;변경된 Bessel longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경된 Bessel latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertSkToWgs84:skY:longitude:latitude:" title="convertSkToWgs84:skY:longitude:latitude:"></a>
### convertSkToWgs84:skY:longitude:latitude:

SK 좌표를 WGS84 좌표로 변환한다.

`+ (BOOL)convertSkToWgs84:(double)*skX* skY:(double)*skY* longitude:(double *)*longitude* latitude:(double *)*latitude*`

#### Parameters

*skX*  
&nbsp;&nbsp;&nbsp;변경할 SK X 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경할 SK Y 좌표  

*longitude*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertSkToWorld:skY:worldX:worldY:" title="convertSkToWorld:skY:worldX:worldY:"></a>
### convertSkToWorld:skY:worldX:worldY:

SK 좌표를 World 좌표로 변환한다.

`+ (BOOL)convertSkToWorld:(double)*skX* skY:(double)*skY* worldX:(double *)*worldX* worldY:(double *)*worldY*`

#### Parameters

*skX*  
&nbsp;&nbsp;&nbsp;변경할 SK X 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경할 SK Y 좌표  

*worldX*  
&nbsp;&nbsp;&nbsp;변경된 World X 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경된 World Y 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWgs84ToBessel:latitude:longitude:latitude:" title="convertWgs84ToBessel:latitude:longitude:latitude:"></a>
### convertWgs84ToBessel:latitude:longitude:latitude:

WGS84 좌표를 Bessel 좌표로 변환한다.

`+ (BOOL)convertWgs84ToBessel:(double)*longitude* latitude:(double)*latitude* longitude:(double *)*BesselLon* latitude:(double *)*BesselLat*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 latitude 좌표  

*BesselLon*  
&nbsp;&nbsp;&nbsp;변경된 Bessel longitude 좌표  

*BesselLat*  
&nbsp;&nbsp;&nbsp;변경된 Bessel latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWgs84ToSk:latitude:skX:skY:" title="convertWgs84ToSk:latitude:skX:skY:"></a>
### convertWgs84ToSk:latitude:skX:skY:

WGS84 좌표를 SK 좌표로 변환한다.

`+ (BOOL)convertWgs84ToSk:(double)*longitude* latitude:(double)*latitude* skX:(double *)*skX* skY:(double *)*skY*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 latitude 좌표  

*skX*  
&nbsp;&nbsp;&nbsp;변경된 SK X 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경된 SK Y 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWgs84ToWorld:latitude:worldX:worldY:" title="convertWgs84ToWorld:latitude:worldX:worldY:"></a>
### convertWgs84ToWorld:latitude:worldX:worldY:

WGS84 좌표를 World 좌표로 변환한다.

`+ (BOOL)convertWgs84ToWorld:(double)*longitude* latitude:(double)*latitude* worldX:(double *)*worldX* worldY:(double *)*worldY*`

#### Parameters

*longitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경할 WGS84 latitude 좌표  

*worldX*  
&nbsp;&nbsp;&nbsp;변경된 worldX longitude 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경된 worldY latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWorldToBessel:worldY:longitude:latitude:" title="convertWorldToBessel:worldY:longitude:latitude:"></a>
### convertWorldToBessel:worldY:longitude:latitude:

World 좌표를 Bessel 좌표로 변환한다.

`+ (BOOL)convertWorldToBessel:(double)*worldX* worldY:(double)*worldY* longitude:(double *)*longitude* latitude:(double *)*latitude*`

#### Parameters

*worldX*  
&nbsp;&nbsp;&nbsp;변경할 World X 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경할 World Y 좌표  

*longitude*  
&nbsp;&nbsp;&nbsp;변경된 Bessel longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경된 Bessel latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWorldToSk:worldY:skX:skY:" title="convertWorldToSk:worldY:skX:skY:"></a>
### convertWorldToSk:worldY:skX:skY:

World 좌표를 SK 좌표로 변환한다.

`+ (BOOL)convertWorldToSk:(double)*worldX* worldY:(double)*worldY* skX:(double *)*skX* skY:(double *)*skY*`

#### Parameters

*worldX*  
&nbsp;&nbsp;&nbsp;변경할 World X 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경할 World Y 좌표  

*skX*  
&nbsp;&nbsp;&nbsp;변경된 SK longitude 좌표  

*skY*  
&nbsp;&nbsp;&nbsp;변경된 SK latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/convertWorldToWgs84:worldY:longitude:latitude:" title="convertWorldToWgs84:worldY:longitude:latitude:"></a>
### convertWorldToWgs84:worldY:longitude:latitude:

World 좌표를 WGS84 좌표로 변환한다.

`+ (BOOL)convertWorldToWgs84:(double)*worldX* worldY:(double)*worldY* longitude:(double *)*longitude* latitude:(double *)*latitude*`

#### Parameters

*worldX*  
&nbsp;&nbsp;&nbsp;변경할 World X 좌표  

*worldY*  
&nbsp;&nbsp;&nbsp;변경할 World Y 좌표  

*longitude*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 longitude 좌표  

*latitude*  
&nbsp;&nbsp;&nbsp;변경된 WGS84 latitude 좌표  

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/getAreaName:" title="getAreaName:"></a>
### getAreaName:

WGS84 좌표로 부터 주소를 받아온다. (local DB 이용)

`+ (NSString *)getAreaName:(VSMMapPoint *)*point*`

#### Parameters

*point*  
&nbsp;&nbsp;&nbsp;조회할 WGS84 경위도 좌표  

#### Return Value
주소

#### Declared In
* `VSMCoordinates.h`

<a name="//api/name/getOnlineAddress:isStreedName:" title="getOnlineAddress:isStreedName:"></a>
### getOnlineAddress:isStreedName:

WGS84 좌표로 부터 주소를 받아온다. (Network 이용)

`+ (NSString *)getOnlineAddress:(VSMMapPoint *)*point* isStreedName:(BOOL)*isStreedName*`

#### Parameters

*point*  
&nbsp;&nbsp;&nbsp;조회할 WGS84 경위도 좌표  

*isStreedName*  
&nbsp;&nbsp;&nbsp;도로명 주소 여부  

#### Return Value
주소

#### Declared In
* `VSMCoordinates.h`

