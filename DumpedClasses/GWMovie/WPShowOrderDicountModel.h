//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class WPPointCardModel, WPShowBonusModel, WPVCardModel;

@interface WPShowOrderDicountModel : GWObject
{
    WPShowBonusModel *_bouns;
    WPVCardModel *_vCard;
    WPPointCardModel *_pCard;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) WPPointCardModel *pCard; // @synthesize pCard=_pCard;
@property(retain, nonatomic) WPVCardModel *vCard; // @synthesize vCard=_vCard;
@property(retain, nonatomic) WPShowBonusModel *bouns; // @synthesize bouns=_bouns;
- (void).cxx_destruct;

@end

