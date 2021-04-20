//
//  VSMMapDefine.h
//  VSMInterface
//
//  Created by 1001921 on 2015. 11. 18..
//
//

typedef enum : NSUInteger {
    DB_CACHING_MODE_STREAMING_ONLY = 0,
    DB_CACHING_MODE_HYBRID = 1,
    DB_CACHING_MODE_EMBEDDED = 2,
} DB_CACHING_MODE;

//---------------------------------------------------------------------------------------------
// #. EmbeddedMapDLStatusDelegate
//---------------------------------------------------------------------------------------------

/**	Embedded Map Download Status 변수
 
 */
typedef enum
{
    eEmbeddedMapDLStatusNone = -1,
    eEmbeddedMapDLStatusStarted = 300,
    eEmbeddedMapDLStatusStopped,
    eEmbeddedMapDLStatusProgress,
    eEmbeddedMapDLStatusFinished,
    eEmbeddedMapDLStatusFailed,
    eEmbeddedMapDLStatusChecked,
}EmbeddedMapDLStatus;

/**	Embedded Map Download Status Delegate
 
 */
@protocol EmbeddedMapDLStatusDelegate

/**	Embedded Map Download start
 
 */
-(bool) onEmbeddedMapDownloadStart;

/**	Embedded Map Download stop
 
 */
-(bool) onEmbeddedMapDownloadStop;

/**	Embedded Map Download progress
 
    @parem current 현재까지 다운받은 Size
    @parem total 총 다운 받을 Size
 */
-(bool) onEmbeddedMapDownloadProgress:(NSUInteger)current total:(NSUInteger)total;

/**	Embedded Map Download end
 
 */
-(bool) onEmbeddedMapDownloadEnd;

/**	Embedded Map Download fail
 
 */
-(bool) onEmbeddedMapDownloadFail;

/** Embedded Map Checked
 
 */
-(bool) onEmbeddedMapDownloadChecked;

@end
