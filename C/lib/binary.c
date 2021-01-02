//
//  binary.c
//  mycode
//
//  Created by najw on 2017/3/19.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "binary.h"

void to_bin(unsigned long n)
{
    int result = 0;
    
    result = n % 2;
    if(n >= 2)
        to_bin(n/2);
    putchar((result == 0)? '0' : '1');
}

void n_bin()
{
    unsigned long n = 0;
    
    printf("pelase enter a integer (q to quit):\n");
    
    while(scanf("%lu", &n) == 1)
    {
        to_bin(n);
        putchar('\n');
        printf("please enter a integer (q to quit):\n");
    }
    printf("Bye!\n");
}
