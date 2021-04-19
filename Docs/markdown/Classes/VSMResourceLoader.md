# VSMResourceLoader Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMResourceLoader.h<br />  
VSMResourceLoader.mm  

## Overview

<a href="../Classes/VSMResource.html">VSMResource</a> 을 일괄적으로 로딩하기 위한 클래스

## Tasks

### 

[&nbsp;&nbsp;delegate](#//api/name/delegate) *property* 

[&ndash;&nbsp;addItem:](#//api/name/addItem:)  

[&ndash;&nbsp;load](#//api/name/load)  

## Properties

<a name="//api/name/delegate" title="delegate"></a>
### delegate

<a href="#//api/name/load">[VSMResourceLoader load]</a> 에 대한 Listener를 설정합니다.

`@property (weak, atomic) id&lt;VSMResourceLoaderDelegate&gt; delegate`

#### Declared In
* `VSMResourceLoader.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/addItem:" title="addItem:"></a>
### addItem:

다운로드할 Resource를 추가합니다.

`- (void)addItem:(const VSMResource *)*item*`

#### Parameters

*item*  
&nbsp;&nbsp;&nbsp;다운로드할 <a href="../Classes/VSMResource.html">VSMResource</a>  

#### Declared In
* `VSMResourceLoader.h`

<a name="//api/name/load" title="load"></a>
### load

추가된 VSMResource을 일괄적으로 다운로드합니다.

`- (void)load`

#### Declared In
* `VSMResourceLoader.h`

