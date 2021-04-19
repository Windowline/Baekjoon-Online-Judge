# VSMMarkerLocation Class Reference

&nbsp;&nbsp;**Inherits from** <a href="../Classes/VSMMarkerBase.html">VSMMarkerBase</a> :   
NSObject  
&nbsp;&nbsp;**Declared in** VSMMarkerLocation.h<br />  
VSMMarkerLocation.mm  

## Overview

Location Marker class

## Tasks

### Other Methods

[&ndash;&nbsp;initWithID:params:](#//api/name/initWithID:params:)  

### Other Methods

[&nbsp;&nbsp;position](#//api/name/position) *property* 

[&nbsp;&nbsp;icon](#//api/name/icon) *property* 

[&nbsp;&nbsp;iconSize](#//api/name/iconSize) *property* 

[&nbsp;&nbsp;bearing](#//api/name/bearing) *property* 

## Properties

<a name="//api/name/bearing" title="bearing"></a>
### bearing

bearing

`@property (nonatomic, assign) float bearing`

#### Declared In
* `VSMMarkerLocation.h`

<a name="//api/name/icon" title="icon"></a>
### icon

Icon

`@property (nonatomic, strong) VSMMarkerLocationIcon *icon`

#### Declared In
* `VSMMarkerLocation.h`

<a name="//api/name/iconSize" title="iconSize"></a>
### iconSize

Icon Width/Height

`@property (nonatomic, assign) CGSize iconSize`

#### Declared In
* `VSMMarkerLocation.h`

<a name="//api/name/position" title="position"></a>
### position

Position

`@property (nonatomic, strong) VSMMapPoint *position`

#### Declared In
* `VSMMarkerLocation.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/initWithID:params:" title="initWithID:params:"></a>
### initWithID:params:

constructor

`- (id)initWithID:(NSString *)*markerID* params:(VSMMarkerLocationParams *)*params*`

#### Declared In
* `VSMMarkerLocation.h`

