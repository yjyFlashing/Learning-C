#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 输出一个已知字符串
 * */
int main()
{
    char c[15] = {'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t'};
    for (int i = 0; i < 15; i++)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}