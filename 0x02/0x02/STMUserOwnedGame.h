//
//  STMUserOwnedGame.h
//  0x02
//
//  Created by 李嘉银 on 2017/10/14.
//  Copyright © 2017年 lAgagggggg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STMUserOwnedGame : NSObject
    //appid 代表游戏的unique id 值类型为Number
    //name 代表游戏的名字 值类型为String
    //playtime_forever 代表总游戏时间，以分钟为单位 值类型为Number img_icon_url, img_logo_url
    //分别代表游戏的图标和LOGO的URL 值类型为String
    @property(weak,nonatomic)NSNumber* appid;
    @property(weak,nonatomic)NSString* name;
    @property(weak,nonatomic)NSNumber* playtime_forever;
    @property(weak,nonatomic)NSString* img_icon_url;
    @property(weak,nonatomic)NSString* img_logo_url;
    
-(instancetype) initWithDictionary:(NSDictionary *)dict;
@end
