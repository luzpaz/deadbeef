//
//  TrackContextMenu.h
//  DeaDBeeF
//
//  Created by Alexey Yakovenko on 7/27/20.
//  Copyright © 2020 Alexey Yakovenko. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include "deadbeef.h"

NS_ASSUME_NONNULL_BEGIN

@class TrackContextMenu;

@protocol TrackContextMenuDelegate <NSMenuDelegate>

- (void)trackContextMenuShowTrackProperties:(TrackContextMenu *)trackContextMenu;
- (void)trackContextMenuDidReloadMetadata:(TrackContextMenu *)trackContextMenu;
- (void)trackContextMenuDidDeleteFiles:(TrackContextMenu *)trackContextMenu;

@end

@interface TrackContextMenu : NSMenu

@property (nonatomic,weak) NSView *view; // the view to associate with this menu

- (void)update:(ddb_playlist_t *)playlist;
- (void)updateWithTrackList:(ddb_playItem_t * _Nullable * _Nonnull)tracks count:(NSUInteger)count playlist:(ddb_playlist_t * _Nullable)plt currentTrack:(ddb_playItem_t * _Nullable)currentTrack currentTrackIdx:(int)currentTrackIdx;

@end

NS_ASSUME_NONNULL_END
