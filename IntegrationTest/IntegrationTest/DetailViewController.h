//
//  DetailViewController.h
//  IntegrationTest
//
//  Created by wang tie on 16/2/16.
//  Copyright © 2016年 wang tie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

