//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface FlightListTagAreasetV3InformationModel : CTBusinessBean
{
    int areaType;
    int indexNo;
    NSMutableArray *tagAreaDetailInforList;
}

@property(retain, nonatomic) NSMutableArray *tagAreaDetailInforList; // @synthesize tagAreaDetailInforList;
@property(nonatomic) int indexNo; // @synthesize indexNo;
@property(nonatomic) int areaType; // @synthesize areaType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
