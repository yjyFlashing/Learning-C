#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 三个字符串比大小（找出最大）
 * */
int main()
{
    char str[3][20],max[20];
    int i;
    printf("Please enter three string:\n");
    for ( i = 0; i < 3; i++)
    {
        gets(str[i]);       //说明二维数组的行可以进行独立使用
    }
    if (strcmp(str[0],str[1]) > 0)
    {
        strcpy(max,str[0]);
        if (strcmp(str[0],str[2]) < 0)
        {
            strcpy(max,str[2]);
        }   
    }else{
        strcpy(max,str[1]);
        if (strcmp(str[1],str[2]) < 0)
        {
            strcpy(max,str[2]);
        }
    }
    printf("The maxium is:%s\n",max);
    system("pause");
    return 0;
}