#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 将一个字符串中的元音字母复制到另一个字符串中
 * */
int main()
{
    void aeiou_cpy(char str[],char res[]);

    char str[100],res[50];
    printf("Please enter a string:\n");
    gets(str);
    aeiou_cpy(str,res);
    printf("The vowel letters are:\n");
    puts(res);
    system("pause");
    return 0;
}

void aeiou_cpy(char str[],char res[])       //提取字符串中的元音字母
{
    int i,j = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' ||str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            res[j] = str[i];
            j++;
        }
    }
    res[j] = '\0';
}