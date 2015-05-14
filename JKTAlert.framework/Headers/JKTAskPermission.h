//
//  JKTAskPermission.h
//  JKTIconGen
//
//  Created by Jeethu on 09/04/15.
//  Copyright (c) 2015 jeethukthomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JKTAskPermissionDelegate;

@interface JKTAskPermission : UIView

-(void)showPermissionWithTitle:(NSString*)title andSubTitle:(NSString*)subTitle inView:(UIView*)parentView;
-(void)showJKTAlertWithTitle:(NSString*)title andSubTitle:(NSString*)subTitle inView:(UIView*)parentView;
-(void)presentJKTinView:(UIView*)theView;
-(void)presentJKThudInView:(UIView*)theView withTitle:(NSString*)titleMsg;
-(void)dismissAllJKT;
-(void)presentJKThudInView:(UIView*)theView;

@property (nonatomic, weak) id<JKTAskPermissionDelegate> delegate;
@property (strong, nonatomic) IBOutlet UIImageView *topBannerImage;
@property (strong, nonatomic) IBOutlet UIButton *closeButton;
@property (strong, nonatomic) IBOutlet UILabel *msgLabel;
@property (strong, nonatomic) IBOutlet UIButton *acceptButton;
@property (strong, nonatomic) IBOutlet UILabel *notesLabel;
@property (strong, nonatomic) IBOutlet UIImageView *iconImage;


+ (id)sharedManager;


@end

@protocol JKTAskPermissionDelegate <NSObject>

- (void)dismissedJKT;
- (void)acceptedJKTPrompt;

@end