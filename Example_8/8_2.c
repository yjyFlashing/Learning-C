#include <stdio.h>
#include <stdlib.h>
/**
 * 交换两个指针变量的值
 * */
int main()
{
    int *p1,*p2,*p_temp,a,b;
    printf("Please enter a and b:\n");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a < b)       //交换地址 
    {
        p_temp = p1;
        p1 = p2;
        p2 = p_temp;
    }
    printf("a = %d,b = %d\n",a,b);
    printf("max = %d,min = %d\n",*p1,*p2);
    system("pause");
    return 0;
}