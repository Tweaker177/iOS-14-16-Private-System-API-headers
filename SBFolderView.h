/* Generated by RuntimeBrowser
   Platform: iOS 15.7.2 (19H218) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome (1)
 */
//Lots of goodies in this Class

@interface SBFolderView : UIView <BSDescriptionProviding, SBFolderObserver, SBHScrollableIconViewContaining, SBHVisibleContentPresenter, SBIconListLayoutDelegate, SBIconListPageControlDelegate, SBIconListViewDragDelegate, SBIconScrollViewDelegate, UITextFieldDelegate> {
    bool  _addsFocusGuidesForWrapping;
    unsigned long long  _allowedOrientations;
    bool  _automaticallyCreatesIconListViews;
    unsigned long long  _contentVisibility;
    long long  _currentPageIndex;
    <SBFolderViewDelegate> * _delegate;
    SBFolder * _folder;
    SBFolderIconImageCache * _folderIconImageCache;
    bool  _hasEverBeenInAWindow;
    double  _headerHeight;
    UIView * _headerView;
    SBHIconImageCache * _iconImageCache;
    NSMutableArray * _iconListViews;
    SBIconPageIndicatorImageSetCache * _iconPageIndicatorImageSetCache;
    <SBIconViewProviding> * _iconViewProvider;
    unsigned long long  _ignoreScrollingDidEndNotificationsCount;
    bool  _includesHiddenIconListPages;
    bool  _isEditing;
    bool  _isScalingViewBorrowed;
    _UILegibilitySettings * _legibilitySettings;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    long long  _orientation;
    SBIconListPageControl * _pageControl;
    NSMutableSet * _pageControlDisabledReasons;
    NSMutableSet * _parallaxDisabledReasons;
    struct SBFolderPredictedVisibleColumn { 
        unsigned long long iconListIndex; 
        struct SBIconListPredictedVisibleColumn { 
            unsigned long long column; 
            double confidence; 
        } predictedVisibleColumn; 
    }  _predictedVisibleColumn;
    bool  _rotating;
    NSMutableArray * _rotationCompletionBlocks;
    UIView * _scalingView;
    NSMutableArray * _scrollCompletionBlocks;
    unsigned long long  _scrollFrameCount;
    NSMutableArray * _scrollFrames;
    long long  _scrollMaximumVisiblePageIndex;
    long long  _scrollMinimumVisiblePageIndex;
    double  _scrollStartContentOffset;
    SBIconScrollView * _scrollView;
    NSMutableSet * _scrollViewIsScrollingOverrides;
    UIPanGestureRecognizer * _scrollingDisabledGestureRecognizer;
    NSMutableSet * _scrollingDisabledReasons;
    SBHScrollableZoomingIconViewInteraction * _scrollingInteraction;
    bool  _snapsToPageBoundariesAfterScrolling;
    bool  _suppressesEditingStateForListViews;
    SBFolderTitleTextField * _titleTextField;
    unsigned long long  _userInterfaceLayoutDirectionHandling;
    struct SBVisibleColumnRange { 
        unsigned long long startIconListIndex; 
        unsigned long long startColumnIndex; 
        unsigned long long endIconListIndex; 
        unsigned long long endColumnIndex; 
    }  _visibleColumnRange;
    bool  _wasScrolling;
}

