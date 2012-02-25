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
int readFile(char* path){return 1;}
int writeFile(char* path,int file){return 1;}
int deleteFile(char* path){return 1;}
int doMove(char* src,char* tar)
{
    int srcFile;
    srcFile = readFile(src);
    writeFile(tar,srcFile);
    deleteFile(src);
}

#endif
