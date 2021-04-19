# VSMMarkerBase Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** VSMMarkerBase.h<br />  
VSMMarkerBase.mm  

## Overview

Marker Base Class

## Tasks

### Other Methods

[&ndash;&nbsp;initWithID:params:](#//api/name/initWithID:params:)  

[+&nbsp;getAutoID](#//api/name/getAutoID)  

[&ndash;&nbsp;objectId](#//api/name/objectId)  

### Other Methods

[&nbsp;&nbsp;markerID](#//api/name/markerID) *property* 

[&nbsp;&nbsp;tag](#//api/name/tag) *property* 

[&nbsp;&nbsp;visible](#//api/name/visible) *property* 

[&nbsp;&nbsp;touchable](#//api/name/touchable) *property* 

[&nbsp;&nbsp;showPriority](#//api/name/showPriority) *property* 

## Properties

<a name="//api/name/markerID" title="markerID"></a>
### markerID

Marker ID

`@property (nonatomic, copy, readonly) NSString *markerID`

#### Declared In
* `VSMMarkerBase.h`

<a name="//api/name/showPriority" title="showPriority"></a>
### showPriority

Show priority (Marker간 z-order)

`@property (nonatomic, assign) float showPriority`

#### Declared In
* `VSMMarkerBase.h`

<a name="//api/name/tag" title="tag"></a>
### tag

You can use the tag to associate an Object with this marker.
To prevent memory leaks, you should call setTag(null).

`@property (nonatomic, strong) NSObject *tag`

#### Declared In
* `VSMMarkerBase.h`

<a name="//api/name/touchable" title="touchable"></a>
### touchable

Touch 지원 여부

`@property (nonatomic, assign) BOOL touchable`

#### Declared In
* `VSMMarkerBase.h`

<a name="//api/name/visible" title="visible"></a>
### visible

Visible 여부

`@property (nonatomic, assign) BOOL visible`

#### Declared In
* `VSMMarkerBase.h`

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/getAutoID" title="getAutoID"></a>
### getAutoID

Marker ID generation method

`+ (NSString *)getAutoID`

#### Declared In
* `VSMMarkerBase.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/initWithID:params:" title="initWithID:params:"></a>
### initWithID:params:

constructor

`- (id)initWithID:(NSString *)*markerID* params:(VSMMarkerBaseParams *)*params*`

#### Declared In
* `VSMMarkerBase.h`

<a name="//api/name/objectId" title="objectId"></a>
### objectId

internal id.

`- (NSUInteger)objectId`

#### Declared In
* `VSMMarkerBase.h`

