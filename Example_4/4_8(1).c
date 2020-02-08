/**
 * 判断闰年的方法1：使用if的嵌套语句来实现
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, leap;     //闰年与否标志位
    printf("Please input a certain year:\n");
    scanf("%d",&year);
    if (year%4 == 0)
    {
         if (year%100 == 0)
         {
            if (year%400 == 0)
            {
                leap = 1;
            }else
            {
                leap = 0;
            } 
         }else
         {
             leap = 1;
         }     
    }else
    {
        leap = 0;
    }
    if (leap)
    {
        printf("The year is the leap year\n");
    }else
    {
        printf("Not the leap year\n");
    } 
    system("pause");
    return 0;
}