#import <Foundation/Foundation.h>

@interface VSMStyleData : NSObject

@property (assign, nonatomic, readonly) uint32_t styleID;

@property (strong, nonatomic, readonly) NSString* group;

@property (strong, nonatomic, readonly) NSArray<NSString*>* types;

@property (strong, nonatomic, readonly) NSArray<NSString*>* canonicalNames;

-(id)initWithNativeClass:(void*)nativeClass;

@end

