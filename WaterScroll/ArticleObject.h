//
//  ArticelObject.h
//  WaterScroll
//
//  Created by Peanut on 2022/2/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ArticelObject : NSObject

@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *url;
@property (nonatomic,copy) NSString *image_width;
@property (nonatomic,copy) NSString *image_height;

@end

NS_ASSUME_NONNULL_END
