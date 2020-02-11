#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 输出菱形图案（原版）
 * */
int main()
{
    int i,j,k;
    for (i = 0; i <= 3; i++)
    {
        for(j = 0;j <= 2-i;j++)
        {
            putchar(' ');
        }        
        for(k = 0;k <= 2*i;k++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    for(i = 0;i <= 2;i++)
    {
        for(j = 0;j <= i;j++)
        {
            putchar(' ');
        }
        for(k = 0;k <= 4-2*i;k++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    system("pause");
    return 0;
}