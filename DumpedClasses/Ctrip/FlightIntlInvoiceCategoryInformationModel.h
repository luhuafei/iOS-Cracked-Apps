//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightIntlInvoiceCategoryInformationModel : CTBusinessBean
{
    int categoryType;
    NSString *categoryTitle;
    NSString *categoryDesc;
    NSString *graphURL;
}

@property(copy, nonatomic) NSString *graphURL; // @synthesize graphURL;
@property(copy, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc;
@property(copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle;
@property(nonatomic) int categoryType; // @synthesize categoryType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

