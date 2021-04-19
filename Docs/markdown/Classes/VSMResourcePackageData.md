# VSMResourcePackageData Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMResourcePackageData.h<br />  
VSMResourcePackageData.mm  

## Overview

Resource 패키지 정보를 갖고 있는 클래스. Resource 패키지는 다수의 <a href="../Classes/VSMResource.html">VSMResource</a> 을 갖고 있습니다.

## Tasks

### Other Methods

[&ndash;&nbsp;avaliable](#//api/name/avaliable)  

### Other Methods

[&nbsp;&nbsp;rootDir](#//api/name/rootDir) *property* 

[&nbsp;&nbsp;packageID](#//api/name/packageID) *property* 

[&nbsp;&nbsp;code](#//api/name/code) *property* 

[&nbsp;&nbsp;packageType](#//api/name/packageType) *property* 

[&nbsp;&nbsp;name](#//api/name/name) *property* 

[&nbsp;&nbsp;version](#//api/name/version) *property* 

[&nbsp;&nbsp;itemList](#//api/name/itemList) *property* 

## Properties

<a name="//api/name/code" title="code"></a>
### code

패키지 code

`@property (strong, nonatomic, readonly) NSString *code`

#### Return Value
패키지 code

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/itemList" title="itemList"></a>
### itemList

<a href="../Classes/VSMResource.html">VSMResource</a> 목록을 반환합니다.

`@property (nonatomic, strong, readonly) NSArray&lt;VSMResource*&gt; *itemList`

#### Return Value
ResourceItem 목록

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/name" title="name"></a>
### name

패키지 이름

`@property (strong, nonatomic, readonly) NSString *name`

#### Return Value
패키지 이름

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/packageID" title="packageID"></a>
### packageID

패키지 id

`@property (assign, nonatomic, readonly) unsigned int packageID`

#### Return Value
패키지 id

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/packageType" title="packageType"></a>
### packageType

패키지 type

`@property (assign, nonatomic, readonly) int packageType`

#### Return Value
패키지 type

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/rootDir" title="rootDir"></a>
### rootDir

패키지가 갖고 있는 VSMResource들이 저장되는 root 경로를 리턴합니다.

`@property (strong, nonatomic, readonly) NSString *rootDir`

#### Return Value
패키지가 갖고 있는 VSMResource들이 저장되는 root 경로

#### Declared In
* `VSMResourcePackageData.h`

<a name="//api/name/version" title="version"></a>
### version

패키지 버전

`@property (strong, nonatomic, readonly) NSString *version`

#### Return Value
패키지 버전

#### Declared In
* `VSMResourcePackageData.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/avaliable" title="avaliable"></a>
### avaliable

패키지 다운로드 여부. <a href="../Classes/VSMResource.html#//api/name/optional">[VSMResource optional]</a> 이 아닌 Resource가 모두 다운로드 되었다면 true

`- (bool)avaliable`

#### Return Value
패키지 다운로드 여부

#### Declared In
* `VSMResourcePackageData.h`

