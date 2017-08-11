//
//  FileHash.h
//  文件hash
//
//  Created by swxa@sasaliubobo on 16/8/11.
//  Copyright © 2016年 swxa@saasliubobo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/CaptiveNetwork.h>


@interface FileHash : NSObject

+(NSString *)getFileMD5WithPath:(NSString*)path;
+(NSString *)getFileSHA1WithPath:(NSString*)path;
+(NSString *)getFileSHA256WithPath:(NSString*)path;
+(NSString *)getFileSHA512WithPath:(NSString*)path;
+(NSString *)getWifiName;
@end
