//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface QQDataArray : NSObject <NSCoding>
{
    NSMutableArray *_dataArray;
}

+ (id)arrayWithObjectArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)removeAllObjects;
- (_Bool)removeObjectAtIndex:(int)arg1;
- (_Bool)replaceObjectAtIndex:(int)arg1 withObject:(id)arg2;
- (void)addObject:(id)arg1;
- (int)count;
- (id)objectArray;
- (void)dealloc;
- (id)init;
- (id)initWithObjectArray:(id)arg1;

@end

