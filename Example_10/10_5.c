#include <stdio.h>
#include <stdlib.h>
/**
 * 将一个文件中的内容先全部输出出来，再将其中的内容复制到另外一个文件
 * */
int main()
{
    FILE *f1,*f2;
    f1 = fopen("file1.dat","r");
    f2 = fopen("file2.dat","w");
    while(!feof(f1)) putchar(getc(f1));     //输出flie1中内容,该过程中位置标记自动偏移
    putchar('\n');
    rewind(f1);     //将文件位置标记指向调整回文件开头
    while (!feof(f1))
    {
        putc(getc(f1),f2);      //将file1中的字符输出到file2中，该过程中位置标记自动偏移
    }
    fclose(f1);
    fclose(f2);
    system("pause");
    return 0;
}