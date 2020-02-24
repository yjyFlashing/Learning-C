#include <stdio.h>
#include <stdlib.h>

/**
 * 原版程序
 * 
 * */
int main()
{
    extern void enter_string(char str[80]);     
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);

    char c,str[80];
    enter_string(str);
    scanf("%c",&c);     //这个输出一定要在函数外面才能正常使用
    delete_string(str,c);
    print_string(str);
    system("pause");
    return 0;
}