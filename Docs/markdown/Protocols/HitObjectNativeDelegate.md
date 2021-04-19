# HitObjectNativeDelegate Protocol Reference

&nbsp;&nbsp;**Conforms to** NSObject  
&nbsp;&nbsp;**Declared in** VSMMapViewDefine.h  

## Tasks

### 

[&ndash;&nbsp;onHitObject:objectID:point:property:hitCallout:showCallout:](#//api/name/onHitObject:objectID:point:property:hitCallout:showCallout:)  *required method*

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/onHitObject:objectID:point:property:hitCallout:showCallout:" title="onHitObject:objectID:point:property:hitCallout:showCallout:"></a>
### onHitObject:objectID:point:property:hitCallout:showCallout:

Hit Test 결과 이벤트

`- (void)onHitObject:(HitObjectType)*type* objectID:(int)*objectID* point:(VSMMapPoint *)*point* property:(ObjectProperty *)*property* hitCallout:(bool)*hitCallout* showCallout:(bool *)*showCallout*`

#### Parameters

*objectID*  
&nbsp;&nbsp;&nbsp;선택한 객체의 아이디  

*point*  
&nbsp;&nbsp;&nbsp;선택한 객체의 위경도 좌표
@param property
@param hitCallout
@param showCallout  

#### Declared In
* `VSMMapViewDefine.h`

