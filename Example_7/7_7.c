#include <stdio.h>
#include <stdlib.h>
/**
 * 递归法求n！
 * */
int step(int n);

int main()
{
    int n;
    printf("Please enter the order:\n");
    scanf("%d",&n);
    printf("The result is %d\n",step(n));
    system("pause");
    return 0;
}

/**
 * 阶乘函数递归实现
 * */
int step(int n)
{
    if(n == 1 || n == 0)          //回溯与递归的转折点
    {
        return 1;
    }else
    {
        return n*step(n - 1);   
    }
}