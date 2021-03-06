//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWDramaButton;
@protocol WPBaseBottomBarDelegate;

@interface WPBaseBottomBar : UIView
{
    _Bool _shouldShowTopLine;
    id <WPBaseBottomBarDelegate> _delegate;
    UIView *_contentView;
    UIView *_actionView;
    GWDramaButton *_actionButton;
    UIView *_topLineView;
}

@property(nonatomic) _Bool shouldShowTopLine; // @synthesize shouldShowTopLine=_shouldShowTopLine;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) GWDramaButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WPBaseBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)actionButtonClick:(id)arg1;
- (void)setupContentView;
- (void)setupActionView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

