#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指向函数的指针做函数参数
 * */
int main()
{
    void res_print(int a,int b,int (*p)(int,int));
    int max(int a,int b);        //返回最大值
    int min(int a,int b);       //返回最小值
    int sum(int a,int b);

    int n1,n2,mod;
    printf("Please enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("Please set the modol:\n");
    scanf("%d",&mod);
    if(mod == 1)    res_print(n1,n2,max);
    if(mod == 2)    res_print(n1,n2,min);  
    if(mod == 3)    res_print(n1,n2,sum);
    system("pause");
    return 0;
}

void res_print(int a,int b,int (*p)(int,int))
{
    int res;
    res = (*p)(a,b);
    printf("The result is %d\n",res);
}

int max(int a,int b)        //返回最大值
{
    return a > b ? a : b;
}

int min(int a,int b)        //返回最小值
{
    return a < b ? a : b;
}

int sum(int a,int b)
{
    return a+b;
}

