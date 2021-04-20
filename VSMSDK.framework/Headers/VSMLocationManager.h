#import <Foundation/Foundation.h>
#import "VSMLocationProviderDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class VSMMapView;
@class VSMLocation;
@class VSMLocationComponent;

@interface VSMLocationManager : NSObject

/** 지도에 설정된 마지막 위치 정보
 */
@property (atomic, strong, readonly) VSMLocation* lastLocation;

/** 현위치의 스타일을 변경할 수 있는 객체
 */
@property (nonatomic, strong, readonly) VSMLocationComponent* locationComponent;

/** 현위치 업데이트를 위한 VSMLocationProvider
 */
@property (atomic, weak, nullable) id<VSMLocationProviderDelegate> locationProviderDelegate;

/** 생성자
*/
-(instancetype)initWithMapView:(VSMMapView*)mapView;

/** Internal Use Only
*/
-(void)updateLocation;

/** Internal Use Only
*/
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
