//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

@class NSString;

@interface FMFishpondUserComponent : FMCellComponent
{
    _Bool _admin;
    NSString *_userId;
    NSString *_userNick;
    NSString *_tagText;
    NSString *_gender;
    NSString *_info;
}

+ (id)viewModelWithDataObject:(id)arg1;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool admin; // @synthesize admin=_admin;
@property(copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (Class)viewClass;

@end

