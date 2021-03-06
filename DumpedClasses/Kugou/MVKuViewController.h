//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGDefaultNetErrorView, KGTableView, KGThemeButton, KGThemeImageView, KGThemeLine, MVLoadMoreCell, MVTagBean, MVTagYearBean, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UIView;

@interface MVKuViewController : KGScrollPageViewController <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    KGTableView *_tableView;
    NSMutableArray *_allMvs;
    UIImageView *_redDot;
    NSString *_tagStr;
    UIImageView *_shadow;
    UIView *_mvKuSectionHeader;
    KGThemeLine *_mvKuSectionHeaderBottomLine;
    UIView *_MVKuFirstSection;
    double _heightOfMVKuFirstSection;
    NSArray *_MVClassifyArray;
    MVTagYearBean *_yearBean;
    NSString *_ids;
    NSString *_year;
    NSMutableArray *_arrayWords;
    UIView *_mvKuSectionHeader_tmp;
    _Bool _isWordShow;
    UIView *_sectionBg;
    UIView *_tapGestureView;
    double _endXOfNewAndHot;
    UIView *_foundnoView;
    KGThemeButton *_btn_hot;
    double _offsetY;
    UIView *_showLoadingViewOfTableview;
    NSString *_selectedTagWord;
    NSString *_selectedLabelName;
    UIView *_HeadviewOfMvKu;
    UIView *_arrowheadView;
    KGThemeImageView *_arrowhead;
    NSString *_firstNameOfYear;
    int _times;
    _Bool _isFinishLayoutClassifyView;
    NSMutableDictionary *_progressViewDic;
    NSMutableDictionary *_parentViewDic;
    NSString *_keyOfLastMvKuListLoad;
    NSString *_keyOfLastMvKuList;
    KGDefaultNetErrorView *_errorView;
    KGDefaultNetErrorView *_errorViewInMvKu;
    NSMutableArray *_getEntranceBtnArr;
    _Bool _withouTapInMvKu;
    NSArray *_nowPlayArr;
    long long _nowIndex;
    NSString *_nowTitle;
    _Bool _MvKuEntrance;
    _Bool _MvMore;
    _Bool _isShowLoadMoreCell;
    _Bool _oneRequestFail;
    _Bool _recommendSend;
    _Bool _librarySend;
    int _loadingState;
    int _mvSource;
    NSString *_keyName;
    long long _keyId;
    CDUnknownBlockType _mvKuPopBlock;
    MVLoadMoreCell *_loadMoreCell;
    NSMutableDictionary *_mvTagsDic;
    long long _tagDataType;
    MVTagBean *_currentTagBean;
    long long _currentChildTagIndex;
    NSMutableDictionary *_offsetDic;
    NSMutableArray *_mvTags;
    double _openBeginTime;
}

@property(nonatomic) int mvSource; // @synthesize mvSource=_mvSource;
@property(nonatomic) _Bool librarySend; // @synthesize librarySend=_librarySend;
@property(nonatomic) _Bool recommendSend; // @synthesize recommendSend=_recommendSend;
@property(nonatomic) double openBeginTime; // @synthesize openBeginTime=_openBeginTime;
@property(nonatomic) _Bool oneRequestFail; // @synthesize oneRequestFail=_oneRequestFail;
@property(nonatomic) int loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSMutableArray *mvTags; // @synthesize mvTags=_mvTags;
@property(retain, nonatomic) NSMutableDictionary *offsetDic; // @synthesize offsetDic=_offsetDic;
@property(nonatomic) long long currentChildTagIndex; // @synthesize currentChildTagIndex=_currentChildTagIndex;
@property(retain, nonatomic) MVTagBean *currentTagBean; // @synthesize currentTagBean=_currentTagBean;
@property(nonatomic) long long tagDataType; // @synthesize tagDataType=_tagDataType;
@property(retain, nonatomic) NSMutableDictionary *mvTagsDic; // @synthesize mvTagsDic=_mvTagsDic;
@property(nonatomic) _Bool isShowLoadMoreCell; // @synthesize isShowLoadMoreCell=_isShowLoadMoreCell;
@property(retain, nonatomic) MVLoadMoreCell *loadMoreCell; // @synthesize loadMoreCell=_loadMoreCell;
@property(copy, nonatomic) CDUnknownBlockType mvKuPopBlock; // @synthesize mvKuPopBlock=_mvKuPopBlock;
@property(nonatomic) _Bool MvMore; // @synthesize MvMore=_MvMore;
@property(nonatomic) _Bool MvKuEntrance; // @synthesize MvKuEntrance=_MvKuEntrance;
@property(nonatomic) long long keyId; // @synthesize keyId=_keyId;
@property(copy, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidEnterWithMode:(long long)arg1;
- (void)viewDidEnter;
- (void)KGUsingControllerState:(int)arg1;
- (void)sendSelectMvBI;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)playMvListWithItems:(id)arg1 atIndex:(long long)arg2 from:(id)arg3 preffix:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (id)emptyTabelCell;
- (id)mvCellWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)mvTagSel:(id)arg1 childIndex:(long long)arg2;
- (id)makeListBeanWithTagBean:(id)arg1 andIndex:(long long)arg2;
- (id)addArr:(id)arg1 fromArr:(id)arg2;
- (void)checkListTotal:(id)arg1 andKey:(id)arg2 andCount:(long long)arg3;
- (id)getArrByTagBean:(id)arg1 andChildIndex:(long long)arg2 andDataType:(long long)arg3;
- (void)updateMvData:(id)arg1 andCount:(long long)arg2;
- (void)getListOfMVTag;
- (void)handleParentViewHiddenInMvKuWithKey1:(id)arg1 andKey2:(id)arg2;
- (id)findoutProgressViewWithkey:(id)arg1;
- (void)showErrorStateIsSecondPage:(_Bool)arg1 isWrongIndex:(_Bool)arg2 key:(id)arg3;
- (void)showLoadsuccessStateIsSecondPage:(_Bool)arg1 isWrongIndex:(_Bool)arg2 key:(id)arg3;
- (void)showLoadingStateIsSecondPage:(_Bool)arg1 key:(id)arg2;
- (void)obtainMVWith:(id)arg1 andChildTagIndex:(long long)arg2 andDataType:(long long)arg3 andKey:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)getMoreMVTagDataShowLoading:(_Bool)arg1;
- (void)obtainMVkuContent;
- (void)getMVTagsData;
- (void)handleTableviewAndErrorViewHiddenKey:(id)arg1;
- (void)requestAgain;
- (void)goToSearchView;
- (void)goToCacheMvView;
- (void)checkRedDot;
- (void)wordClick:(id)arg1;
- (void)LongCut:(id)arg1;
- (void)getWord;
- (void)scrollToFit:(id)arg1;
- (id)getEntranceBtn;
- (void)handleEntrance;
- (void)btnClick:(id)arg1;
- (id)getLabelNameFromBtn:(id)arg1;
- (void)ChangeALLMVClassifyArray;
- (void)layoutClassifyView;
- (void)initMainView;
- (void)initOriginData;
- (void)viewDidLoad;
- (id)initWithoutTapInMvKuAndMVSource:(int)arg1;
- (id)manualPath;
- (id)initWithPageIndex:(long long)arg1 andMVSource:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

