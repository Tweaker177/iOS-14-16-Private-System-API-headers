//iOS 15.7.2 

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/SBReusableViewMapDelegate.h>
#import <libobjc.A.dylib/SBRootFolderPageStateObserver.h>
#import <libobjc.A.dylib/SBNestingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHIconModelDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBRootFolderDelegate.h>
#import <libobjc.A.dylib/SBIconViewObserver.h>
#import <libobjc.A.dylib/SBHWidgetStackViewControllerDataSource.h>
#import <libobjc.A.dylib/SBHWidgetStackViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHMultiplexingWrapperViewControllerDelegate.h>
#import <libobjc.A.dylib/SBLeafIconObserver.h>
#import <libobjc.A.dylib/CHUISAvocadoHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetMetricsProviderDelegate.h>
#import <libobjc.A.dylib/CHSAvocadoDescriptorProviderObserver.h>
#import <libobjc.A.dylib/SBHMultiplexingManagerDelegate.h>
#import <libobjc.A.dylib/SBIconDragManagerDelegate.h>
#import <libobjc.A.dylib/SBHTodayViewControllerObserver.h>
#import <libobjc.A.dylib/SBHModalInteractionDelegate.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBHomeScreenIconTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBRootFolderControllerDelegate.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>
#import <libobjc.A.dylib/SBHLibraryViewControllerObserver.h>
#import <libobjc.A.dylib/SBHVisibleContentPresenter.h>

@protocol OS_os_activity, BSInvalidatable, SBHIconManagerDelegate, SBHIconRootViewProviding, SBHTodayViewController, SBIconListLayoutProvider, SBHRootFolderCustomViewPresenting, SBHSidebarProvider, SBHLegibility;
@class SBHIconModel, SBReusableViewMap, SBIconLabelImageCache, UIImpactFeedbackGenerator, NSMutableSet, NSMutableArray, NSCountedSet, NSHashTable, SBIconPreviousLocationTracker, SBFolderIconImageCache, SBHIconImageCache, SBHMultiplexingManager, NSMapTable, NSMutableDictionary, NSObject, SBFolderIcon, NSMutableOrderedSet, NSTimer, SBRootFolder, SBRootFolderController, UIViewController, SBFloatingDockViewController, SBHLibraryViewController, SBHFocusMode, _UILegibilitySettings, SBIcon, CHSAvocadoDescriptorProvider, SBHomeScreenIconTransitionAnimator, SBIconDragManager, SBHIconShareSheetManager, SBIconPageIndicatorImageSetCache, SBHHomeScreenUsageMonitor, SBIconView, NSArray, SBFolder, BSEventQueue, SBWorkspaceInteractionContext, SBHHomeScreenSettings, SBHRootFolderSettings, NSString, SBHomeScreenDefaults, SBHPeopleWidgetPersonDetailInteraction, SBFParallaxSettings, ATXHomeScreenPageIconRanker, SBHWidgetIntroductionSettings, SBModalWidgetIntroductionViewController, SBHTrialClientManager, NSDictionary, SBHWidgetMetricsProvider, ATXDefaultWidgetSuggesterClient, SBIconListView, SBFolderController, SBSearchGesture, NSSet;

@interface SBHIconManager : NSObject <UIPopoverPresentationControllerDelegate, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBNestingViewControllerDelegate, SBHIconModelDelegate, PTSettingsKeyObserver, SBRootFolderDelegate, SBIconViewObserver, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBHMultiplexingWrapperViewControllerDelegate, SBLeafIconObserver, CHUISAvocadoHostViewControllerDelegate, SBHWidgetMetricsProviderDelegate, CHSAvocadoDescriptorProviderObserver, SBHMultiplexingManagerDelegate, SBIconDragManagerDelegate, SBHTodayViewControllerObserver, SBHModalInteractionDelegate, SBFolderObserver, SBIconViewDelegate, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate, SBIconViewProviding, SBRootFolderControllerDelegate, SBIconLocationPresenting, SBHLibraryViewControllerObserver, SBHVisibleContentPresenter> {

