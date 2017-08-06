//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "CollectEditPageDelegate.h"
#import "EditTextViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CollectListEntity, KGThemeButton, KGThemeLabel, NSArray, NSData, NSString, UIImage, UIImageView, UIScrollView, UIView;

@interface CollectionEditViewController : KGViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, EditTextViewControllerDelegate, CollectEditPageDelegate>
{
    CollectListEntity *_myCollectEntity;
    UIImage *_coverImg;
    UIImageView *_imageView;
    KGThemeButton *_imgButton;
    KGThemeButton *_titleButton;
    KGThemeButton *_tagButton;
    KGThemeButton *_descriptionButton;
    NSData *_tmpImgdata;
    id <CollectionEditViewControllerDelegate> _delegate;
    NSString *_tempFoStringPrefixPath;
    UIView *_collectionNameView;
    UIView *_collectionTagView;
    UIView *_detailBgView;
    UIScrollView *_contentScrollView;
    KGThemeLabel *_nameTitleLabel;
    KGThemeLabel *_tagTitleLabel;
    KGThemeLabel *_detailTitleLabel;
    NSString *_listName;
    NSString *_intro;
    NSArray *_tags;
}

@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(nonatomic) __weak KGThemeLabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(nonatomic) __weak KGThemeLabel *tagTitleLabel; // @synthesize tagTitleLabel=_tagTitleLabel;
@property(nonatomic) __weak KGThemeLabel *nameTitleLabel; // @synthesize nameTitleLabel=_nameTitleLabel;
@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak UIView *detailBgView; // @synthesize detailBgView=_detailBgView;
@property(nonatomic) __weak UIView *collectionTagView; // @synthesize collectionTagView=_collectionTagView;
@property(nonatomic) __weak UIView *collectionNameView; // @synthesize collectionNameView=_collectionNameView;
@property(copy, nonatomic) NSString *tempFoStringPrefixPath; // @synthesize tempFoStringPrefixPath=_tempFoStringPrefixPath;
@property(nonatomic) __weak id <CollectionEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bIFoStringWithOutTitleAndWithNeedEntityNameExceptMyfavorAndDefaultCollect:(_Bool)arg1;
- (id)bIModuleString;
- (void)cleanSubViewsOfView:(id)arg1;
- (void)refreshData;
- (void)okWithController:(id)arg1;
- (void)okWithText:(id)arg1 AndTag:(long long)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDescriptionEvent:(id)arg1;
- (void)setTagEvent:(id)arg1;
- (void)setTitleEvent:(id)arg1;
- (void)setImgEvent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)okAction:(id)arg1;
- (void)initKGThemeBtn:(id)arg1;
- (void)initMenuView;
- (void)viewDidLoad;
- (void)setMyCollectEntity:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
