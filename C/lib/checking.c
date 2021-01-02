	//
//  checking.c
//  mycode
//
//  Created by najw on 2017/3/18.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "checking.h"
#define MIN 1
#define MAX 100000

bool is_good(long start,long end, long min, long max)
{
    if(start < end && (start > min && end < max))
        return true;
    return false;
}

long getlong()
{
    char ch;
    long input = 0;
    
    while((scanf("%ld",&input))!=1)
    {
        while((ch = getchar()!='\n'))
        {
            putchar(ch);
        }
        printf("entern a fail num to seq!\n");
    }
    
    return input;
}

long sum_squ(long start, long end)
{
    long sum = 0;
    
    for(long i = start; i < end ; i++)
    {
        sum += i * i;
    }
    return sum;
}

void n_checking()
{
    long start = 0;
    long end  = 0;
    long sum = 0;
    
    printf("please enter start num to seq:\n");
    
    start = getlong();
    
    printf("pease enter end num to seq:\n");
    
    end = getlong();
    
    if(is_good(start, end, MIN, MAX))
    {
        sum = sum_squ(start, end);
        printf("The result is :%ld\n",sum);
    }
    else
    {
        printf("The start or end num is not good \n");
    }
}
