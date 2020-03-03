#include <stdio.h>
#include <stdlib.h>
/**
 * 改写例8.8，将实参和形参都改成指针变量
 * */
int main()
{
    void input(int *num,int n);
    void ouput(int *num,int n);
    void convert_order(int *num,int n);

    int a[100],n,*p;
    printf("How many number you needed:\n");
    scanf("%d",&n);
    p = a;
    input(p,n);
    convert_order(p,n);
    ouput(p,n);
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