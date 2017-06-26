//
//  ScaryDoc.h
//  ListView5
//
//  Created by Oleh Makhobei on 6/26/17.
//  Copyright © 2017 Oleh Makhobei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ScaryData;


@interface ScaryDoc : NSObject

@property (strong) ScaryData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

-(id) initWithTitle:(ScaryData *)scarydata
         thumbImage:(UIImage *)thumbImage
         thumbImage:(UIImage*) thumbIamge ;

@end
