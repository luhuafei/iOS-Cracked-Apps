//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLTextParser : NSObject
{
}

+ (id)UBBStringFromNormalString:(id)arg1;
+ (void)addList:(id)arg1 captureStr:(id)arg2 Type:(int)arg3;
+ (id)parseText:(id)arg1 regex:(id)arg2;
+ (id)parseText:(id)arg1;
+ (void)processNormalText:(id)arg1 range:(struct _NSRange)arg2 list:(id)arg3;
+ (int)getCurrentType:(id)arg1 Postion:(struct _NSRange)arg2;

@end
