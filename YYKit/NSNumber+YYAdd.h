//
//  NSNumber+YYAdd.h
//  YYKit
//
//  Created by ibireme on 13-8-24.
//  Copyright (c) 2013年 ibireme. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 Provide a method to parse `NSString` for `NSNumber`.
 */
@interface NSNumber (YYAdd)


/**
 Creates and returns an NSNumber object from a string.
 
 Valid format: @"12", @"12.345", @" -0xFF", @" .23e99 "..
 If parse string error, it will return nil.
 
 @param string The string described an number.
 @return an NSNumber when parse success,or return nil if error occured.
 */
+ (NSNumber *)numberWithString:(NSString *)string;

@end
