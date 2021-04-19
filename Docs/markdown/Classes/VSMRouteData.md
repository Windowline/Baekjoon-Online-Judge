# VSMRouteData Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMRouteData.h<br />  
VSMRouteData.mm  

## Tasks

### 

[&nbsp;&nbsp;data](#//api/name/data) *property* 

[&nbsp;&nbsp;points](#//api/name/points) *property* 

[&nbsp;&nbsp;styleName](#//api/name/styleName) *property* 

## Properties

<a name="//api/name/data" title="data"></a>
### data

경로선 데이터를 갖고 있는 {@link ByteBuffer} 배열

`@property (nonatomic, strong) NSData *data`

#### Declared In
* `VSMRouteData.h`

<a name="//api/name/points" title="points"></a>
### points

출발지/경유지/도착지. 설정 시 경로선 데이터 내의 위치 정보는 무시된다.

`@property (nonatomic, strong) NSArray&lt;VSMMapPoint*&gt; *points`

#### Declared In
* `VSMRouteData.h`

<a name="//api/name/styleName" title="styleName"></a>
### styleName

경로 요약 화면에서 해당 경로에 대한 style

`@property (nonatomic, strong) NSString *styleName`

#### Declared In
* `VSMRouteData.h`

