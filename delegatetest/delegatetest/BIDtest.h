//
//  BIDtest.h
//  delegatetest
//
//  Created by Apple on 13-7-14.
//  Copyright (c) 2013年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDtestdelegate.h"

@interface BIDtest : NSObject


@property (weak, nonatomic) id <BIDtestdelegate> delegate;

-(void) testfuc;

@end
