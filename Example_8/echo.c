#include <stdio.h>
#include <stdlib.h>
/**
 * echo测试 
 * 程序变量需要在launch.json中的args[]添加命令行参数
 * */
int main(int argc,char *args[])
{
    while(--argc > 0)
    {
        printf("%s%c",*++args,(argc>1)?' ':'\n');
    }
    system("pause");
    return 0;
}