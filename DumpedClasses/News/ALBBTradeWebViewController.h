//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaeH5WebViewController.h"

@class ALBBTradeDropDownMenu, ALBBTradeMenuTableViewController;

@interface ALBBTradeWebViewController : TaeH5WebViewController
{
    _Bool _isTradeProcessCancelled;
    ALBBTradeDropDownMenu *_dropMenu;
    ALBBTradeMenuTableViewController *_menuTableView;
}

@property(retain, nonatomic) ALBBTradeMenuTableViewController *menuTableView; // @synthesize menuTableView=_menuTableView;
@property(retain, nonatomic) ALBBTradeDropDownMenu *dropMenu; // @synthesize dropMenu=_dropMenu;
- (void).cxx_destruct;
- (void)beforeWebViewStartLoad:(id)arg1 url:(id)arg2;
- (void)superOnBack;
- (void)onBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)showSrceenShotView;
- (void)showMore;
- (void)viewDidLoad;

@end

