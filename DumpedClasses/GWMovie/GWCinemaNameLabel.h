//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWCinema, GWImageLabel, NSArray, NSMutableArray;

@interface GWCinemaNameLabel : UIView
{
    GWCinema *_cinema;
    GWImageLabel *_cinemaNameLabel;
    NSArray *_characterIconArray;
    NSMutableArray *_imageArray;
    NSMutableArray *_downloadList;
}

@property(retain, nonatomic) NSMutableArray *downloadList; // @synthesize downloadList=_downloadList;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSArray *characterIconArray; // @synthesize characterIconArray=_characterIconArray;
@property(retain, nonatomic) GWImageLabel *cinemaNameLabel; // @synthesize cinemaNameLabel=_cinemaNameLabel;
@property(retain, nonatomic) GWCinema *cinema; // @synthesize cinema=_cinema;
- (void).cxx_destruct;
- (void)reloadImageLabel;
- (void)reloadData;
- (void)startImageLoad;
- (void)cancelImageLoad;
- (void)dealloc;

@end

