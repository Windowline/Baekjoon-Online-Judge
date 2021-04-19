# VSMTileLoaderDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMTileLoader.h  

## Tasks

### 

[&ndash;&nbsp;onTileLoaderError:](#//api/name/onTileLoaderError:)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onTileLoaderError:" title="onTileLoaderError:"></a>
### onTileLoaderError:

NoError = 0,
NetworkError,
NotFoundError,
TimeoutError,
ClientError,
ServerError,
DataError,
OutOfRangeError,
OperationCanceled,
UnknownError = 1000

`- (void)onTileLoaderError:(int32_t)*errorCode*`

#### Declared In
* `VSMTileLoader.h`

