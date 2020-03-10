#include <stdio.h>
#include <stdlib.h>
/**
 * 自己制作一个strcmp函数
 * */
int main()
{
    int new_strcmp(char*,char*);

    char str1[100];
    char str2[100];
    int res;
    printf("Please enter string 1:\n");
    gets(str1);
    printf("Please enter string 2:\n");
    gets(str2);
    res = new_strcmp(str1,str2);
    if (res == 0)
    {
        printf("two equal string!\n");
    }else if(res > 0)
    {
        printf("result = %d,%s > %s\n",res,str1,str2);
    }else
    {
        printf("result = %d,%s < %s\n",res,str1,str2);
    }
    system("pause");
    return 0;
}

int new_strcmp(char *str1,char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }    
        str1++;
        str2++;
    }
    return 0;
}