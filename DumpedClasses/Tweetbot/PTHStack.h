//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PTHStack : NSObject
{
    unsigned long long _capacity;
    NSMutableArray *_array;
}

@property(readonly) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (id)description;
- (id)valueForKeyPath:(id)arg1;
@property(readonly) _Bool isFull;
@property(readonly) unsigned long long count;
@property(readonly) __weak NSArray *array;
- (void)removeAllObjects;
- (id)popFirstObject;
- (id)popLastObject;
- (void)pushObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

