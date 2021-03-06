//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface FALiveSongSupportListCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_nameLab;
    UIImageView *_coinView;
    UILabel *_coinNumLab;
    UIImageView *_richLevelImgView;
    UIButton *_numView;
    UIImageView *_line;
}

@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *numView; // @synthesize numView=_numView;
@property(retain, nonatomic) UIImageView *richLevelImgView; // @synthesize richLevelImgView=_richLevelImgView;
@property(retain, nonatomic) UILabel *coinNumLab; // @synthesize coinNumLab=_coinNumLab;
@property(retain, nonatomic) UIImageView *coinView; // @synthesize coinView=_coinView;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateCellData:(id)arg1 withIndexRow:(id)arg2;
- (id)imgStringWithMessage:(id)arg1 fontSize:(double)arg2 msgColor:(id)arg3 img:(id)arg4 imgSize:(struct CGSize)arg5 isImgLeft:(_Bool)arg6 imgDistanceFromLeft:(double)arg7;
- (void)layoutSubviews;
- (void)configSubViews;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

