//
//  EquationViewController.h
//  Equation
//
//  Created by 山崎 進 on 2012/12/12.
//  Copyright (c) 2012年 zacky1972. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EquationViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *labelReal1;
@property (weak, nonatomic) IBOutlet UILabel *labelReal2;

@property (weak, nonatomic) IBOutlet UILabel *labelImaginary1;

@property (weak, nonatomic) IBOutlet UILabel *labelImaginary2;


@property double a;
@property double b;
@property double c;


@end
