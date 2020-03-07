#include <stdio.h>
#include <stdlib.h>
/**
 * 改变指针变量的值,控制字符串的部分输出 
 * */
int main()
{
    char *a = "I love China!";
    a = a+7;
    printf("%s\n",a);
    system("pause");
    return 0;
}