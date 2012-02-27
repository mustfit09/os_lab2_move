//
//  file.h
//  move
//
//  Created by kisses on 12-2-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef move_file_h
#define move_file_h
#include <fcntl.h>

int doFile(char* path,char* src);
int doCover(char* path,char* src);

//判断路径是否是文件夹
int isDir(char* path);
//判断路径是否存在
int checkPath(char* path);
//确保源文件
int ensureSrc(char* path);
//确保目标文件
int ensureTar(char* path,char* src);
//获得文件名
char* getName(const char* path);
//获取文件路径
char* getPath(const char* path);
#endif
