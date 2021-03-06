/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SUScriptTextFieldDelegate, UISearchBar, SUSearchDisplayController, UIViewController, ISStoreURLOperation, SUSearchFieldConfiguration;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIViewController *_dimmerViewController;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    int _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(getter=isActive,readonly) BOOL active;
@property(readonly) UISearchBar * searchBar;
@property(copy) SUSearchFieldConfiguration * searchFieldConfiguration;
@property int searchFieldStyle;


- (id)init;
- (void)dealloc;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)isActive;
- (id)searchBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)searchFieldStyle;
- (id)_cancelButtonView;
- (id)_newTransientViewController;
- (void)_dimmerViewAction:(id)arg1;
- (id)_newBlankStorePageViewController;
- (id)_targetViewController;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (void)_fetchCompletions;
- (id)_defaultSearchTerm;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (void)_cancelCompletionsOperation;
- (void)_showDimmerView;
- (BOOL)_focusTransientViewController;
- (void)_fetchResultsForTerm:(id)arg1;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_reloadSearchBar;
- (id)_newSearchBar;
- (void)_fetchResultsForURL:(id)arg1;
- (void)_tearDownDimmerView;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (void)scriptDidChangeTextForTextField:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setSearchFieldStyle:(int)arg1;
- (id)initWithContentsController:(id)arg1;
- (void)handleSearchURL:(id)arg1;
- (id)searchFieldConfiguration;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;

@end
