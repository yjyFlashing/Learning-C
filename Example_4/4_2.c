#include <stdio.h>
#include <stdlib.h>
/**
 * 实现两数从小到大排序
 * */
int main()
{
    float  a,b,temp;    //temp为缓存变量
    printf("Please input the two number:\n");
    scanf("%f %f",&a,&b);
    if (a>b)
    {
        temp = a;
        a = b;
        b = temp;
        printf("%6.2f %6.2f",a,b);
    }
    else
    {
        printf("%6.2f %6.2f",a,b);
    }
    system("pause");
    return 0;
}