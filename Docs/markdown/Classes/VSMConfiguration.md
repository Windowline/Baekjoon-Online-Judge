# VSMConfiguration Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMConfiguration.h<br />  
VSMConfiguration.mm  

## Overview

지도를 위한 Layer 정보, Resource 정보, Style 정보를 담고 있습니다. <a href="../Classes/VSMConfigurationLoader.html">VSMConfigurationLoader</a> 를 통해 객체를 생성합니다.

## Tasks

### 

[&nbsp;&nbsp;configurationID](#//api/name/configurationID) *property* 

[&nbsp;&nbsp;resourceList](#//api/name/resourceList) *property* 

[&nbsp;&nbsp;styleList](#//api/name/styleList) *property* 

[&nbsp;&nbsp;layerList](#//api/name/layerList) *property* 

[&nbsp;&nbsp;flags](#//api/name/flags) *property* 

## Properties

<a name="//api/name/configurationID" title="configurationID"></a>
### configurationID

<a href="../Classes/VSMConfigurationLoader.html">VSMConfigurationLoader</a> 생성 시 명시한 id 값.
Application은 VSMConfiguration 의 구분을 위해 id를 부여할 수 있습니다.

`@property (assign, nonatomic, readonly) int configurationID`

#### Return Value
id Application이 지정한 id 값

#### Declared In
* `VSMConfiguration.h`

<a name="//api/name/flags" title="flags"></a>
### flags

<a href="../Classes/VSMLoaderOptions.html#//api/name/flags">[VSMLoaderOptions flags]</a> 값을 반환합니다.

`@property (assign, nonatomic, readonly) int flags`

#### Return Value
<a href="../Classes/VSMLoaderOptions.html#//api/name/flags">[VSMLoaderOptions flags]</a> 값

#### Declared In
* `VSMConfiguration.h`

<a name="//api/name/layerList" title="layerList"></a>
### layerList

VSMLayerData 리스트

`@property (strong, nonatomic, readonly) NSArray&lt;VSMLayerData*&gt; *layerList`

#### Declared In
* `VSMConfiguration.h`

<a name="//api/name/resourceList" title="resourceList"></a>
### resourceList

<a href="../Classes/VSMResourcePackageData.html">VSMResourcePackageData</a> 리스트를 반환합니다.

`@property (strong, nonatomic, readonly) NSArray&lt;VSMResourcePackageData*&gt; *resourceList`

#### Return Value
리소스 패키지 리스트

#### Declared In
* `VSMConfiguration.h`

<a name="//api/name/styleList" title="styleList"></a>
### styleList

VSMStyleData 리스트

`@property (strong, nonatomic, readonly) NSArray&lt;VSMStyleData*&gt; *styleList`

#### Declared In
* `VSMConfiguration.h`

