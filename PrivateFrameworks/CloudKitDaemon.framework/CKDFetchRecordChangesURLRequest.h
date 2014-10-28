/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKRecordZoneID, NSArray, NSData, NSMutableArray;

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest {
    CKRecordZoneID *_recordZoneID;
    NSArray *_requestedFields;
    NSMutableArray *_resultChangedRecords;
    NSData *_resultClientChangeTokenData;
    NSMutableArray *_resultDeletedRecordIdentifiers;
    NSData *_resultServerChangeTokenData;
    unsigned int _resultsLimit;
    NSData *_serverChangeTokenData;
    int _status;
}

@property(retain) CKRecordZoneID * recordZoneID;
@property(retain) NSArray * requestedFields;
@property(readonly) NSArray * resultChangedRecords;
@property(retain) NSData * resultClientChangeTokenData;
@property(readonly) NSArray * resultDeletedRecordIdentifiers;
@property(retain) NSData * resultServerChangeTokenData;
@property unsigned int resultsLimit;
@property(retain) NSData * serverChangeTokenData;
@property int status;

- (void).cxx_destruct;
- (id)initWithRecordZoneID:(id)arg1 serverChangeTokenData:(id)arg2 requestedFields:(id)arg3;
- (int)operationType;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestedFields;
- (id)resultChangedRecords;
- (id)resultClientChangeTokenData;
- (id)resultDeletedRecordIdentifiers;
- (id)resultServerChangeTokenData;
- (unsigned int)resultsLimit;
- (id)serverChangeTokenData;
- (void)setRecordZoneID:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)zoneIDsToLock;

@end