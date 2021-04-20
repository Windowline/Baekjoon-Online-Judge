#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VSMRawImageBundleResource : NSObject

@property (nonatomic, strong, readonly) NSString* code;
@property (nonatomic, assign, readonly) int offset;
@property (nonatomic, assign, readonly) int size;
@property (nonatomic, assign, readonly) int width;
@property (nonatomic, assign, readonly) int height;

-(instancetype)initWithNativeClass:(void*)nativeClass;

@end

NS_ASSUME_NONNULL_END
