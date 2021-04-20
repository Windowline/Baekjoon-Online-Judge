#import "VSMResourcePackageData.h"

NS_ASSUME_NONNULL_BEGIN

@class VSMRawImageBundleResource;

@interface VSMRawImageBundleResourcePackage : VSMResourcePackageData

@property (nonatomic, strong, readonly) NSDictionary<NSString*, VSMRawImageBundleResource*>* imageMap;

- (VSMRawImageBundleResource*) imageItem: (NSString*)code;

- (instancetype)initWithNativeClass:(void*)nativeClass;

@end

NS_ASSUME_NONNULL_END

