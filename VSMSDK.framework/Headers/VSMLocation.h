#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 위치 정보를 갖고 있는 immutable 객체
 */
@interface VSMLocation : NSObject

@property (nonatomic, assign, readonly) double longitude;
@property (nonatomic, assign, readonly) double latitude;
@property (nonatomic, assign, readonly) float bearing;
@property (nonatomic, assign, readonly) float accuracy;

/**
 * 새로운 VSMLocation 객체를 생성합니다.
 * @param longitude 경도
 * @param latitude 위도
 * @param bearing 방향 각도
 * @param accuracy 정확도 (미터 단위)
 */
-(instancetype)initWithLongitude:(double)longitude
                        latitude:(double)latitude
                         bearing:(float)bearing
                        accuracy:(float)accuracy;

-(BOOL)isEqual:(nullable id)other;

-(BOOL)isEqualToLocation:(VSMLocation*)location;

@end

NS_ASSUME_NONNULL_END
