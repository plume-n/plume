//
//  sort.c
//  mycode
//
//  Created by najw on 2019/6/23.
//  Copyright © 2019 najw. All rights reserved.
//

#include "sort.h"

void servSort( PCF_SERV_INFO arry[],int num)
{
    int i,j = 0;
    PCF_SERV_INFO tmp;
    
    if(!arry || num ==0)
    {
        return;
    }
    
    
    
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num - i; j++)
        {
            if(arry[j].bPri < arry[j+1].bPri)
            {
                tmp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = tmp;
            }
        }
    }
    
    for(i = 0; i< num; i++)
    {
        printf("arry[%d].type[%d]pri[%d]\n",i,arry[i].bType,arry[i].bPri);
    }
}
