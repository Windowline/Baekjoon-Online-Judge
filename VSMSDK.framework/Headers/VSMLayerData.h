#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, VSMLayerDataType) {
    VSMLayerDataTypeUnknown = 0,
    VSMLayerDataTypeBackground,
    VSMLayerDataTypePoi,
    VSMLayerDataTypeNetwork,
    VSMLayerDataTypeTraffic,
    VSMLayerDataType3DModel,
    VSMLayerDataTypeSatellite
};

@class VSMStackData;

NS_ASSUME_NONNULL_BEGIN

@interface VSMLayerData : NSObject

@property (assign, nonatomic, readonly) uint32_t layerId;

@property (strong, nonatomic, readonly) NSString* name;

@property (assign, nonatomic, readonly) uint32_t type;

@property (strong, nonatomic, readonly) NSString* version;

@property (strong, nonatomic, readonly) NSString* tilePath;

@property (strong, nonatomic, readonly) NSString* dbUri;

@property (strong, nonatomic, readonly) NSArray<VSMStackData*>* stacks;

@property (strong, nonatomic, readonly) NSDictionary<NSString*, NSString*>* properties;

-(instancetype)initWithNativeClass:(void*)nativeClass;

@end

NS_ASSUME_NONNULL_END
