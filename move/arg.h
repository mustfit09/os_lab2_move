//
//  arg.h
//  move
//
//  Created by kisses on 12-2-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef move_arg_h
#define move_arg_h
#include <stdlib.h>
char** doArg(int argc,const char* argv[])
{
    int i;
    if(argc < 2)
    {
        printf("您的参数不够呀\n");
        exit(0);
    }
    printf("您总共有%d个参数:\n",argc);
    for(i=0 ; i < argc ; i++)
    {
        printf("%s\n",argv[i]);
    }
    return argv;
}

#endif
