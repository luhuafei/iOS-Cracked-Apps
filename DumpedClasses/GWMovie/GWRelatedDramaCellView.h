//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWDrama, GWImagePolicyView, UILabel;

@interface GWRelatedDramaCellView : UIView
{
    _Bool _isFirst;
    long long _index;
    CDUnknownBlockType _relatedDramaClick;
    GWImagePolicyView *_logoImageView;
    UILabel *_nameLabel;
    UILabel *_playDateLabel;
    UILabel *_detailLabel;
    GWDrama *_currentDrama;
}

@property(retain, nonatomic) GWDrama *currentDrama; // @synthesize currentDrama=_currentDrama;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *playDateLabel; // @synthesize playDateLabel=_playDateLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GWImagePolicyView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(copy, nonatomic) CDUnknownBlockType relatedDramaClick; // @synthesize relatedDramaClick=_relatedDramaClick;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)showRelatedDramaWithDrama:(id)arg1;
- (void)dramaClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

