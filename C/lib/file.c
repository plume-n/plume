//
//  file.c
//  mycode
//
//  Created by najw on 2017/3/18.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "file.h"

void n_file_echo(){

    char ch;
    FILE *fp = NULL;
    char filename[50];
    
    printf("please enter the file which u want to read:\n");
    if(1 ==scanf("%s",filename))
    {
        fp = fopen(filename,"r");
        if(NULL == fp)
        {
            return ;
        }
        while((ch = fgetc(fp))!= EOF)
        {
            putchar(ch);
        }
        fclose(fp);
    }
    
}

void n_showchar()
{
    char ch;
    int rows,cols;
    int i=0;
    char p;
    
    printf("pelase enter a char and tow int:\n");
    while((ch = getchar())!= '\n')
    {
        if(scanf("%d %d",&rows , &cols)!=2)
        {
            break;
        }
        
        for(i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                putchar(ch);
            }
            printf("\n");
        }
        while((p=getchar()) != '\n') {
            continue;
        }
        printf("enter another char and tow int;\n");
        printf("enter a newline to quit.\n");
    }
    
    printf("byte!\n");
}
