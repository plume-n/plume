//
//  nstring.c
//  mycode
//
//  Created by najw on 2017/4/2.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "nstring.h"
#include "string.h"

#define NSTRING_TEST "this is a test!"

void n_string_test()
{
    char nstring[] = "this is a string in arry!";
    const char* pt = "this is a string whitch a point!";
    
    puts(NSTRING_TEST);
    puts(nstring);
    puts(pt);
}


void n_string_addr()
{
    char ar[] = NSTRING_TEST;
    
    const char *pt = NSTRING_TEST;
    
    printf("addr of msg :%p\n",NSTRING_TEST);
    printf("addr of ar  :%p\n",ar);
    printf("addr of pt  :%p\n",pt);
    printf("addr of sou :%p\n","this is a test!");
}

void n_string_puts()
{
    char word[100];
    
    gets(word);
    puts(word);
}

void n_string_fgets()
{
    char word[100];
    
    fgets(word,100,stdin);
    fputs(word,stdout);
    
}

void n_string_fgets_1()
{
    char words[10];
    
    puts("enter strings :");
    
    while(fgets(words,10,stdin)!= NULL && words[0]!= '\n')
        fputs(words,stdout);
    puts("done!");
}


char * n_gets(char *str , int n)
{
    char *pt = NULL;
    int i=0;
    
    if(NULL == str)
    {
        return NULL;
    }
    
    pt = fgets(str,n,stdin);
    if(NULL == pt)
    {
        return NULL;
    }
    
    while(str[i] != '\n' && str[i] != '\0')
        i++;
    if(str[i] == '\n')
        str[i] = '\0';
    else
    {//把结束符后的字符丢弃，以免占用缓冲区
        while(getchar() != '\n')
            continue;
    }
    
    return pt;
}

//通过strcmp查询字符串
void n_strsrch()
{
    int count = 0;
    const char *str[6] = {
    "abcd","abce","test",
    "ukown","word5","abdfe"
    };
    
    for(int i = 0; i < 6; i++)
    {
        if(strncmp(str[i],"abc",3)==0)
        {
            printf("found %s\n",str[i]);
            count++;
        }
    }
    printf("auto find %d count abc in string \n",count);
}

void n_stsrt(char *ptstr[], int count)
{
    int i,j = 0;
    char *tmp;
    
    if(ptstr == NULL)
        return ;
    
    for(i = 0; i < count - 1; i++)
        for(j = i + 1; j < count; j++)
            if(strcmp(ptstr[i],ptstr[j]) > 0)
            {
                tmp = ptstr[i];
                ptstr[i] = ptstr[j];
                ptstr[j] = tmp;
            }
}

#define STR_SIZE 80
#define STR_LINE 20

void n_string_test_pro()
{
    char str_input[STR_LINE][STR_SIZE];
    char *ptr[STR_LINE];
    int iCnt = 0;
    
    printf("please enter the string to sqr!\n");
    while(iCnt < STR_LINE
          && n_gets(str_input[iCnt],STR_SIZE)!= NULL
          && str_input[iCnt][0] != '\0')
    {
        ptr[iCnt] = str_input[iCnt];
        iCnt++;
    }
    
    n_stsrt(ptr,iCnt);
    puts("\n here is the sorted list :\n");
    
    for(int i=0; i< iCnt; i++)
        puts(ptr[i]);
    puts("\n");
}
