#import <UIKit/UIKit.h>
#import "VSMMarkerBase.h"

@class VSMMapPoint;

NS_ASSUME_NONNULL_BEGIN

@interface VSMMarkerPopupParams : VSMMarkerBaseParams

@property (nonatomic, strong) VSMMapPoint* position;
@property (nonatomic, strong) UIImage* viewImage;
@property (nonatomic, assign) CGPoint viewAnchor;
@property (nonatomic, assign) CGSize viewSize;
@property (nonatomic, assign) CGPoint viewOffset;

@property (nonatomic, assign) float scale;
@property (nonatomic, assign) float altitude;
@property (nonatomic, assign) float alpha;
@property (nonatomic, assign) float rotation;

@property (nonatomic, assign) BOOL overlapTestEnabled;
@property (nonatomic, assign) BOOL animationEnabled;
@property (nonatomic, assign) BOOL coverPoi;
@property (nonatomic, assign) BOOL perspectiveEnabled;
@property (nonatomic, assign) BOOL blockViewBitmapScale;
@property (nonatomic, assign) int32_t grade;

- (void)setViewImageWithView:(UIView*)view;

@end

@interface VSMMarkerPopup : VSMMarkerBase

@property (nonatomic, strong) VSMMapPoint* position;
@property (nonatomic, strong) UIImage* viewImage;
@property (nonatomic, assign) CGPoint viewAnchor;
@property (nonatomic, assign) CGSize viewSize;
@property (nonatomic, assign) CGPoint viewOffset;

@property (nonatomic, assign) float scale;
@property (nonatomic, assign) float altitude;
@property (nonatomic, assign) float alpha;
@property (nonatomic, assign) float rotation;

@property (nonatomic, assign) BOOL overlapTestEnabled;
@property (nonatomic, assign) BOOL animationEnabled;
@property (nonatomic, assign) BOOL coverPoi;
@property (nonatomic, assign) BOOL perspectiveEnabled;
@property (nonatomic, assign) BOOL blockViewBitmapScale;
@property (nonatomic, assign) int32_t grade;

- (instancetype)initWithID:(NSString*)markerID params:(VSMMarkerPopupParams *)params;

- (void)setViewImageWithView:(UIView*)view;

@end

NS_ASSUME_NONNULL_END
