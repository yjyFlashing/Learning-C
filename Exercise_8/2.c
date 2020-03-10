#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 输入3个字符串，按照由小到大顺序输出
 * */
int main()
{
    void sort_string(char (*str)[100]);
    int i;
    char str[3][100];
    printf("Please enter 3 string:\n");     //输入字符串
    for ( i = 0; i < 3; i++)
    {
        gets(str[i]);       //这里不能用scanf+%s,因为scanf不能输入带空格的字符串
    }
    sort_string(str);
    printf("The recent order:\n");      //输出字符串
    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",str[i]);
    }
    system("pause");
    return 0;
}
//对字符串进行排序
void sort_string(char (*str)[100])
{
    char temp[100];
    int i,j;
    for(i = 0;i < 3;i++)        //选择排序法
    {
        for ( j = i+1; j < 3; j++)
        {
            if(strcmp(str[i],str[j]) > 0)
            {
                strcpy(temp,str[i]);        //C语言中没有字符串变量，字符串的相互赋值要借助strcpy()函数
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
