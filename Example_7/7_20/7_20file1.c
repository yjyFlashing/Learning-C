#include <stdio.h>
#include <stdlib.h>
/**
 * 删除字符串中的某一字符
 * 与原版程序实现算法不同
 * */

int main()
{
    extern void Input_String(char str[]);        //extern可以省略，可直接通过声明函数原型进行声明
    extern void Delete_Char(char str[],char c);         
    extern void Output_String(char str[]);

    char str[100];
    char ch;

    Input_String(str);
    //这里倘若放在外部函数内会如何
    printf("Please enter the object you want to delete:\n");        
    scanf("%c",&ch);
    Delete_Char(str,ch);
    Output_String(str);

    system("pause");
    return 0;
}