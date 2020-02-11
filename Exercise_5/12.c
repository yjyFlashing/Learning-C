#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 猴子吃桃问题
 * */
int main()
{
    int i,num = 1;
    for (i = 0; i < 9; i++)     //到第十天只用加九次
    {
        num = (num+1)*2;
    }
    printf("The summary of the peaches is %d",num);
    system("pause");
    return 0;
}