#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VSMStackData : NSObject

@property (assign, nonatomic, readonly) uint32_t stackId;

@property (strong, nonatomic, readonly) NSString* code;

-(instancetype)initWithNativeClass:(void*)nativeClass;

@end

NS_ASSUME_NONNULL_END
