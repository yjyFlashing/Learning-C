#include <stdio.h>
#include <stdlib.h>
/**
 * 连接两个字符串
 * */
int main()
{
    void strlink(char str1[],char str2[]);

    char str1[200],str2[100];
    printf("Please enter string1:\n");
    gets(str1);
    printf("Please enter string2:\n");
    gets(str2);
    strlink(str1,str2);
    printf("The result string:\n");
    puts(str1);
    system("pause");
    return 0;
}

void strlink(char str1[],char str2[])
{
    int len1 = 0,len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        str1[len1] = str2[len2];
        len1++;
        len2++;
    }
    str1[len1] = '\0';
}