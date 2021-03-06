//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTImagePickerMangerDelegate.h"
#import "CTImageViewDelegate.h"
#import "MemberGradeUpDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTCustomeGroupTableViewCell, CTImagePickerManger, CTLoginCacheBean, CTMemberGradeUpManager, CTMyCtripAvatarView, CTMyCtripUserInfoCell, CTMyCtripUserInfoModel, CTMyCtripUserInfoStateModel, NSMutableArray, NSString, UIButton, UIImage, UILabel, UITableView;

@interface CTMyCtripUserInfoViewController : CTRootViewController <CTImagePickerMangerDelegate, CTImageViewDelegate, UIActionSheetDelegate, MemberGradeUpDelegate, UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate>
{
    CTLoginCacheBean *cacheBean_;
    NSMutableArray *avatarSectionArray;
    NSMutableArray *memberInfoSectionArray;
    NSMutableArray *personalInfoSectionArray;
    NSMutableArray *memberCardArray;
    NSMutableArray *modifySectionArray;
    NSMutableArray *logoutSectionArray;
    NSMutableArray *fillPersonInfoTipsArray;
    CTMyCtripUserInfoStateModel *_userInfoStateModel;
    _Bool _needShowLogoutBtn;
    _Bool _backToPrePage;
    _Bool _checkValue;
    _Bool _checkEmail;
    _Bool _checkPhone;
    int _countOfMedal;
    UITableView *userInfoTableView_;
    CTCustomeGroupTableViewCell *_gradeUpCell;
    CTCustomeGroupTableViewCell *_headerCell;
    CTCustomeGroupTableViewCell *_logoutCell;
    UIButton *_logOutBtn;
    UILabel *_gradeUpCellLeftLbl;
    UIButton *_gradeUpCellRightBtn;
    CTMyCtripAvatarView *_avatarImgView;
    UIButton *_avatarButton;
    UILabel *_nameLabel;
    UILabel *_genderAndDate;
    UILabel *_tip;
    UIImage *_avatarImg;
    NSString *_levelStr;
    CTMyCtripUserInfoModel *_userInfoModel;
    CTImagePickerManger *_pickerMgr;
    CTMemberGradeUpManager *_gradeUpManger;
    CTMyCtripUserInfoCell *_lastClickedCell;
    NSString *_gradeUpCellLeftTip;
    NSString *_urlOfMedal;
}

@property(copy, nonatomic) NSString *urlOfMedal; // @synthesize urlOfMedal=_urlOfMedal;
@property(nonatomic) int countOfMedal; // @synthesize countOfMedal=_countOfMedal;
@property(nonatomic) _Bool checkPhone; // @synthesize checkPhone=_checkPhone;
@property(nonatomic) _Bool checkEmail; // @synthesize checkEmail=_checkEmail;
@property(nonatomic) _Bool checkValue; // @synthesize checkValue=_checkValue;
@property(copy, nonatomic) NSString *gradeUpCellLeftTip; // @synthesize gradeUpCellLeftTip=_gradeUpCellLeftTip;
@property(retain, nonatomic) CTMyCtripUserInfoCell *lastClickedCell; // @synthesize lastClickedCell=_lastClickedCell;
@property(retain, nonatomic) CTMemberGradeUpManager *gradeUpManger; // @synthesize gradeUpManger=_gradeUpManger;
@property(retain, nonatomic) CTImagePickerManger *pickerMgr; // @synthesize pickerMgr=_pickerMgr;
@property(retain, nonatomic) CTMyCtripUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
@property(retain, nonatomic) UIImage *avatarImg; // @synthesize avatarImg=_avatarImg;
@property(nonatomic) _Bool backToPrePage; // @synthesize backToPrePage=_backToPrePage;
@property(nonatomic) _Bool needShowLogoutBtn; // @synthesize needShowLogoutBtn=_needShowLogoutBtn;
@property(nonatomic) __weak UILabel *tip; // @synthesize tip=_tip;
@property(nonatomic) __weak UILabel *genderAndDate; // @synthesize genderAndDate=_genderAndDate;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(nonatomic) __weak CTMyCtripAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(nonatomic) __weak UIButton *gradeUpCellRightBtn; // @synthesize gradeUpCellRightBtn=_gradeUpCellRightBtn;
@property(nonatomic) __weak UILabel *gradeUpCellLeftLbl; // @synthesize gradeUpCellLeftLbl=_gradeUpCellLeftLbl;
@property(retain, nonatomic) UIButton *logOutBtn; // @synthesize logOutBtn=_logOutBtn;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *logoutCell; // @synthesize logoutCell=_logoutCell;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *gradeUpCell; // @synthesize gradeUpCell=_gradeUpCell;
@property(retain, nonatomic) UITableView *userInfoTableView_; // @synthesize userInfoTableView_;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)ct_imagePicker:(id)arg1 didFinishedUploadImages:(id)arg2;
- (void)refreshNicknameWithCell:(id)arg1 userViewModel:(id)arg2;
- (void)refreshAvatar;
- (void)refreshRemoteAvatarName:(id)arg1;
- (void)refreshUserInfoState;
- (void)reloadTableForNewData;
- (void)performDismiss:(id)arg1;
- (void)engineDidLogOut:(id)arg1;
- (void)refreshMyDataWithComition:(_Bool)arg1 screenName:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)pressLogOutbtn:(id)arg1;
- (void)editClicked;
- (void)setTableViewCell:(id)arg1 Shadows:(_Bool)arg2;
- (void)reloadData;
- (void)pressEditBtn:(id)arg1;
- (void)dismissSelfPage;
- (void)backBarButtonClicked:(id)arg1;
- (void)openURL:(id)arg1 logCode:(id)arg2;
- (void)clickMyRight;
- (void)gradeUpAction:(id)arg1;
- (void)modifyPwd:(id)arg1;
- (void)clickEmail:(id)arg1;
- (void)clickCellPhone:(id)arg1;
- (void)clickNickname:(id)arg1;
- (void)clickGradeUp:(id)arg1;
- (void)clickMemberLevel:(id)arg1;
- (void)clickMedal:(id)arg1;
- (void)clickAvatar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)lookUpPrivilege;
- (void)upGradeFail;
- (void)upGradeSuccess;
- (void)memberGradeUpCommit:(int)arg1 rstModel:(id)arg2;
- (void)memberGradeUpCheck:(int)arg1 rstModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

