//
//  NSString+FilePaths.m
//  AudioProcessor
//
//  Created by Ivan Lesko on 9-07-14.
//  Copyright (c) 2014 GeneralUI. All rights reserved.
//

#import "NSString+FilePaths.h"

@implementation NSString (FilePaths)

+ (NSString *)documentsDirectory {
    NSArray *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    
    return path.firstObject;
}

+ (NSString *)NSStringFromOSStatus:(OSStatus)errCode {
    if (errCode == noErr)
        return @"noErr";
    char message[5] = {0};
    *(UInt32*) message = CFSwapInt32HostToBig(errCode);
    return [NSString stringWithCString:message encoding:NSASCIIStringEncoding];
}

@end
