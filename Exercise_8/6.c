#include <stdio.h>
#include <stdlib.h>
/**
 * 输出字符串长度
 * */
int main()
{
    int string_len(char*);

    
    char *p = (char*)malloc(100*sizeof(char));
    char str[100];
    printf("Please enter a string:\n");
    gets(p);      //gets的形参不能是没有指向的指针变量
    gets(str);      //两种方法都可以
    printf("Length is %d\n",string_len(str));
    printf("The length of the string is %d\n",string_len(p));
    system("pause");
    return 0;
}

int string_len(char *str)
{
    int num = 0;
    while (*(str++) != '\0')
    {
        num++;
    }
    return num++;
}