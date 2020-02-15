#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 三个不等长字符串比大小(找出最小)
 * */
int main()
{
    char str[3][20],min[20];
    int i;
    printf("Please enter three string:\n");
    for ( i = 0; i < 3; i++)
    {
        gets(str[i]);       //说明二维数组的行可以进行独立使用
    }   
    if (strcmp(str[0],str[1]) > 0)
    {
        strcpy(min,str[1]);
        if (strcmp(str[1],str[2]) > 0)
        {
            strcpy(min,str[2]);
        }   
    }else{
        strcpy(min,str[0]);
        if (strcmp(str[0],str[2]) > 0)
        {
            strcpy(min,str[2]);
        }
    }
    printf("The minimun is :%s\n",min);
    system("pause");
    return 0;
}