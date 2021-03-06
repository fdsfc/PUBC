//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSBaseViewController.h"

#import "HsAdapterObserver.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HSMBProgressHUD, HsFAQsDM, HsTableView, NSArray, NSString, UISearchController, UITableViewController;

@interface HsSectionsListViewController : HSBaseViewController <HsAdapterObserver, UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    HSMBProgressHUD *_loadingIndicator;	// 8 = 0x8
    _Bool _searchEventCaptured;	// 16 = 0x10
    _Bool _isFooterViewConfigured;	// 17 = 0x11
    short _sectionViewMode;	// 18 = 0x12
    NSArray *_customContactUsFlows;	// 24 = 0x18
    NSString *_convPrefillText;	// 32 = 0x20
    HsFAQsDM *_faqsDM;	// 40 = 0x28
    HsTableView *_tableView;	// 48 = 0x30
    id _controller;	// 56 = 0x38
    id <HsTableViewAdapter> _adapter;	// 64 = 0x40
    id <HsTableViewAdapter><HsSearchControllerDelegate> _searchAdapter;	// 72 = 0x48
    id <HsFaqViewBaseController> _sectionsViewBaseController;	// 80 = 0x50
    NSString *_sectionPublishId;	// 88 = 0x58
    UISearchController *_searchController;	// 96 = 0x60
    UITableViewController *_searchResultsController;	// 104 = 0x68
}

@property(retain, nonatomic) UITableViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(nonatomic) _Bool isFooterViewConfigured; // @synthesize isFooterViewConfigured=_isFooterViewConfigured;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) short sectionViewMode; // @synthesize sectionViewMode=_sectionViewMode;
@property(retain, nonatomic) NSString *sectionPublishId; // @synthesize sectionPublishId=_sectionPublishId;
@property(retain, nonatomic) id <HsFaqViewBaseController> sectionsViewBaseController; // @synthesize sectionsViewBaseController=_sectionsViewBaseController;
@property(retain, nonatomic) id <HsTableViewAdapter><HsSearchControllerDelegate> searchAdapter; // @synthesize searchAdapter=_searchAdapter;
@property(retain, nonatomic) id <HsTableViewAdapter> adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) id controller; // @synthesize controller=_controller;
@property(nonatomic) __weak HsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HsFAQsDM *faqsDM; // @synthesize faqsDM=_faqsDM;
@property(copy, nonatomic) NSString *convPrefillText; // @synthesize convPrefillText=_convPrefillText;
@property(retain, nonatomic) NSArray *customContactUsFlows; // @synthesize customContactUsFlows=_customContactUsFlows;
- (void).cxx_destruct;	// IMP=0x00000001014868ec
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000001014866b8
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00000001014865f8
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000101486534
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000101486378
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x0000000101486320
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000101486194
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000101486048
- (void)willPresentSearchController:(id)arg1;	// IMP=0x0000000101485dfc
- (void)willDismissSearchController:(id)arg1;	// IMP=0x0000000101485d04
- (void)setTargetAndSelectorForSearchTableFooterViewControls;	// IMP=0x0000000101485b64
- (void)handleDataUpdatedForSearch;	// IMP=0x0000000101485ab0
- (void)endEditingSearchText;	// IMP=0x0000000101485a28
- (void)adapterDataSourceUpdationFailed;	// IMP=0x00000001014857ec
- (void)noChangeInadapterDataSource;	// IMP=0x0000000101485734
- (void)adapterDataSourceUpdated;	// IMP=0x00000001014853c4
- (void)configureHeaderFooterTable:(id)arg1 adapter:(id)arg2;	// IMP=0x00000001014852d0
- (void)reloadTable:(id)arg1 adapter:(id)arg2;	// IMP=0x000000010148526c
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x0000000101484df0
- (void)launchSingleFaqView:(id)arg1 forRowAtIndex:(unsigned long long)arg2 withAdapter:(id)arg3;	// IMP=0x0000000101484c64
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001014848a0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001014847a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000101484718
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000101484710
- (void)launchNewConversationScreen:(id)arg1;	// IMP=0x00000001014845b0
- (void)launchConversationFromSearch;	// IMP=0x00000001014842e0
- (void)dealloc;	// IMP=0x00000001014842ac
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000101484258
- (void)didReceiveMemoryWarning;	// IMP=0x0000000101484224
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001014841a8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010148406c
- (void)viewDidLoad;	// IMP=0x0000000101483ee8
- (void)hideLoadingScreen;	// IMP=0x0000000101483e98
- (void)showLoadingScreen;	// IMP=0x0000000101483d3c
- (void)styleTableView;	// IMP=0x0000000101483994
- (void)addLeftNavigationButton;	// IMP=0x0000000101483734
- (void)styleSearchBarAndSearchController;	// IMP=0x0000000101482dac
- (void)handleAdapterDatasourceUpdatedForFaqsList;	// IMP=0x0000000101482c3c
- (void)switchControllerAndAdapterForCurrentViewMode;	// IMP=0x0000000101482b7c
- (void)initializeFaqsListComponents;	// IMP=0x0000000101482814
- (void)initializeSectionsListComponents:(_Bool)arg1;	// IMP=0x000000010148254c
- (void)initializeFaqSearchComponents;	// IMP=0x0000000101482440
- (void)initializeSectionsViewBaseController;	// IMP=0x0000000101482330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

