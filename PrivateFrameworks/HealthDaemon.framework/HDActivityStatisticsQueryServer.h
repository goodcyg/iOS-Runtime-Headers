/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {
    HDActivityCacheDataSource *_dataSource;
    BOOL _deliveredInitialResults;
    BOOL _deliversUpdates;
    NSDate *_endDate;
    NSDateComponents *_intervalComponents;
    _HKDelayedOperation *_resetOperation;
    NSDate *_startDate;
    HKStatisticsCollection *_statisticsCollection;
    _HKDelayedOperation *_updateOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDataSourceIfNecessary;
- (void)_queue_deliverActivityStatisticsObjects:(id)arg1;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverUpdates;
- (BOOL)_queue_queryIsRunning;
- (void)_queue_start;
- (void)_queue_stop;
- (id)_queue_updateDataSourceWithError:(id*)arg1;
- (BOOL)_shouldListenForUpdates;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;

@end