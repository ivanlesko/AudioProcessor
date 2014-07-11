//
//  Debugging.h
//
//  Created by Ivan Lesko on 6/24/14.
//  Copyright (c) 2014 Ivan Lesko. All rights reserved.
//

/**
 *  Debugging.h is a nice macro that defines a better NSLog.
 *  Instead of showing the Project name and timestamp, it shows the Class, method, and line number the NSLog was called.
 */

#ifdef __OBJC__
#define __FILE_NAME_ONLY__ [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String]
#else
#define __FILE_NAME_ONLY__ ""
#endif

# ifdef DEBUG
// Use the below define if you'd rather use NSLog (comes with project name and timestamp).
//# define NSLog(format, ...) NSLog((@"%s [L%d] " format), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

// Use the below define if you'd rather use printf (does not come with timestamp).
# define NSLog(...) printf("[%-30s:%4d]: %s\n", __FILE_NAME_ONLY__, __LINE__, [[NSString stringWithFormat:__VA_ARGS__] UTF8String])
# else
#   define NSLog(...)
# endif