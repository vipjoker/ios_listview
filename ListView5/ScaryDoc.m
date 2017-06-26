//
//  ScaryDoc.m
//  ListView5
//
//  Created by Oleh Makhobei on 6/26/17.
//  Copyright © 2017 Oleh Makhobei. All rights reserved.
//

#import "ScaryDoc.h"
#import "ScaryData.h"


@implementation ScaryDoc

@synthesize data = _data;
@synthesize thumbImage = _thumbImage;
@synthesize fullImage = _fullImage;

-(id) initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage thumbImage:(UIImage *)thumbIamge
{
    if((self = [super init])){
        self.data = [[ScaryData alloc] initWithTitle:title ratting:rating];
        self.thumbImage = thumbImage;
        self.fullImage = fullImage;
    }
    return self;
}

@end
