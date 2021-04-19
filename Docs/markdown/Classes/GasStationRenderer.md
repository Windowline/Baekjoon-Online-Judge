# GasStationRenderer Class Reference

&nbsp;&nbsp;**Inherits from** Component :   
NSObject  
&nbsp;&nbsp;**Declared in** GasStationRenderer.h<br />  
GasStationRenderer.mm  

## Tasks

### 

[&ndash;&nbsp;_markerSelectionChanged:selected:](#//api/name/_markerSelectionChanged:selected:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/_markerSelectionChanged:selected:" title="_markerSelectionChanged:selected:"></a>
### _markerSelectionChanged:selected:

/                        if(bitmap != nil) {
/                            try {
/                                OutputStream stream = new FileOutputStream(&ldquo;/sdcard/Download/vsm/oil_popup_&rdquo; + bitmap.getGenerationId() + &ldquo;.png&rdquo;);
/                                bitmap.compress(Bitmap.CompressFormat.PNG, 100, stream);
/                                stream.close();
/                            } catch (Exception ex) {
/
/                            }
/                        }

`- (void)_markerSelectionChanged:(PopupMarker *_Nullable)*newPopup* selected:(BOOL)*selected*`

#### Declared In
* `GasStationRenderer.mm`

