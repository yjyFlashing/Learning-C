#include <stdio.h>
#include <stdlib.h>
/**
 * 将一个文件中的字符串复制到另一个文件中
 * */
int main()
{
    FILE *f1,*f2;
    char obj[10],src[10],ch;
    printf("Please enter the source filename:\n");
    scanf("%s",src);
    printf("Please enter the object filename:\n");
    scanf("%s",obj);

    if((f2 = fopen(obj,"w")) == NULL)
    {
        printf("No this file\n");
        exit(0);
    }
    if ((f1 = fopen(src,"r")) == NULL)
    {
        printf("No this file\n");
        exit(0);
    }
    while (!feof(f1))       //未遇到输入文件的结束标志
    {
        ch = fgetc(f1);  //从file1中读取字符
        fputc(ch,f2);   //输出字符
        putchar(ch);    //展示转移的字符串     
    }
    putchar('\n');
    fclose(f1);
    fclose(f2);
    system("pause");
    return 0;
}