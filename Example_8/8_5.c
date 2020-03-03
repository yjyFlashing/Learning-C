#include <stdio.h>
#include <stdlib.h>
/**
 * 结合指针，利用函数来实现3个整数的从大到小排序
 * */
int main()
{
    void sort_number(int *num1,int *num2,int *num3);

    int a,b,c;
    printf("Please enter 3 integers:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Original order:%d %d %d\n",a,b,c);
    sort_number(&a,&b,&c);
    printf("Recent order:%d %d %d\n",a,b,c);
    system("pause");
    return 0;
}

void sort_number(int *num1,int *num2,int *num3)
{
    int temp;
    if( *num1 < *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if(*num1 < *num3)
    {
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }
    if(*num2 < *num3)
    {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
}