#include <stdio.h>
#include <stdlib.h>
/**
 * 通过字符指针变量输出一个字符串
 * */
int main()
{
    char *str = "I love China!";        //valid in C, invalid in C++
    printf("%s\n",str);
    system("pause");
    return 0;
}