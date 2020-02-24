#include <stdio.h>
#include <stdlib.h>
/**
 * 静态变量在函数调用结束后，其值不会消失而是继续保留原值
 * */
int main()
{   
    int f(int a);
    int a = 2;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",f(a));
    }
    
    system("pause");
    return 0;
}

int f(int a)
{
    int b = 0;
    static int c = 3;
    b++;
    c++;
    return a+b+c;
}