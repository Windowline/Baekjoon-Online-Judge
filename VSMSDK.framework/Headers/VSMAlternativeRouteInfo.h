//
//  VSMAlternativeRouteInfo.h
//  VSMSDK
//
//  Created by HS Jeon on 2020/03/11.
//  Copyright © 2020 sktelecom. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VSMMapPoint;

NS_ASSUME_NONNULL_BEGIN

@interface PopupPos : NSObject<NSCopying>

@property (nonatomic, assign) int32_t levelMin;
@property (nonatomic, assign) int32_t levelMax;

@property (nonatomic, strong) VSMMapPoint* pos;
//@property (nonatomic, strong, nullable) VSMMapPoint* base;

-(instancetype) init:(int32_t)levelMin levelMax:(int32_t)levelMax pos:(VSMMapPoint*)pos;

@end

@interface VSMAlternativeRouteInfo : NSObject<NSCopying>

@property (nonatomic, assign) float distLeft;             // 남은 거리

@property (nonatomic, assign) int32_t day;
@property (nonatomic, assign) int32_t hour;
@property (nonatomic, assign) int32_t minute;
@property (nonatomic, assign) int32_t second;

@property (nonatomic, assign) int32_t cost;                   // 비용 차이
@property (nonatomic, assign) BOOL  costFree;

@property (nonatomic, strong) VSMMapPoint*   pos;               // 분기점
@property (nonatomic, strong, nullable) VSMMapPoint*   carDirection;      // 분기점에서 주행도로 진행 방향 위치
@property (nonatomic, strong) NSArray<PopupPos*>* popupPos;        // 레벨별 대안경로 팝업 위치

@end

NS_ASSUME_NONNULL_END
