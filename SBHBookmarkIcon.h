/* Generated by RuntimeBrowser
   Platform: iOS 15.7.2 (19H218) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome (1)
 */

@interface SBHBookmarkIcon : SBLeafIcon {
    SBHBookmark * _bookmark;
}

@property (nonatomic, readonly) CPSWebClip *appClip;
@property (nonatomic, retain) SBHBookmark *bookmark;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly) UIWebClip *webClip;

- (void).cxx_destruct;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)appClip;
- (id)bookmark;
- (bool)canBeAddedToMultiItemDrag;
- (bool)canBeAddedToSubfolder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)draggingUserActivity;
- (id)initWithBookmark:(id)arg1;
- (bool)isAppClipIcon;
- (bool)isBookmarkIcon;
- (id)launchURL;
- (void)setBookmark:(id)arg1;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (id)webClip;

@end
