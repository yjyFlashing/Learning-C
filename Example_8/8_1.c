#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指针变量访问整型变量
 * */
int main()
{
    int a = 100,b = 10;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    printf("a = %d,b = %d\n",a,b);
    printf("pointer1 = %d,pointer2 = %d\n",*p1,*p2);
    system("pause");
    return 0;
}