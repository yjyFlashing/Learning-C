#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 数组实现4位数字，输出4个数字字符（向数组中插入空格）
 * */
int main()
{
    void insert_space(char str[]);

    char str[80];
    printf("Please enter four digits:\n");
    gets(str);
    insert_space(str);
    printf("The result is:\n");
    puts(str);
    system("pause");
    return 0;
}

void insert_space(char str[])
{
    int i;
    for(i = strlen(str) ; i > 0 ;i--)     //注意下这个方法来使得数据之间产生间隔,使用倒数可以不影响原本数组中的元素
    {
        str[2*i] = str[i];      
        str[2*i-1] = ' ';
    }
}