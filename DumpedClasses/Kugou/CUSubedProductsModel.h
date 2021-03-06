//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUBaseModel.h"

@class CUUserRightsModel, NSString;

@interface CUSubedProductsModel : CUBaseModel
{
    int _status;
    int _tryLeftTime;
    int _autoOpen;
    NSString *_productId;
    NSString *_productName;
    NSString *_productType;
    NSString *_price;
    CUUserRightsModel *_userRights;
    NSString *_auth;
    NSString *_tryEnd;
    NSString *_unTryTime;
    NSString *_subTime;
    NSString *_unSubTime;
    NSString *_unSubscribeable;
}

@property(copy, nonatomic) NSString *unSubscribeable; // @synthesize unSubscribeable=_unSubscribeable;
@property(copy, nonatomic) NSString *unSubTime; // @synthesize unSubTime=_unSubTime;
@property(copy, nonatomic) NSString *subTime; // @synthesize subTime=_subTime;
@property(copy, nonatomic) NSString *unTryTime; // @synthesize unTryTime=_unTryTime;
@property(copy, nonatomic) NSString *tryEnd; // @synthesize tryEnd=_tryEnd;
@property(nonatomic) int autoOpen; // @synthesize autoOpen=_autoOpen;
@property(nonatomic) int tryLeftTime; // @synthesize tryLeftTime=_tryLeftTime;
@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) CUUserRightsModel *userRights; // @synthesize userRights=_userRights;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

