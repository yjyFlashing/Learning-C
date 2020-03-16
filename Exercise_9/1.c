#include <stdio.h>
#include <stdlib.h>
/**
 * 定义一个结构体变量（包括年月日），计算天数
 * */
int main()
{
    int day_1[12] = {31,28,31,30,31,30,31,31,30,31,30}; //平年
    int day_2[12] = {31,29,31,30,31,30,31,31,30,31,30}; //闰年
    struct Time{
        int year;
        int month;
        int day;
    };
    struct Time date;
    int i,days = 0;
    printf("Please enter a date:\n");
    scanf("%d %d %d",&date.year,&date.month,&date.day);
    if (date.year % 4 == 0 && date.year%100 != 0)   //闰年
    {
        for ( i = 0; i < date.month-1; i++)
        {
            days += day_2[i];   //当月之前月份的天数
        }
        days += date.day;       //当月天数
    }else   //平年
    {
        for ( i = 0; i < date.month-1; i++)
        {
            days += day_1[i];
        }
        days += date.day; 
    }
    printf("The total days = %d\n",days);
    system("pause");
    return 0;
}