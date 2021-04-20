//
//  VSMRouteData.h
//  VSMSDK
//
//  Created by HS Jeon on 2020/03/11.
//  Copyright © 2020 sktelecom. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "VSMMapPoint.h"

NS_ASSUME_NONNULL_BEGIN

@interface VSMRouteData : NSObject

/**
 * 경로선 데이터를 갖고 있는 {@link ByteBuffer} 배열
 */
@property (nonatomic, strong) NSData* data;

/**
 * 출발지/경유지/도착지. 설정 시 경로선 데이터 내의 위치 정보는 무시된다.
 */
@property (nonatomic, strong) NSArray<VSMMapPoint*>* points;

/**
 * 경로 요약 화면에서 해당 경로에 대한 style
 */    
@property (nonatomic, strong) NSString* styleName;

@end

NS_ASSUME_NONNULL_END
