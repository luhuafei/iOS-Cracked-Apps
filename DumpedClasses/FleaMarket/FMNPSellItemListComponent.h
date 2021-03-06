//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class FM72hServiceParameter, FMComponent, NSString, RACCommand;

@interface FMNPSellItemListComponent : FMGeneralPageTableComponent
{
    long long _totalSelectCount;
    NSString *_serviceType;
    FM72hServiceParameter *_serviceParams;
    RACCommand *_submitItemsCommand;
    FMComponent *_lastSelectComponent;
}

@property(retain, nonatomic) FMComponent *lastSelectComponent; // @synthesize lastSelectComponent=_lastSelectComponent;
@property(retain, nonatomic) RACCommand *submitItemsCommand; // @synthesize submitItemsCommand=_submitItemsCommand;
@property(retain, nonatomic) FM72hServiceParameter *serviceParams; // @synthesize serviceParams=_serviceParams;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) long long totalSelectCount; // @synthesize totalSelectCount=_totalSelectCount;
- (void).cxx_destruct;
- (void)submitItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitItems:(CDUnknownBlockType)arg1;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)initWithType:(id)arg1 sourceId:(id)arg2;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end

