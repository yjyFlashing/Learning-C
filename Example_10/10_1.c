#include <stdio.h>
#include <stdlib.h>
/**
 * 从键盘中输入一些字符，逐个将他们送到磁盘中去
 * */
int main()
{
    FILE *fp;
    char ch,filename[10];
    printf("Please enter filename you want:\n");
    scanf("%s",filename);
    if((fp = fopen(filename,"w")) == NULL)     //没有找到目标文件,则自动创建一个
    {
        printf("No this file\n");
        exit(0);
    }
    ch = getchar();     //用于接受掉缓冲区中的回车
    printf("Please enter a string('#' used to finish):\n");
    ch = getchar();
    while (ch != '#')
    {
        fputc(ch,fp);   //将该字符送入文件中
        putchar(ch);
        ch = getchar(); //获取下一个字符
    }
    fclose(fp); //保存文件
    putchar('\n');
    system("pause");
    return 0;
}