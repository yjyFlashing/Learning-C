#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 利用数组进行Fibonacci数列计算
 * */
int main()
{
    int num[20] = {1,1};
    int i;
    for ( i = 2; i < 20; i++)
    {
        num[i] = num[i-1]+num[i-2];
    }
    for (i = 0; i < 20; i++)
    {
        printf("%12d",num[i]);       //书上是先判断是否换行，再输出数字，这样会导致一开始就会产生一个换行
        if ((i+1)%5 == 0)
        {
            putchar('\n');
        }
        
    }
    
    system("pause");
    return 0;
}