/* Generated by RuntimeBrowser
   Platform: iOS 15.7.3 (19H307) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI (1.0)
 */

@interface SBUIActionViewLabel : UIView {
    UILabel * _emojiLabel;
    UILabel * _label;
    NSString * _text;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (void)_mt_applyVisualStyling:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lineBreakMode;
- (void)mt_removeAllVisualStyling;
- (long long)numberOfLines;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
