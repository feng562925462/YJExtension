//
//  NSString+YJExtension.h
//  YJBaseProject
//
//  Created by 冯垚杰 on 2017/8/19.
//  Copyright © 2017年 冯垚杰. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YJExtension)


/**
 获取随机字符串  -- 包含数字和大小写字母

 @param count 数量 （几位）
 @return 随机字符串
 */
+ (NSString *)yj_randomStringWithCount:(NSInteger)count;



/**
 手机号处理成中间*

 @return 例如：（176****1234）
 */
- (NSString *)yj_telphoneHandle;


/**
 中文转码 -- 不会对中文进行二次转码
 */
- (NSString *)yj_UTF8String;


/**
 去掉首尾空格
 */
- (NSString *)yj_clearFirstLastSpaces;


/// 过滤特殊字符
- (NSString *)yj_filterSpecialCharacters;
@end

