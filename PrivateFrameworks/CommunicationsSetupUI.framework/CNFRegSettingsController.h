/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PSSpecifier, NSMutableArray, NSNumber;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate> {
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSArray *_accountGroupSpecifiers;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_callerIdGroupSpecifiers;
    PSSpecifier *_addAddressButtonSpecifier;
    NSArray *_replyWithMessageGroupSpecifiers;
    NSArray *_cellularDataGroupSpecifiers;
    PSSpecifier *_cellularDataSwitchSpecifier;
    PSSpecifier *_blankAddressSpecifier;
    NSString *_pendingAddress;
    NSMutableArray *_addresses;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    NSNumber *_delayedRefreshAnimatedFlag;
    struct { 
        unsigned int listeningForFinishedEditingEvents : 1; 
        unsigned int appeared : 1; 
        unsigned int ignoringTextFieldChanges : 1; 
        unsigned int showEnableSwitch : 1; 
        unsigned int refreshingCallerIdValues : 1; 
    } _settingsFlags;
}

@property BOOL showEnableSwitch;
@property(copy) id alertHandler;
@property(copy) NSString * pendingAddress;


- (void)dealloc;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (int)groupIdForSpecifierId:(id)arg1;
- (void)setCellularData:(id)arg1 specifier:(id)arg2;
- (id)getCellularDataForSpecifier:(id)arg1;
- (void)showReplyWithMessage:(BOOL)arg1 animated:(BOOL)arg2;
- (id)aliasWithIdentifier:(id)arg1;
- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAddressForSpecifier:(id)arg1;
- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (id)getAddAliasTextForSpecifier:(id)arg1;
- (void)addAddressTapped:(id)arg1;
- (id)aliasForSpecifier:(id)arg1;
- (BOOL)additionalAliasesAvailable;
- (void)clearAccountCache;
- (void)_setupAppearBlockForLocaleControllerWithAccount:(id)arg1;
- (void)showAllSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowEnableSwitch:(BOOL)arg1;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)canBeShownFromSuspendedState;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)_showAliasValidationError:(id)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg1;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_updateSwitchDelayed;
- (BOOL)_allAccountsAreDeactivated;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAccountHandlersForDisabledOperation;
- (BOOL)_shouldUseDisabledHandlers;
- (int)groupIdForSpecifier:(id)arg1;
- (BOOL)cellularDataSwitchEnabled;
- (id)_operationalAccountsForService:(int)arg1;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (id)callerIdAliasSpecifiers;
- (void)setPendingAddress:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (void)_clearBlankAliasField;
- (int)indexOfLastSpecifierInGroup:(id)arg1;
- (void)refreshAliasSpecifier:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (BOOL)isShowingAddButton;
- (BOOL)isShowingBlankAlias;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (id)aliasSpecifiers;
- (BOOL)_shouldShowAliasInfo;
- (void)_hideLocaleChooser;
- (void)_updateControllerStateAnimated:(BOOL)arg1;
- (void)_tearDownAllListeners;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(BOOL)arg3;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (id)accountSpecifiers;
- (void)_reloadSpecifier:(id)arg1 withBlock:(id)arg2;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)getAccountNameForSpecifier:(id)arg1;
- (void)_showSignInController;
- (void)_showAccountAlertForAccount:(id)arg1;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (BOOL)_canDeselectAlias:(id)arg1;
- (BOOL)_popFromSettingsAnimated:(BOOL)arg1;
- (void)refreshEnabledStateAnimated:(BOOL)arg1;
- (void)refreshCellularDataAnimated:(BOOL)arg1;
- (void)refreshCallerIdAliasesAnimated:(BOOL)arg1;
- (void)refreshAliasesAnimated:(BOOL)arg1;
- (void)showCellularData:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showCallerId:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showAliases:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showAccounts:(BOOL)arg1 animated:(BOOL)arg2;
- (void)refreshAccountsAnimated:(BOOL)arg1;
- (id)_operationalAccounts;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(BOOL)arg3;
- (void)_setupAccountHandlersForDisabling;
- (BOOL)popToFirstRunControllerAnimated:(BOOL)arg1;
- (void)_updateSwitch;
- (id)_switchFooterText;
- (BOOL)showEnableSwitch;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(BOOL*)arg2;
- (id)blankAliasTextField;
- (void)keyboardDismissed:(id)arg1;
- (void)returnKeyPressed:(id)arg1;
- (void)startListeningForFinishedEditingEventNotifications;
- (void)showBlankAlias:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showAddAliasButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupAccountHandlers;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)stopEditingTextField:(BOOL)arg1;
- (void)stopListeningForFinishedEditingEventNotifications;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshAllAliasSpecifiers;
- (void)_setupAllListeners;
- (void)startEditingTextField;
- (void)refreshFaceTimeSettingsAnimated:(BOOL)arg1;
- (id)aliasDetailControllerForSpecifier:(id)arg1;
- (void)_updateAddAliasButtonText;
- (void)updateCellularDataFooterText;
- (BOOL)shouldShowCellularData;
- (id)pendingAddress;
- (BOOL)shouldShowReplyWithMessage;
- (void)_buildSpecifierCache:(id)arg1;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (id)possibleCallerIdAliases;
- (id)createSpecifierForAlias:(id)arg1;
- (id)_useableAccounts;
- (id)createSpecifierForAccount:(id)arg1;
- (id)_appleIDAccounts;
- (void)_handleDeactivation:(id)arg1;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)_handleFaceTimeStateChanged;
- (id)logName;
- (id)customTitle;
- (id)specifierList;
- (id)alertHandler;
- (void)setAlertHandler:(id)arg1;
- (id)bundle;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;

@end