//
//  ViewController.m
//  文件hash
//
//  Created by swxa@sasaliubobo on 16/8/11.
//  Copyright © 2016年 swxa@saasliubobo. All rights reserved.
//

#import "ViewController.h"
#import "Util.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [Util sayHello];
}
@end
