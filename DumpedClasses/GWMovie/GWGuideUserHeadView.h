//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIButton, UILabel;

@interface GWGuideUserHeadView : UIView
{
    UIButton *_moreButton;
    UILabel *_infoLabel;
    NSMutableArray *_users;
    NSString *_imgUrlHead;
}

@property(retain, nonatomic) NSString *imgUrlHead; // @synthesize imgUrlHead=_imgUrlHead;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (void)createUserWithRecommend:(id)arg1 withIdx:(unsigned long long)arg2;
- (void)setUsers:(id)arg1 withUsers:(id)arg2 withRank:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

