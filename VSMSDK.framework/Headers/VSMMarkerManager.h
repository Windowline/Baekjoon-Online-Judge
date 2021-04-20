//
//  VSMMarkerManager.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 26..
//

#import <Foundation/Foundation.h>

@class VSMMarkerBase;
@class VSMMapView;

/** VSMMapView에 종속적인 마커 관리자 객체
*/
@interface VSMMarkerManager : NSObject

@property (nonatomic, weak) VSMMapView* vsmView;

-(void) viewWillAppear;
-(void) viewWillDisappear;

/** marker를 추가한다.
 @param marker 마커 데이터 객체
 @return boolean 변환 성공 여부.
 */
-(BOOL) addMarker:(VSMMarkerBase*) marker;

/** marker를 제거한다.
 @param marker 마커 데이터 객체
 @return boolean 변환 성공 여부.
 */
-(BOOL) removeMarker:(VSMMarkerBase*) marker;

/** 모든 marker 제거
 */
-(void) removeAllMarkers;

-(VSMMarkerBase*) getMarker:(NSString*) markerId;

-(VSMMarkerBase*) getMarkerWithObjectId:(NSUInteger) objectId;

#if 0
/** internal use, 마커의 위경도 bbox
 */
-(LatLonBounds*) getBounds;
#endif

@end
