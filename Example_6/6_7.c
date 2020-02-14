#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 输出菱形
 * */
int main()
{
    char c[5][5] = {{' ',' ','*'},
                    {' ','*',' ','*'},
                    {'*',' ',' ',' ','*'},
                    {' ','*',' ','*'},
                    {' ',' ','*'}};
    int i,j;
    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%c",c[i][j]);       //说明没有定义的其他元素会自动使用空字符补全
        }
        printf("\n");
    }
    system("pause");
    return 0;
}