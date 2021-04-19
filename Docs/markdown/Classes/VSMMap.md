# VSMMap Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMMap.h<br />  
VSMMap.mm  

## Tasks

### 

[+&nbsp;sharedInstance](#//api/name/sharedInstance)  

[&ndash;&nbsp;initEngine](#//api/name/initEngine)  

[&ndash;&nbsp;destoryVSMEngine](#//api/name/destoryVSMEngine)  

[+&nbsp;getEngineVersion](#//api/name/getEngineVersion)  

[&ndash;&nbsp;cleanUpDiskCache](#//api/name/cleanUpDiskCache)  

[&ndash;&nbsp;setDiskCacheSizeLimit:](#//api/name/setDiskCacheSizeLimit:)  

[&ndash;&nbsp;getDiskCacheSizeLimit](#//api/name/getDiskCacheSizeLimit)  

[&ndash;&nbsp;getDiskCacheSize](#//api/name/getDiskCacheSize)  

[&ndash;&nbsp;setTileDBCachingMode:](#//api/name/setTileDBCachingMode:)  

[&ndash;&nbsp;getTileDBCachingMode](#//api/name/getTileDBCachingMode)  

[&ndash;&nbsp;checkNewEmbeddedMap](#//api/name/checkNewEmbeddedMap)  

[&ndash;&nbsp;startEmbeddedMapDownloadWithCompletion:](#//api/name/startEmbeddedMapDownloadWithCompletion:)  

[&ndash;&nbsp;setEmbeddedMapDownloadDelegate:](#//api/name/setEmbeddedMapDownloadDelegate:)  

[&ndash;&nbsp;stopEmbeddedMapDownload](#//api/name/stopEmbeddedMapDownload)  

[&ndash;&nbsp;deleteEmbeddedMapDownload](#//api/name/deleteEmbeddedMapDownload)  

[&ndash;&nbsp;getEmbeddedMapAvailable](#//api/name/getEmbeddedMapAvailable)  

[&ndash;&nbsp;getMapUpdateAvailable](#//api/name/getMapUpdateAvailable)  

[&ndash;&nbsp;getMapContinuousDownloadAvailable](#//api/name/getMapContinuousDownloadAvailable)  

[&ndash;&nbsp;getMapTotalDownloadSize](#//api/name/getMapTotalDownloadSize)  

[&ndash;&nbsp;getMapDownloadedSize](#//api/name/getMapDownloadedSize)  

[&ndash;&nbsp;getEmbeddedMapDLStatus](#//api/name/getEmbeddedMapDLStatus)  

[&ndash;&nbsp;getEmbeddedMapLocalVersion](#//api/name/getEmbeddedMapLocalVersion)  

[&ndash;&nbsp;setVSMRakeLogEventDelegate:](#//api/name/setVSMRakeLogEventDelegate:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/getEngineVersion" title="getEngineVersion"></a>
### getEngineVersion

Engine Version 리턴

`+ (NSString *)getEngineVersion`

#### Return Value
Engine Version

#### Declared In
* `VSMMap.h`

<a name="//api/name/sharedInstance" title="sharedInstance"></a>
### sharedInstance

<pre><code>VSMMap 객체를 반환한다.
</code></pre>

`+ (VSMMap *)sharedInstance`

#### Declared In
* `VSMMap.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/checkNewEmbeddedMap" title="checkNewEmbeddedMap"></a>
### checkNewEmbeddedMap

신규 Embedded Map 존재 여부 확인

`- (void)checkNewEmbeddedMap`

#### Declared In
* `VSMMap.h`

<a name="//api/name/cleanUpDiskCache" title="cleanUpDiskCache"></a>
### cleanUpDiskCache

Map Tile Cache 제거

`- (BOOL)cleanUpDiskCache`

#### Return Value
성공 여부

#### Declared In
* `VSMMap.h`

<a name="//api/name/deleteEmbeddedMapDownload" title="deleteEmbeddedMapDownload"></a>
### deleteEmbeddedMapDownload

Embedded Map 삭제

`- (bool)deleteEmbeddedMapDownload`

#### Return Value
동작 정상 수행 여부

#### Declared In
* `VSMMap.h`

<a name="//api/name/destoryVSMEngine" title="destoryVSMEngine"></a>
### destoryVSMEngine

<pre><code>VSM Engine을 종료 함.
</code></pre>

`- (BOOL)destoryVSMEngine`

#### Declared In
* `VSMMap.h`

<a name="//api/name/getDiskCacheSize" title="getDiskCacheSize"></a>
### getDiskCacheSize

사용 중인 Disk Cache Size를 반환 (Bytes)

`- (NSUInteger)getDiskCacheSize`

#### Declared In
* `VSMMap.h`

<a name="//api/name/getDiskCacheSizeLimit" title="getDiskCacheSizeLimit"></a>
### getDiskCacheSizeLimit

현재 설정된 최대 Disk Cache Size를 반환 (Bytes)

`- (NSUInteger)getDiskCacheSizeLimit`

#### Declared In
* `VSMMap.h`

<a name="//api/name/getEmbeddedMapAvailable" title="getEmbeddedMapAvailable"></a>
### getEmbeddedMapAvailable

다운로드 지도의 사용가능 여부를 조회하는 함수.

`- (bool)getEmbeddedMapAvailable`

#### Return Value
다운로드 지도의 사용가능 여부를 반환.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getEmbeddedMapDLStatus" title="getEmbeddedMapDLStatus"></a>
### getEmbeddedMapDLStatus

Embedded Map Download 현재 Status 리턴

`- (EmbeddedMapDLStatus)getEmbeddedMapDLStatus`

#### Return Value
Embedded Map Download 현재 Status 리턴

#### Declared In
* `VSMMap.h`

<a name="//api/name/getEmbeddedMapLocalVersion" title="getEmbeddedMapLocalVersion"></a>
### getEmbeddedMapLocalVersion

다운로드 지도의 버전을 조회하는 함수.

`- (NSString *)getEmbeddedMapLocalVersion`

#### Return Value
다운로드 지도의 버전을 조회하는 함수.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getMapContinuousDownloadAvailable" title="getMapContinuousDownloadAvailable"></a>
### getMapContinuousDownloadAvailable

지도 다운로드의 이어받기 가능여부를 조회하는 함수.

`- (bool)getMapContinuousDownloadAvailable`

#### Return Value
지도 다운로드의 이어받기 가능여부를 반환.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getMapDownloadedSize" title="getMapDownloadedSize"></a>
### getMapDownloadedSize

다운로드 중인 지도의 크기를 조회하는 함수.

`- (int)getMapDownloadedSize`

#### Return Value
다운로드 중인 지도의 크기를 반환.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getMapTotalDownloadSize" title="getMapTotalDownloadSize"></a>
### getMapTotalDownloadSize

지도 전체 다운로드 크기를 조회하는 함수.

`- (int)getMapTotalDownloadSize`

#### Return Value
지도 전체 다운로드 크기를 반환.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getMapUpdateAvailable" title="getMapUpdateAvailable"></a>
### getMapUpdateAvailable

다운로드 지도의 신규 업데이트가 존재여부를 조회하는 함수.

`- (bool)getMapUpdateAvailable`

#### Return Value
지도의 신규 업데이트 여부를 반환.

#### Declared In
* `VSMMap.h`

<a name="//api/name/getTileDBCachingMode" title="getTileDBCachingMode"></a>
### getTileDBCachingMode

지도 Tile DB Caching Mode 리턴

`- (DB_CACHING_MODE)getTileDBCachingMode`

#### Return Value
DB Caching Mode

#### Declared In
* `VSMMap.h`

<a name="//api/name/initEngine" title="initEngine"></a>
### initEngine

<pre><code>VSM Engine를 초기화 함.
</code></pre>

`- (bool)initEngine`

#### Return Value
VSM Map Engine 초기화 시작 성공/실패 여부.

#### Declared In
* `VSMMap.h`

<a name="//api/name/setDiskCacheSizeLimit:" title="setDiskCacheSizeLimit:"></a>
### setDiskCacheSizeLimit:

Disk Cache Size 설정

`- (void)setDiskCacheSizeLimit:(NSUInteger)*limit*`

#### Parameters

*limit*  
&nbsp;&nbsp;&nbsp;cache size (Bytes)  

#### Declared In
* `VSMMap.h`

<a name="//api/name/setEmbeddedMapDownloadDelegate:" title="setEmbeddedMapDownloadDelegate:"></a>
### setEmbeddedMapDownloadDelegate:

Embedded Map Download Delegate 설정

`- (void)setEmbeddedMapDownloadDelegate:(id&lt;EmbeddedMapDLStatusDelegate&gt;)*downloadStatusCB*`

#### Parameters

*downloadStatusCB*  
&nbsp;&nbsp;&nbsp;Embedded Map Download status Callback 함수  

#### Declared In
* `VSMMap.h`

<a name="//api/name/setTileDBCachingMode:" title="setTileDBCachingMode:"></a>
### setTileDBCachingMode:

지도 Tile DB Caching Mode 설정

`- (BOOL)setTileDBCachingMode:(DB_CACHING_MODE)*mode*`

#### Parameters

*mode*  
&nbsp;&nbsp;&nbsp;DB Caching Mode  

#### Return Value
정상 설정 여부

#### Declared In
* `VSMMap.h`

<a name="//api/name/setVSMRakeLogEventDelegate:" title="setVSMRakeLogEventDelegate:"></a>
### setVSMRakeLogEventDelegate:

VSM Rake logging을 위한 delegate 설정. deprecated

`- (void)setVSMRakeLogEventDelegate:(id)*delegate*`

#### Parameters

*delegate*  
&nbsp;&nbsp;&nbsp;VSM Rake logging을 위한 delegate  

#### Declared In
* `VSMMap.h`

<a name="//api/name/startEmbeddedMapDownloadWithCompletion:" title="startEmbeddedMapDownloadWithCompletion:"></a>
### startEmbeddedMapDownloadWithCompletion:

Embedded Map Download 시작

`- (bool)startEmbeddedMapDownloadWithCompletion:(MapDLEnddedBlock)*enddedBlock*`

#### Parameters

*enddedBlock*  
&nbsp;&nbsp;&nbsp;Embedded Map DL 완료후 수행할 block  

#### Return Value
동작 정상 수행 여부

#### Declared In
* `VSMMap.h`

<a name="//api/name/stopEmbeddedMapDownload" title="stopEmbeddedMapDownload"></a>
### stopEmbeddedMapDownload

Embedded Map Download 정지

`- (bool)stopEmbeddedMapDownload`

#### Return Value
동작 정상 수행 여부

#### Declared In
* `VSMMap.h`

