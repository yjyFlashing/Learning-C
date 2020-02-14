#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 检测一行字符中，单词的数量
 * */
int main()
{
    char buf[100];
    int flag = 1,num = 0;       //单词结束标志位,将flag置1，有利于统计第一个字符
    int i = 0;
    gets(buf);
    while(buf[i] != '\0')       //判断字符结束标志
    {
        if(buf[i] == ' ') flag = 1;     //flag=1，则说明前一个字符是空格
        if(buf[i] != ' '&& flag == 1) 
        {
            flag = 0;   //清除标志位
            num++;
        }
        i++;
    }
    printf("The word numbers are :%d\n",num);
    system("pause");
    return 0;
}