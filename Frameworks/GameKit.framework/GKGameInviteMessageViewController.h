/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, <GKGameInviteMessageViewControllerDelegate>;

@interface GKGameInviteMessageViewController : GKAbstractComposeController  {
    <GKGameInviteMessageViewControllerDelegate> *_delegate;
    NSArray *_players;
    NSString *_defaultMessage;
}

@property <GKGameInviteMessageViewControllerDelegate> * delegate;
@property(retain) NSArray * players;
@property(retain) NSString * defaultMessage;


- (void)dealloc;
- (id)defaultMessage;
- (void)setDefaultMessage:(id)arg1;
- (void)setPlayers:(id)arg1;
- (id)players;
- (void)done;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
