//
//  Penguin.m
//  peevedPenguins
//
//  Created by Akiva Lipshitz on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Penguin.h"

@implementation Penguin
-(id)init {
    if(self=[super init]) {
        CCLOG(@"Penguin Loaded");
    }
    return self;
}
@end
