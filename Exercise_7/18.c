#include <stdio.h>
#include <stdlib.h>
/**
 * FIXME:给出年月日，计算这是一年中的第几天(程序还可以继续优化)
 * */
int main()
{
    int Figure_days(int year,int month,int day);

    int a,b,c,sum;
    printf("Please enter year ,month and day:\n");
    scanf("%d %d %d",&a,&b,&c);
    sum = Figure_days(a,b,c);
    printf("The summary of the days is %d\n",sum);
    system("pause");
    return 0;
}

int Figure_days(int year,int month,int day)
{
    int leap_year(int m,int d);        //闰年计算方法
    int common_year(int m,int d);      //平年计算方法

    int result;
    if(year%4 == 0 && year%100 != 0)        //闰年
    {
        if(month == 2 && day > 29)
        {
            printf("Not a right day\n");   
            return 0;             
        }else
        {
            return leap_year(month,day);
        }
    }else
    {
        if (month == 2 && day > 28)
        {
            printf("Not a right day\n");
            return 0;
        }else
        {
            return common_year(month,day);
        }
    }
}

int leap_year(int m,int d)        //闰年计算方法
{
    int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0,i;
    for ( i = 0; i < m-1; i++)
    {
        sum += months[i];
    }
    return sum+d;
}

int common_year(int m,int d)      //平年计算方法
{
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sum = 0,i;
    for ( i = 0; i < m-1; i++)
    {
        sum += months[i];
    }
    return sum+d;
}