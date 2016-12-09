//
//  NSString_TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#ifndef NSString_TFKit_h
#define NSString_TFKit_h

/**
 *  判断空字符串
 *
 *  @param thing 要判断的字符串
 *
 *  @return 是否为空
 */

static inline BOOL tf_stringEmpty(NSString *string){
    return string == nil || [string isEqual:[NSNull null]]
    || ([string respondsToSelector:@selector(length)]
        && [(NSData *)string length] == 0)
    || ([string respondsToSelector:@selector(count)]
        && [(NSArray *)string count] == 0);
}


#endif /* NSString_TFKit_h */
