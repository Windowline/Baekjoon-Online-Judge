#import <Foundation/Foundation.h>

@class VSMLocation;

@protocol VSMLocationProviderDelegate <NSObject>
/**
 * 현위치를 리턴합니다. 현위치를 얻지 못한 경우 nil을 반환합니다.
 */
- (nullable VSMLocation*) getLocation;

@end
