//
//  ScaryData.m
//  ListView5
//
//  Created by Oleh Makhobei on 6/26/17.
//  Copyright © 2017 Oleh Makhobei. All rights reserved.
//

#import "ScaryData.h"

@implementation ScaryData
@synthesize title = _title;
@synthesize rating = _rating;

-(id) initWithTitle:(NSString *)title ratting:(float)rating{
    if((self = [super init])){
        self.title = title;
        self.rating = rating;
    }
    
    return self;
}


@end
