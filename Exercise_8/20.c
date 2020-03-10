#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 用指向指针的指针的方法对5个字符串排序并输出
 * */
int main()
{
    void sort(char **p);
    char **p,*pstr[5],str[5][100];
    int i;
    for ( i = 0; i < 5; i++)
    {
        pstr[i] = str[i];       //将字符串的首地址分别赋值给指针数组
    }
    printf("Please enter 5 string:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%s",pstr[i]);    //输入5个字符串
    }
    p = pstr;       //指向指针的指针
    sort(p);
    printf("The new order:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",*(p+i));
    }
    system("pause");
    return 0;
}

void sort(char **p)
{
    int i,j;
    char temp[100];
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (strcmp(*(p+i),*(p+j)) > 0)
            {
                strcpy(temp,*(p+i));
                strcpy(*(p+i),*(p+j));
                strcpy(*(p+j),temp);
            }
        }
    }
}