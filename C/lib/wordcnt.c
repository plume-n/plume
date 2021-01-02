//
//  wordcnt.c
//  mycode
//
//  Created by najw on 2017/3/14.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "wordcnt.h"
#include "ctype.h"
#include "stdbool.h"
#include "stdio.h"

#define STOP '`'

void n_WordCnt()
{
    char ch;
    char preCh = '\n';
    long l_charNum = 0;
    int i_lineNum = 0;
    int i_wordNum = 0;
    int i_pline = 0;
    bool isInWord = false;
    
    //printf("n_line[%d],n_word[%d],n_pline[%d]\n",i_lineNum,i_wordNum,i_pline);
    printf("please input the test word for analyzed !(` to quit)\n");
    
    while((ch = getchar()) != STOP)
    {
        l_charNum++;
        
        if(ch == '\n')
        {
            i_lineNum++;
        }
        //cnt word
        if(!isspace(ch) && !isInWord)
        {
            isInWord = true;
            i_wordNum++;
        }
        
        if(isspace(ch) && isInWord)
        {
            isInWord = false;
        }
        
        preCh = ch;
    }
    
    if(preCh != '\n')
    {
        i_pline++;
    }
    
    printf("The cnt for the text is : l_char[%ld],n_word[%d],n_line[%d],n_pline[%d]\n",l_charNum,i_wordNum,i_lineNum,i_pline);
    
    return;
}

void n_scanf()
{
    int width = 0;
    int leng = 0;
    while(2 == scanf("%d %d",&width,&leng))
    {
        printf("input width:%d, leng:%d\n",width,leng);
    }
}


void n_echo()
{
    char ch;
    
    while((ch = getchar())!= EOF)
    {
        putchar(ch);
    }
}

void n_sizeoftype()
{
    int *p;
    int *p1[1];
    int i;
    int a[3];
    char (*p2)[1];
    int *(*p3)[10];
    
    printf("int *p sizeof :%lu\n",sizeof(p));
    printf("int *p[] sizeof :%lu\n",sizeof(p1));
    printf("int sizeof :%lu\n",sizeof(i));
    printf("int a[] sizeof :%lu\n",sizeof(a));
    printf("char (*p)[] sizeof :%lu\n",sizeof(p2));
    printf("int *(*p)a[] sizeof :%lu\n",sizeof(*p3));
}
