//
//  BIDViewController.m
//  delegatetest
//
//  Created by Apple on 13-7-14.
//  Copyright (c) 2013年 Apple. All rights reserved.
//

#import "BIDViewController.h"

@interface BIDViewController ()

@end

@implementation BIDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    _test = [[BIDtest alloc]init];
    _test.delegate = self;
    [_test testfuc];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)SetViewData
{
    NSLog(@"SetViewData");
}

@end