@property (getter=isRTL, nonatomic, readonly) bool RTL;
@property (nonatomic, readonly) double additionalScrollWidthToKeepVisibleInOneDirection;
@property (nonatomic) bool addsFocusGuidesForWrapping;
@property (nonatomic, readonly) unsigned long long allowedOrientations;
@property (nonatomic) bool automaticallyCreatesIconListViews;
@property (nonatomic) unsigned long long contentVisibility;
@property (nonatomic, readonly) unsigned long long countOfAdditionalPagesToKeepVisibleInOneDirection;
@property (nonatomic, readonly) SBIconListModel *currentIconListModel;
@property (nonatomic, readonly) SBIconListView *currentIconListView;
@property (nonatomic, readonly) long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultPageIndex;
@property (nonatomic) <SBFolderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, readonly) long long firstIconPageIndex;
@property (nonatomic, retain) SBFolder *folder;
@property (nonatomic, retain) SBFolderIconImageCache *folderIconImageCache;
@property (nonatomic) bool hasEverBeenInAWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) unsigned long long iconListViewCount;
@property (nonatomic, readonly, copy) NSArray *iconListViews;
@property (nonatomic, readonly, copy) NSString *iconLocation;
@property (nonatomic, retain) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (nonatomic, readonly) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, readonly) long long iconVisibilityHandling;
@property (nonatomic) bool includesHiddenIconListPages;
@property (nonatomic, readonly) long long lastIconPageIndex;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettingsForIconListViews;
@property (nonatomic, readonly) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) long long maximumPageIndex;
@property (nonatomic, readonly) double maximumVisibleScrollOffset;
@property (nonatomic, readonly) long long minimumPageIndex;
@property (nonatomic, readonly) double minimumVisibleScrollOffset;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) SBIconListPageControl *pageControl;
@property (nonatomic) double pageControlAlpha;
@property (nonatomic, readonly) double pageControlAreaHeight;
@property (getter=isPageControlHidden, nonatomic) bool pageControlHidden;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (getter=isParallaxEnabled, nonatomic, readonly) bool parallaxEnabled;
@property (getter=isRotating, nonatomic) bool rotating;
@property (nonatomic, readonly) UIView *scalingView;
@property (getter=isScalingViewBorrowed, nonatomic, readonly) bool scalingViewBorrowed;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) double scrollableWidthForVisibleColumnRange;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (nonatomic, retain) UIPanGestureRecognizer *scrollingDisabledGestureRecognizer;
@property (nonatomic, readonly) bool snapsToPageBoundariesAfterScrolling;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesEditingStateForListViews;
@property (getter=_titleTextField, nonatomic, readonly) SBFolderTitleTextField *titleTextField;
@property (nonatomic, readonly) bool updatesPredictedVisibleColumnWhileScrolling;
@property (nonatomic, readonly) long long userInterfaceLayoutDirection;
@property (nonatomic, readonly) unsigned long long userInterfaceLayoutDirectionHandling;
@property (nonatomic, readonly) struct SBVisibleColumnRange { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } visibleColumnRangeExcludingAdditionalWidthKeptVisible;

+ (long long)_pageIndexForOffset:(double)arg1 minimumPage:(long long)arg2 maximumPage:(long long)arg3 pageCount:(unsigned long long)arg4 pageWidth:(double)arg5 pageSpacing:(double)arg6 userInterfaceLayoutDirection:(long long)arg7 behavior:(long long)arg8 fractionOfDistanceThroughPage:(double*)arg9;
+ (unsigned long long)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageSpacing:(double)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 fractionOfDistanceThroughPage:(double*)arg7;
+ (Class)_scrollViewClass;
+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)defaultIconListViewClass;
+ (id)defaultIconLocation;

