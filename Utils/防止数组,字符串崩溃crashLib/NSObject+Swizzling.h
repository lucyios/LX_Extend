//
//  NSObject+Swizzling.h
//  TestDemo
//
//  Created by 李露鑫 on 16/12/22.
//  Copyright © 2016年 李露鑫. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzling)

+ (void)swizzleMethod:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
