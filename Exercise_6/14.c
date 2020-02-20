#include <stdio.h>
#include <stdlib.h>
/**
 * 在不用strcmp()字符串比较函数的情况下，进行字符串比较
 * */
int main()
{
    char s1[50],s2[50];
    int i = 0;
    printf("Please enter the first string:\n");
    gets(s1);
    printf("Please enter the second string:\n");
    gets(s2);
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
        if(s1[i] > s2[i])
        {
            printf("ouput:%d\n",s1[i] - s2[i]);
            break;
        }else if(s1[i] < s2[i])
        {
            printf("output:%d\n",s1[i] - s2[i]);
            break;
        }           
    }
    system("pause");
    return 0;
}