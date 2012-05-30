//
//  BeamMusicPlayerDataSource.h
//  BeamMusicPlayerExample
//
//  Created by Moritz Haarmann on 30.05.12.
//  Copyright (c) 2012 n/a. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BeamMusicPlayerViewController;

/**
 * The DataSource for the Music Player provides all data necessary to display
 * a player UI filled with the appropriate information. 
 */
@protocol BeamMusicPlayerDataSource <NSObject>

/**
 * Returns the title of the given track and player as a NSString. You can return nil for no title.
 */
-(NSString*)titleForTrack:(NSUInteger)trackNumber inPlayer:(BeamMusicPlayerViewController*)player;

/**
 * Returns the artist for the given track in the given player. Nil is an acceptable return value.
 */
-(NSString*)artistForTrack:(NSUInteger)trackNumber inPlayer:(BeamMusicPlayerViewController*)player;

/**
* Returns the album for the given track in the given player. Nil is an acceptable return value.
*/
-(NSString*)albumForTrack:(NSUInteger)trackNumber inPlayer:(BeamMusicPlayerViewController*)player;

/**
 * Returns the length for the given track in the given player as seconds. Your implementation must provide a 
 * value larger than 0.
 */
-(CGFloat)lengthForTrack:(NSUInteger)trackNumber inPlayer:(BeamMusicPlayerViewController*)player;

@optional

/**
 * Returns the number of tracks for the given player. If you do not implement this method
 * or return anything smaller than 2, one track is assumed and the skip-buttons are disabled.
 */
-(NSUInteger)numberOfTracksInPlayer:(BeamMusicPlayerViewController*)player;

/**
 * Returns a UIImage containing the artwork for the given track in the given player. If the preferredSize is not NULL, the implementation should try to provide an image that is as close to the preferred size as possible.
 */
-(UIImage*)artworkForTrack:(NSUInteger)trackNumber preferredSize:(CGSize)size player:(BeamMusicPlayerViewController*)player;

@end
