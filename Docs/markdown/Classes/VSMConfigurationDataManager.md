# VSMConfigurationDataManager Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMConfigurationDataManager.h<br />  
VSMConfigurationDataManager.mm  

## Overview

VSMConfiguration를 관리하기 위한 클래스

## Tasks

### 

[+&nbsp;stageConfigurationData:](#//api/name/stageConfigurationData:)  

[+&nbsp;unstageConfigurationData:](#//api/name/unstageConfigurationData:)  

[+&nbsp;setActiveConfigurationData:changedCallback:](#//api/name/setActiveConfigurationData:changedCallback:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/setActiveConfigurationData:changedCallback:" title="setActiveConfigurationData:changedCallback:"></a>
### setActiveConfigurationData:changedCallback:

주어진 VSMConfiguration 를 Active로 설정합니다. <a href="../Classes/VSMMap.html#//api/name/initEngine">[VSMMap initEngine]</a> 호출 전 반드시 필요합니다.
Active한 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 변경 시 VSM 엔진은 기존 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 와 의존성이 있는 부분을 정리하고 새로운 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 을 사용하게 됩니다.

`+ (void)setActiveConfigurationData:(VSMConfiguration *)*configuration* changedCallback:(id&lt;VSMConfigurationChangedDelegate&gt;)*changedCallback*`

#### Parameters

*configuration*  
&nbsp;&nbsp;&nbsp;Active로 설정할 ConfigurationData  

*changedCallback*  
&nbsp;&nbsp;&nbsp;ConfigurationData 변경에 대한 callback  

#### Declared In
* `VSMConfigurationDataManager.h`

<a name="//api/name/stageConfigurationData:" title="stageConfigurationData:"></a>
### stageConfigurationData:

VSM 엔진은 특정 Resource에 대해 등록된 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 중 최신의 것을 사용할 수 있습니다.

`+ (void)stageConfigurationData:(VSMConfiguration *)*configuration*`

#### Parameters

*configuration*  
&nbsp;&nbsp;&nbsp;Stage할 ConfigurationData  

#### Declared In
* `VSMConfigurationDataManager.h`

<a name="//api/name/unstageConfigurationData:" title="unstageConfigurationData:"></a>
### unstageConfigurationData:

등록된 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 를 해제합니다. <b><i>정상적인 메모리 반환을 위해 등록 해제 필요합니다.</i></b>

`+ (void)unstageConfigurationData:(VSMConfiguration *)*configuration*`

#### Parameters

*configuration*  
&nbsp;&nbsp;&nbsp;Unstage할 ConfigurationData  

#### Declared In
* `VSMConfigurationDataManager.h`

