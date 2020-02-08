#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;
    c1 = getchar();
    c2 = c1 + 32;   //将字母的大写转换为小写
    putchar(c2);
    putchar('\n');
    system("pause");
    return 0;
}