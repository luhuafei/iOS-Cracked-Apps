//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCMessagePhoneView, DCYSUserCardContentView, DCYSUserInfoModel, RACSubject;

@interface DCYSUserCardView : UIView
{
    int _isHideDetail;
    DCYSUserInfoModel *_cardModel;
    RACSubject *_eventSubject;
    DCYSUserCardContentView *_contentView;
    DCMessagePhoneView *_connectionView;
}

@property(retain, nonatomic) DCMessagePhoneView *connectionView; // @synthesize connectionView=_connectionView;
@property(retain, nonatomic) DCYSUserCardContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int isHideDetail; // @synthesize isHideDetail=_isHideDetail;
@property(retain, nonatomic) RACSubject *eventSubject; // @synthesize eventSubject=_eventSubject;
@property(retain, nonatomic) DCYSUserInfoModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (void)refreshIMCount;
- (void)updateMessage;
- (void)remakeAutoLayoutOpenStatus;
- (void)remakeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
