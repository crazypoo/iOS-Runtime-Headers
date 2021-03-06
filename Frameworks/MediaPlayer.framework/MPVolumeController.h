/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeController : NSObject {
    float _EUVolumeLimit;
    BOOL _debugVolumeWarning;
    <MPVolumeControllerDelegate> *_delegate;
    MPAVController *_player;
    NSString *_volumeAudioCategory;
    float _volumeValue;
    BOOL _volumeWarningBlinking;
    BOOL _volumeWarningEnabled;
    int _volumeWarningState;
    UIImage *_volumeWarningTrackImage;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic) <MPVolumeControllerDelegate> *delegate;
@property (nonatomic) BOOL muted;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (nonatomic, readonly) float volumeValue;
@property (nonatomic, readonly) BOOL volumeWarningEnabled;
@property (nonatomic, readonly) int volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_forcefullySetVolumeValue:(float)arg1;
- (void)_internalSetVolumeValue:(float)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (BOOL)_isPlayerInValidState;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_setVolumeWarningState:(int)arg1;
- (void)_setupNotifications;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_tearDownNotifications;
- (void)_volumeDidChange:(id)arg1;
- (float)_volumeFromAVController;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)muted;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (float)setVolumeValue:(float)arg1;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (id)volumeAudioCategory;
- (float)volumeValue;
- (BOOL)volumeWarningEnabled;
- (int)volumeWarningState;

@end
