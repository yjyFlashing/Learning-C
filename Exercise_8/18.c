#include <stdio.h>
#include <stdlib.h>
/**
 * 月份号转换为英文
 * */
int main()
{
    int month;
    char *p[12] = {     //指针数组实现
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    printf("Please enter the month number:\n");
    scanf("%d",&month);
    printf("%s\n",p[month-1]);
    system("pause");
    return 0;
}