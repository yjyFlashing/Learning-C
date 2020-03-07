#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 将若干个字符串按照字母顺序（由小到大）输出
 * */
int main()
{
    void sort(char *name[]);
    void output(char *name[]);
    char *name[5] = {
    "Follow me",
    "BASIC",
    "Great Wall",
    "FORTRAN",
    "Computer design"
    };
    sort(name);
    output(name);
    system("pause");
    return 0;
}

void sort(char *name[])
{
    char *name_temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(strcmp(name[i],name[j]) > 0)     //交换地址
            {
                name_temp = name[i];
                name[i] = name[j];
                name[j] = name_temp;
            }   
        } 
    }
}

void output(char *name[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",name[i]);
    }
}