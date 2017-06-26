//
//  ScaryData.h
//  ListView5
//
//  Created by Oleh Makhobei on 6/26/17.
//  Copyright © 2017 Oleh Makhobei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryData : NSObject
@property (strong) NSString *title;
@property (assign) float rating;
-(id) initWithTitle:(NSString*)title
            ratting:(float)rating;
@end
