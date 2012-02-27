//
//  move.h
//  move
//
//  Created by kisses on 12-2-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef move_move_h
#define move_move_h

#include <fcntl.h>
int readFile(char* path,char* buffer);
int writeFile(char* path,int file);
int deleteFile(char* path);
int doMove(char* src,char* tar);

#endif
