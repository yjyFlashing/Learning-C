/**
 * 判断闰年的方法3：使用逻辑表达式代替if语句实现
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;   
    printf("Please input the needed year:\n");
    scanf("%d",&year);
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf("The year is leap year");
    }else
    {
        printf("The year is not leap year");
    }
    system("pause");
    return 0;
}