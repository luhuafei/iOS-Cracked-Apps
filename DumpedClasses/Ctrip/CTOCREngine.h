//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTOCREngine : NSObject
{
}

+ (id)IDCardOCR:(char *)arg1 width:(int)arg2 height:(int)arg3 image:(id)arg4 bytesPerUnit:(int)arg5;
+ (id)passportOCR:(char *)arg1 width:(int)arg2 height:(int)arg3 image:(id)arg4 bytesPerUnit:(int)arg5;
+ (id)IDCardOCR:(id)arg1;
+ (id)passportOCR:(id)arg1;

@end
