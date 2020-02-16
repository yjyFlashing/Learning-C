#include <stdio.h>
#include <stdlib.h>
/**
 * 将数组中的数字进行逆序排列(不是要比大小)
 * */
int main()
{
    int a[5] = {8,6,5,4,1};
    int i,temp;
    for ( i = 0; i < 2; i++)    //对于奇数个数5进行2轮与进行3轮效果一样
    {
        temp = a[5-(i+1)];
        a[5-(i+1)] = a[i];
        a[i] = temp;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}