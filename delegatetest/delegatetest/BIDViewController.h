//
//  BIDViewController.h
//  delegatetest
//
//  Created by Apple on 13-7-14.
//  Copyright (c) 2013年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BIDtest.h"
#import "BIDtestdelegate.h"

@interface BIDViewController : UIViewController<BIDtestdelegate>

@property (nonatomic,strong) BIDtest *test;

@end
