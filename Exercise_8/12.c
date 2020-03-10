#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 用指针数组处理上一题目，字符串不等长
 * */
int main()
{
    void Input(char (*p)[20],char *addr[]);
    void Sort_string(char *addr[]);
    
    char str[10][20],*addr[10];
    Input(str,addr);
    Sort_string(addr);
    printf("The new order:\n");
    for(int i = 0;i < 10;i++)
    {
        puts(addr[i]);      //使用地址输出字符串时，使用puts()较好
    }
    system("pause");
    return 0;
}

void Input(char (*p)[20],char *addr[])
{
    printf("Please input 10 strings:\n");
    int i;
    for ( i = 0; i < 10; i++)
    {
        gets(*(p+i));
        addr[i] = *(p+i);
    }
}

void Sort_string(char *addr[])
{
    void swap_str(char *str1,char *str2);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(strcmp(addr[i],addr[j]) > 0)
            {
                swap_str(addr[i],addr[j]);
            }
        }
    }
}

void swap_str(char *str1,char *str2)
{
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}