//
//  fun.c
//  mycode
//
//  Created by najw on 2017/3/19.
//  Copyright © 2017年 najw. All rights reserved.
//

#include <stdio.h>


int n_min(int a, int b)
{
    return a < b ? a : b;
}
	
void up_and_down(int n)
{
    printf("level %d: n location %p\n",n,&n);
    if(n < 6)
        up_and_down(n+1);
    printf("LEVEL %d: n location %p\n",n,&n);
}
