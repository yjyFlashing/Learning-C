#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 依次进行赋值，并按照逆序进行输出
 * */
int main()
{
    int a[10];
    int i;
    for(i = 0;i < 10;i++)       //依次赋值
    {
        a[i] = i;
    }
    for(i = 9;i >= 0;i--)   //逆序输出
    {
        printf("%d",a[i]);
    }
    system("pause");
    return 0;
}