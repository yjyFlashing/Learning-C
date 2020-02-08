/**
 * 判断闰年的方法4：使用逻辑类型布尔型定义leap，进行判断
 * */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>        //使用了bool型，因此一定要加上这个头文件

int main()
{
    int year;     
    bool leap;//闰年与否标志位
    printf("Please input a certain year:\n");
    scanf("%d",&year);
    if (year%4!=0)
    {
        leap = false;
    }else if(year%100!=0){
        leap = true;
    }else if(year%400!=0){
        leap = false;
    }else
    {
        leap = true;
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