	SBReusableViewMap* _iconViewMap;
	SBReusableViewMap* _homescreenIconAccessoryViewMap;
	SBReusableViewMap* _homescreenIconLabelAccessoryViewMap;
	SBReusableViewMap* _homescreenIconImageViewMap;
	SBReusableViewMap* _widgetBackgroundViewMap;
	SBIconLabelImageCache* _labelImageCache;
	UIImpactFeedbackGenerator* _iconEditingFeedbackBehavior;
	NSMutableSet* _touchedIconViews;
	NSMutableArray* _iconTouchesFinishedBlocks;
	unsigned long long _maxIconViewsInHierarchy;
	NSCountedSet* _reasonsToNotRestartEditingTimer;
	NSHashTable* _pageStateObservers;
	NSHashTable* _folderPresentationObservers;
	NSMutableArray* _currentExpandCompletions;
	NSMutableArray* _currentCollapseCompletions;
	SBIconPreviousLocationTracker* _previousIconLocationTracker;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBHIconImageCache* _addWidgetSheetIconImageCache;
	unsigned long long _relayoutCount;
	BOOL _editingShouldBeReEnabledAfterLibrarySearchControllerIsDismissed;
	Class _subclassIconViewClass;
	SBHMultiplexingManager* _widgetMultiplexingManager;
	NSHashTable* _aliveWidgetViewControllersHashTable;
	NSMapTable* _widgetViewControllersForIconView;
	NSMapTable* _iconViewsForCustomIconImageViewController;
	NSMapTable* _iconViewsForWidgetMultiplexingViewController;
	NSMapTable* _appPredictionViewControllersForUniqueIdentifier;
	NSMutableDictionary* _widgetIntents;
	NSMutableDictionary* _archivedWidgetIntents;
	NSMutableDictionary* _rootIconListsResetTemporaryIntentCache;
	unsigned long long _descriptorsChangedSequenceNumber;
	NSMutableSet* _pendingWidgetIntentConfigurationInitializations;
	NSMutableSet* _activeWidgetIntentConfigurationInitializations;
	NSMutableArray* _performAfterPendingWidgetIntentConfigurationBlocks;
	NSCountedSet* _reasonsToIgnoreUserPreferenceForAddingNewIconsToHomeScreen;
	NSObject*<OS_os_activity> _editingActivity;
	os_activity_scope_state_s _editingActivityScope;
	id<BSInvalidatable> _stateCaptureHandle;
	SBFolderIcon* _pendingFolderIconToOpen;
	NSMapTable* _preventBackgroundingAssertionsForAvocadoWidgets;
	NSMutableOrderedSet* _avocadoWidgetViewControllersWithBackgroundAssertions;
	NSTimer* _avocadoBackgroundAssertionCullingTimer;
	NSMutableArray* _reasonsToNotManageBackgroundAssertions;
	NSHashTable* _avocadoHostViewControllersBackgroundAssertionsToBeCleanedUpAfterTodayViewControllerDismissed;
	BOOL _editing;
	BOOL _overlayTodayViewVisible;
	BOOL _overlayCoverSheetTodayViewVisible;
	BOOL _overlayLibraryViewVisible;
	BOOL _dockPinnedForRotation;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _showsAddWidgetButtonWhileEditing;
	BOOL _animatingForUnscatter;
	BOOL _showsBadgesInAppLibrary;
	BOOL _usageMonitoringEnabled;
	BOOL _needsRelayout;
	BOOL _animatingFolderCreation;
	BOOL _animatingFolderOpeningOrClosing;
	BOOL _resettingRootIconLists;
	BOOL _canPresentOverscrollLibraryForPageTransition;
	BOOL _canDismissOverscrollLibraryForPageTransition;
	BOOL _stopUpdatingDefaultWidgetsBumpedIconRecord;
	BOOL _isVerticalWidgetIntroduction;
	BOOL _forceShowWidgetIntroduction;
	BOOL _modalIntroductionViewControllerIsPrewarming;
	BOOL _shouldDisableUserInteractionForWidgetDiscoverability;
	BOOL _internalForceShowWidgetDiscoverability;
	BOOL _disablesScrollingToLastIconPageForLibraryDismissal;
	BOOL _widgetDiscoverabilityHasRun;
	unsigned long long _contentVisibility;
	id<SBHIconManagerDelegate> _delegate;
	SBHIconModel* _iconModel;
	SBRootFolder* _rootFolder;
	SBRootFolderController* _rootFolderController;
	UIViewController*<SBHIconRootViewProviding> _rootViewController;
	SBFloatingDockViewController* _floatingDockViewController;
	UIViewController*<SBHTodayViewController> _overlayTodayViewController;
	UIViewController*<SBHTodayViewController> _overlayCoverSheetTodayViewController;
	SBHLibraryViewController* _overlayLibraryViewController;
	SBHFocusMode* _activeFocusMode;
	unsigned long long _maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions;
	_UILegibilitySettings* _legibilitySettings;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	unsigned long long _listLayoutProviderLayoutOptions;
	SBIcon* _iconToReveal;
	CHSAvocadoDescriptorProvider* _avocadoDescriptorProvider;
	SBHomeScreenIconTransitionAnimator* _currentTransitionAnimator;
	SBIconDragManager* _iconDragManager;
	SBHIconShareSheetManager* _iconShareSheetManager;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	SBHHomeScreenUsageMonitor* _usageMonitor;
	SBIconView* _highlightedIconView;
	NSTimer* _editingEndTimer;
	NSArray* _postResetPathIdentifiers;
	SBFolder* _closingFolder;
	BSEventQueue* _transitionEventQueue;
	SBWorkspaceInteractionContext* _currentInteractionContext;
	SBHHomeScreenSettings* _homeScreenSettings;
	SBHRootFolderSettings* _rootFolderSettings;
	NSString* _precachedContentSizeCategory;
	SBHomeScreenDefaults* _homeScreenDefaults;
	UIViewController*<SBHRootFolderCustomViewPresenting> _trailingCustomViewController;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;
	UIViewController*<SBHLegibility> _leadingCustomViewController;
	id<BSInvalidatable> _editingAutosaveDisableAssertion;
	SBIconView* _currentConfiguringIconView;
	SBHPeopleWidgetPersonDetailInteraction* _currentPersonDetailInteraction;
	SBFParallaxSettings* _badgeParallaxSettings;
	ATXHomeScreenPageIconRanker* _atxIconRanker;
	SBHWidgetIntroductionSettings* _widgetIntroductionSettings;
	NSMutableArray* _defaultWidgetsIconsRestoringRecordOriginalIndex;
	NSMutableArray* _defaultWidgetsBumpedIconUsageRanking;
	NSMutableDictionary* _defaultWidgetsIconsRestoringRecord;
	unsigned long long _widgetIntroductionCounter;
	NSArray* _defaultFirstPageSuggestedWidgetIcons;
	NSArray* _defaultSecondPageSuggestedWidgetIcons;
	SBModalWidgetIntroductionViewController* _modalIntroductionViewController;
	NSMutableArray* _chuisOnboardingWidgetViewControllers;
	SBHTrialClientManager* _trialClientManager;
	NSDictionary* _originalIconStateBeforeWidgetDiscoverability;
	SBIconView* _previewInteractingIconView;
	SBHWidgetMetricsProvider* _widgetMetricsProvider;
	NSArray* _defaultFirstPageWidgetDescriptors;
	unsigned long long _defaultFirstPageWidgetSizeClass;
	NSArray* _defaultSecondPageWidgetDescriptors;
	unsigned long long _defaultSecondPageWidgetSizeClass;
	unsigned long long _gridCellInfoOptionsForInsertingDefaultWidgets;
	ATXDefaultWidgetSuggesterClient* _proactiveWidgetSuggesterClient;
}
@property (nonatomic,retain) SBIconView * highlightedIconView;                                                                                         //@synthesize highlightedIconView=_highlightedIconView - In the implementation block
@property (nonatomic,retain) NSTimer * editingEndTimer;                                                                                                //@synthesize editingEndTimer=_editingEndTimer - In the implementation block
@property (nonatomic,retain) SBRootFolderController * rootFolderController;                                                                            //@synthesize rootFolderController=_rootFolderController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHIconRootViewProviding> rootViewController;                                                           //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,copy) NSArray * postResetPathIdentifiers;                                                                                         //@synthesize postResetPathIdentifiers=_postResetPathIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL needsRelayout;                                                                                                       //@synthesize needsRelayout=_needsRelayout - In the implementation block
@property (assign,getter=isAnimatingFolderCreation,nonatomic) BOOL animatingFolderCreation;                                                            //@synthesize animatingFolderCreation=_animatingFolderCreation - In the implementation block
@property (assign,getter=isAnimatingFolderOpeningOrClosing,nonatomic) BOOL animatingFolderOpeningOrClosing;                                            //@synthesize animatingFolderOpeningOrClosing=_animatingFolderOpeningOrClosing - In the implementation block
@property (assign,getter=isAnimatingForUnscatter,nonatomic) BOOL animatingForUnscatter;                                                                //@synthesize animatingForUnscatter=_animatingForUnscatter - In the implementation block
@property (nonatomic,retain) SBFolder * closingFolder;                                                                                                 //@synthesize closingFolder=_closingFolder - In the implementation block
@property (nonatomic,readonly) BSEventQueue * transitionEventQueue;                                                                                    //@synthesize transitionEventQueue=_transitionEventQueue - In the implementation block
@property (nonatomic,retain) SBHomeScreenIconTransitionAnimator * currentTransitionAnimator;                                                           //@synthesize currentTransitionAnimator=_currentTransitionAnimator - In the implementation block
@property (nonatomic,retain) SBRootFolder * rootFolder;                                                                                                //@synthesize rootFolder=_rootFolder - In the implementation block
@property (nonatomic,retain) SBWorkspaceInteractionContext * currentInteractionContext;                                                                //@synthesize currentInteractionContext=_currentInteractionContext - In the implementation block
@property (nonatomic,readonly) SBHHomeScreenSettings * homeScreenSettings;                                                                             //@synthesize homeScreenSettings=_homeScreenSettings - In the implementation block
@property (nonatomic,readonly) SBHRootFolderSettings * rootFolderSettings;                                                                             //@synthesize rootFolderSettings=_rootFolderSettings - In the implementation block
@property (nonatomic,copy) NSString * precachedContentSizeCategory;                                                                                    //@synthesize precachedContentSizeCategory=_precachedContentSizeCategory - In the implementation block
@property (nonatomic,readonly) SBHomeScreenDefaults * homeScreenDefaults;                                                                              //@synthesize homeScreenDefaults=_homeScreenDefaults - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHRootFolderCustomViewPresenting> trailingCustomViewController;                                        //@synthesize trailingCustomViewController=_trailingCustomViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHSidebarProvider> sidebarViewController;                                                              //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHLegibility> leadingCustomViewController;                                                             //@synthesize leadingCustomViewController=_leadingCustomViewController - In the implementation block
@property (assign,getter=isResettingRootIconLists,nonatomic) BOOL resettingRootIconLists;                                                              //@synthesize resettingRootIconLists=_resettingRootIconLists - In the implementation block
@property (assign,nonatomic) BOOL canPresentOverscrollLibraryForPageTransition;                                                                        //@synthesize canPresentOverscrollLibraryForPageTransition=_canPresentOverscrollLibraryForPageTransition - In the implementation block
@property (assign,nonatomic) BOOL canDismissOverscrollLibraryForPageTransition;                                                                        //@synthesize canDismissOverscrollLibraryForPageTransition=_canDismissOverscrollLibraryForPageTransition - In the implementation block
@property (nonatomic,retain) SBHHomeScreenUsageMonitor * usageMonitor;                                                                                 //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> editingAutosaveDisableAssertion;                                                                      //@synthesize editingAutosaveDisableAssertion=_editingAutosaveDisableAssertion - In the implementation block
@property (nonatomic,retain) SBIconView * currentConfiguringIconView;                                                                                  //@synthesize currentConfiguringIconView=_currentConfiguringIconView - In the implementation block
@property (nonatomic,retain) SBHPeopleWidgetPersonDetailInteraction * currentPersonDetailInteraction;                                                  //@synthesize currentPersonDetailInteraction=_currentPersonDetailInteraction - In the implementation block
@property (nonatomic,readonly) SBFParallaxSettings * badgeParallaxSettings;                                                                            //@synthesize badgeParallaxSettings=_badgeParallaxSettings - In the implementation block
@property (nonatomic,retain) ATXHomeScreenPageIconRanker * atxIconRanker;                                                                              //@synthesize atxIconRanker=_atxIconRanker - In the implementation block
@property (nonatomic,readonly) SBHWidgetIntroductionSettings * widgetIntroductionSettings;                                                             //@synthesize widgetIntroductionSettings=_widgetIntroductionSettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultWidgetsIconsRestoringRecordOriginalIndex;                                                         //@synthesize defaultWidgetsIconsRestoringRecordOriginalIndex=_defaultWidgetsIconsRestoringRecordOriginalIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultWidgetsBumpedIconUsageRanking;                                                                    //@synthesize defaultWidgetsBumpedIconUsageRanking=_defaultWidgetsBumpedIconUsageRanking - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultWidgetsIconsRestoringRecord;                                                                 //@synthesize defaultWidgetsIconsRestoringRecord=_defaultWidgetsIconsRestoringRecord - In the implementation block
@property (assign,nonatomic) BOOL stopUpdatingDefaultWidgetsBumpedIconRecord;                                                                          //@synthesize stopUpdatingDefaultWidgetsBumpedIconRecord=_stopUpdatingDefaultWidgetsBumpedIconRecord - In the implementation block
@property (assign,nonatomic) BOOL isVerticalWidgetIntroduction;                                                                                        //@synthesize isVerticalWidgetIntroduction=_isVerticalWidgetIntroduction - In the implementation block
@property (assign,nonatomic) BOOL forceShowWidgetIntroduction;                                                                                         //@synthesize forceShowWidgetIntroduction=_forceShowWidgetIntroduction - In the implementation block
@property (assign,nonatomic) unsigned long long widgetIntroductionCounter;                                                                             //@synthesize widgetIntroductionCounter=_widgetIntroductionCounter - In the implementation block
@property (nonatomic,retain) NSArray * defaultFirstPageSuggestedWidgetIcons;                                                                           //@synthesize defaultFirstPageSuggestedWidgetIcons=_defaultFirstPageSuggestedWidgetIcons - In the implementation block
@property (nonatomic,retain) NSArray * defaultSecondPageSuggestedWidgetIcons;                                                                          //@synthesize defaultSecondPageSuggestedWidgetIcons=_defaultSecondPageSuggestedWidgetIcons - In the implementation block
@property (nonatomic,retain) SBModalWidgetIntroductionViewController * modalIntroductionViewController;                                                //@synthesize modalIntroductionViewController=_modalIntroductionViewController - In the implementation block
@property (assign,nonatomic) BOOL modalIntroductionViewControllerIsPrewarming;                                                                         //@synthesize modalIntroductionViewControllerIsPrewarming=_modalIntroductionViewControllerIsPrewarming - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableUserInteractionForWidgetDiscoverability;                                                                //@synthesize shouldDisableUserInteractionForWidgetDiscoverability=_shouldDisableUserInteractionForWidgetDiscoverability - In the implementation block
@property (nonatomic,retain) NSMutableArray * chuisOnboardingWidgetViewControllers;                                                                    //@synthesize chuisOnboardingWidgetViewControllers=_chuisOnboardingWidgetViewControllers - In the implementation block
@property (nonatomic,retain) SBHTrialClientManager * trialClientManager;                                                                               //@synthesize trialClientManager=_trialClientManager - In the implementation block
@property (nonatomic,copy) NSDictionary * originalIconStateBeforeWidgetDiscoverability;                                                                //@synthesize originalIconStateBeforeWidgetDiscoverability=_originalIconStateBeforeWidgetDiscoverability - In the implementation block
@property (nonatomic,readonly) SBIconListView * currentRootIconList; 
@property (nonatomic,readonly) SBIconListView * dockListView; 
@property (nonatomic,readonly) SBIconListView * floatingDockListView; 
@property (nonatomic,readonly) SBIconListView * floatingDockSuggestionsListView; 
@property (nonatomic,readonly) SBIconListView * effectiveDockListView; 
@property (nonatomic,retain) SBIconView * previewInteractingIconView;                                                                                  //@synthesize previewInteractingIconView=_previewInteractingIconView - In the implementation block
@property (nonatomic,readonly) SBIconLabelImageCache * iconLabelImageCache; 
@property (getter=isLibraryViewControllerVisible,nonatomic,readonly) BOOL libraryViewControllerVisible; 
@property (nonatomic,readonly) SBHWidgetMetricsProvider * widgetMetricsProvider;                                                                       //@synthesize widgetMetricsProvider=_widgetMetricsProvider - In the implementation block
@property (nonatomic,copy) NSArray * defaultFirstPageWidgetDescriptors;                                                                                //@synthesize defaultFirstPageWidgetDescriptors=_defaultFirstPageWidgetDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long defaultFirstPageWidgetSizeClass;                                                                       //@synthesize defaultFirstPageWidgetSizeClass=_defaultFirstPageWidgetSizeClass - In the implementation block
@property (nonatomic,copy) NSArray * defaultSecondPageWidgetDescriptors;                                                                               //@synthesize defaultSecondPageWidgetDescriptors=_defaultSecondPageWidgetDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long defaultSecondPageWidgetSizeClass;                                                                      //@synthesize defaultSecondPageWidgetSizeClass=_defaultSecondPageWidgetSizeClass - In the implementation block
@property (assign,nonatomic) BOOL internalForceShowWidgetDiscoverability;                                                                              //@synthesize internalForceShowWidgetDiscoverability=_internalForceShowWidgetDiscoverability - In the implementation block
@property (assign,nonatomic) unsigned long long gridCellInfoOptionsForInsertingDefaultWidgets;                                                         //@synthesize gridCellInfoOptionsForInsertingDefaultWidgets=_gridCellInfoOptionsForInsertingDefaultWidgets - In the implementation block
@property (nonatomic,retain) ATXDefaultWidgetSuggesterClient * proactiveWidgetSuggesterClient;                                                         //@synthesize proactiveWidgetSuggesterClient=_proactiveWidgetSuggesterClient - In the implementation block
@property (assign,nonatomic) BOOL disablesScrollingToLastIconPageForLibraryDismissal;                                                                  //@synthesize disablesScrollingToLastIconPageForLibraryDismissal=_disablesScrollingToLastIconPageForLibraryDismissal - In the implementation block
@property (assign,nonatomic) BOOL widgetDiscoverabilityHasRun;                                                                                         //@synthesize widgetDiscoverabilityHasRun=_widgetDiscoverabilityHasRun - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIconManagerDelegate> delegate;                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,retain) SBHIconModel * iconModel;                                                                                                 //@synthesize iconModel=_iconModel - In the implementation block
@property (nonatomic,readonly) SBFolderController * openedFolderController; 
@property (nonatomic,retain) SBFloatingDockViewController * floatingDockViewController;                                                                //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHTodayViewController> overlayTodayViewController;                                                     //@synthesize overlayTodayViewController=_overlayTodayViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHTodayViewController> overlayCoverSheetTodayViewController;                                           //@synthesize overlayCoverSheetTodayViewController=_overlayCoverSheetTodayViewController - In the implementation block
@property (nonatomic,retain) SBHLibraryViewController * overlayLibraryViewController;                                                                  //@synthesize overlayLibraryViewController=_overlayLibraryViewController - In the implementation block
@property (assign,getter=isOverlayTodayViewVisible,nonatomic) BOOL overlayTodayViewVisible;                                                            //@synthesize overlayTodayViewVisible=_overlayTodayViewVisible - In the implementation block
@property (assign,getter=isOverlayCoverSheetTodayViewVisible,nonatomic) BOOL overlayCoverSheetTodayViewVisible;                                        //@synthesize overlayCoverSheetTodayViewVisible=_overlayCoverSheetTodayViewVisible - In the implementation block
@property (assign,getter=isOverlayLibraryViewVisible,nonatomic) BOOL overlayLibraryViewVisible;                                                        //@synthesize overlayLibraryViewVisible=_overlayLibraryViewVisible - In the implementation block
@property (assign,getter=isDockPinnedForRotation,nonatomic) BOOL dockPinnedForRotation;                                                                //@synthesize dockPinnedForRotation=_dockPinnedForRotation - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhileEditing;                                                                                         //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL showsAddWidgetButtonWhileEditing;                                                                                    //@synthesize showsAddWidgetButtonWhileEditing=_showsAddWidgetButtonWhileEditing - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                                                            //@synthesize editing=_editing - In the implementation block
@property (getter=isEditingAllowed,nonatomic,readonly) BOOL editingAllowed; 
@property (getter=isFolderPageManagementUIVisible,nonatomic,readonly) BOOL folderPageManagementUIVisible; 
@property (nonatomic,retain) SBHFocusMode * activeFocusMode;                                                                                           //@synthesize activeFocusMode=_activeFocusMode - In the implementation block
@property (getter=isIconDragging,nonatomic,readonly) BOOL iconDragging; 
@property (getter=isRootFolderContentVisible,nonatomic,readonly) BOOL rootFolderContentVisible; 
@property (getter=isIconContentPossiblyVisibleOverApplication,nonatomic,readonly) BOOL iconContentPossiblyVisibleOverApplication; 
@property (assign,nonatomic) unsigned long long maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions;                                           //@synthesize maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions=_maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * iconEditingFeedbackBehavior; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                                                          //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (assign,nonatomic) unsigned long long listLayoutProviderLayoutOptions;                                                                       //@synthesize listLayoutProviderLayoutOptions=_listLayoutProviderLayoutOptions - In the implementation block
@property (nonatomic,retain) SBIcon * iconToReveal;                                                                                                    //@synthesize iconToReveal=_iconToReveal - In the implementation block
@property (nonatomic,readonly) CHSAvocadoDescriptorProvider * avocadoDescriptorProvider;                                                               //@synthesize avocadoDescriptorProvider=_avocadoDescriptorProvider - In the implementation block
@property (nonatomic,readonly) BOOL allowsNestedFolders; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isRootFolderScrolling,nonatomic,readonly) BOOL rootFolderScrolling; 
@property (getter=isFolderScrolling,nonatomic,readonly) BOOL folderScrolling; 
@property (getter=isTrackingScroll,nonatomic,readonly) BOOL trackingScroll; 
@property (nonatomic,readonly) BOOL hasOpenFolder; 
@property (nonatomic,readonly) SBFolder * openedFolder; 
@property (nonatomic,readonly) BOOL canCloseFolders; 
@property (nonatomic,readonly) BOOL hasAnimatingFolder; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (getter=isPerformingExpandTransition,nonatomic,readonly) BOOL performingExpandTransition; 
@property (getter=isPerformingCancelledCollapseTransition,nonatomic,readonly) BOOL performingCancelledCollapseTransition; 
@property (nonatomic,readonly) SBIconDragManager * iconDragManager;                                                                                    //@synthesize iconDragManager=_iconDragManager - In the implementation block
@property (getter=isIconTouched,nonatomic,readonly) BOOL iconTouched; 
@property (getter=isShowingIconContextMenu,nonatomic,readonly) BOOL showingIconContextMenu; 
@property (nonatomic,readonly) SBHIconShareSheetManager * iconShareSheetManager;                                                                       //@synthesize iconShareSheetManager=_iconShareSheetManager - In the implementation block
@property (nonatomic,readonly) BOOL areAnyIconShareSheetsShowing; 
@property (getter=isShowingPullDownSearch,nonatomic,readonly) BOOL showingPullDownSearch; 
@property (getter=isShowingPullDownSearchOrTransitioningToVisible,nonatomic,readonly) BOOL showingPullDownSearchOrTransitioningToVisible; 
@property (getter=isShowingPullDownOrLeadingCustomViewSearch,nonatomic,readonly) BOOL showingPullDownOrLeadingCustomViewSearch; 
@property (getter=isShowingSpotlightOrLeadingCustomView,nonatomic,readonly) BOOL showingSpotlightOrLeadingCustomView; 
@property (getter=isShowingLeadingCustomView,nonatomic,readonly) BOOL showingLeadingCustomView; 
@property (getter=isShowingOrTransitioningToLeadingCustomView,nonatomic,readonly) BOOL showingOrTransitioningToLeadingCustomView; 
@property (getter=isTransitioningHomeScreenState,nonatomic,readonly) BOOL transitioningHomeScreenState; 
@property (getter=isSidebarVisible,nonatomic,readonly) BOOL sidebarVisible; 
@property (getter=isSidebarEffectivelyVisible,nonatomic,readonly) BOOL sidebarEffectivelyVisible; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (nonatomic,readonly) SBSearchGesture * searchGesture; 
@property (nonatomic,readonly) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;                                                      //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (nonatomic,readonly) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,readonly) SBHIconImageCache * iconImageCache; 
@property (nonatomic,readonly) BOOL showsBadgesInAppLibrary;                                                                                           //@synthesize showsBadgesInAppLibrary=_showsBadgesInAppLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSString * statisticsSummary; 
@property (assign,getter=isUsageMonitoringEnabled,nonatomic) BOOL usageMonitoringEnabled;                                                              //@synthesize usageMonitoringEnabled=_usageMonitoringEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (assign,nonatomic) unsigned long long contentVisibility;                                                                                     //@synthesize contentVisibility=_contentVisibility - In the implementation block
+(double)defaultIconLayoutAnimationDuration;
+(id)defaultIconLocationForListsWithNonDefaultSizedIcons;
-(SBIconListView *)currentRootIconList;
-(BOOL)isSidebarVisible;
-(void)setAnimatingFolderCreation:(BOOL)arg1 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1 ;
-(void)dismissIconContextMenu;
-(unsigned long long)allowedGridSizeClassesForDock;
-(BOOL)widgetIconIsOnboardingWidget:(id)arg1 ;
-(NSString *)statisticsSummary;
-(unsigned long long)maxIconCountForDock;
-(void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3 ;
-(void)updateFloatingDockMaximumEditingIconSize;
-(void)popToCurrentRootIconList;
-(SBFolder *)closingFolder;
-(void)setUsageMonitor:(SBHHomeScreenUsageMonitor *)arg1 ;
-(void)checkForInvalidWidgets;
-(BOOL)showsDoneButtonWhileEditing;
-(id)replaceApplicationPlaceholderWithApplication:(id)arg1 ;
-(SBIconListView *)dockListView;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2 ;
-(BOOL)isIconDragging;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(void)setEditing:(BOOL)arg1 forIconLocation:(id)arg2 ;
-(id)homescreenIconLabelAccessoryViewMap;
-(void)runRemoveAndRestoreIconTest;
-(BOOL)isTransitioningHomeScreenState;
-(void)setNeedsRelayout:(BOOL)arg1 ;
-(void)folderController:(id)arg1 didEndEditingTitle:(id)arg2 ;
-(void)folderController:(id)arg1 didBeginEditingTitle:(id)arg2 ;
-(unsigned long long)columnCountForTodayList;
-(SBHomeScreenDefaults *)homeScreenDefaults;
-(UIViewController*<SBHLegibility>)leadingCustomViewController;
-(SBHRootFolderSettings *)rootFolderSettings;
-(void)setModalIntroductionViewControllerIsPrewarming:(BOOL)arg1 ;
-(void)presentTodayOverlay;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isIconTouched;
-(void)setRootFolder:(SBRootFolder *)arg1 ;
-(void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 willUseIconView:(id)arg3 forDroppingIconDragItem:(id)arg4 ;
-(void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1 ;
-(void)tryScrollToIconToRevealAnimated:(BOOL)arg1 ;
-(void)replaceHomescreenWithWidgets;
-(void)setModalIntroductionViewController:(SBModalWidgetIntroductionViewController *)arg1 ;
-(BOOL)dismissSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)debuggingActiveWidgetInfo;
-(id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4 ;
-(unsigned long long)allowedGridSizeClassesForTodayList;
-(void)setRootFolderController:(SBRootFolderController *)arg1 ;
-(id)launchURLForIconView:(id)arg1 ;
-(SBIconDragManager *)iconDragManager;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3 ;
-(void)setRootViewController:(UIViewController*<SBHIconRootViewProviding>)arg1 ;
-(SBHPeopleWidgetPersonDetailInteraction *)currentPersonDetailInteraction;
-(void)randomizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1 ;
-(SBHIconShareSheetManager *)iconShareSheetManager;
-(void)addPageStateObserver:(id)arg1 ;
-(void)widgetStackViewControllerWidgetCountDidChange:(id)arg1 ;
-(SBHTrialClientManager *)trialClientManager;
-(id)iconLocationForListsWithNonDefaultSizedIcons;
-(SBHHomeScreenUsageMonitor *)usageMonitor;
-(void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(id)iconLocationForList:(id)arg1 inFolder:(id)arg2 ofRootFolder:(id)arg3 ;
-(void)resetRootIconLists;
-(void)enumeratePageStateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)undoDefaultWidgets:(BOOL)arg1 ;
-(BOOL)isShowingPullDownOrLeadingCustomViewSearch;
-(BOOL)isSidebarVisibilityGestureActive;
-(void)runDownloadingIconTest;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(void)captureHomeScreenOnboardingSnapshot;
-(SBSearchGesture *)searchGesture;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(SBFolder *)openedFolder;
-(id)addWidgetsToEachPage;
-(void)setupHomeScreenForWidgetScrollPerformanceTest;
-(BOOL)shouldHighlightTouchedIconView:(id)arg1 ;
-(BOOL)isDockPinnedForRotation;
-(UIViewController*<SBHRootFolderCustomViewPresenting>)trailingCustomViewController;
-(void)setLeadingCustomViewController:(UIViewController*<SBHLegibility>)arg1 ;
-(BOOL)canShowWidgetIntroduction;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)widgetStackViewController:(id)arg1 didActivateDataSource:(id)arg2 fromUserInteraction:(BOOL)arg3 ;
-(SBHIconGridSizeClassSizes)iconGridSizeClassSizes;
-(BOOL)isRootFolderScrolling;
-(NSMutableArray *)chuisOnboardingWidgetViewControllers;
-(void)setCurrentTransitionAnimator:(SBHomeScreenIconTransitionAnimator *)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 queryOptions:(unsigned long long)arg2 ;
-(id)widgetStackViewController:(id)arg1 containerApplicationNameForDataSource:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)firstIconViewWithOptions:(unsigned long long)arg1 iconPassingTest:(/*^block*/id)arg2 ;
-(unsigned long long)gridCellInfoOptions;
-(BOOL)presentSpotlightFromSource:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleUpdatedConfiguration:(id)arg1 forDataSource:(id)arg2 ofIcon:(id)arg3 archiving:(BOOL)arg4 ;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5 ;
-(BOOL)isShowingIconContextMenu;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4 ;
-(BOOL)widgetDiscoverabilityServerSideEnabled;
-(void)_configureRootFolderConfiguration:(id)arg1 ;
-(void)rootFolderController:(id)arg1 handleInsertionForWidgetIcon:(id)arg2 withReferenceIconView:(id)arg3 fromPresenter:(id)arg4 dismissViewControllerHandler:(/*^block*/id)arg5 ;
-(UIViewController*<SBHIconRootViewProviding>)rootViewController;
-(unsigned long long)iconModel:(id)arg1 allowedGridSizeClassesForFolderClass:(Class)arg2 ;
-(BOOL)stopUpdatingDefaultWidgetsBumpedIconRecord;
-(void)getStatistics:(SBHIconManagerStatistics*)arg1 ;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2 ;
-(BOOL)iconModel:(id)arg1 shouldPlaceIconOnIgnoredList:(id)arg2 ;
-(void)removeFolderPresentationObserver:(id)arg1 ;
-(unsigned long long)maxListCountForFoldersForIconModel:(id)arg1 ;
-(void)pushExpandedIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldRecycleIconView:(id)arg1 ;
-(void)todayViewControllerDidAppear:(id)arg1 ;
-(void)todayViewControllerDidEndScrolling:(id)arg1 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4 ;
-(UIViewController*<SBHTodayViewController>)overlayCoverSheetTodayViewController;
-(void)iconViewWasDiscarded:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(void)_scheduleAvocadoBackgroundCullingForReason:(id)arg1 interval:(double)arg2 ;
-(id)customImageViewControllerForIconView:(id)arg1 ;
-(Class)iconViewClass;
-(void)cancelAllDrags;
-(BOOL)isShowingPullDownSearch;
-(void)folderControllerShouldEndEditing:(id)arg1 ;
-(NSDictionary *)originalIconStateBeforeWidgetDiscoverability;
-(void)iconViewWasRecycled:(id)arg1 ;
-(void)addDebugIconOfSizeClass:(unsigned long long)arg1 toPage:(unsigned long long)arg2 coordinate:(SBIconCoordinate)arg3 orientation:(long long)arg4 ;
-(id)appIconImageCacheForRootFolderController:(id)arg1 ;
-(id)_intentForDataSource:(id)arg1 inIcon:(id)arg2 creatingIfNecessary:(BOOL)arg3 ;
-(id)iconViewWillCancelDrag:(id)arg1 ;
-(BOOL)prototypeSettingEditButtonAsUndo;
-(void)rootFolderController:(id)arg1 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2 ;
-(BOOL)iconViewDisplaysAccessories:(id)arg1 ;
-(void)rootFolderControllerDidEditWidgetIntroduction:(id)arg1 ;
-(void)iconViewShortcutsPresentationWillFinish:(id)arg1 ;
-(BOOL)isPerformingCancelledCollapseTransition;
-(void)leafIcon:(id)arg1 didRemoveIconDataSource:(id)arg2 ;
-(id)bestHomeScreenLocationForIcon:(id)arg1 ;
-(void)setPostResetPathIdentifiers:(NSArray *)arg1 ;
-(id)_newIntentForDataSource:(id)arg1 inIcon:(id)arg2 ;
-(void)setForceShowWidgetIntroduction:(BOOL)arg1 ;
-(SBHHomeScreenSettings *)homeScreenSettings;
-(SBHWidgetMetricsProvider *)widgetMetricsProvider;
-(void)folderControllerWillClose:(id)arg1 ;
-(void)_precacheDataForRootIcons;
-(void)multiplexingManager:(id)arg1 willRemoveViewController:(id)arg2 forIdentifier:(id)arg3 ;
-(BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2 ;
-(BOOL)areAnyIconShareSheetsShowing;
-(unsigned long long)maxListCountForFolders;
-(void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2 ;
-(BOOL)rootFolderContainsWidgets;
-(void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2 ;
-(void)_iconModelDidLayout:(id)arg1 ;
-(UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(void)addWidgets:(id)arg1 toGridPath:(id)arg2 overflowOptions:(unsigned long long)arg3 ;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3 ;
-(void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)arg1 ;
-(BOOL)canPresentOverscrollLibraryForPageTransition;
-(void)noteIconViewWillZoomDown:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 withFeedbackBehavior:(id)arg2 ;
-(void)iconDragManager:(id)arg1 didEndIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(BOOL)iconViewDisplaysLabel:(id)arg1 ;
-(BOOL)iconLocationAllowsBadging:(id)arg1 ;
-(void)multiplexingWrapperViewControllerWillChangeGridAlignment:(id)arg1 ;
-(BOOL)isEditingAllowedForIconListView:(id)arg1 ;
-(void)_handleRemovedDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(void)_endObservingLeafIconsInModel:(id)arg1 ;
-(void)minimumHomeScreenScaleDidChange;
-(double)minimumHomeScreenScaleForFolderController:(id)arg1 ;
-(void)getListView:(id*)arg1 folder:(id*)arg2 relativePath:(id*)arg3 forIndexPath:(id)arg4 ;
-(void)widgetStackViewController:(id)arg1 didRemoveViewController:(id)arg2 ;
-(SBHomeScreenIconTransitionAnimator *)currentTransitionAnimator;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4 ;
-(void)iconTapped:(id)arg1 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3 ;
-(void)setIconToReveal:(SBIcon *)arg1 ;
-(id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2 ;
-(UIEdgeInsets)statusBarEdgeInsetsForFolderController:(id)arg1 ;
-(void)rootFolderControllerDidUndoWidgetIntroduction:(id)arg1 ;
-(BOOL)isRootFolderContentVisible;
-(id)_folderControllerForIcon:(id)arg1 inLocation:(id)arg2 ;
-(void)setMaximumNumberOfWidgetsToMaintainPreventBackgroundAssertions:(unsigned long long)arg1 ;
-(NSArray *)defaultSecondPageSuggestedWidgetIcons;
-(void)_ensureWidgetIsVisibleForDebuggingWithDescriptor:(id)arg1 sizeClass:(long long)arg2 ;
-(void)rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2 ;
-(SBIconView *)highlightedIconView;
-(void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(BOOL)arg2 ;
-(BOOL)iconView:(id)arg1 shouldContinueToUseBackgroundViewForComponents:(id)arg2 ;
-(void)animateToDefaultStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 withHaptic:(BOOL)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)rootFolderController:(id)arg1 willDismissPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(unsigned long long)defaultFirstPageWidgetSizeClass;
-(unsigned long long)focusEffectTypeForIconView:(id)arg1 ;
-(BOOL)forceShowWidgetIntroduction;
-(BOOL)isLibraryViewControllerVisible;
-(void)rootFolderController:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2 ;
-(void)folderControllerWillOpen:(id)arg1 ;
-(void)uninstallIcon:(id)arg1 animate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SBHFocusMode *)activeFocusMode;
-(void)folder:(id)arg1 listHiddenDidChange:(id)arg2 ;
-(id)accessibilityTintColorForScreenRect:(CGRect)arg1 ;
-(void)setOverlayLibraryViewController:(SBHLibraryViewController *)arg1 ;
-(SBHLibraryViewController *)overlayLibraryViewController;
-(void)cancelAllFolderScrolling;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(id)iconView:(id)arg1 backgroundViewForComponentsOfType:(long long)arg2 ;
-(void)addFolderPresentationObserver:(id)arg1 ;
-(void)popModalInteraction;
-(void)setDockPinnedForRotation:(BOOL)arg1 ;
-(void)_discardEndEditingTimerAndDontResetUntilReasonIsRemoved:(id)arg1 ;
-(unsigned long long)maxRowCountForFavoriteTodayListForIconModel:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)iconDragManager:(id)arg1 draggingStartLocationForIconView:(id)arg2 proposedStartLocation:(long long)arg3 ;
-(id)windowForIconDragPreviewsForIconDragManager:(id)arg1 ;
-(void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(id)imageViewForIconView:(id)arg1 ;
-(void)rootFolderController:(id)arg1 willDismissWidgetEditingViewController:(id)arg2 ;
-(void)setDisablesScrollingToLastIconPageForLibraryDismissal:(BOOL)arg1 ;
-(void)dismissTodayOverlayForIconDragManager:(id)arg1 ;
-(BOOL)userHasUsedWidget;
-(unsigned long long)allowedGridSizeClassesForDockForIconModel:(id)arg1 ;
-(void)setChuisOnboardingWidgetViewControllers:(NSMutableArray *)arg1 ;
-(id)localizedDefaultFolderName;
-(void)iconCloseBoxTapped:(id)arg1 ;
-(id)iconLocationForPrecachingImages;
-(BOOL)rootFolder:(id)arg1 isGridLayoutValid:(id)arg2 forIconList:(id)arg3 inFolder:(id)arg4 ;
-(BOOL)addDefaultWidgetsToHomeScreen;
-(BOOL)deviceTypeSupportModalWidgetIntroduction;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(void)didDeleteIconState:(id)arg1 ;
-(Class)iconModel:(id)arg1 iconClassForApplicationWithBundleIdentifier:(id)arg2 proposedClass:(Class)arg3 ;
-(id)rootFolderController:(id)arg1 promoteSuggestedWidget:(id)arg2 withinStack:(id)arg3 ;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setUsageMonitoringEnabled:(BOOL)arg1 ;
-(void)_resetHomescreenIconStateTo:(id)arg1 ;
-(double)iconDragManager:(id)arg1 additionalDragLiftScaleForIconView:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(double)additionalDragLiftScaleForIconView:(id)arg1 ;
-(void)invalidateOnboardingWidgetPreviewViewControllers;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(BOOL)_isShowingPullDownSearchOrTransitioning;
-(void)setCurrentPersonDetailInteraction:(SBHPeopleWidgetPersonDetailInteraction *)arg1 ;
-(BOOL)prototypeSettingShowWidgetIntroduction;
-(SBFolderController *)openedFolderController;
-(id)screenSnapshotProviderForComponentsOfIconView:(id)arg1 ;
-(BOOL)isEditingAllowedForIconView:(id)arg1 ;
-(void)addDebugIconOfSizeClass:(unsigned long long)arg1 toPage:(unsigned long long)arg2 coordinate:(SBIconCoordinate)arg3 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(void)_ensureRootFolderController;
-(void)rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)gridCellInfoOptionsForInsertingDefaultWidgets;
-(CGRect)iconView:(id)arg1 contentBoundingRectForConfigurationInteraction:(id)arg2 ;
-(unsigned long long)maxColumnCountForTodayListForIconModel:(id)arg1 ;
-(void)_processPendingDefaultIntents;
-(UIViewController*<SBHTodayViewController>)overlayTodayViewController;
-(void)setDefaultFirstPageWidgetSizeClass:(unsigned long long)arg1 ;
-(unsigned long long)listLayoutProviderLayoutOptions;
-(UIImpactFeedbackGenerator *)iconEditingFeedbackBehavior;
-(BOOL)canCloseFolders;
-(void)closeFolderAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeAssertionsForNowOccludedTodayViewController:(id)arg1 ;
-(void)dismissFolderPageManagementUI;
-(BOOL)supportsDockForIconModel:(id)arg1 ;
-(unsigned long long)supportedGridSizeClassesForIconView:(id)arg1 ;
-(BOOL)isAnimatingFolderIconTransitionForIconDragManager:(id)arg1 ;
-(BOOL)widgetViewControllerShouldTransitionSceneToBackground:(id)arg1 ;
-(BOOL)isPerformingCancelledExpandTransition;
-(BOOL)canAddIconToIgnoredList:(id)arg1 ;
-(BOOL)internalForceShowWidgetDiscoverability;
-(void)iconModel:(id)arg1 didAddIcon:(id)arg2 ;
-(double)externalDockHeightForRootFolderController:(id)arg1 ;
-(void)removeIcon:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveOriginalIconStateForWidgetDiscoverability;
-(BOOL)prototypeSettingBumpLeastUsedApps;
-(void)rootFolderController:(id)arg1 willPresentWidgetEditingViewController:(id)arg2 ;
-(id)folderControllerForFolder:(id)arg1 ;
-(void)rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2 ;
-(void)setIdleModeText:(id)arg1 ;
-(void)clearHighlightedIcon;
-(void)displayPronouncedContainerView;
-(id)homeScreenPreviewView;
-(void)_sizeCategoryDidChange:(id)arg1 ;
-(void)setCanDismissOverscrollLibraryForPageTransition:(BOOL)arg1 ;
-(BOOL)isTodayViewEffectivelyVisible;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconViewForDroppingIconDragItem:(id)arg3 proposedIconView:(id)arg4 ;
-(id)defaultWidgetsIconsRestoringRecordKeyForIcon:(id)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(void)_setupApplicationShortcutItemsForPresentation:(id)arg1 ;
-(void)_finishResetRootIconListsReusingPreviousControllers:(BOOL)arg1 ;
-(void)iconModel:(id)arg1 willRemoveIcon:(id)arg2 ;
-(void)iconView:(id)arg1 configurationDidUpdateWithInteraction:(id)arg2 ;
-(NSString *)precachedContentSizeCategory;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(void)shuffleWidgetStackForTestRecipe;
-(id)iconView:(id)arg1 containerViewControllerForConfigurationInteraction:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2 ;
-(BOOL)isTrackingScroll;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2 ;
-(void)presentLeadingCustomViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isPerformingExpandTransition;
-(unsigned long long)allowedInterfaceOrientations;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3 ;
-(void)enumerateAppPredictionViewControllersWithIconViewsInIconLocationGroup:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setFloatingDockViewController:(SBFloatingDockViewController *)arg1 ;
-(void)updateWidgetDiscoverabilityUserPreferencesByDeletingWidget:(id)arg1 ;
-(SBHIconGridSizeClassSizes)gridSizeClassSizesForIconModel:(id)arg1 ;
-(id)onboardingWidgetPreviewsForWidgetIcon:(id)arg1 ;
-(void)folderControllerWillBeginScrolling:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)addApplicationPlaceholders:(id)arg1 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1 ;
-(BOOL)isFloatingDockVisible;
-(SBIconView *)previewInteractingIconView;
-(BOOL)iconModel:(id)arg1 listsAllowRotatedLayoutForFolderClass:(Class)arg2 ;
-(BOOL)_shouldLibraryOverlayAllowSwipeToDismissGesture;
-(BOOL)_isShowingLeadingCustomViewSearch;
-(SBIconView *)currentConfiguringIconView;
-(void)iconDragManager:(id)arg1 willBeginIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg1 ;
-(BOOL)isIconVisiblyRepresented:(id)arg1 ;
-(id)widgetIconWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2 sizeClass:(unsigned long long)arg3 ;
-(NSTimer *)editingEndTimer;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)statusBarStyleRequestForFolderController:(id)arg1 ;
-(id)succinctDescription;
-(NSMutableDictionary *)defaultWidgetsIconsRestoringRecord;
-(unsigned long long)listGridCellInfoOptionsForIconDragManager:(id)arg1 ;
-(void)prototypeSetDefaultSecondPageWidgetIcons;
-(unsigned long long)allowedGridSizeClassesForDockForRootFolder:(id)arg1 ;
-(BOOL)isFolderPageManagementUIVisible;
-(void)performAfterAllIconTouchesFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)iconViewShortcutsPresentationDidCancel:(id)arg1 ;
-(id)iconViewMap;
-(void)rootFolderController:(id)arg1 didOverscrollOnLastPageByAmount:(double)arg2 ;
-(id)rootFolderControllerForIconDragManager:(id)arg1 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 customSpringAnimationBehaviorForDroppingItem:(id)arg3 ;
-(id)_multiplexingViewControllerForIcon:(id)arg1 dataSource:(id)arg2 location:(id)arg3 withPriority:(unsigned long long)arg4 ;
-(void)_setupStateCaptureHandleIfNeeded;
-(id)defaultIconStateForIconModel:(id)arg1 ;
-(ATXHomeScreenPageIconRanker *)atxIconRanker;
-(BOOL)iconDragManager:(id)arg1 canAcceptDropInSession:(id)arg2 inIconListView:(id)arg3 ;
-(BOOL)_bundleWithIdentifierHasOpenURLEntitlement:(id)arg1 ;
-(void)layoutIconListsWithAnimationType:(long long)arg1 ;
-(BOOL)canOpenFolderForIcon:(id)arg1 ;
-(void)rootFolderControllerWillAnimateWidgetInsertionForStackConfigurationInteraction:(id)arg1 ;
-(BOOL)isEditingAllowedForIconLocation:(id)arg1 ;
-(void)removeAllIconAnimations;
-(void)setShouldDisableUserInteractionForWidgetDiscoverability:(BOOL)arg1 ;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(NSString *)description;
-(void)enumerateEditableViewControllersUsingBlock:(/*^block*/id)arg1 ;
-(id)_currentFolderController;
-(void)hasAnimatingFolderChanged;
-(void)iconModel:(id)arg1 launchIcon:(id)arg2 fromLocation:(id)arg3 context:(id)arg4 ;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 options:(unsigned long long)arg3 ;
-(void)todayViewController:(id)arg1 contentVisibilityWillChange:(unsigned long long)arg2 ;
-(id)rootIconListAtIndex:(long long)arg1 ;
-(void)setAnimatingFolderOpeningOrClosing:(BOOL)arg1 ;
-(void)setDelegate:(id<SBHIconManagerDelegate>)arg1 ;
-(void)performAfterCachingWidgetIntentsUsingBlock:(/*^block*/id)arg1 ;
-(void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(BOOL)arg2 ;
-(BOOL)canDismissOverscrollLibraryForPageTransition;
-(void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3 ;
-(BOOL)resetIconLayoutWithOptions:(unsigned long long)arg1 ;
-(void)modalInteractionDidEnd:(id)arg1 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4 ;
-(void)setPrecachedContentSizeCategory:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isShowingPullDownSearchOrTransitioningToVisible;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3 ;
-(void)enumerateKnownIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(SBHIconGridSize)listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg1 ;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4 ;
-(SBWorkspaceInteractionContext *)currentInteractionContext;
-(id)_archivedIntentForDataSource:(id)arg1 inIcon:(id)arg2 loadingIfNecessary:(BOOL)arg3 ;
-(unsigned long long)maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg1 ;
-(id)_intentForWidget:(id)arg1 ofIcon:(id)arg2 creatingIfNecessary:(BOOL)arg3 ;
-(BOOL)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2 ;
-(id)rootFolderController:(id)arg1 dragPreviewForIconView:(id)arg2 ;
-(BOOL)isScrolling;
-(void)enumerateIconViewQueryableChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)_cleanupForClosingFolderAnimated:(BOOL)arg1 ;
-(BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(BOOL)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2 ;
-(void)setShowsAddWidgetButtonWhileEditing:(BOOL)arg1 ;
-(BOOL)dismissSpotlightOrLeadingCustomViewAnimated:(BOOL)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)didSaveIconState:(id)arg1 ;
-(id)iconDragManager:(id)arg1 dragPreviewForIconView:(id)arg2 ;
-(NSMutableArray *)defaultWidgetsBumpedIconUsageRanking;
-(void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2 ;
-(BOOL)isIconIgnored:(id)arg1 ;
-(void)animateModalWidgetDiscoverabilityIntroductionWhenNeededWithPresentCompletion:(/*^block*/id)arg1 dismissCompletion:(/*^block*/id)arg2 ;
-(void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_loadAndSaveDefaultIntentIfNecessaryForWidget:(id)arg1 ofIcon:(id)arg2 viewController:(id)arg3 ;
-(id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2 ;
-(BOOL)iconView:(id)arg1 supportsConfigurationForDataSource:(id)arg2 ;
-(SBHIconImageCache *)iconImageCache;
-(id)rootFolderController:(id)arg1 draggedIconForStackConfigurationInteractionForIdentifier:(id)arg2 ;
-(BOOL)isTransitioning;
-(BOOL)iconDragManagerCanBeginIconDrags:(id)arg1 ;
-(void)_prepareToResetRootIconLists;
-(id)iconListViewForIndexPath:(id)arg1 ;
-(BOOL)showsBadgesInAppLibrary;
-(void)iconView:(id)arg1 willRemoveIconImageView:(id)arg2 ;
-(id)bestLocationForIcon:(id)arg1 ;
-(void)libraryViewController:(id)arg1 willDismissSearchController:(id)arg2 ;
-(void)setClosingFolder:(SBFolder *)arg1 ;
-(BOOL)isShowingLeadingCustomView;
-(SBFParallaxSettings *)badgeParallaxSettings;
-(BOOL)allowsNestedFoldersForIconDragManager:(id)arg1 ;
-(id)appPredictionsIconViewDisplayingIconView:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isOverlayLibraryViewVisible;
-(void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetDefaultWidgetsUndoInfo;
-(void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)prototypeSettingShowExtraLargeTVWidget;
-(id)todayViewControllers;
-(void)setOverlayCoverSheetTodayViewVisible:(BOOL)arg1 ;
-(SBHIconGridSize)iconModel:(id)arg1 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg2 ;
-(void)removeReasonToIgnoreUserPreferenceForAddingNewIconsToHomeScreen:(id)arg1 ;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(void)dismissModalInteractions;
-(void)rootFolderController:(id)arg1 didDismissWidgetEditingViewController:(id)arg2 ;
-(id)_containerViewControllerForPersonDetailInteractionTargetingIconView:(id)arg1 ;
-(SBRootFolderController *)rootFolderController;
-(void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg1 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)rootFolderControllerViewWillAppear:(id)arg1 ;
-(BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg1 ;
-(void)informUsageMonitorOfVisibleIconRectsForTodayViewController:(id)arg1 ;
-(id)iconViewDelegateForExternalDragForIconDragManager:(id)arg1 ;
-(void)addWidgetWithIdentifier:(id)arg1 toPage:(long long)arg2 withSizeClass:(unsigned long long)arg3 ;
-(SBModalWidgetIntroductionViewController *)modalIntroductionViewController;
-(id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)replaceApplicationPlaceholderWithApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)iconModel:(id)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg1 ;
-(BOOL)listsAllowRotatedLayoutForFolderClass:(Class)arg1 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3 ;
-(BOOL)canSaveIconState:(id)arg1 ;
-(NSArray *)postResetPathIdentifiers;
-(double)preferredExternalDockVerticalMarginForRootFolderController:(id)arg1 ;
-(BOOL)iconModel:(id)arg1 shouldRemoveIcon:(id)arg2 ;
-(void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2 ;
-(id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2 ;
-(id)fakeStatusBarForFolderController:(id)arg1 ;
-(void)rootFolderControllerDidAcceptWidgetIntroduction:(id)arg1 ;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3 ;
-(void)rootFolderController:(id)arg1 willUsePropertyAnimator:(id)arg2 toTransitionToState:(long long)arg3 ;
-(void)setOverlayTodayViewController:(UIViewController*<SBHTodayViewController>)arg1 ;
-(void)dismissLibraryOverlayForIconDragManager:(id)arg1 ;
-(void)_addReasonToNotManageBackgroundAssertions:(id)arg1 ;
-(id)folderControllerWantsToHideStatusBar:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibleIconsViewsForAllowableCloseBoxes;
-(void)addNewIconToDesignatedLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(id)viewControllerForPresentingViewControllers;
-(void)updateIconViewAccessoryVisibility;
-(void)removePageStateObserver:(id)arg1 ;
-(BOOL)isShowingModalInteraction;
-(BOOL)iconsShouldAllowCloseBoxes;
-(void)_removeReasonToNotManageBackgroundAssertions:(id)arg1 ;
-(BOOL)relayout;
-(void)removeWidgetIconsFromHomeScreen;
-(void)removeFirstWidgetFromRootFolderListAtIndex:(unsigned long long)arg1 ;
-(void)scrollToIconListContainingIcon:(id)arg1 animate:(BOOL)arg2 ;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(BOOL)_isShowingOrTransitioningToSearchableLeadingCustomView;
-(id)rootFolderForIconDragManager:(id)arg1 ;
-(void)refreshAppPredictionBadges;
-(BOOL)isResettingRootIconLists;
-(void)libraryViewController:(id)arg1 willLaunchIcon:(id)arg2 fromLocation:(id)arg3 ;
-(void)_tryScrollToIconToRevealAnimated:(BOOL)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)_restartEditingEndTimer;
-(void)widgetStackViewController:(id)arg1 didFinishUsingBackgroundView:(id)arg2 ;
-(BOOL)_isShowingSearchableLeadingCustomView;
-(void)iconDragManager:(id)arg1 didEndDragOriginatingFromIconView:(id)arg2 userDidBeginDrag:(BOOL)arg3 lastUserInteractionDate:(id)arg4 ;
-(id)_homeScreenContentViewForPersonDetailInteractionTargetingIconView:(id)arg1 ;
-(void)scrollToDefaultWidgets;
-(void)dismissIconShareSheets;
-(void)_addTouchedIconView:(id)arg1 ;
-(void)_cullAvocadoBackgroundsForReason:(id)arg1 ;
-(void)_iconModelWillReloadIcons:(id)arg1 ;
-(void)rootFolderController:(id)arg1 didPresentWidgetEditingViewController:(id)arg2 ;
-(id)_effectiveTodayViewController;
-(void)setEditingAutosaveDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(void)iconViewShortcutsPresentationWillBegin:(id)arg1 ;
-(void)setResettingRootIconLists:(BOOL)arg1 ;
-(void)_updateOverscrollModalLibraryForScrollToPresented:(BOOL)arg1 ;
-(BOOL)presentLibraryCategoryPodForCategoryIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)todayViewController:(id)arg1 contentVisibilityDidChange:(unsigned long long)arg2 ;
-(id)rootFolderController:(id)arg1 vendorNameForAppWithBundleIdentifiers:(id)arg2 ;
-(void)popExpandedIconAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enqueueTransitionName:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)uninstallIcon:(id)arg1 ;
-(id)init;
-(id)_rootFolderForRootViewControllerForRootFolder:(id)arg1 ;
-(void)launchFromIconView:(id)arg1 withActions:(id)arg2 ;
-(void)iconDragManager:(id)arg1 wantsAnimatedRemovalOfIcon:(id)arg2 ;
-(unsigned long long)effectiveRootFolderControllerContentVisibility;
-(BOOL)prototypeSettingShowModalWidgetIntroduction;
-(BOOL)iconView:(id)arg1 editingModeGestureRecognizerDidFire:(id)arg2 ;
-(id)iconViewShowingContextMenu;
-(id<SBHIconManagerDelegate>)delegate;
-(id)reasonToDisallowInteractionOnIconView:(id)arg1 ;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2 ;
-(void)finishInstallingIconAnimated:(BOOL)arg1 ;
-(void)layoutIconListsWithAnimationType:(long long)arg1 duration:(double)arg2 forceRelayout:(BOOL)arg3 ;
-(void)modalInteractionWillBegin:(id)arg1 ;
-(BOOL)shouldDisableUserInteractionForWidgetDiscoverability;
-(BOOL)isOverlayTodayViewVisible;
-(id)backgroundViewForDockForRootFolderController:(id)arg1 ;
-(void)clearHighlightedIcon:(id)arg1 ;
-(void)setDefaultFirstPageWidgetDescriptors:(NSArray *)arg1 ;
-(void)popToCurrentRootIconListWhenPossible;
-(void)noteFloatingDockWillChangeHeight;
-(void)avocadoHostViewController:(id)arg1 requestsLaunchWithAction:(id)arg2 ;
-(void)setIsVerticalWidgetIntroduction:(BOOL)arg1 ;
-(void)setDefaultFirstPageSuggestedWidgetIcons:(NSArray *)arg1 ;
-(BOOL)isOverlayCoverSheetTodayViewVisible;
-(void)checkForInvalidCustomElements;
-(BOOL)isFolderScrolling;
-(void)performAfterIconContextMenuDismissesUsingBlock:(/*^block*/id)arg1 ;
-(void)noteIconStateChangedExternally;
-(void)_cancelAvocadoBackgroundCulling;
-(id)parallaxSettingsForComponentsOfIconView:(id)arg1 ;
-(void)setAnimatingForUnscatter:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)iconView:(id)arg1 configurationInteractionForDataSource:(id)arg2 ;
-(void)_removeReasonToNotResetEndEditingTimer:(id)arg1 ;
-(void)enumerateIconViewQueryableChildrenWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)widgetStackViewController:(id)arg1 isDataSourceBlockedForScreenTimeExpiration:(id)arg2 ;
-(void)setGridCellInfoOptionsForInsertingDefaultWidgets:(unsigned long long)arg1 ;
-(void)_updateCaptureOnlyBackgroundViewForCustomIconImageViewController:(id)arg1 ;
-(void)setAtxIconRanker:(ATXHomeScreenPageIconRanker *)arg1 ;
-(void)rootFolderController:(id)arg1 prepareAddSheetViewController:(id)arg2 ;
-(void)setDefaultWidgetsIconsRestoringRecord:(NSMutableDictionary *)arg1 ;
-(BOOL)widgetDiscoverabilityHasRun;
-(id)_stackConfigurationForStackIcon:(id)arg1 ;
-(void)changeSizeOfWidgetIcon:(id)arg1 toSizeClass:(unsigned long long)arg2 ;
-(BOOL)isOverlayTodayOrLibraryViewVisible;
-(BOOL)rootFolder:(id)arg1 canBounceIcon:(id)arg2 ;
-(void)highlightIconView:(id)arg1 ;
-(id)widgetInsertionRippleIconAnimatorForIcon:(id)arg1 iconListView:(id)arg2 withReferenceIconView:(id)arg3 ;
-(void)iconView:(id)arg1 configurationWillBeginWithInteraction:(id)arg2 ;
-(void)presentStatistics;
-(void)addReasonToIgnoreUserPreferenceForAddingNewIconsToHomeScreen:(id)arg1 ;
-(BOOL)addDefaultSecondPageWidgetsToHomeScreen:(BOOL)arg1 ;
-(void)rootFolderController:(id)arg1 noteDragItemWasConsumedExternallyForDropSession:(id)arg2 ;
-(BOOL)iconDragManager:(id)arg1 canAddDragItemsToSession:(id)arg2 fromIconView:(id)arg3 ;
-(void)undoDefaultTVWidget;
-(BOOL)_determineIfAvocadoHostViewControllerIsVisible:(id)arg1 ;
-(BOOL)showsAddWidgetButtonWhileEditing;
-(void)rootFolderController:(id)arg1 didDismissPageManagementWithLayoutManager:(id)arg2 context:(id)arg3 ;
-(void)iconDragManager:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)_finishResetRootIconLists;
-(BOOL)hasRootViewController;
-(unsigned long long)listRotatedLayoutClusterGridSizeClassForIconModel:(id)arg1 ;
-(BOOL)hasOpenFolder;
-(void)hideSuggestedWidgetFromStack:(id)arg1 ;
-(BOOL)iconModel:(id)arg1 shouldAvoidPlacingIconOnFirstPage:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(NSArray *)defaultFirstPageSuggestedWidgetIcons;
-(void)immediateDownloadSpringBoardHomeTrialSettingsWhenNeeded;
-(void)setIconModel:(SBHIconModel *)arg1 ;
-(unsigned long long)allowedGridSizeClassesForTodayListForRootFolder:(id)arg1 ;
-(BOOL)isShowingSpotlightOrLeadingCustomView;
-(void)addIconToIgnoredList:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isSidebarEffectivelyVisible;
-(void)setCurrentConfiguringIconView:(SBIconView *)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)uninstallIcon:(id)arg1 animate:(BOOL)arg2 ;
-(void)tearDownAndResetRootIconLists;
-(void)_removeAllPreventAvocadoBackgroundAssertions:(id)arg1 ;
-(BOOL)clearTodayLayout;
-(unsigned long long)columnCountForTodayListForRootFolder:(id)arg1 ;
-(void)_closeFolderController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_iconModelDidReloadIcons:(id)arg1 ;
-(void)setDefaultSecondPageSuggestedWidgetIcons:(NSArray *)arg1 ;
-(id)homescreenIconImageViewMap;
-(void)hideSiriSuggestionOnWidgetFromStack:(id)arg1 ;
-(id)addWidgetSheetIconImageCache;
-(void)setEditing:(BOOL)arg1 fromIconView:(id)arg2 ;
-(BOOL)needsRelayout;
-(BOOL)isAnimatingFolderCreation;
-(id)_personDetailInteractionContextForPersonURL:(id)arg1 iconView:(id)arg2 ;
-(void)presentLibraryOverlayForIconDragManager:(id)arg1 ;
-(BOOL)isAnimatingForUnscatter;
-(void)_ppt_forcibleCullAllAvocadoBackgroundAssertions;
-(double)defaultIconLayoutAnimationDurationForIconDragManager:(id)arg1 ;
-(void)moveIconToHiddenPage:(id)arg1 ;
-(void)_animateFolderIcon:(id)arg1 open:(BOOL)arg2 location:(id)arg3 animated:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setListLayoutProviderLayoutOptions:(unsigned long long)arg1 ;
-(SBHIconGridSizeClassAreas)iconGridSizeClassAreas;
-(void)_archiveConfiguration:(id)arg1 forDataSource:(id)arg2 ofIcon:(id)arg3 ;
-(id)iconLocationForListsWithNonDefaultSizedIconsForRootFolderController:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(SBHWidgetIntroductionSettings *)widgetIntroductionSettings;
-(BOOL)rootFolderControllerDidSetPrototypeSettingEditAsUndo:(id)arg1 ;
-(void)displayPronouncedContainerViewVisibility:(BOOL)arg1 isVertical:(BOOL)arg2 ;
-(id)stackConfigurationInteractionForIconView:(id)arg1 ;
-(BSEventQueue *)transitionEventQueue;
-(id)intentForWidget:(id)arg1 ofIcon:(id)arg2 ;
-(BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2 ;
-(BOOL)prototypeSettingSimpleBottomSnaking;
-(void)removeWidget:(id)arg1 fromStack:(id)arg2 ;
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2 ;
-(SBHIconGridSize)iconModel:(id)arg1 listGridSizeForFolderClass:(Class)arg2 ;
-(void)enumerateIconViewsDisplayedInAppPredictionsInLocationGroup:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isIconContentPossiblyVisibleOverApplication;
-(id)iconViewQueryableForIconDragManager:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_iconForDescriptor:(id)arg1 ;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(SBIconListView *)effectiveDockListView;
-(void)iconView:(id)arg1 willRemoveIconLabelAccessoryView:(id)arg2 ;
-(void)rootFolderController:(id)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(void)setCanPresentOverscrollLibraryForPageTransition:(BOOL)arg1 ;
-(void)_iconModelWillLayout:(id)arg1 ;
-(void)setWidgetIntroductionCounter:(unsigned long long)arg1 ;
-(void)addAllEligibleIconsToIgnoredList;
-(void)setTrailingCustomViewController:(UIViewController*<SBHRootFolderCustomViewPresenting>)arg1 ;
-(void)presentTodayOverlayForIconDragManager:(id)arg1 ;
-(SBRootFolder *)rootFolder;
-(id)prewarmModalWidgetIntroductionWithCompletion:(/*^block*/id)arg1 ;
-(id)iconView:(id)arg1 homeScreenContentViewForConfigurationInteraction:(id)arg2 ;
-(void)_restartAvocadoBackgroundCullTimer;
-(BOOL)isVerticalWidgetIntroduction;
-(id)rootViewForIconDragManager:(id)arg1 ;
-(BOOL)_shouldRespondToIconCloseBoxes;
-(void)setDefaultWidgetsIconsRestoringRecordOriginalIndex:(NSMutableArray *)arg1 ;
-(void)_removeTouchedIconView:(id)arg1 ;
-(void)todayViewControllerWillDisappear:(id)arg1 ;
-(void)dismissModalInteractionsImmediately;
-(void)setIconToReveal:(id)arg1 revealingPrevious:(BOOL)arg2 ;
-(id)firstPageLeafIdentifiersForIconModel:(id)arg1 ;
-(void)_collectAvocadoHostViewControllersForWhenTodayViewControllerIsOccluded:(id)arg1 ;
-(void)addWidgetStackToCurrentPage;
-(void)setShowsDoneButtonWhileEditing:(BOOL)arg1 ;
-(void)_updateIconView:(id)arg1 forCustomIconImageViewController:(id)arg2 ;
-(SBIconLabelImageCache *)iconLabelImageCache;
-(BOOL)applyOriginaliconStateForWidgetDiscoverability;
-(BOOL)isEditing;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1 ;
-(void)_beginObservingLeafIconsInModel:(id)arg1 ;
-(void)updateVisibleIconsToShowLeafIcons:(id)arg1 hideLeafIcons:(id)arg2 forceRelayout:(BOOL)arg3 ;
-(unsigned long long)maxIconCountForDockForIconModel:(id)arg1 ;
-(void)setPreviewInteractingIconView:(SBIconView *)arg1 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg1 ;
-(double)maxExternalDockHeightForRootFolderController:(id)arg1 ;
-(void)addDebugIconOfSizeClass:(unsigned long long)arg1 toPage:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 ;
-(id)iconModel:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2 ;
-(void)iconDragManager:(id)arg1 didAddItemsToIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3 ;
-(SBHIconModel *)iconModel;
-(void)setStopUpdatingDefaultWidgetsBumpedIconRecord:(BOOL)arg1 ;
-(void)setContentVisibility:(unsigned long long)arg1 ;
-(unsigned long long)gridCellInfoOptionsForOrientation:(long long)arg1 ;
-(ATXDefaultWidgetSuggesterClient *)proactiveWidgetSuggesterClient;
-(BOOL)_determineIfAvocadoHostViewControllerIsVisible:(id)arg1 withinStackViewController:(id)arg2 ;
-(BOOL)iconDragManager:(id)arg1 shouldDuplicateIconsInDragSession:(id)arg2 ;
-(void)setInternalForceShowWidgetDiscoverability:(BOOL)arg1 ;
-(void)setOriginalIconStateBeforeWidgetDiscoverability:(NSDictionary *)arg1 ;
-(SBHIconGridSize)listGridSizeForFolderClass:(Class)arg1 ;
-(void)dealloc;
-(void)removeAllWidgetIcons;
-(void)setProactiveWidgetSuggesterClient:(ATXDefaultWidgetSuggesterClient *)arg1 ;
-(void)disableUserInteractionForWidgetDiscoverability;
-(id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3 ;
-(void)setHighlightedIconView:(SBIconView *)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)_updateAssertionsForWidgetStackViewController:(id)arg1 ;
-(BOOL)isIconCurrentlyOnscreen:(id)arg1 ;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)enableUserInteractionForWidgetDiscoverability;
-(unsigned long long)widgetIntroductionCounter;
-(BOOL)isShowingOrTransitioningToLeadingCustomView;
-(void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3 ;
-(void)todayViewControllerDidDisappear:(id)arg1 ;
-(Class)controllerClassForFolderClass:(Class)arg1 ;
-(void)setDefaultSecondPageWidgetDescriptors:(NSArray *)arg1 ;
-(void)_folderDidFinishOpenClose:(BOOL)arg1 animated:(BOOL)arg2 success:(BOOL)arg3 ;
-(void)_scheduleAvocadoBackgroundCullingForReason:(id)arg1 ;
-(long long)closeBoxTypeForIconView:(id)arg1 ;
-(void)addWidgetStackWithIdentifiers:(id)arg1 toPage:(long long)arg2 withSizeClass:(unsigned long long)arg3 ;
-(CHSAvocadoDescriptorProvider *)avocadoDescriptorProvider;
-(id)reasonToDisallowTapOnIconView:(id)arg1 ;
-(void)removeWidgetDiscoverabilityContainerViewsAndPopoverWhenNeeded:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)toggleSuggestedWidgetInStackForTestRecipe;
-(unsigned long long)iconModel:(id)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)disablesScrollingToLastIconPageForLibraryDismissal;
-(void)rootFolderController:(id)arg1 willPresentPageManagementWithLayoutManager:(id)arg2 animator:(id)arg3 context:(id)arg4 ;
-(BOOL)iconDragManager:(id)arg1 canBeginDragForIconView:(id)arg2 ;
-(void)_markAvocadoHostViewControllerForDeferredCleanup:(id)arg1 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(BOOL)rootFolderContainsSuggestedWidget;
-(void)insertIcons:(id)arg1 intoWidgetStack:(id)arg2 ;
-(void)setDefaultSecondPageWidgetSizeClass:(unsigned long long)arg1 ;
-(void)_updateWidgetMultiplexingViewController:(id)arg1 forIconView:(id)arg2 ;
-(void)setTrialClientManager:(SBHTrialClientManager *)arg1 ;
-(void)_updateOverlayOcclusionForRootFolderController;
-(void)iconView:(id)arg1 configurationDidEndWithInteraction:(id)arg2 ;
-(void)enumerateAppPredictionViewControllersInIconLocationGroup:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)iconView:(id)arg1 labelImageWithParameters:(id)arg2 ;
-(id)_createRootTableControllerForRootFolder:(id)arg1 ;
-(BOOL)resetTodayLayout;
-(void)libraryViewController:(id)arg1 didAcceptDrop:(id)arg2 ;
-(void)openFolderIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)rootFolderController:(id)arg1 noteDidRemoveSuggestedWidgetIcon:(id)arg2 ;
-(BOOL)isAnimatingFolderOpeningOrClosing;
-(SBFolderIconImageCache *)folderIconImageCache;
-(BOOL)iconViewDisplaysCloseBox:(id)arg1 ;
-(id)externalDockIconListViewForRootFolderController:(id)arg1 ;
-(BOOL)isEditingAllowed;
-(id)launchActionsForIconView:(id)arg1 ;
-(unsigned long long)defaultSecondPageWidgetSizeClass;
-(id)_dumpRootFolderForStateCapture:(id)arg1 ;
-(void)addSuggestedActiveWidgetToStack:(id)arg1 ;
-(id<BSInvalidatable>)editingAutosaveDisableAssertion;
-(BOOL)allowsNestedFolders;
-(BOOL)modalIntroductionViewControllerIsPrewarming;
-(BOOL)_shouldParallaxInIconLocation:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 fromIconListView:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(BOOL)isUsageMonitoringEnabled;
-(void)rootFolder:(id)arg1 wantsToDoPageHidingEducationWithCompletion:(/*^block*/id)arg2 ;
-(void)_cullAvocadoBackgroundsForTimerFired:(id)arg1 ;
-(void)rootFolderControllerViewDidDisappear:(id)arg1 ;
-(BOOL)rootFolder:(id)arg1 canAddIcon:(id)arg2 toIconList:(id)arg3 inFolder:(id)arg4 ;
-(BOOL)iconAllowsBadging:(id)arg1 ;
-(void)rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(long long)arg3 ;
-(BOOL)hasOpenFolderInLocation:(id)arg1 ;
-(BOOL)_isShowingLeadingCustomViewSearchOrTransitioning;
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(NSSet *)presentedIconLocations;
-(BOOL)addDefaultFirstPageWidgetsToHomeScreen:(BOOL)arg1 ;
-(void)endStopUpdatingDefaultWidgetsBumpedIconRecord;
-(void)_cullAvocadoBackgroundsIfNeededForReason:(id)arg1 ;
-(BOOL)animator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(/*^block*/id)arg2 ;
-(id)widgetBackgroundViewMap;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(BOOL)multiplexingManager:(id)arg1 shouldCacheRecentViewController:(id)arg2 forIdentifier:(id)arg3 ;
-(void)editingDidChangeWithFeedbackBehavior:(id)arg1 ;
-(id)homescreenIconAccessoryViewMap;
-(unsigned long long)supportedMedusaShortcutActionsForIconView:(id)arg1 ;
-(id)_createRootFolderControllerForRootFolder:(id)arg1 ;
-(void)updatePronouncedContainerViewVisibility:(BOOL)arg1 vertical:(BOOL)arg2 ;
-(NSArray *)defaultFirstPageWidgetDescriptors;
-(void)popExpandedIconFromLocation:(id)arg1 interactionContext:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setOverlayTodayViewVisible:(BOOL)arg1 ;
-(void)_noteUserIsInteractingWithIcons;
-(void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3 ;
-(id)_makeCustomViewControllerForWidgetIcon:(id)arg1 dataSource:(id)arg2 location:(id)arg3 ;
-(void)beginStopUpdatingDefaultWidgetsBumpedIconRecord;
-(unsigned long long)contentVisibility;
-(BOOL)presentHomeScreenIconsAnimated:(BOOL)arg1 ;
-(BOOL)hasRootFolderController;
-(BOOL)dismissSpotlightOrTodayViewAnimated:(BOOL)arg1 ;
-(SBFloatingDockViewController *)floatingDockViewController;
-(BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2 ;
-(unsigned long long)maxIconCountForDockForRootFolder:(id)arg1 ;
-(NSArray *)defaultSecondPageWidgetDescriptors;
-(SBIconListView *)floatingDockListView;
-(double)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg1 ;
-(void)iconView:(id)arg1 willUseContextMenuStyle:(id)arg2 ;
-(unsigned long long)allowedGridSizeClassesForTodayListForIconModel:(id)arg1 ;
-(void)setCurrentInteractionContext:(SBWorkspaceInteractionContext *)arg1 ;
-(void)_willAnimateWidgetInsertion;
-(SBIconListView *)floatingDockSuggestionsListView;
-(void)setEditingEndTimer:(NSTimer *)arg1 ;
-(id)rootFolder:(id)arg1 shouldBounceIcon:(id)arg2 afterInsertingIcons:(id)arg3 forIconList:(id)arg4 inFolder:(id)arg5 ;
-(BOOL)hasAnimatingFolder;
-(id)accessibilityTintColorForIconView:(id)arg1 ;
-(id)_createAppropriateRootViewControllerForRootFolder:(id)arg1 ;
-(void)multiplexingWrapperViewControllerDidChangeGridAlignment:(id)arg1 ;
-(void)icon:(id)arg1 touchMoved:(id)arg2 ;
-(NSMutableArray *)defaultWidgetsIconsRestoringRecordOriginalIndex;
-(void)widgetViewControllerUsesSystemBackgroundMaterialDidChange:(id)arg1 ;
-(void)setOverlayLibraryViewVisible:(BOOL)arg1 ;
-(id)containerBundleIdentifierForDataSource:(id)arg1 ;
-(void)setDefaultWidgetsBumpedIconUsageRanking:(NSMutableArray *)arg1 ;
-(void)_scrollToLastIconPageForLibraryOverlayDismissalIfNecessary;
-(void)setActiveFocusMode:(SBHFocusMode *)arg1 ;
-(void)noteInterfaceOrientationChanged;
-(id)widgetStackViewController:(id)arg1 containerBundleIdentifierForDataSource:(id)arg2 ;
-(void)iconDragManagerIconDraggingDidChange:(id)arg1 ;
-(id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3 ;
-(long long)currentIconListIndex;
-(SBIcon *)iconToReveal;
-(id)widgetStackViewController:(id)arg1 viewControllerForDataSource:(id)arg2 ;
-(long long)interfaceOrientation;
-(void)_cleanupAssertionForAvocadoHostViewController:(id)arg1 reason:(id)arg2 ;
-(void)setOverlayCoverSheetTodayViewController:(UIViewController*<SBHTodayViewController>)arg1 ;
-(void)setWidgetDiscoverabilityHasRun:(BOOL)arg1 ;
-(id)promoteSuggestedWidget:(id)arg1 withinStack:(id)arg2 ;
@end
