#include <stdio.h>
#include <stdlib.h>
/**
 * 输出指定图案
 * */
int main()
{
    char a[5] = {'*','*','*','*','*'};
    int i,j,n;
    for(i = 0;i < 5;i++)
    {
        for ( n = 0; n < i; n++)    //控制空格输出
        {
            printf(" ");
        }
        for ( j = 0; j < 5; j++)    //控制字符输出
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}