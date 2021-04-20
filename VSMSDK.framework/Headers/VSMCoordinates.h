//
//  VSMCoordinates.h
//  TAModule
//
//  Created by 1001921 on 2015. 3. 24..
//
//

#import <Foundation/Foundation.h>
#import "VSMMapPoint.h"

/**	VSM 좌표 변환 class
 */
@interface VSMCoordinates : NSObject

/**
 * World 좌표를 WGS84 좌표로 변환한다.
 *
 * @param worldX 변경할 World X 좌표
 * @param worldY 변경할 World Y 좌표
 * @param longitude 변경된 WGS84 longitude 좌표
 * @param latitude 변경된 WGS84 latitude 좌표
 */
+(BOOL) convertWorldToWgs84:(double)worldX
                     worldY:(double)worldY
                  longitude:(double*)longitude
                   latitude:(double*)latitude;

/**
 * World 좌표를 SK 좌표로 변환한다.
 *
 * @param worldX 변경할 World X 좌표
 * @param worldY 변경할 World Y 좌표
 * @param skX 변경된 SK longitude 좌표
 * @param skY 변경된 SK latitude 좌표
 */
+(BOOL) convertWorldToSk:(double)worldX
                  worldY:(double)worldY
                     skX:(double*)skX
                     skY:(double*)skY;

/**
 * World 좌표를 Bessel 좌표로 변환한다.
 *
 * @param worldX 변경할 World X 좌표
 * @param worldY 변경할 World Y 좌표
 * @param longitude 변경된 Bessel longitude 좌표
 * @param latitude 변경된 Bessel latitude 좌표
 */
+(BOOL) convertWorldToBessel:(double)worldX
                      worldY:(double)worldY
                   longitude:(double*)longitude
                    latitude:(double*)latitude;

/**
 * WGS84 좌표를 World 좌표로 변환한다.
 *
 * @param longitude 변경할 WGS84 longitude 좌표
 * @param latitude 변경할 WGS84 latitude 좌표
 * @param worldX 변경된 worldX longitude 좌표
 * @param worldY 변경된 worldY latitude 좌표
 */
+(BOOL) convertWgs84ToWorld:(double)longitude
                   latitude:(double)latitude
                     worldX:(double*)worldX
                     worldY:(double*)worldY;

/**
 * WGS84 좌표를 SK 좌표로 변환한다.
 *
 * @param longitude 변경할 WGS84 longitude 좌표
 * @param latitude 변경할 WGS84 latitude 좌표
 * @param skX 변경된 SK X 좌표
 * @param skY 변경된 SK Y 좌표
 */
+(BOOL) convertWgs84ToSk:(double)longitude
                latitude:(double)latitude
                     skX:(double*)skX
                     skY:(double*)skY;

/**
 * WGS84 좌표를 Bessel 좌표로 변환한다.
 *
 * @param longitude 변경할 WGS84 longitude 좌표
 * @param latitude 변경할 WGS84 latitude 좌표
 * @param BesselLon 변경된 Bessel longitude 좌표
 * @param BesselLat 변경된 Bessel latitude 좌표
 */
+(BOOL) convertWgs84ToBessel:(double)longitude
                    latitude:(double)latitude
                   longitude:(double*)BesselLon
                    latitude:(double*)BesselLat;

/**
 * SK 좌표를 World 좌표로 변환한다.
 *
 * @param skX 변경할 SK X 좌표
 * @param skY 변경할 SK Y 좌표
 * @param worldX 변경된 World X 좌표
 * @param worldY 변경된 World Y 좌표
 */
+(BOOL) convertSkToWorld:(double)skX
                     skY:(double)skY
                  worldX:(double*)worldX
                  worldY:(double*)worldY;

/**
 * SK 좌표를 WGS84 좌표로 변환한다.
 *
 * @param skX 변경할 SK X 좌표
 * @param skY 변경할 SK Y 좌표
 * @param longitude 변경된 WGS84 longitude 좌표
 * @param latitude 변경된 WGS84 latitude 좌표
 */
+(BOOL) convertSkToWgs84:(double)skX
                     skY:(double)skY
               longitude:(double*)longitude
                latitude:(double*)latitude;

/**
 * SK 좌표를 Bessel 좌표로 변환한다.
 *
 * @param skX 변경할 SK X 좌표
 * @param skY 변경할 SK Y 좌표
 * @param longitude 변경된 Bessel longitude 좌표
 * @param latitude 변경된 Bessel latitude 좌표
 */
+(BOOL) convertSkToBessel:(double)skX
                      skY:(double)skY
                longitude:(double*)longitude
                 latitude:(double*)latitude;

/**
 * Bessel 좌표를 World 좌표로 변환한다.
 *
 * @param longitude 변경할 Bessel longitude 좌표
 * @param latitude 변경할 Bessel latitude 좌표
 * @param worldX 변경된 World X 좌표
 * @param worldY 변경된 World Y 좌표
 */
+(BOOL) convertBesselToWorld:(double)longitude
                    latitude:(double)latitude
                      worldX:(double*)worldX
                      worldY:(double*)worldY;

/**
 * Bessel 좌표를 WGS84 좌표로 변환한다.
 *
 * @param longitude 변경할 Bessel longitude 좌표
 * @param latitude 변경할 Bessel latitude 좌표
 * @param Wgs84Lon 변경된 WGS84 longitude 좌표
 * @param Wgs84Lat 변경된 WGS84 latitude 좌표
 */
+(BOOL) convertBesselToWgs84:(double)longitude
                    latitude:(double)latitude
                   longitude:(double*)Wgs84Lon
                    latitude:(double*)Wgs84Lat;

/**
 * Bessel 좌표를 SK 좌표로 변환한다.
 *
 * @param longitude 변경할 Bessel longitude 좌표
 * @param latitude 변경할 Bessel latitude 좌표
 * @param skX 변경된 SK X 좌표
 * @param skY 변경된 SK Y 좌표
 */
+(BOOL) convertBesselToSk:(double)longitude
                 latitude:(double)latitude
                      skX:(double*)skX
                      skY:(double*)skY;

/**
 * WGS84 좌표로 부터 주소를 받아온다. (Network 이용)
 *
 * @param point 조회할 WGS84 경위도 좌표
 * @param isStreedName 도로명 주소 여부
 * @return 주소
 */
+(NSString*) getOnlineAddress:(VSMMapPoint*)point
                 isStreedName:(BOOL)isStreedName;

/**
 * WGS84 좌표로 부터 주소를 받아온다. (local DB 이용)
 *
 * @param point 조회할 WGS84 경위도 좌표
 * @return 주소
 */
+(NSString*) getAreaName:(VSMMapPoint*)point;

@end
