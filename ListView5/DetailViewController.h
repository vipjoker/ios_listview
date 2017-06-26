//
//  DetailViewController.h
//  ListView5
//
//  Created by Oleh Makhobei on 6/26/17.
//  Copyright © 2017 Oleh Makhobei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

