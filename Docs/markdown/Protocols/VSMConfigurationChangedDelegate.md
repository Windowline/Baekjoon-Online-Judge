# VSMConfigurationChangedDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMConfigurationDataManager.h  

## Overview

Active한 VSMConfiguration가 변경될 때 호출되는 인터페이스

## Tasks

### 

[&ndash;&nbsp;onConfigurationDataWillChange](#//api/name/onConfigurationDataWillChange)  *required method*

[&ndash;&nbsp;onConfigurationDataDidChange:](#//api/name/onConfigurationDataDidChange:)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onConfigurationDataDidChange:" title="onConfigurationDataDidChange:"></a>
### onConfigurationDataDidChange:

VSMConfiguration가 변경된 후, VSM 엔진이 새로운 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 를 사용할 준비가 되었을 때 호출됩니다.

`- (void)onConfigurationDataDidChange:(nullable VSMConfiguration *)*newData*`

#### Declared In
* `VSMConfigurationDataManager.h`

<a name="//api/name/onConfigurationDataWillChange" title="onConfigurationDataWillChange"></a>
### onConfigurationDataWillChange

VSMConfiguration가 변경되기 전, VSM 엔진에서 기존 <a href="../Classes/VSMConfiguration.html">VSMConfiguration</a> 와 의존성이 있는 부분이 정리된 후 호출됩니다.

`- (void)onConfigurationDataWillChange`

#### Declared In
* `VSMConfigurationDataManager.h`

