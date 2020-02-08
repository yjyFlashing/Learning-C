#include <stdio.h>
#include <stdlib.h>

/**
 * 实现三数从小到大排序
 * */
int main()
{
    float a,b,c,temp;
    printf("Please input the two number:\n");
    scanf("%f %f %f",&a,&b,&c);   
    /**
     * 先要将a赋值为最小的那个数，再让剩下的两个数进行比较大小
     * */
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%6.2f < %6.2f < %6.2f",a,b,c);
    system("pause");
    return 0;
}