#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 输出菱形图案(升级版)
 * */
int main()
{
    int count,i,j;
    printf("Please enter the odd number:\n");       //菱形仅支持奇数
    scanf("%d",&count);
    for (i = 1; i <= count/2 + 1; i++)  //控制菱形上方部分
    {
        for (j = 0; j < (count+1)/2 - i; j++)       //控制空格
        {
            putchar(' ');
        }
        for (j = 0; j < (2*i-1); j++)   //  控制 *
        {
            putchar('*');
        }
        putchar('\n');
    }
    for (i = 1; i <= count/2; i++)  //控制菱形下方部分
    {
        for (j = 0; j < i; j++)
        {
            putchar(' ');
        }
        for (j = 0; j < count - 2*i ; j++)
        {
            putchar('*');
        }  
        putchar('\n'); 
    }
    system("pause");
    return 0;
}