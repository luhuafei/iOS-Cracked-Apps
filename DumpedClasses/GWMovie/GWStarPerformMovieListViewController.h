//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWStarPerformListViewController.h"

#import "GWMovieCellDelegate-Protocol.h"

@class GWStarPerformListProvider, NSString;

@interface GWStarPerformMovieListViewController : GWStarPerformListViewController <GWMovieCellDelegate>
{
    GWStarPerformListProvider *_performProvider;
}

@property(retain, nonatomic) GWStarPerformListProvider *performProvider; // @synthesize performProvider=_performProvider;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)cellViewForRowAtIndexPath:(id)arg1;
- (void)createTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
