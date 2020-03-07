#include <stdio.h>
#include <stdlib.h>
/**
 * 通过指针变量根据不同的情况先后调用不同的函数
 * */
int main()
{
    int max(int a,int b);
    int min(int a,int b);
    
    int n1,n2,mod,res;
    int (*p)(int,int);        //定义指向函数的变量时，要记得形参类型表
    printf("Please enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("Please enter module(1/2):\n");
    scanf("%d",&mod);
    if (mod == 1)
    {
        p = max;
        res = (*p)(n1,n2);
        printf("maxium is %d\n",res);
    }else if (mod == 2)
    {
        p = min;
        res = (*p)(n1,n2); 
        printf("minium is %d\n",res);
    }
    system("pause");
    return 0;
}

int max(int a,int b)
{
    return a>b ? a : b;
}

int min(int a,int b)
{
    return a<b ? a : b;
}