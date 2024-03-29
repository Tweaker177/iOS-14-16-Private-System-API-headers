/* Generated by RuntimeBrowser
   Platform: iOS 15.7.2 (19H218) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome (1)
 */

@interface SBHFileWidgetExtensionProvider : SBHRecentsDocumentExtensionProvider {
    bool  _widgetHasTransparentBackground;
}
//wait there's a files widget?  why haven't I seen it yet?  This is cool to get methods to single it out and customize it

@property (nonatomic) bool widgetHasTransparentBackground;

- (bool)_extensionHasTransparencyEntitlement:(id)arg1;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)arg1;
- (id)filesWidgetViewControllerWithConfiguration:(id)arg1;
- (id)init;
- (bool)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)arg1;
- (void)setWidgetConfiguration:(id)arg1;
- (void)setWidgetHasTransparentBackground:(bool)arg1;
- (bool)widgetHasTransparentBackground;

@end
