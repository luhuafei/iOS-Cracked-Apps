//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSOrderedSet;

@interface FBCollectionFacepileView : UIView
{
    NSArray *_profilePictureViews;
    NSArray *_profilePictureAvatarViews;
    NSArray *_profilePictureEmptyViews;
    NSOrderedSet *_avatars;
}

@property(retain, nonatomic) NSOrderedSet *avatars; // @synthesize avatars=_avatars;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end

