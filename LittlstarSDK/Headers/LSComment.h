//
//  LSComment.h
//  LittlstarSDK
//
//  Created by Littlstar on 11/05/2015
//  Copyright (c) 2015 Little Star Media, Inc. (Littlstar). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LittlstarSDK/LSUser.h>

/**
 *  Class LSComment, describes details of the Littlstar comment, e.g. for videos or photos.
 */
@interface LSComment : NSObject

/**
 * Comment text.
 */
@property (nonatomic, readonly) NSString *text;

/**
 * Creation date of comment.
 */
@property (nonatomic, readonly) NSString *creationDate;

/**
 * Comment owner user info.
 */
@property (nonatomic, readonly) LSUser *user;

@end
