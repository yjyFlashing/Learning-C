#include <stdio.h>

void Input_String(char str[])       //输入字符串
{
    printf("Please enter a string:\n");
    gets(str);      //这里只能用gets()，因为scanf()无法接收空格
}

void Delete_Char(char str[],char c)      //字符串中所有的目标字符都要删除
{
    int i = 0,j = 0;
    while (str[i] != '\0')      //删了一个后补齐，然后再向下找
    {
        if (str[i] == c)
        {
            for ( j = i; str[j] != '\0'; j++)
            {
                 str[j] = str[j+1];     //用下一个元素替换当前元素
            } 
        }
        i++;
    }  
}

void Output_String(char str[])  //输出字符串
{
    puts(str);
}