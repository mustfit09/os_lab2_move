//
//  File.c
//  move
//
//  Created by kisses on 26/2/12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "file.h"
#include <sys/stat.h>
#include <unistd.h>

char* getName(const char* path)
{
    char* name = strrchr(path,'/');
    name = name + 1;
    return name;
}
char* getPath(const char* path)
{
    char filePath[256];
    char* name = getName(path);
    int sizeOfName = strlen(name);
    int sizeOfString = strlen(path);
    int sizeOfPath = sizeOfString - sizeOfName;
    strncpy(filePath,path,(sizeOfPath));
    filePath[sizeOfPath] = '\0';
    return filePath;
}
int doFile(char* path,char* src)
{
    printf("请问您是否需要创建\n");
    return 1;
}
int doCover(char* path,char* src)
{
    char yes;
    printf("是否覆盖该该文件?Y/N?\n");
    scanf("%c",&yes);
    if (yes)
    {
        return 1;
    }
    else
    {
        char* name;
        printf("请输入新的文件名称：\n");
        scanf("%s",&name);
        char* newPath; //这里需要处理一下string
        ensureTar(newPath,src);
    }
    return 1;
}
int isDir(char* path)
{
    struct stat buf;
    if (lstat(path, &buf) < 0)
    {
        printf("获取路径失败\n");
        return -1;
    }
    if (S_ISDIR(buf.st_mode)) 
    {
        printf("这是一个文件夹\n");
        return 1;
    }
    printf("这是一个文件\n");
    return 0;
}
int checkPath(char* path)
{
    if (access(path,F_OK)!=0)
    {
        printf("您的路径不存在 checkPath by access\n");
        return 0;
    }
    printf("您的路径存在！\n");
    return 1;
}
int ensureSrc(char* path)
{
    if(!checkPath(path))
        return 0;
    if(isDir(path))
        return 0;
    return 1;
}

int ensureTar(char* path,char* src)
{
    if(!checkPath(path))
        //doCover(path,src);
        return 0;
    if(isDir(path))
        //doFile(path,src);
        return 0;
    return 1;
}