//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYCommandTask.h"

@class NSString;

@interface TXYSearch : TXYCommandTask
{
    unsigned long long _num;
    NSString *_pageContext;
}

@property(readonly, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, nonatomic) unsigned long long num; // @synthesize num=_num;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 bucket:(id)arg2 sign:(id)arg3 number:(unsigned long long)arg4 pageContext:(id)arg5;

@end

