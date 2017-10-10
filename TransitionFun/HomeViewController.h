//
//  HomeViewController.h
//  TransitionFun
//
//  Created by AnjDenny on 21/03/15.
//  Copyright (c) 2015 Mike Enriquez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECSlidingViewController.h"
#import "PageItemController.h"

@interface HomeViewController : UIViewController <ECSlidingViewControllerDelegate>
{
    NSMutableArray *pageItemArray;
}
- (IBAction)menuButtonTapped:(id)sender;
@end
