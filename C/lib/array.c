//
//  array.c
//  mycode
//
//  Created by najw on 2017/3/22.
//  Copyright © 2017年 najw. All rights reserved.
//

#include "array.h"

int n_sum(int a[], int count)
{
    if (NULL == a)
        return 0;

    int total = 0;

    for (int i = 0; i < count; i++)
        total += a[i];

    return total;
}

void n_dis_sum()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6};

    printf("the sum is :%d\n", n_sum(a, 10));
}

int n_sum_1(const int ar[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += ar[i];
    }
    return total;
}

void n_zipp()
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

    printf("zippo :%p\n", zippo);
    printf("&zippo:%p\n", &zippo);
    printf("zippo[0]:%p\n", zippo[0]);
    printf("zippo[0][0]:%p\n", &zippo[0][0]);
    printf("*zippo:%p\n", *zippo);
    printf("*zipp[0]:%d\n", *zippo[0]);
    printf("zipp+1:%p\n", zippo + 1);
    printf("zipp[1][0]:%p\n", &zippo[1][0]);
    printf("*(*zippo+1):%d\n", *(*zippo + 1));
    printf("*(*(zippo+1)):%d\n", *(*(zippo + 1)));

    int(*pt)[2] = zippo;
    printf("*pt:%p\n", *pt);
    printf("**pt:%d\n", **pt);
}

#define ROWS 3
#define COLS 4

void n_sum_row(int a[][COLS], int rows)
{
    int i, j = 0;
    int total = 0;
    for (i = 0; i < rows; i++)
    {
        total = 0;
        for (j = 0; j < COLS; j++)
        {
            total += a[i][j];
        }
        printf("row %d sum is :%d\n", i, total);
    }
}

void n_sum_col(int a[][COLS], int rows)
{
    int i, j = 0;
    int total = 0;

    for (i = 0; i < COLS; i++)
    {
        total = 0;
        for (j = 0; j < rows; j++)
        {
            total += a[j][i];
        }
        printf("cols %d sum is :%d\n", i, total);
    }
}

void n_sum_all(int (*pt)[COLS], int rows)
{
    int i, j = 0;
    int total = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            total += *(*(pt + i) + j);
        }
    }
    printf("sum all is:%d\n", total);
}

void test(int a, int b, int ar[a][b])
{
    int *pt;
    pt = (int[]){10, 20};
    printf("pt:%d\n", *pt);
}

void n_sum_dis()
{
    int a[ROWS][COLS] =
        {
            {2, 4, 6, 8},
            {3, 5, 7, 9},
            {12, 10, 8, 6}};
    n_sum_row(a, ROWS);
    n_sum_col(a, ROWS);
    n_sum_all(a, ROWS);
    //test();
}
