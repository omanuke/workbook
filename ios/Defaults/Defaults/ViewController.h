//
//  ViewController.h
//  Defaults
//
//  Created by 村上 幸雄 on 12/01/30.
//  Copyright (c) 2012年 ビッツ有限会社. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Document.h"

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField  *messageTextField;
@property (strong, nonatomic) Document              *document;

@end
