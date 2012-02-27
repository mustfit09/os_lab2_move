//
//  move.c
//  move
//
//  Created by kisses on 26/2/12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include "move.h"
#include <errno.h>
int readFile(char* path,char* buffer)
{
    int fd;
    fd = open(path, O_RDONLY);
    printf("%s的文件描述符为%d\n",path,fd);
    return fd;
}

int writeFile(char* path,int file)
{
    int fd;
    fd = open(path, O_WRONLY);
    printf("%s的文件描述符为%d\n",path,fd);
    return fd;
}

int deleteFile(char* path)
{
    return 1;
}

int doMove(char* src,char* tar)
{ 
    /*
    int srcFile;
    char* buffer;
    srcFile = readFile(src,buffer);
    writeFile(tar,srcFile);
    deleteFile(src);
    */
    rename(src, tar);
    if(errno != 22)
    {
        perror("move has a error：");
        return 1;
    }
    return 0;
}