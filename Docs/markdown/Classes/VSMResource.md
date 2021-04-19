# VSMResource Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMResource.h<br />  
VSMResource.mm  

## Overview

Resource 정보를 담고 있는 클래스

## Tasks

### 

[&nbsp;&nbsp;fileName](#//api/name/fileName) *property* 

[&nbsp;&nbsp;fullPath](#//api/name/fullPath) *property* 

[&nbsp;&nbsp;code](#//api/name/code) *property* 

[&nbsp;&nbsp;fileId](#//api/name/fileId) *property* 

[&nbsp;&nbsp;uri](#//api/name/uri) *property* 

[&nbsp;&nbsp;optional](#//api/name/optional) *property* 

[&nbsp;&nbsp;fileSize](#//api/name/fileSize) *property* 

[&nbsp;&nbsp;offlineOnly](#//api/name/offlineOnly) *property* 

[&nbsp;&nbsp;downloaded](#//api/name/downloaded) *property* 

[&nbsp;&nbsp;updated](#//api/name/updated) *property* 

[&nbsp;&nbsp;properties](#//api/name/properties) *property* 

## Properties

<a name="//api/name/code" title="code"></a>
### code

Resource 코드를 반환합니다.

`@property (strong, nonatomic, readonly) NSString *code`

#### Return Value
Resource 코드

#### Declared In
* `VSMResource.h`

<a name="//api/name/downloaded" title="downloaded"></a>
### downloaded

Resource가 다운로드 되었는지 여부를 반환합니다.

`@property (assign, nonatomic, readonly) bool downloaded`

#### Return Value
다운로드 되었는지 여부

#### Declared In
* `VSMResource.h`

<a name="//api/name/fileId" title="fileId"></a>
### fileId

Resource 파일 ID를 반환합니다.

`@property (strong, nonatomic, readonly) NSString *fileId`

#### Return Value
File ID

#### Declared In
* `VSMResource.h`

<a name="//api/name/fileName" title="fileName"></a>
### fileName

Resource 파일명을 반환합니다.

`@property (strong, nonatomic, readonly) NSString *fileName`

#### Return Value
리소스 파일명

#### Declared In
* `VSMResource.h`

<a name="//api/name/fileSize" title="fileSize"></a>
### fileSize

Resource의 파일 크기를 반환합니다.

`@property (assign, nonatomic, readonly) long fileSize`

#### Return Value
파일 크기

#### Declared In
* `VSMResource.h`

<a name="//api/name/fullPath" title="fullPath"></a>
### fullPath

Resource 파일의 전체 경로를 반환합니다.

`@property (strong, nonatomic, readonly) NSString *fullPath`

#### Return Value
리소스 파일의 전체 경로

#### Declared In
* `VSMResource.h`

<a name="//api/name/offlineOnly" title="offlineOnly"></a>
### offlineOnly

오프라인 전용 Resource 여부를 반환합니다.

`@property (assign, nonatomic, readonly) bool offlineOnly`

#### Return Value
오프라인 전용 Resource 여부

#### Declared In
* `VSMResource.h`

<a name="//api/name/optional" title="optional"></a>
### optional

선택적으로 받을 수 있는 Resource인지 여부. 예) 추가 성우

`@property (assign, nonatomic, readonly) bool optional`

#### Return Value
선택적으로 받을 수 있는 Resource인지 여부

#### Declared In
* `VSMResource.h`

<a name="//api/name/properties" title="properties"></a>
### properties

Resource가 가진 속성값을 반환합니다.

`@property (strong, nonatomic, readonly) NSDictionary *properties`

#### Return Value
Resource Property

#### Declared In
* `VSMResource.h`

<a name="//api/name/updated" title="updated"></a>
### updated

Resource 업데이트 되었는지 여부를 반환합니다.

`@property (assign, nonatomic, readonly) bool updated`

#### Return Value
업데이트 되었는지 여부

#### Declared In
* `VSMResource.h`

<a name="//api/name/uri" title="uri"></a>
### uri

Resource 파일의 URL을 반환합니다.

`@property (strong, nonatomic, readonly) NSString *uri`

#### Return Value
url

#### Declared In
* `VSMResource.h`

