//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileWizardView.h"

@class FBContextualTimelineHeaderConfiguration, FBProfileWizardPhotoUploadButtonView;
@protocol FBProfileWizardProfilePictureAndCoverPhotoUpdateViewDelegate;

@interface FBProfileWizardProfilePictureAndCoverPhotoUpdateView : FBProfileWizardView
{
    struct CGSize _titleAndSubtitleViewSize;
    double _headerViewHeight;
    struct CGSize _uploadPhotoButtonSize;
    _Bool _appearanceHasAnimated;
    FBProfileWizardPhotoUploadButtonView *_uploadPhotoButtonView;
    FBContextualTimelineHeaderConfiguration *_configuration;
    id <FBProfileWizardProfilePictureAndCoverPhotoUpdateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBProfileWizardProfilePictureAndCoverPhotoUpdateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBContextualTimelineHeaderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) FBProfileWizardPhotoUploadButtonView *uploadPhotoButtonView; // @synthesize uploadPhotoButtonView=_uploadPhotoButtonView;
- (void).cxx_destruct;
- (void)_animatingTitleAndSubtitleViewDisappearance;
- (void)animatingDisppearance;
- (void)_animatingHeaderViewAppearance;
- (void)animatingAppearance;
- (struct CGSize)_uploadPhotoButtonSizeThatFits:(struct CGSize)arg1;
- (double)_headerViewHeightWithWidth:(double)arg1;
- (double)_contentHeightThatFits:(struct CGSize)arg1;
- (struct CGSize)_titleAndSubtitleViewSizeThatFit:(struct CGSize)arg1;
- (void)updatePerson:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWizardModel:(id)arg1 wizardConfiguration:(id)arg2 currentStepIndex:(unsigned long long)arg3 person:(id)arg4 session:(id)arg5 scenePath:(id)arg6 analyticsUUID:(id)arg7 shouldShowTransparentCoverPhoto:(_Bool)arg8 shouldShowTransparentProfilePicture:(_Bool)arg9 delegate:(id)arg10;

@end

