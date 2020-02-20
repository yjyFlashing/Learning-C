#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 解密
 * */
int main()
{
    char text[100];
    printf("Please enter the code:\n");
    gets(text);
    puts("The original code:\n");
    puts(text);
    for (int i = 0; i < strlen(text); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z' )
        {
            text[i] = 155 - text[i];    //大写首末ASCII码之和为155
        }
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = 219 - text[i];    //小写首末ASCII码之和为219
        }
    }
    puts("The changed code:\n");
    puts(text);
    system("pause");
    return 0;
}