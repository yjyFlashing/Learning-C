#include <stdio.h>
#include <stdlib.h>
/**
 * 输出1~5的阶乘(使用局部静态变量)
 * */
int main()
{   
    int mul(int);
    int i,n;
    printf("Please enter the number you needed:\n");
    scanf("%d",&n);
    for ( i = 1; i <= n ; i++)
    {
        printf("The %d's result is %d\n",i,mul(i));
    }
    system("pause");
    return 0;
}

int mul(int n)      //使用局部静态变量进行阶乘
{
    static int res = 1;
    return res = res*n;         //写完程序记得检查
}