//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TrainGrabTicketRecommendResponse : CTBusinessBean
{
    NSString *message;
    int retCode;
    NSString *minRate;
    NSString *maxRate;
    NSString *smartRecomendTitle;
    NSString *smartRecomendSubTitle;
    NSString *smartRecomendTopMessage;
    NSMutableArray *recommendTrainList;
    NSMutableArray *recommendSeatList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *recommendSeatList; // @synthesize recommendSeatList;
@property(retain, nonatomic) NSMutableArray *recommendTrainList; // @synthesize recommendTrainList;
@property(copy, nonatomic) NSString *smartRecomendTopMessage; // @synthesize smartRecomendTopMessage;
@property(copy, nonatomic) NSString *smartRecomendSubTitle; // @synthesize smartRecomendSubTitle;
@property(copy, nonatomic) NSString *smartRecomendTitle; // @synthesize smartRecomendTitle;
@property(copy, nonatomic) NSString *maxRate; // @synthesize maxRate;
@property(copy, nonatomic) NSString *minRate; // @synthesize minRate;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(copy, nonatomic) NSString *message; // @synthesize message;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

