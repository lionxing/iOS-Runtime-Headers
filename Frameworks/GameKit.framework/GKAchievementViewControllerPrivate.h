/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTableViewCell, GKGameRecord, NSArray, NSMutableArray, GKAchievementSectionDataSource;

@interface GKAchievementViewControllerPrivate : GKTableViewControllerV2  {
    NSMutableArray *_achievements;
    struct { 
        unsigned int playButtonVisible : 1; 
        unsigned int usePlayerBackground : 1; 
        unsigned int translucentNavBar : 1; 
        unsigned int reserved : 27; 
    } _flags;
    GKGameRecord *_gameRecord;
    GKTableViewCell *_detailHeaderCell;
    BOOL _showRatingControl;
    GKAchievementSectionDataSource *_achievementViewSection;
}

@property(retain) GKGameRecord * gameRecord;
@property(retain) NSArray * achievements;
@property(getter=isPlayButtonVisible) BOOL playButtonVisible;
@property(retain) GKTableViewCell * detailHeaderCell;
@property BOOL showRatingControl;
@property(retain) GKAchievementSectionDataSource * achievementViewSection;


- (void)dealloc;
- (void)setShowRatingControl:(BOOL)arg1;
- (void)setDetailHeaderCell:(id)arg1;
- (id)detailHeaderCell;
- (id)tokenImageForAchievement:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateStatusWithError:(id)arg1;
- (void)reloadView;
- (void)localPlayerDidAuthenticate:(id)arg1;
- (void)setPlayButtonVisible:(BOOL)arg1;
- (BOOL)isPlayButtonVisible;
- (id)initWithGameRecord:(id)arg1;
- (id)achievements;
- (void)setAchievements:(id)arg1;
- (void)playTapped;
- (id)achievementViewSection;
- (void)setupSectionDataSource:(id)arg1;
- (id)gameRecord;
- (void)setGameRecord:(id)arg1;
- (BOOL)showRatingControl;
- (void)setAchievementViewSection:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (id)title;

@end
