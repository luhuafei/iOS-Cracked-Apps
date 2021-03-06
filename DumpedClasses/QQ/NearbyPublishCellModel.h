//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TightTableViewCellModel.h"

@class NSArray, NSString;

@interface NearbyPublishCellModel : TightTableViewCellModel
{
    NSString *_title;
    NSArray *_publishList;
    NSString *_publishActUrl;
    NSString *_publishStyle;
    NSString *_publishContent;
    long long _selectionStyle;
    int _xo;
}

- (void).cxx_destruct;
- (double)heightForRow;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *publishActUrl; // @dynamic publishActUrl;
@property(copy, nonatomic) NSString *publishContent; // @dynamic publishContent;
@property(retain, nonatomic) NSArray *publishList; // @dynamic publishList;
@property(copy, nonatomic) NSString *publishStyle; // @dynamic publishStyle;
@property(nonatomic) long long selectionStyle; // @dynamic selectionStyle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

