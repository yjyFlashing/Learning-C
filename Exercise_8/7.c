#include <stdio.h>
#include <stdlib.h>
/**
 * 复制指定起始位置的字符串
 * */
int main()
{
    void copy(int start,char *str1,char *str2);

    char str1[100],str2[100];
    int num;
    printf("Please enter a string:\n");
    gets(str1);
    printf("Please enter the start character of the string:\n");
    scanf("%d",&num);
    copy(num,str1,str2);
    printf("The result string:\n");
    puts(str2);
    system("pause");
    return 0;
}

void copy(int start,char *str1,char *str2)
{
    str1 += (start-1);      //调整复制起点
    while(*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}