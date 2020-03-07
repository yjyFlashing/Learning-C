#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指向指针数据的指针变量来输出例8.29中的的字符串
 * */
int main()
{
    char *name[5] = {
        "Follow me",
        "BASIC",
        "Great Wall",
        "FORTRAN",
        "Computer design"
    };
    char **p;
    p = name;
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",*(p+i));
    }
    system("pause");
    return 0;
}