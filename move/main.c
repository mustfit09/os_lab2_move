//
//  main.c
//  move
//
//  Created by kisses on 12-2-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "arg.h"
#include "file.h"
#include "move.h"
#include <errno.h>
int main (int argc, const char * argv[])
{
    char* src;
    char* tar;
    //char* test_argv[] = {"/Users/kisses/msm.txt","/Users/kisses/backup/"};
    char** cp_argv;
    //cp_argv = doArg(2,test_argv);
    cp_argv = doArg(argc,argv);
    src = cp_argv[1];
    tar = cp_argv[2];
    
    ensureSrc(src);
    ensureTar(tar,src);
    
    doMove(src,tar);
    return 0;
}

