#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 在不用strcat()函数的情况下，连接两个字符串
 * */
int main()
{
    char str1[80],str2[80];
    char str[160];
    int i,j,n;
    puts("Please enter the first string:");   //puts()函数自带换行
    /**
     * scanf("%s",str1)和gets(str1)均可，但两者要避免混合使用:
     * 当scanf()在前，gets()在后时:
     * scanf(..);输入字符按下回车键后，gets()函数会把回车键当做输入的字符。所以在执行gets()前要把回车过滤掉！！
     **/
    gets(str1);    
    puts("Please enter the second string:");
    gets(str2);
    for(i = 0;i < strlen(str1);i++)     //先复制第一个字符串中的内容
    {
        str[i] = str1[i];   
    }        
    for(j = strlen(str1),n = 0;j < strlen(str1)+strlen(str2);j++,n++)
    {
        str[j] = str2[n];
    }
    str[strlen(str1) + strlen(str2)] = '\0';
    puts("The multipied string is :");
    puts(str);
    system("pause");
    return 0;
}