- (void).cxx_destruct;
- (void)_addIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1 atEnd:(bool)arg2;
- (void)_addIconListViewsForModels:(id)arg1;
- (void)_addScrollingCompletionBlock:(id /* block */)arg1;
- (bool)_animatesRotationForAllVisibleIconListViews;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_checkIfScrollStateChanged;
- (void)_configureIconListView:(id)arg1;
- (void)_configureScrollingInteraction:(id)arg1;
- (id)_createIconListViewForList:(id)arg1;
- (void)_currentPageIndexDidChange;
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1;
- (void)_didAddIconListView:(id)arg1;
- (void)_didRemoveIconListView:(id)arg1;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_enumerateScrollableIconViewsUsingBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIconListAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForScalingView;
- (bool)_hasLeadingCustomPages;
- (bool)_hasTrailingCustomPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_iconListViewSize;
- (void)_ignoreScrollingDidEndNotifications;
- (id)_interactionTintColor;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isValidIconListViewIndex:(long long)arg1;
- (bool)_isValidPageIndex:(long long)arg1;
- (void)_layoutSubviews;
- (unsigned long long)_leadingCustomPageCount;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (void)_markListViewsAsPurged;
- (id)_newPageControl;
- (void)_noteFolderListsDidChange:(unsigned long long)arg1;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_orientationDidChange:(long long)arg1;
- (long long)_pageCountForPageControl;
- (long long)_pageIndexForOffset:(double)arg1;
- (long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double*)arg3;
- (double)_pageSpacing;
- (double)_pageWidth;
- (void)_precacheIconImages;
- (void)_removeIconListView:(id)arg1;
- (void)_removeIconListView:(id)arg1 purge:(bool)arg2;
- (void)_resetIconListViews;
- (struct CGPoint { double x1; double x2; })_scrollOffsetForContentAtPageIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_scrollOffsetForFirstListView;
- (struct CGPoint { double x1; double x2; })_scrollOffsetForPageAtIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct SBHFloatRange { double x1; double x2; })_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct SBHFloatRange { double x1; double x2; })_scrollRangeForPageAtIndex:(long long)arg1;
- (struct SBHFloatRange { double x1; double x2; })_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })_scrollViewContentSize;
- (void)_scrollingInteractionScrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scrollingInteractionVisibleInsets;
- (void)_setCurrentPageIndex:(long long)arg1;
- (void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(bool)arg2;
- (void)_setFolderName:(id)arg1;
- (void)_setPageControlDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setParallaxDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_setScrollingDisabled:(bool)arg1 forReason:(id)arg2;
- (bool)_shouldIgnoreScrollingDidEndNotifications;
- (bool)_shouldUseScrollableIconViewInteraction;
- (bool)_showsTitle;
- (double)_titleFontSize;
- (id)_titleTextField;
- (unsigned long long)_trailingCustomPageCount;
- (void)_unignoreScrollingDidEndNotifications;
- (void)_updateEditingStateAnimated:(bool)arg1;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIconListFrames;
- (void)_updateIconListLegibilitySettings;
- (void)_updateIconListViews:(long long)arg1;
- (void)_updateIconListViewsWithCurrentIconListModel:(id)arg1;
- (void)_updateIconListViewsWithCurrentPageIndex:(long long)arg1 currentIconListModel:(id)arg2;
- (void)_updatePageControlCurrentPage;
- (void)_updatePageControlNumberOfPages;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_updateParallaxSettings;
- (void)_updateScalingViewFrame;
- (void)_updateScrollingIfNeeded;
- (void)_updateScrollingInteractionIsScrolling:(bool)arg1;
- (void)_updateScrollingState:(bool)arg1;
- (void)_updateTitleLegibilitySettings;
- (bool)_useParallaxOnPageControl;
- (void)_willScrollToPageIndex:(long long)arg1 animated:(bool)arg2;
- (id)accessibilityLegibilitySettingsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 tintStyle:(unsigned long long)arg2;
- (id)accessibilityTintColorForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 tintStyle:(unsigned long long)arg2;
- (void)addScrollViewIsScrollingOverrideReason:(id)arg1;
- (id)additionalIconListViews;
- (double)additionalScrollWidthToKeepVisibleInOneDirection;
- (bool)addsFocusGuidesForWrapping;
- (id)allIconListViews;
- (unsigned long long)allowedOrientations;
- (bool)automaticallyCreatesIconListViews;
- (id)borrowScalingView;
- (bool)canChangeCurrentPageIndexToIndex:(unsigned long long)arg1;
- (void)cancelScrolling;
- (void)cleanUpAfterTransition;
- (void)clearVisibleColumnRange;
- (long long)closestIconPageIndexForPageIndex:(long long)arg1;
- (unsigned long long)contentVisibility;
- (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
- (id)currentIconListModel;
- (id)currentIconListView;
- (long long)currentPageIndex;
- (double)currentScrollOffset;
- (void)dealloc;
- (long long)defaultPageIndex;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didTransitionAnimated:(bool)arg1;
- (bool)doesPageContainIconListView:(long long)arg1;
- (void)enumerateIconListViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateIconListViewsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateScrollViewPageViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateScrollableIconViewsUsingBlock:(id /* block */)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)firstIconListView;
- (long long)firstIconPageIndex;
- (id)folder;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
- (void)folder:(id)arg1 listHiddenWillChange:(id)arg2;
- (void)folder:(id)arg1 willRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folderDidChange;
- (id)folderIconImageCache;
- (void)folderWillChange:(id)arg1;
- (void)getLeadingVisiblePageIndex:(long long*)arg1 trailingVisiblePageIndex:(long long*)arg2;
- (bool)hasEverBeenInAWindow;
- (bool)hasIconPages;
- (double)headerHeight;
- (id)headerView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)iconImageCache;
- (unsigned long long)iconListModelIndexForPageIndex:(long long)arg1;
- (id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;
- (bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (id)iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (id)iconListViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)iconListViewAtScrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)iconListViewCount;
- (id)iconListViewDisplayingIconView:(id)arg1;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForIconListModelIndex:(unsigned long long)arg1;
- (id)iconListViewForPageIndex:(long long)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (unsigned long long)iconListViewIndexForIconListModelIndex:(unsigned long long)arg1;
- (unsigned long long)iconListViewIndexForPageIndex:(long long)arg1;
- (id)iconListViewWithList:(id)arg1;
- (id)iconListViews;
- (id)iconLocation;
- (id)iconLocationForList:(id)arg1;
- (unsigned long long)iconPageCount;
- (id)iconPageIndicatorImageSetCache;
- (bool)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)iconScrollView:(id)arg1 shouldSetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2 animated:(bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (id)iconViewProvider;
- (id)iconVisibilityDescription;
- (long long)iconVisibilityHandling;
- (bool)includesHiddenIconListPages;
- (unsigned long long)indexOfIconListView:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEditing;
- (bool)isPageControlHidden;
- (bool)isPageTypeIcon:(long long)arg1;
- (bool)isParallaxEnabled;
- (bool)isRTL;
- (bool)isRotating;
- (bool)isScalingViewBorrowed;
- (bool)isScrolling;
- (bool)isVisibleColumnRangeValid:(struct SBVisibleColumnRange { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (id)lastIconListView;
- (long long)lastIconPageIndex;
- (void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(bool)arg2;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)legibilitySettingsForIconListViews;
- (id)listLayoutProvider;
- (Class)listViewClass;
- (bool)locationCountsAsInsideFolder:(struct CGPoint { double x1; double x2; })arg1;
- (long long)maximumPageIndex;
- (double)maximumVisibleScrollOffset;
- (void)minimumHomeScreenScaleDidChange;
- (long long)minimumPageIndex;
- (double)minimumVisibleScrollOffset;
- (void)noteUserIsInteractingWithIcons;
- (long long)orientation;
- (id)pageControl;
- (void)pageControl:(id)arg1 didMoveCurrentPageToPage:(long long)arg2 withScrubbing:(bool)arg3;
- (double)pageControlAlpha;
- (double)pageControlAreaHeight;
- (void)pageControlDidReceiveButtonTap:(id)arg1;
- (unsigned long long)pageCount;
- (long long)pageIndexForIconListModel:(id)arg1;
- (long long)pageIndexForIconListModelIndex:(unsigned long long)arg1;
- (long long)pageIndexForIconListViewIndex:(unsigned long long)arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForTransition;
- (void)prepareToOpen;
- (void)removeScrollViewIsScrollingOverrideReason:(id)arg1;
- (void)resetContentOffsetToCurrentPageAnimated:(bool)arg1;
- (void)resetIconListViews;
- (void)returnScalingView;
- (id)scalingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scalingViewFrame;
- (void)scrollUsingDecelerationAnimationToPageIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)scrollView;
- (struct CGSize { double x1; double x2; })scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (double)scrollableWidthForVisibleColumnRange;
- (unsigned int)scrollingDirection;
- (void)scrollingDisabledGestureDidUpdate:(id)arg1;
- (id)scrollingDisabledGestureRecognizer;
- (void)setAddsFocusGuidesForWrapping:(bool)arg1;
- (void)setAutomaticallyCreatesIconListViews:(bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentVisibility:(unsigned long long)arg1;
- (bool)setCurrentPageIndex:(long long)arg1 animated:(bool)arg2;
- (bool)setCurrentPageIndex:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFolder:(id)arg1;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setHasEverBeenInAWindow:(bool)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconPageIndicatorImageSetCache:(id)arg1;
- (void)setIncludesHiddenIconListPages:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNeedsLayout;
- (void)setOrientation:(long long)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageControlAlpha:(double)arg1;
- (void)setPageControlHidden:(bool)arg1;
- (void)setRotating:(bool)arg1;
- (void)setScrollingDisabledGestureRecognizer:(id)arg1;
- (void)setSuppressesEditingStateForListViews:(bool)arg1;
- (bool)snapsToPageBoundariesAfterScrolling;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesEditingStateForListViews;
- (void)tearDownListViews;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)typeForPage:(long long)arg1;
- (void)updateAccessibilityTintColors;
- (void)updateIconListIndexAndVisibility;
- (void)updateIconListIndexAndVisibility:(bool)arg1;
- (void)updateIconListViews;
- (void)updateVisibleColumnRange;
- (void)updateVisibleColumnRangeWithTotalLists:(unsigned long long)arg1 iconVisibilityHandling:(long long)arg2;
- (bool)updatesPredictedVisibleColumnWhileScrolling;
- (long long)userInterfaceLayoutDirection;
- (unsigned int)userInterfaceLayoutDirectionAwareScrollingDirection;
- (unsigned long long)userInterfaceLayoutDirectionHandling;
- (void)validateVisibleColumnRange;
- (struct SBVisibleColumnRange { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })visibleColumnRangeExcludingAdditionalWidthKeptVisible;
- (struct SBVisibleColumnRange { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })visibleColumnRangeWithTotalLists:(unsigned long long)arg1 iconVisibilityHandling:(long long)arg2 predictedVisibleColumn:(struct SBFolderPredictedVisibleColumn { unsigned long long x1; struct SBIconListPredictedVisibleColumn { unsigned long long x_2_1_1; double x_2_1_2; } x2; }*)arg3 includingAdditionalColumnsKeptVisible:(bool)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })visibleContainerInsets;
- (void)willMoveToWindow:(id)arg1;
- (void)willTransitionAnimated:(bool)arg1 withSettings:(id)arg2;

@end
