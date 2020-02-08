#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    /**
     * 按照字符一个个输入再一个个输出
     * */
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    system("pause");
    return 0;
}