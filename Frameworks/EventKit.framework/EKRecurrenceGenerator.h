/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject  {
    NSCalendar *_calendar;
    NSDate *_eventStartDate;
    NSDate *_eventEndDate;
    NSTimeZone *_eventTimeZone;
    unsigned int _duration;
    BOOL _allDay;
    int _interval;
    int _frequency;
    NSDate *_endDate;
    int _weekStart;
    BOOL _shouldPinMonthDays;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

@property(copy) NSDate * eventStartDate;
@property(copy) NSDate * eventEndDate;
@property(copy) NSTimeZone * eventTimeZone;
@property BOOL allDay;
@property(copy) NSDate * endDate;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSArray * weeksOfTheYear;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * setPositions;

+ (id)generator;

- (id)init;
- (void)dealloc;
- (id)eventTimeZone;
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (BOOL)_isSimpleYearlyRecurrence;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (BOOL)_validateCalDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 pinned:(BOOL)arg2;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;
- (id)_computeRecurrenceEndDate:(int)arg1;
- (void)_prepareForPersistentRecurrence:(id)arg1;
- (void)_setupForPersistentEvent:(id)arg1;
- (void)_prepareForCalRecurrence:(void*)arg1 locked:(BOOL)arg2;
- (void)_setupForCalEvent:(void*)arg1 locked:(BOOL)arg2;
- (id)_copyOccurrenceDatesBetweenStartDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 timeZone:(id)arg3 limit:(int)arg4;
- (void)_prepareForEKRecurrence:(id)arg1;
- (void)_setupForEKEvent:(id)arg1;
- (BOOL)allDay;
- (id)eventStartDate;
- (id)eventEndDate;
- (void)setEventTimeZone:(id)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventStartDate:(id)arg1;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 initialDate:(id)arg2 afterDate:(id)arg3;
- (id)weeksOfTheYear;
- (id)daysOfTheYear;
- (id)monthsOfTheYear;
- (id)setPositions;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (void)setEndDate:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (id)endDate;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;
- (id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5 locked:(BOOL)arg6;

@end
