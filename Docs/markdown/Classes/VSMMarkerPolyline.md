# VSMMarkerPolyline Class Reference

&nbsp;&nbsp;**Inherits from** <a href="../Classes/VSMMarkerBase.html">VSMMarkerBase</a> :   
NSObject  
&nbsp;&nbsp;**Declared in** VSMMarkerPolyline.h<br />  
VSMMarkerPolyline.mm  

## Tasks

### 

[&nbsp;&nbsp;points](#//api/name/points) *property* 

[&nbsp;&nbsp;fillColor](#//api/name/fillColor) *property* 

[&nbsp;&nbsp;strokeColor](#//api/name/strokeColor) *property* 

[&nbsp;&nbsp;strokeWidth](#//api/name/strokeWidth) *property* 

[&nbsp;&nbsp;lineWidth](#//api/name/lineWidth) *property* 

[&nbsp;&nbsp;lineDash](#//api/name/lineDash) *property* 

[&nbsp;&nbsp;icon](#//api/name/icon) *property* 

[&ndash;&nbsp;initWithID:params:](#//api/name/initWithID:params:)  

## Properties

<a name="//api/name/fillColor" title="fillColor"></a>
### fillColor

Fill color

`@property (nonatomic, strong) UIColor *fillColor`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/icon" title="icon"></a>
### icon

Icon

`@property (nonatomic, strong) UIImage *icon`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/lineDash" title="lineDash"></a>
### lineDash

Line Dash Style

`@property (nonatomic, copy) LineDashStyleData *lineDash`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/lineWidth" title="lineWidth"></a>
### lineWidth

Line width

`@property (nonatomic, assign) float lineWidth`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/points" title="points"></a>
### points

Points

`@property (nonatomic, strong) NSArray&lt;VSMMapPoint*&gt; *points`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/strokeColor" title="strokeColor"></a>
### strokeColor

Stroke color

`@property (nonatomic, strong) UIColor *strokeColor`

#### Declared In
* `VSMMarkerPolyline.h`

<a name="//api/name/strokeWidth" title="strokeWidth"></a>
### strokeWidth

Stroke Width

`@property (nonatomic, assign) float strokeWidth`

#### Declared In
* `VSMMarkerPolyline.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/initWithID:params:" title="initWithID:params:"></a>
### initWithID:params:

constructor

`- (id)initWithID:(NSString *)*markerID* params:(VSMMarkerPolylineParams *)*params*`

#### Declared In
* `VSMMarkerBase.h`

