//
//  VSMResourcePackageData.h
//  VSMInterface
//
//  Created by 1001921 on 2018. 2. 19..
//  Copyright © 2018년 sktelecom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VSMResource.h"

#define RESOURCEPACKAGE_TYPE_NONE               0
#define RESOURCEPACKAGE_TYPE_AUDIO              1
#define RESOURCEPACKAGE_TYPE_IMAGESINGLE        2
#define RESOURCEPACKAGE_TYPE_IMAGEBUNDLE        3
#define RESOURCEPACKAGE_TYPE_IMAGEBUNDLEZIP     4
#define RESOURCEPACKAGE_TYPE_RAWIMAGEBUNDLE     5
#define RESOURCEPACKAGE_TYPE_TEXTURE            6
#define RESOURCEPACKAGE_TYPE_LANDMARK           7
#define RESOURCEPACKAGE_TYPE_ATLASIMAGE         8
#define RESOURCEPACKAGE_TYPE_BINARY             9
#define RESOURCEPACKAGE_TYPE_VOICEGUIDEV2       10
#define RESOURCEPACKAGE_TYPE_TTSDB              11
#define RESOURCEPACKAGE_TYPE_ETC                12

/**
 * Resource 패키지 정보를 갖고 있는 클래스. Resource 패키지는 다수의 VSMResource 을 갖고 있습니다.
 */
@interface VSMResourcePackageData : NSObject

/**
 * 패키지가 갖고 있는 VSMResource들이 저장되는 root 경로를 리턴합니다.
 *
 * @return 패키지가 갖고 있는 VSMResource들이 저장되는 root 경로
 */
@property (strong, nonatomic, readonly) NSString *rootDir;

/**
 * 패키지 id
 *
 * @return 패키지 id
 */
@property (assign, nonatomic, readonly) unsigned int packageID;

/**
 * 패키지 code
 *
 * @return 패키지 code
 */
@property (strong, nonatomic, readonly) NSString *code;

/**
 * 패키지 type
 *
 * @return 패키지 type
 */
@property (assign, nonatomic, readonly) int packageType;

/**
 * 패키지 이름
 *
 * @return 패키지 이름
 */
@property (strong, nonatomic, readonly) NSString *name;

/**
 * 패키지 버전
 *
 * @return 패키지 버전
 */
@property (strong, nonatomic, readonly) NSString *version;

/**
 * 패키지 다운로드 여부. [VSMResource optional] 이 아닌 Resource가 모두 다운로드 되었다면 true
 *
 * @return 패키지 다운로드 여부
 */
@property (assign, nonatomic, readonly) bool avaliable;

/**
 * VSMResource 목록을 반환합니다.
 *
 * @return ResourceItem 목록
 */
@property (nonatomic, strong, readonly) NSArray<VSMResource*> *itemList;

@property (assign, nonatomic, readonly, getter=getNativeClass) void* nativeClass;

-(instancetype)initWithNativeClass:(void*)nativeClass;

-(VSMResource*)getItem:(NSString*)code;

@end
