//
//  NSString+FilePaths.h
//  AudioProcessor
//
//  Created by Ivan Lesko on 9-07-14.
//  Copyright (c) 2014 GeneralUI. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FilePaths)

+ (NSString *)documentsDirectory;

+ (NSString *)NSStringFromOSStatus:(OSStatus)errCode;

@end
