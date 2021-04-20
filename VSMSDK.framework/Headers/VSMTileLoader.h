#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VSMTileLoaderSource) {
    VSMTileLoaderSourceDefault = 0,
    VSMTileLoaderSourceNetwork,
    VSMTileLoaderSourceEmbedded
};

typedef struct {
    uint8_t z;
    uint32_t x, y;
} VSMTileID;

NS_ASSUME_NONNULL_BEGIN

@protocol VSMTileLoaderDelegate <NSObject>

-(void)onTileLoaderSuccess:(NSData*)data;

/**
 * NoError = 0,
 * NetworkError,
 * NotFoundError,
 * TimeoutError,
 * ClientError,
 * ServerError,
 * DataError,
 * OutOfRangeError,
 * OperationCanceled,
 * UnknownError = 1000
 */
-(void)onTileLoaderError:(int32_t)errorCode;

@end

@interface VSMTileLoader : NSObject

@property (weak, atomic) id<VSMTileLoaderDelegate> delegate;

-(instancetype)init:(uint32_t)layerId tile:(VSMTileID)tile;

-(instancetype)init:(uint32_t)layerId tile:(VSMTileID)tile compressed:(BOOL)compressed;

-(instancetype)init:(uint32_t)layerId tile:(VSMTileID)tile compressed:(BOOL)compressed source:(VSMTileLoaderSource)source;

-(void)load;

@end

NS_ASSUME_NONNULL_END
