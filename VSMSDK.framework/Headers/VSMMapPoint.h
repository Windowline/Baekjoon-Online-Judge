#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * WGS84 좌표를 갖고 있는 immutable 객체
 */
@interface VSMMapPoint : NSObject

@property (nonatomic, assign, readonly) double longitude;
@property (nonatomic, assign, readonly) double latitude;

+(instancetype)mapPointWithLongitude:(double)longitude
                            latitude:(double)latitude;

-(instancetype)initWithLongitude:(double)longitude
                        latitude:(double)latitude;

-(BOOL)isEqual:(nullable id)other;

+(VSMMapPoint*)INVALID;

@end

NS_ASSUME_NONNULL_END
