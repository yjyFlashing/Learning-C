#include <stdio.h>

void enter_string(char str[80])
{
    printf("Please enter a string:\n");
    gets(str); 
}

void delete_string(char str[],char ch)
{
    int i,j;
    for ( i = j = 0; str[i] != '\0'; i++)       //注意下这里的算法
    {
        if (str[i] != ch)
        {
            str[j++] = str[i];      //这里利用了j++是先幅值后加一的特性
        }
    }
    str[j] = '\0';
}

void print_string(char str[])
{
    printf("%s\n",str);
}