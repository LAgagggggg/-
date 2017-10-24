//
//  main.m
//  0x02
//
//  Created by 李嘉银 on 2017/10/14.
//  Copyright © 2017年 lAgagggggg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STMUserOwnedGame.h"

int main(int argc, const char * argv[]) {
//    1. 以给出的plist 件初始化 个NSArray对象;
//    2. 为这个NSArray中的每 个NSDictionary对象创建 个对应的STMUserOwnedGame对象，并 所有这些STMUserOwnedGame对象组成另 个新数组;
//    3. 然后再依次打印新数组中每 个STMUserOwnedGame的name。
    @autoreleasepool {
        NSArray *arr= [NSArray arrayWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"user_owned_game.plist" ofType:nil]];
        NSMutableArray *allgame=[[NSMutableArray alloc]init];
        for (NSDictionary *dict in arr){
            STMUserOwnedGame * game=[[STMUserOwnedGame alloc]initWithDictionary:dict];
            [allgame addObject:game];
        }
        for(STMUserOwnedGame * game in allgame){
            NSLog(@"%@",game.name);
        }
    }
    return 0;
}
