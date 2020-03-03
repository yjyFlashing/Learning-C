#include <stdio.h>
#include <stdlib.h>
/**
 * 分别使用下标法和指针法输出数组中的元素
 * */
int main()
{
    void output_array_1(int a[]);       //下标法
    void output_array_2(int *a);        //指针法
    void output_array_3(int *a);        //地址偏移法

    int a[10];
    printf("Please enter 10 numbers into array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    output_array_1(a);
    output_array_2(a);
    output_array_3(a);
    system("pause");
    return 0;
}

void output_array_1(int a[])
{
    printf("The method 1 ouput:\n");    
    for (int i = 0; i < 10; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
}

void output_array_2(int *a)
{
    printf("The method 2 output:\n");
    for (int i = 0;i < 10;i++)
    {
        printf("%5d",*(a+i));
    }
    printf("\n");    
}

void output_array_3(int *a)
{
    printf("The method 3 output:\n");
    int *p;
    for ( p = a; p < a+10; p++)     //说明地址从直观上其实也是一个数值，输出即使用这么个数值来寻址
    {
        printf("%5d",*p);
    }
    printf("\n");
}