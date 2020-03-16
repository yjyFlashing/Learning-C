#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 从键盘中读入若干个字符串，对他们按字母大小进行排序，然后将排好的字符串送至磁盘中保存
 * */
int main()
{
    char str[3][10],temp[10],filename[10];
    int i;
    FILE *fp;
    printf("Please enter 3 strings:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%s",str[i]);
    }
    printf("Please enter the filename:\n");
    scanf("%s",filename);
    for ( i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(strcmp(str[i],str[j]) > 0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
        
    }
    if((fp = fopen(filename,"w")) == NULL)
    {
        printf("No this file\n");
        exit(0);
    }
    for ( i = 0; i < 3; i++)
    {
        fputs(str[i],fp);
        fputs("\n",fp); //数据文件内换行
        printf("%s\n",str[i]);
    }
    fclose(fp); //一定要记得保存
    system("pause");
    return 0;
}