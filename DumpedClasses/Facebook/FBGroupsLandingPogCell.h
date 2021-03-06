//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FBNetworkImageViewDelegate-Protocol.h"

@class FBGroupsBadgeView, FBGroupsLandingPogCategoryView, FBNetworkImageView, FBUserSession, NSString, NSURL, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface FBGroupsLandingPogCell : UICollectionViewCell <FBNetworkImageViewDelegate>
{
    UIImageView *_placeHolderImageView;
    UIImageView *_pogAccentView;
    UIImageView *_pogBorderView;
    double _pogWidth;
    _Bool _communityInterestGKEnabled;
    _Bool _usesMenuButton;
    FBUserSession *_session;
    NSString *_category;
    unsigned long long _badgeCount;
    UIImage *_staticImage;
    FBGroupsBadgeView *_badgeView;
    FBGroupsLandingPogCategoryView *_categoryView;
    UIButton *_menuButton;
    double _pogBorderWidth;
    UIColor *_pogBorderColor;
    unsigned long long _transitionMode;
    FBNetworkImageView *_coverPhotoView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(readonly, nonatomic) UIImageView *placeHolderImageView; // @synthesize placeHolderImageView=_placeHolderImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) FBNetworkImageView *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
@property unsigned long long transitionMode; // @synthesize transitionMode=_transitionMode;
@property(retain, nonatomic) UIColor *pogBorderColor; // @synthesize pogBorderColor=_pogBorderColor;
@property(nonatomic) double pogBorderWidth; // @synthesize pogBorderWidth=_pogBorderWidth;
@property(nonatomic) _Bool usesMenuButton; // @synthesize usesMenuButton=_usesMenuButton;
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(readonly, nonatomic) FBGroupsLandingPogCategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(readonly, nonatomic) FBGroupsBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(copy, nonatomic) UIImage *staticImage; // @synthesize staticImage=_staticImage;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)_imageDidLoad;
- (void)_imageWillLoad;
- (void)networkImageViewDidLoadImage:(id)arg1;
- (void)removeDraggableAnimation;
- (void)addDraggableAnimation;
- (void)endEditAnimation;
- (void)beginEditAnimation;
@property(nonatomic, getter=isPogAccentHidden) _Bool pogAccentHidden;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIColor *subtitleColor;
@property(retain, nonatomic) UIColor *labelColor;
- (void)_layoutPogBorder;
- (void)_layoutMenuButton;
@property(retain, nonatomic) NSURL *remoteImageURL;
@property(retain, nonatomic) UIFont *subtitleFont;
@property(retain, nonatomic) UIFont *titleFont;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_initialize:(_Bool)arg1;
- (void)reinitialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

