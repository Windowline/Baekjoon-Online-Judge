#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class VSMMapView;
@class VSMLocation;
@class VSMMarkerLocationIcon;

/**
 * 현위치의 스타일을 변경하기 위한 기능을 제공합니다.
 */
@interface VSMLocationComponent : NSObject

/** 생성자
 */
-(instancetype)initWithMapView:(VSMMapView*)mapView;

/** 현위치 아이콘을 설정합니다.
 */
@property (nonatomic, strong) VSMMarkerLocationIcon *icon;

/** 현위치 아이콘을 크기를 설정합니다.
 */
@property (nonatomic, assign) CGSize iconSize;

/** 현위치 아이콘 표시 여부를 설정합니다.
 */
@property (nonatomic, assign) BOOL iconVisible;

/** 정확도를 표시하는 원의 표시 여부를 설정합니다.
 */
@property (nonatomic, assign) BOOL accuracyVisible;

/** 정확도를 표시하는 원의 fill 색상을 설정합니다.
 */
@property (nonatomic, strong) UIColor *accuracyFillColor;

/** 정확도를 표시하는 원의 stroke 색상을 설정합니다.
 */
@property (nonatomic, strong) UIColor *accuracyStrokeColor;

/** 정확도를 표시하는 원의 stroke 두께를 설정합니다.
 */
@property (nonatomic, assign) float accuracyStrokeWidth;

/** Internal Use Only
 */
-(void)updateLocation:(VSMLocation*)location;

/** Internal Use Only
*/
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
