/**
 * 判断闰年的方法2：使用if···else if···实现多分支判断
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, leap;     //闰年与否标志位
    printf("Please input a certain year:\n");
    scanf("%d",&year);
    if (year%4!=0)
    {
        leap = 0;
    }else if(year%100!=0){
        leap = 1;
    }else if(year%400!=0){
        leap = 0;
    }else
    {
        leap = 1;
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