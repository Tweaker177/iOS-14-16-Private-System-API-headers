 
//iOS 15.7.2

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@protocol SBLeafIconDataSource;
@class SBHWidget, NSArray;

@interface SBWidgetIcon : SBLeafIcon {

	BOOL _allowsSuggestions;
	BOOL _allowsExternalSuggestions;
	id<SBLeafIconDataSource> _lastUserSelectedDataSource;
	unsigned long long _stackChangeReason;
}
@property (nonatomic,retain) SBHWidget * activeWidget; 
@property (nonatomic,copy,readonly) NSArray * widgets; 
@property (nonatomic,retain) id<SBLeafIconDataSource> lastUserSelectedDataSource;                        //@synthesize lastUserSelectedDataSource=_lastUserSelectedDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long stackChangeReason;                                       //@synthesize stackChangeReason=_stackChangeReason - In the implementation block
@property (nonatomic,readonly) unsigned long long iconDataSourcesExcludingSuggestionsCount; 
@property (assign,nonatomic) BOOL allowsSuggestions;                                                     //@synthesize allowsSuggestions=_allowsSuggestions - In the implementation block
@property (assign,nonatomic) BOOL allowsExternalSuggestions;                                             //@synthesize allowsExternalSuggestions=_allowsExternalSuggestions - In the implementation block
@property (nonatomic,readonly) SBHWidget * firstSuggestedWidget; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> firstSuggestedIconDataSource; 
-(id)initWithCHSAvocadoDescriptor:(id)arg1 ;
-(void)setAllowsSuggestions:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SBLeafIconDataSource>)firstSuggestedIconDataSource;
-(void)setActiveWidget:(SBHWidget *)arg1 ;
-(void)updateLabel;
-(NSArray *)widgets;
-(BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
-(BOOL)allowsSuggestions;
-(unsigned long long)supportedGridSizeClasses;
-(void)setStackChangeReason:(unsigned long long)arg1 ;
-(void)didRemoveIconDataSource:(id)arg1 ;
-(unsigned long long)iconDataSourcesExcludingSuggestionsCount;
-(void)setAllowsExternalSuggestions:(BOOL)arg1 ;
-(id)copyWithSuggestionSource:(long long)arg1 ;
-(SBHWidget *)firstSuggestedWidget;
-(SBHWidget *)activeWidget;
-(id)initWithWidgets:(id)arg1 ;
-(id)firstWidgetPassingTest:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canReceiveGrabbedIcon;
-(unsigned long long)stackChangeReason;
-(BOOL)supportsConfiguration;
-(BOOL)canBeReceivedByIcon;
-(id)initWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2 ;
-(id)initWithWidget:(id)arg1 ;
-(void)setLastUserSelectedDataSource:(id<SBLeafIconDataSource>)arg1 ;
-(id)copyWithUniqueLeafIdentifier;
-(void)addDataSourcesFromWidgetIcons:(id)arg1 ;
-(BOOL)supportsStackConfiguration;
-(id)initWithCHSAvocadoDescriptors:(id)arg1 suggestionSource:(long long)arg2 ;
-(void)didAddIconDataSource:(id)arg1 ;
-(id)_fallbackBestDataSource;
-(id<SBLeafIconDataSource>)lastUserSelectedDataSource;
-(void)removeFirstSuggestedIconDataSource;
-(id)initWithCHSAvocadoDescriptors:(id)arg1 ;
-(id)initWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2 widgetContainerBundleIdentifers:(id)arg3 ;
-(BOOL)isWidgetStackIcon;
-(void)addFirstSuggestedWidget;
-(BOOL)isWidgetIcon;
-(BOOL)allowsExternalSuggestions;
-(BOOL)canBeAddedToMultiItemDrag;  //This method is neat to change to yes when rearranging home screen, you can grab widgets with icons
@end
