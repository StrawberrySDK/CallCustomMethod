//
//  AppDelegate.m
//  CallCustomMethod mac
//
//  Created by César Guirao on 14/02/13.
//
//

#import "AppDelegate.h"
#import "StrawberryView.h"

@implementation AppDelegate

- (void)dealloc
{
    [super dealloc];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
    [self.window.contentView addSubview: getStrawberryView([self.window.contentView bounds])];
}

- (void)sayHello
{
    LOG("Hello CallCustomMethod!!!!!");
}

@end
