//
//  PixLive.h
//  VDARSDK Ionic
//
//  Created by Mathieu Monney on 15.04.15.
//
//  Copyright 2010-2015 Vidinoti SA. All rights reserved.
//


#import <VDARSDK/VDARSDK.h>
#import <Cordova/CDV.h>
#import <VDARSDK/VDARSDK.h>

@interface PixLive : CDVPlugin<VDARSDKControllerDelegate,RemoteControllerDelegate>

-(void)presentViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(void (^)(void))completion;
-(void)annotationViewDidBecomeEmpty;
-(void)annotationViewDidPresentAnnotations;

@property (nonatomic,readonly,strong)  NSMutableDictionary *arViewControllers;
@property (nonatomic,readonly,strong)  NSMutableDictionary *arViewSettings;


@end
