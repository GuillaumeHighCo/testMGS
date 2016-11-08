//
//  MGSFramework.h
//  MGSFramework
//
//  Created by Damien PRACA on 03/10/16.
//  Copyright © 2016 HighConnexion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HCNXBase/HCNXBase.h>

//! Project version number for MGSFramework.
FOUNDATION_EXPORT double MGSFrameworkVersionNumber;

//! Project version string for MGSFramework.
FOUNDATION_EXPORT const unsigned char MGSFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MGSFramework/PublicHeader.h>
#import <Foundation/Foundation.h>

@interface MGS : HCNXBase

/*!
 @brief Use this method to get the instance of MGS
 */
+ (MGS *)sharedInstance;


-(void)getGames:(void (^)(NSArray * games, NSError * error))onCompletion;



@end
