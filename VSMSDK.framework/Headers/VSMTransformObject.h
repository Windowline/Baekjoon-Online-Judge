//
//  VSMTransformObject.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 1. 31..
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MapTransformData : NSObject

@property (nonatomic) BOOL isNeedTransform;
@property (nonatomic) float scale;
@property (nonatomic) CGPoint scalePoint;
@property (nonatomic) float rotate;
@property (nonatomic) CGPoint rotateCenter;
@property (nonatomic) CGPoint startPoint;
@property (nonatomic) CGPoint targetPoint;
@property (nonatomic) float fAmount;
@property (nonatomic) float fDegree;
@property (nonatomic) float tiltPercent;

-(instancetype)init;
-(instancetype)initWithData:(MapTransformData*)data;
-(void)set:(MapTransformData*)data;
-(void)clear;

@end

@interface VSMTransformObject : NSObject

- (MapTransformData*) transformData;

- (void)scaleTo:(float)scale atScalePoint:(CGPoint)point;

- (void)rotateTo:(float)angle rotateCenter:(CGPoint)point;

- (void)translateFrom:(CGPoint)start toTargetPoint:(CGPoint)target;

- (void)translateAccumulate:(CGPoint)target;

- (void)tiltTo:(float)tiltPercent;

- (void)flingTo:(float)amount
         degree:(float)degree;

- (void)commit;

// reset transform request state
- (void)clear;

@end
