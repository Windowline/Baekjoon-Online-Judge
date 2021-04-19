# VSMConfigurationLoaderDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMConfigurationLoader.h  

## Overview

VSM <a href="../Classes/VSMConfigurationLoader.html#//api/name/load">[VSMConfigurationLoader load]</a> 에 대한 Listener. VSM 내부의 thread에서 호출됩니다.
*

## Tasks

### 

[&ndash;&nbsp;onConfigurationLoaderSuccess:](#//api/name/onConfigurationLoaderSuccess:)  *required method*

[&ndash;&nbsp;onConfigurationLoaderError:](#//api/name/onConfigurationLoaderError:)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onConfigurationLoaderError:" title="onConfigurationLoaderError:"></a>
### onConfigurationLoaderError:

Configuration을 정상적으로 로딩하지 못하였을 경우 errorCode를 전달합니다.

`- (void)onConfigurationLoaderError:(int)*errorCode*`

#### Parameters

*errorCode*  
&nbsp;&nbsp;&nbsp;에러 코드는 다음과 같습니다.

<ul>
<li>﻿LoaderErrorAppHttpClient = 100,</li>
<li>LoaderErrorAppHttpServer,</li>
<li>LoaderErrorAppParsing,</li>
<li>LoaderErrorAppCouldNotResolveHost,</li>
<li>LoaderErrorAppCouldNotConnect,</li>
<li>LoaderErrorAppWriteError,</li>
<li>LoaderErrorAppOperationTimedout,</li>
<li>LoaderErrorAppSendError,</li>
<li>LoaderErrorAppRecvError,</li>
<li>LoaderErrorAppUnknown,</li>
<li>LoaderErrorLayerHttpClient = 200,</li>
<li>LoaderErrorLayerHttpServer,</li>
<li>LoaderErrorLayerParsing,</li>
<li>LoaderErrorLayerCouldNotResolveHost,</li>
<li>LoaderErrorLayerCouldNotConnect,</li>
<li>LoaderErrorLayerWriteError,</li>
<li>LoaderErrorLayerOperationTimedout,</li>
<li>LoaderErrorLayerSendError,</li>
<li>LoaderErrorLayerRecvError,</li>
<li>LoaderErrorLayerUnknown,</li>
<li>LoaderErrorResourceHttpClient = 300,</li>
<li>LoaderErrorResourceHttpServer,</li>
<li>LoaderErrorResourceParsing,</li>
<li>LoaderErrorResourceCouldNotResolveHost,</li>
<li>LoaderErrorResourceCouldNotConnect,</li>
<li>LoaderErrorResourceWriteError,</li>
<li>LoaderErrorResourceOperationTimedout,</li>
<li>LoaderErrorResourceSendError,</li>
<li>LoaderErrorResourceRecvError,</li>
<li>LoaderErrorResourceUnknown,</li>
<li>LoaderErrorStyleHttpClient = 400,</li>
<li>LoaderErrorStyleHttpServer,</li>
<li>LoaderErrorStyleParsing,</li>
<li>LoaderErrorStyleCouldNotResolveHost,</li>
<li>LoaderErrorStyleCouldNotConnect,</li>
<li>LoaderErrorStyleWriteError,</li>
<li>LoaderErrorStyleOperationTimedout,</li>
<li>LoaderErrorStyleSendError,</li>
<li>LoaderErrorStyleRecvError,</li>
<li>LoaderErrorStyleUnknown,</li>
<li>LoaderErrorUnknown = 1000</li>
</ul>
  

#### Declared In
* `VSMConfigurationLoader.h`

<a name="//api/name/onConfigurationLoaderSuccess:" title="onConfigurationLoaderSuccess:"></a>
### onConfigurationLoaderSuccess:

Configuration을 정상적으로 로딩하였을 경우 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 객체를 전달합니다.

`- (void)onConfigurationLoaderSuccess:(VSMConfiguration *)*data*`

#### Parameters

*data*  
&nbsp;&nbsp;&nbsp;<a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 객체  

#### Declared In
* `VSMConfigurationLoader.h`

