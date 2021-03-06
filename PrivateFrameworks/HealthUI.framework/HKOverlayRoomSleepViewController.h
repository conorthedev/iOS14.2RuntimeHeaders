/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOverlayRoomSleepViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, _HKContextChangeDelegate> {
    HKChartCache * _sharedSleepCache;
    HKInteractiveChartDataFormatter * _sleepChartFormatter;
    <HKSleepDataSourceProvider> * _sleepDataSourceProvider;
    HKDisplayType * _sleepDisplayType;
    bool  baseDisplayIsSchedule;
    bool  durationContextSelected;
    bool  scheduleContextSelected;
    bool  shouldHighlightBaseDisplayContext;
}

@property (nonatomic) bool baseDisplayIsSchedule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool durationContextSelected;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool scheduleContextSelected;
@property (nonatomic, retain) HKChartCache *sharedSleepCache;
@property (nonatomic) bool shouldHighlightBaseDisplayContext;
@property (nonatomic, retain) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (nonatomic) <HKSleepDataSourceProvider> *sleepDataSourceProvider;
@property (nonatomic, retain) HKDisplayType *sleepDisplayType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildConsistencyDisplayTypeWithApplicationItems:(id)arg1;
- (id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)arg1 customSleepSeries:(id)arg2 customSleepChartFormatter:(id)arg3;
- (id)_buildDurationAverageFormatter;
- (id)_buildDurationAverageSeries;
- (id)_buildDurationDisplayTypeWithApplicationItems:(id)arg1;
- (id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)arg1;
- (id)_buildScheduleDisplayTypeWithApplicationItems:(id)arg1;
- (id)_buildSleepDisplayTypeWithApplicationItems:(id)arg1 sleepSeriesType:(long long)arg2 customSleepSeries:(id)arg3 customSleepChartFormatter:(id)arg4;
- (id)_consistencyContextForApplicationItems:(id)arg1 overlayMode:(long long)arg2 isPrimaryContext:(bool)arg3;
- (id)_durationAmountContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2;
- (id)_durationAverageContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 useInBedAverage:(bool)arg3;
- (id)_durationGoalContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 overlayMode:(long long)arg3 isPrimaryContext:(bool)arg4;
- (id)_fullContextsForApplicationItems:(id)arg1 overlayChartController:(id)arg2;
- (void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)arg1;
- (id)_primaryContextForApplicationItems:(id)arg1 overlayChartController:(id)arg2;
- (void)_setDefaultChartFormatterFonts;
- (id)_sleepColorForSelectedRangeData:(id)arg1;
- (bool)baseDisplayIsSchedule;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (bool)durationContextSelected;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 sleepDataSourceProvider:(id)arg3 sleepChartFormatter:(id)arg4 mode:(long long)arg5;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (bool)scheduleContextSelected;
- (void)setBaseDisplayIsDuration;
- (void)setBaseDisplayIsSchedule;
- (void)setBaseDisplayIsSchedule:(bool)arg1;
- (void)setDurationContextSelected:(bool)arg1;
- (void)setScheduleContextSelected:(bool)arg1;
- (void)setSharedSleepCache:(id)arg1;
- (void)setShouldHighlightBaseDisplayContext;
- (void)setShouldHighlightBaseDisplayContext:(bool)arg1;
- (void)setSleepChartFormatter:(id)arg1;
- (void)setSleepDataSourceProvider:(id)arg1;
- (void)setSleepDisplayType:(id)arg1;
- (id)sharedSleepCache;
- (bool)shouldHighlightBaseDisplayContext;
- (id)sleepChartFormatter;
- (id)sleepDataSourceProvider;
- (id)sleepDisplayType;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (id)titleForSelectedRangeData:(id)arg1;
- (void)viewDidLoad;

@end
