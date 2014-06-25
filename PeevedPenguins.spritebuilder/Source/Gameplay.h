//
//  Gameplay.h
//  peevedPenguins
//
//  Created by Akiva Lipshitz on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Gameplay : CCNode <CCPhysicsCollisionDelegate> {
    
}

- (void)didLoadFromCCB;
- (void)launchPenguin ;
-(void)releaseCatapult;

@end
