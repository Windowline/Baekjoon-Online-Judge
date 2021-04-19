# VSMSDI Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Conforms to** NSCopying  
&nbsp;&nbsp;**Declared in** VSMSDI.h<br />  
VSMSDI.mm  

## Tasks

### 

[&nbsp;&nbsp;sdiType](#//api/name/sdiType) *property* 

[&nbsp;&nbsp;sdiPoint](#//api/name/sdiPoint) *property* 

[&nbsp;&nbsp;sdiSpeedLimit](#//api/name/sdiSpeedLimit) *property* 

## Properties

<a name="//api/name/sdiPoint" title="sdiPoint"></a>
### sdiPoint

설치점 좌표

`@property (nonatomic, strong) VSMMapPoint *sdiPoint`

#### Declared In
* `VSMSDI.h`

<a name="//api/name/sdiSpeedLimit" title="sdiSpeedLimit"></a>
### sdiSpeedLimit

제한 속도 (0,30,40,50,60,70,80,90,100,110,120)

`@property (nonatomic, assign) NSInteger sdiSpeedLimit`

#### Declared In
* `VSMSDI.h`

<a name="//api/name/sdiType" title="sdiType"></a>
### sdiType

안도 리소스 이름

`@property (nonatomic, copy) NSString *sdiType`

#### Declared In
* `VSMSDI.h`

