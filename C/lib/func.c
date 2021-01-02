//
//  func.c
//  mycode
//
//  Created by najw on 2019/11/17.
//  Copyright © 2019 najw. All rights reserved.
//

#include "func.h"
void sumtest()
{
    int i = 1,sum = 0;
    
    while(i <= 100)
    {
        i++;
        sum += i;
    }
    
    printf("sum = %d\n",sum);
}


void test1()
{
    int count = 0;
    int sum = 0;
    for(sum = 0; sum < 500; sum += count)
    {
        scanf("%d",&count);
    }
    printf("the sum is %d\n",sum);
}

void test3()
{
    int i,j=0;
    int num = 0;
    
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            num = i*j;
            printf("%d * %d = %d\n",i,j,num);
        }
    }
}

void test5()
{
    int i=0;
    for(i=0;i<=100;i++)
    {
        if(i%5==0)
        {
            printf("100被5整除的数：%d\n",i);
        }
    }
}

void test6()
{
    char tmp[100];
    
    memset(tmp,0,sizeof(tmp));
    
    printf("the string tmp sizeof is %d\n",sizeof(tmp));
    
    printf("please input the string \n");
    scanf("%s", &tmp);
    printf("the string size is %d\n",strlen(tmp));
    printf("the string is %s\n",(char*)tmp);
    for(int i=0;i<strlen(tmp);i++)
    {
        printf("tmp[%d] is :%c\n",i,tmp[i]);
    }
}
