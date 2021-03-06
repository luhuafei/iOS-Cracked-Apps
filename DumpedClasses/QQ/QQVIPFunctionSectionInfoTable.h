//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface QQVIPFunctionSectionInfoTable : NSObject <IQQDBOperationBase>
{
    NSString *_tableName;
    unsigned int _updateBatchSqlStatementId_v1;
    unsigned int _updateBatchSqlStatementId_v2;
    unsigned int _querySectionInfoStatementId_byComicId;
    unsigned int _querySectionInfoStatementId_bySectionIds;
    unsigned int _querySectionInfoStatementId_bySectionId;
}

- (void).cxx_destruct;
- (unsigned long long)getTableSign;
- (void)updateSectionInfoBySectionId:(id)arg1 comicId:(id)arg2 inDb:(id)arg3;
- (id)getSectionInfoBySectionId:(id)arg1 sectionId:(id)arg2 inDb:(id)arg3;
- (id)getSectionInfoBySectionIds:(id)arg1 sectionIds:(id)arg2 inDb:(id)arg3;
- (id)getSectionInfoByComicId:(id)arg1 inDb:(id)arg2;
- (id)adapterFMResultSetToSectionModel:(id)arg1;
- (void)updateTableinDb:(id)arg1;
- (void)createTable:(id)arg1;
- (id)getCreateTableSql;
- (_Bool)updateSectionInfoBySectionId:(id)arg1 comicId:(id)arg2;
- (id)getSectionInfoBySectionId:(id)arg1 sectionId:(id)arg2;
- (id)getSectionInfoBySectionIds:(id)arg1 sectionIds:(id)arg2;
- (id)getSectionInfoByComicId:(id)arg1;
- (void)createTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

