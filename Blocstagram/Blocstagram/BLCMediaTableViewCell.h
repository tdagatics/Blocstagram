//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by Anthony Dagati on 9/25/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width; {

@end
    
/*
// Make a cell
BLCMediaTableViewCell *layoutCell = [[BLCMediaTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"layoutCell"];

// Set it to the given width, and the maximum possible height
layoutCell.frame = CGRectMake(0, 0, width, CGFLOAT_MAX);

// Give it the media item
layoutCell.mediaItem = mediaItem;

// Make it adjust the image view and labels
[layoutCell layoutSubviews];

// The height will be wherever the bottom of the comments label is
return CGRectGetMaxY(layoutCell.commentLabel.frame);
}

@end

*/
