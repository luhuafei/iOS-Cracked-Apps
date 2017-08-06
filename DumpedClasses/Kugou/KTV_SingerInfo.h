//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface KTV_SingerInfo : KTVObjectModel <NSCopying>
{
    int singerId;
    int singerType;
    NSString *singerName;
    NSString *singerImg;
    NSDate *updateDate;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate;
@property(nonatomic) int singerType; // @synthesize singerType;
@property(retain, nonatomic) NSString *singerImg; // @synthesize singerImg;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName;
@property(nonatomic) int singerId; // @synthesize singerId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
