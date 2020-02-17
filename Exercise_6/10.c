#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 统计文章中的字符类型
 * */
int main()
{
    char text[3][80]={0};
    int B_sum = 0,S_sum = 0,N_sum = 0,SP_sum = 0,O_sum = 0;
    int len1,len2,len3;
    int i,j;
    for (i = 0; i < 3 ; i++)       //分别输入三行的文本内容
    {
        j = 0;
        printf("Please enter N0.%d line:\n",i+1);
        gets(text[i]);
    }
    for(i = 0;i < 3;i++)
    {
        printf("The length of text%d is %d\n",i+1,strlen(text[i]));
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < strlen(text[i]); j++)  //注：strlen()所计算的长度中不包含'\0'
        {
            if(text[i][j] >='A'&& text[i][j] <= 'Z') B_sum++;
            else if(text[i][j] >='a'&& text[i][j] <= 'z') S_sum++;
            else if(text[i][j] >='0'&& text[i][j] <= '9') N_sum++;
            else if(text[i][j] == ' ') SP_sum++;
            else O_sum++;
        }  
    }
    printf("Upper number:%d\n",B_sum);
    printf("Lower number:%d\n",S_sum);
    printf("Digit:%d\n",N_sum);
    printf("Space:%d\n",SP_sum);
    printf("Others:%d\n",O_sum);
    system("pause");
    return 0;
}