# VSMConfigurationLoader Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMConfigurationLoader.h<br />  
VSMConfigurationLoader.mm  

## Overview

<a href="../Classes/VSMLoaderOptions.html">VSMLoaderOptions</a> 에 의해 지정된 url(혹은 local 파일)로 부터 지도에 필요한 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 을 로딩하기 위한 클래스

## Tasks

### 

[&nbsp;&nbsp;delegate](#//api/name/delegate) *property* 

[&ndash;&nbsp;init:options:](#//api/name/init:options:)  

[&ndash;&nbsp;load](#//api/name/load)  

## Properties

<a name="//api/name/delegate" title="delegate"></a>
### delegate

<a href="#//api/name/load">[VSMConfigurationLoader load]</a> 에 대한 Listener를 설정합니다.

`@property (weak, atomic) id&lt;VSMConfigurationLoaderDelegate&gt; delegate`

#### Declared In
* `VSMConfigurationLoader.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/init:options:" title="init:options:"></a>
### init:options:

ConfigurationLoader 생성자

`- (instancetype)init:(int)*loaderID* options:(VSMLoaderOptions *)*options*`

#### Parameters

*loaderID*  
&nbsp;&nbsp;&nbsp;해당 값은 <a href="../Classes/VSMConfiguration.html#//api/name/configurationID">[VSMConfiguration configurationID]</a> 값으로 사용됩니다.  

*options*  
&nbsp;&nbsp;&nbsp;Configuration 로딩 시 사용할 설정값  

#### Declared In
* `VSMConfigurationLoader.h`

<a name="//api/name/load" title="load"></a>
### load

<a href="../Classes/VSMLoaderOptions.html">VSMLoaderOptions</a> 에 의해 지정된 url(혹은 local 파일)로 부터 지도에 필요한 VSMConfiguration 을 로딩합니다.
결과는 <a href="#//api/name/delegate">[VSMConfigurationLoader delegate]</a> 에 의해 등록된 리스너로 전달됩니다.

`- (void)load`

#### Declared In
* `VSMConfigurationLoader.h`

