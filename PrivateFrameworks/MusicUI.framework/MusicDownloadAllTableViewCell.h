/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicDownloadAllTableViewCell : MusicTableViewCell {
    bool_downloadAllCellForArtist;
}

@property(getter=isDownloadAllCellForArtist) bool downloadAllCellForArtist;
@property long long downloadableSongCount;

+ (Class)contentViewClass;

- (id)_downloadAllCellContentView;
- (long long)downloadableSongCount;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDownloadAllCellForArtist;
- (void)setDownloadAllCellForArtist:(bool)arg1;
- (void)setDownloadableSongCount:(long long)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end