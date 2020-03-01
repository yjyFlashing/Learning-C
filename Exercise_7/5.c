#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 将一个字符串反序存放
 * */
int main()
{
    char str[100];
    void Revert_order(char str[]);
    printf("Please enter a string:\n");
    gets(str);
    printf("The original string is :\n");
    puts(str);
    Revert_order(str);
    printf("The changed string is :\n");
    puts(str);
    system("pause");
    return 0;
}

void Revert_order(char str[])
{
    char temp;
    int i;
    int len = strlen(str);      //获取字符串长度
    for ( i = 0; i < len/2; i++)       //注：遇到这种颠倒序号的一类题目，只用进行总数据量的一半即可
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}