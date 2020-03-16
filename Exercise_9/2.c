#include <stdio.h>
#include <stdlib.h>
/**
 * 利用结构体作为函数参数，解决第一题
 * */
struct Day{
    int year;
    int month;
    int day;
};
int main()
{
    int Days_counter(struct Day date);
    struct Day date1;
    printf("Please enter a date:\n");
    scanf("%d %d %d",&date1.year,&date1.month,&date1.day);
    printf("The days = %d\n",Days_counter(date1));
    system("pause");
    return 0;
}

int Days_counter(struct Day date)
{
    int day_1[12] = {31,28,31,30,31,30,31,31,30,31,30}; //平年天数表
    int day_2[12] = {31,29,31,30,31,30,31,31,30,31,30}; //闰年天数表

    int i,days = 0;
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
    return days;
}
