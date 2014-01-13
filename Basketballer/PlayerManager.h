//
//  PlayerManager.h
//  Basketballer
//
//  Created by Liu Wanwei on 12-8-6.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "BaseManager.h"
#import "Player.h"

#define kPlayerEntity               @"Player"
#define kPlayerChangedNotification  @"PlayerChanged"

@interface PlayerManager : BaseManager

//@property (nonatomic, strong) NSMutableArray * players;

+ (PlayerManager *)defaultManager;
- (NSArray *)playersForTeam:(NSNumber *)teamId;

- (Player *)addPlayerForTeam:(NSNumber *)teamId withNumber:(NSNumber *)number withName:(NSString *)name;
- (BOOL)deletePlayer:(Player *)player;
- (Player *)updatePlayer:(Player *)player withNumber:(NSNumber *)number andName:(NSString *)name;
- (Player *)playerWithId:(NSNumber *)id;
//- (BOOL)deletePlayerWithNumber:(NSInteger)number;

@end