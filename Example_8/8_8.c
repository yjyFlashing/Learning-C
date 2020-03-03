#include <stdio.h>
#include <stdlib.h>
/**
 * 将数组a中n个整数按照相反顺序存放
 * 我这里与书上不同，相当于书上的一个改版，书上是使用实参与形参都是数组
 * 我这里是实参为数组，形参为指针变量
 * */
int main()
{
    void input(int *num,int n);
    void ouput(int *num,int n);
    void convert_order(int *num,int n);

    int a[100],n;
    printf("How many number you needed:\n");
    scanf("%d",&n);
    input(a,n);
    convert_order(a,n);
    ouput(a,n);
    system("pause");
    return 0;
}

void input(int *num,int n)
{
    printf("Please enter %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",num++);      //操作地址，输入不用取址运算符&
    }
}

void ouput(int *num,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",*num++);           //输出这里记得加上指针运算符，否则输出的是存储地址
    }
    printf("\n");
}

void convert_order(int *num,int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = *(num+i);
        *(num+i) = *(num + n-1-i);
        *(num + n-1-i) = temp;
    }
}