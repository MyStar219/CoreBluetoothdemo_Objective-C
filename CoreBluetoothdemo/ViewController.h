//
//  ViewController.h
//  CoreBluetoothdemo
//
//  Created by Jin Jin on 6/21/17.
//  Copyright © 2017 Jin Jin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ViewController : UIViewController<CBCentralManagerDelegate>

@property (nonatomic, strong) CBCentralManager *centralManager;

@end

