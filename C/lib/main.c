//
//  main.c
//  mycode
//
//  Created by najw on 2017/3/10.
//  Copyright © 2017年 najw. All rights reserved.
//

#include <stdio.h>
#include "wordcnt.h"
#include "file.h"
#include "checking.h"
#include "binary.h"
#include "array.h"
#include "nstring.h"
#include "sort.h"
#include "func.h"

int n_min(int,int);
void up_and_down(int);

int g_init = 1;
int g_no_init;
//static int g_static_init=2;
//static int g_static_no_init;

int main(int argc, const char * argv[])
{
    #if 0
    int g_init =1;
    int g_no_init=1;
    static int g_static_init=2;
    static int g_static_no_init;
    
    printf("g_init:vale=%d,addr=%p\n",g_init,&g_init);
    printf("g_no_init:vale=%d,addr=%p\n",g_no_init,&g_no_init);
    printf("g_static_init:vale=%d,addr=%p\n",g_static_init,&g_static_init);
    printf("g_static_no_init:vale=%d,addr=%p\n",g_static_no_init,&g_static_no_init);
    
    printf("local_g_init:vale=%d,addr=%p\n",g_init,&g_init);
    printf("local_g_no_init:vale=%d,addr=%p\n",g_no_init,&g_no_init);
    printf("local_g_static_init:vale=%d,addr=%p\n",g_static_init,&g_static_init);
    printf("local_g_static_no_init:vale=%d,addr=%p\n",g_static_no_init,&g_static_no_init);
//    insert code here...
//    printf("Hello, World!\n");
//    n_sizeoftype();	
    
//    n_WordCnt();
//    n_scanf();
//    n_echo();
//    n_file_echo();
//    n_showchar();
//    n_checking();
//    printf("the min:%d\n",n_min(3.0,2.0));
//    up_and_down(1);
//    n_bin();
//    n_dis_sum();
//    n_zipp();
//    n_sum_dis();
//    n_string_test();
//    n_string_addr();
//    n_string_puts();
//    n_string_fgets();
//    n_string_fgets_1();
//    n_strsrch();
//    n_string_test_pro();

    PCF_SERV_INFO tServlist[5] =
    {
        {1,1},
        {2,2},
        {3,3},
        {4,4},
        {5,5}
    };
    
    servSort(tServlist,sizeof(tServlist)/sizeof(PCF_SERV_INFO));
    

    double i=150;
#define testnum 80
    
    int j = i/100*testnum;
    printf("the test cout = %d\n",j);
    
    int test_a = 60;
    
    printf("%#X\n",test_a);
#endif
    
    test6();
    return 0;
}
