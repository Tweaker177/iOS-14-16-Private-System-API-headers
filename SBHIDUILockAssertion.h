      Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard (1)
 */

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable> {
    SBHIDInterface * _HIDInterface;
    bool  _disableTapToWake;
    bool  _pocketTouchesExpected;
    NSString * _reason;
    long long  _source;
    bool  _suspendMultitouch;
    bool  _suspendProximitySensor;
}

@property (nonatomic) SBHIDInterface *HIDInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableTapToWake;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pocketTouchesExpected;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) long long source;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendMultitouch;
@property (nonatomic) bool suspendProximitySensor;

- (void).cxx_destruct;
- (id)HIDInterface;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disableTapToWake;
- (void)invalidate;
- (void)invalidateForSource:(long long)arg1;
- (bool)pocketTouchesExpected;
- (id)reason;
- (void)setDisableTapToWake:(bool)arg1;
- (void)setHIDInterface:(id)arg1;
- (void)setPocketTouchesExpected:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSuspendMultitouch:(bool)arg1;
- (void)setSuspendProximitySensor:(bool)arg1;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suspendMultitouch;
- (bool)suspendProximitySensor;

@end
