//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSMutableArray;

@interface CasualSongListArray : NSObject
{
    NSMutableArray *casualSongListArray;
    NSCondition *casualSongListLock;
}

+ (id)casualSongListArray;
- (void).cxx_destruct;
- (id)songListForName:(id)arg1;
- (int)casualSongListCount;
- (void)addCasualSongList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

