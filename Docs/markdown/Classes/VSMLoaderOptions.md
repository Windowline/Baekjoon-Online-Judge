# VSMLoaderOptions Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMLoaderOptions.h<br />  
VSMLoaderOptions.mm  

## Overview

{@link ConfigurationLoader}를 위해 필요한 옵션 값을 갖고 있는 클래스

## Tasks

### 

[&nbsp;&nbsp;configUrl](#//api/name/configUrl) *property* 

[&nbsp;&nbsp;baseUrlPrefix](#//api/name/baseUrlPrefix) *property* 

[&nbsp;&nbsp;sslVerifyPeer](#//api/name/sslVerifyPeer) *property* 

[&nbsp;&nbsp;sslVerifyHost](#//api/name/sslVerifyHost) *property* 

[&nbsp;&nbsp;caCertFile](#//api/name/caCertFile) *property* 

[&nbsp;&nbsp;rootDir](#//api/name/rootDir) *property* 

[&nbsp;&nbsp;dataDir](#//api/name/dataDir) *property* 

[&nbsp;&nbsp;cacheDir](#//api/name/cacheDir) *property* 

[&nbsp;&nbsp;fullMapDir](#//api/name/fullMapDir) *property* 

[&nbsp;&nbsp;resourceVersion](#//api/name/resourceVersion) *property* 

[&nbsp;&nbsp;flags](#//api/name/flags) *property* 

[&nbsp;&nbsp;identifier](#//api/name/identifier) *property* 

## Properties

<a name="//api/name/baseUrlPrefix" title="baseUrlPrefix"></a>
### baseUrlPrefix

지도 타일, 교통 정보 등에 사용될 url의 prefix를 설정합니다. 예 <a href="http://farm43.ids.onestore.co.kr:8012/hub/vsm_dev">http://farm43.ids.onestore.co.kr:8012/hub/vsm_dev</a>

`@property (strong, nonatomic) NSString *baseUrlPrefix`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/caCertFile" title="caCertFile"></a>
### caCertFile

<b><i>미지원.</i></b> 인증서 파일의 위치를 설정합니다.

`@property (strong, nonatomic) NSString *caCertFile`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/cacheDir" title="cacheDir"></a>
### cacheDir

지도 타일/커스텀 레이어 파일이 저장되는 경로를 설정합니다.

`@property (strong, nonatomic) NSString *cacheDir`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/configUrl" title="configUrl"></a>
### configUrl

Application Configuration의 url을 설정합니다. 예) <a href="http://farm43.ids.onestore.co.kr:8012/hub/vsm_dev/config/application/TMAP.conf">http://farm43.ids.onestore.co.kr:8012/hub/vsm_dev/config/application/TMAP.conf</a>

`@property (strong, nonatomic) NSString *configUrl`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/dataDir" title="dataDir"></a>
### dataDir

데이터 파일이 저장되는 경로를 설정합니다.

`@property (strong, nonatomic) NSString *dataDir`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/flags" title="flags"></a>
### flags

{@link ConfigurationLoader} 동작에 대한 flags 값. LOADER_FLAG_* 설명을 참조합니다.

`@property (assign, nonatomic) int flags`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/fullMapDir" title="fullMapDir"></a>
### fullMapDir

전체 지도 DB를 다운로드할 경로를 설정합니다.

`@property (strong, nonatomic) NSString *fullMapDir`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/identifier" title="identifier"></a>
### identifier

configuration 및 resource 등을 저장할 때 참조하는 identifier 입니다.
null인 경우 내부적으로 configUrl의 host명으로부터 생성한 SHA-1 값을 이용하게 됩니다.
다른 server의 configuration을 로딩할 때, 이미 저장되어 있는 configuration/resource의 id, version이 같아 발생할 수 있는 오류를 예방합니다.

`@property (copy, nonatomic) NSString *identifier`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/resourceVersion" title="resourceVersion"></a>
### resourceVersion

리소스 버전 체크를 위한 값. 모든 리소스는 minSdkVer, maxSdkVer 필드를 갖고 있습니다.
지정한 resourceVersion 값이 [minSdkVer, maxSdkVer] 범위에 포함되지 않는 경우 해당 리소스는 무시됩니다.
이전 버전과의 호환성을 위해 기본값은 5이며, 0으로 설정 시 리소스 버전 확인을 하지 않습니다.

`@property (assign, nonatomic) int resourceVersion`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/rootDir" title="rootDir"></a>
### rootDir

Configuration 파일 및 Resource 파일이 저장될 root 경로를 설정합니다.

`@property (strong, nonatomic) NSString *rootDir`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/sslVerifyHost" title="sslVerifyHost"></a>
### sslVerifyHost

<b><i>미지원.</i></b> SSL 연결 시 인증서의 host를 검증합니다. 기본값은 true 입니다.

`@property (assign, nonatomic) bool sslVerifyHost`

#### Declared In
* `VSMLoaderOptions.h`

<a name="//api/name/sslVerifyPeer" title="sslVerifyPeer"></a>
### sslVerifyPeer

<b><i>미지원.</i></b> SSL 연결 시 인증서를 검증합니다. 기본값은 true 입니다.

`@property (assign, nonatomic) bool sslVerifyPeer`

#### Declared In
* `VSMLoaderOptions.h`

