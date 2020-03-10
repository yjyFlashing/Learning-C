#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 将10个等长字符串排序并输出
 * */
int main()
{
    void sort_str(char (*p)[100]);
    void Input_10strings(char (*p)[100]);
    void Output(char (*p)[100]);

    char str[10][100];
    Input_10strings(str);
    sort_str(str);
    Output(str);
    system("pause");
    return 0;
}

void Input_10strings(char (*p)[100])
{
    printf("Please enter 10 string:\n");
    for (int i = 0; i < 10; i++)
    {
        gets(*(p+i));
    }
}

void sort_str(char (*p)[100])
{
    void swap_string(char *str1,char *str2);

    int i,j;
    for ( i = 0; i < 10 ; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if(strcmp(*(p+i),*(p+j)) > 0)     //由小到大排序
                swap_string(*(p+i),*(p+j));
        }        
    }
}

void swap_string(char *str1,char *str2)
{
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}

void Output(char (*p)[100])
{
    printf("The new order:\n");
    for (int i = 0; i < 10; i++)
    {
        puts(*(p+i));
    }
}