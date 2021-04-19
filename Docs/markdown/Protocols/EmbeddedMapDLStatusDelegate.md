# EmbeddedMapDLStatusDelegate Protocol Reference

&nbsp;&nbsp;**Declared in** VSMMapDefine.h  

## Overview

<pre><code>Embedded Map Download Status Delegate
</code></pre>

## Tasks

### 

[&ndash;&nbsp;onEmbeddedMapDownloadStart](#//api/name/onEmbeddedMapDownloadStart)  *required method*

[&ndash;&nbsp;onEmbeddedMapDownloadStop](#//api/name/onEmbeddedMapDownloadStop)  *required method*

[&ndash;&nbsp;onEmbeddedMapDownloadProgress:total:](#//api/name/onEmbeddedMapDownloadProgress:total:)  *required method*

[&ndash;&nbsp;onEmbeddedMapDownloadEnd](#//api/name/onEmbeddedMapDownloadEnd)  *required method*

[&ndash;&nbsp;onEmbeddedMapDownloadFail](#//api/name/onEmbeddedMapDownloadFail)  *required method*

[&ndash;&nbsp;onEmbeddedMapDownloadChecked](#//api/name/onEmbeddedMapDownloadChecked)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onEmbeddedMapDownloadChecked" title="onEmbeddedMapDownloadChecked"></a>
### onEmbeddedMapDownloadChecked

Embedded Map Checked

`- (bool)onEmbeddedMapDownloadChecked`

#### Declared In
* `VSMMapDefine.h`

<a name="//api/name/onEmbeddedMapDownloadEnd" title="onEmbeddedMapDownloadEnd"></a>
### onEmbeddedMapDownloadEnd

<pre><code>Embedded Map Download end
</code></pre>

`- (bool)onEmbeddedMapDownloadEnd`

#### Declared In
* `VSMMapDefine.h`

<a name="//api/name/onEmbeddedMapDownloadFail" title="onEmbeddedMapDownloadFail"></a>
### onEmbeddedMapDownloadFail

<pre><code>Embedded Map Download fail
</code></pre>

`- (bool)onEmbeddedMapDownloadFail`

#### Declared In
* `VSMMapDefine.h`

<a name="//api/name/onEmbeddedMapDownloadProgress:total:" title="onEmbeddedMapDownloadProgress:total:"></a>
### onEmbeddedMapDownloadProgress:total:

<pre><code>Embedded Map Download progress
</code></pre>

`- (bool)onEmbeddedMapDownloadProgress:(NSUInteger)*current* total:(NSUInteger)*total*`

#### Discussion
<pre><code>@parem current 현재까지 다운받은 Size
@parem total 총 다운 받을 Size
</code></pre>

#### Declared In
* `VSMMapDefine.h`

<a name="//api/name/onEmbeddedMapDownloadStart" title="onEmbeddedMapDownloadStart"></a>
### onEmbeddedMapDownloadStart

<pre><code>Embedded Map Download start
</code></pre>

`- (bool)onEmbeddedMapDownloadStart`

#### Declared In
* `VSMMapDefine.h`

<a name="//api/name/onEmbeddedMapDownloadStop" title="onEmbeddedMapDownloadStop"></a>
### onEmbeddedMapDownloadStop

<pre><code>Embedded Map Download stop
</code></pre>

`- (bool)onEmbeddedMapDownloadStop`

#### Declared In
* `VSMMapDefine.h`

