#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 在不用strcpy()的情况下，进行字符串复制
 * */
int main()
{
    char str1[80],str2[80];
    printf("Please enter a string:\n");     
    scanf("%s",str1);
    for (int i = 0; i < strlen(str1)+1; i++)        //+1为了将'\0'复制过去
    {
        str2[i] = str1[i];
    }
    printf("%s",str2);
    puts(str2);     //puts()输出自带换行
    system("pause");
    return 0;
}