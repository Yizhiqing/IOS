//
//  DetailViewController.h
//  Test
//
//  Created by Kevin Yi on 5/10/15.
//  Copyright (c) 2015 Kevin Yi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

