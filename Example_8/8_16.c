#include <stdio.h>
#include <stdlib.h>
/**
 * 用%s格式输出整个字符串
 * 用%c输出字符串中的某一个元素
 * */
int main()
{
    char str[] = "I love China";
    printf("%s\n",str);
    printf("%c\n",str[7]);
    system("pause");
    return 0;
}