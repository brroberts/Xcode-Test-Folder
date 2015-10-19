//
//  DetailViewController.h
//  Test
//
//  Created by Breigh Ann Roberts on 10/19/15.
//  Copyright (c) 2015 Breigh Ann Roberts. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

