# VSMResourceLoaderDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMResourceLoader.h  

## Overview

<a href="../Classes/VSMResourceLoader.html#//api/name/load">[VSMResourceLoader load]</a> 에 대한 Listener. VSM 내부의 thread에서 호출됩니다.

## Tasks

### 

[&ndash;&nbsp;onResourceLoaderStart](#//api/name/onResourceLoaderStart)  *required method*

[&ndash;&nbsp;onResourceLoaderProgress:total:downloadedSize:totalSize:](#//api/name/onResourceLoaderProgress:total:downloadedSize:totalSize:)  *required method*

[&ndash;&nbsp;onResourceLoaderSuccess](#//api/name/onResourceLoaderSuccess)  *required method*

[&ndash;&nbsp;onResourceLoaderError:](#//api/name/onResourceLoaderError:)  *required method*

[&ndash;&nbsp;onResourceLoaderFinished](#//api/name/onResourceLoaderFinished)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onResourceLoaderError:" title="onResourceLoaderError:"></a>
### onResourceLoaderError:

Resource 로딩에 실패할 경우 호출되는 callback

`- (void)onResourceLoaderError:(NSInteger)*errorCode*`

#### Parameters

*errorCode*  
&nbsp;&nbsp;&nbsp;에러 코드는 다음과 같습니다

<ul>
<li>HttpRequestError_COULDNT_RESOLVE_HOST = 6,</li>
<li>HttpRequestError_COULDNT_CONNECT = 7,</li>
<li>HttpRequestError_WRITE_ERROR = 23,</li>
<li>HttpRequestError_OPERATION_TIMEDOUT = 28,</li>
<li>HttpRequestError_SEND_ERROR = 55,</li>
<li>HttpRequestError_RECV_ERROR = 56,</li>
<li>100~600: Http Status</li>
<li>HttpRequestError_UNKNOWN = 1000</li>
</ul>
  

#### Declared In
* `VSMResourceLoader.h`

<a name="//api/name/onResourceLoaderFinished" title="onResourceLoaderFinished"></a>
### onResourceLoaderFinished

Resource 로딩 작업이 완료되었을 경우 호출되는 callback. 성공/실패 관계 없이 항상 호출됩니다.

`- (void)onResourceLoaderFinished`

#### Declared In
* `VSMResourceLoader.h`

<a name="//api/name/onResourceLoaderProgress:total:downloadedSize:totalSize:" title="onResourceLoaderProgress:total:downloadedSize:totalSize:"></a>
### onResourceLoaderProgress:total:downloadedSize:totalSize:

Resource 로딩 진행 상태를 위한 callback

`- (void)onResourceLoaderProgress:(NSUInteger)*count* total:(NSUInteger)*total* downloadedSize:(NSUInteger)*downloadedSize* totalSize:(NSUInteger)*totalSize*`

#### Parameters

*count*  
&nbsp;&nbsp;&nbsp;다운로드된 개수  

*total*  
&nbsp;&nbsp;&nbsp;다운로드할 전체 개수  

*downloadedSize*  
&nbsp;&nbsp;&nbsp;다운로드된 사이즈(Byte)  

*totalSize*  
&nbsp;&nbsp;&nbsp;다운로드할 전체 파일 사이즈(Byte)  

#### Declared In
* `VSMResourceLoader.h`

<a name="//api/name/onResourceLoaderStart" title="onResourceLoaderStart"></a>
### onResourceLoaderStart

Resource 로딩을 시작한 경우 호출되는 callback

`- (void)onResourceLoaderStart`

#### Declared In
* `VSMResourceLoader.h`

<a name="//api/name/onResourceLoaderSuccess" title="onResourceLoaderSuccess"></a>
### onResourceLoaderSuccess

Resource 로딩을 성공한 경우 호출되는 callback

`- (void)onResourceLoaderSuccess`

#### Declared In
* `VSMResourceLoader.h`

