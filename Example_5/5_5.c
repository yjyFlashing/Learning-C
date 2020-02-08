#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 100;i<=200;i++)     //循环控制变量的定义和赋值可以一起放在表达式1中
    {
        if(i%3 == 0) continue;
        printf("%d   ",i);
    }
    system("pause");
    return 0;
}
