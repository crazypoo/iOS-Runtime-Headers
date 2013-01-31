/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKPlayer, GKAchievementDescription, GKGame, GKAchievement;

@interface GKAchievementSharingInfo : NSObject <NSCoding> {
    GKPlayer *_player;
    UIImage *_badgeImage;
    GKGame *_game;
    GKAchievementDescription *_achievementDescription;
    UIImage *_iconImage;
    GKAchievement *_achievement;
}

@property(retain) GKAchievement * achievement;
@property(retain) GKAchievementDescription * achievementDescription;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(retain) UIImage * iconImage;
@property(retain) UIImage * badgeImage;


- (void)dealloc;
- (id)iconImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)badgeImage;
- (void)setIconImage:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (id)achievementDescription;
- (void)setAchievementDescription:(id)arg1;
- (void)setAchievement:(id)arg1;
- (id)achievement;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setGame:(id)arg1;
- (id)game;

@end