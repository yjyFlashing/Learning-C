#include <stdio.h>
#include <stdlib.h>
/**
 * 杨辉三角（10行）
 * */
#define ROW 10
int main()
{
    int i,j;
    int a[ROW][ROW];
    int num;
    for ( i = 0; i < ROW; i++)   //控制行
    {
        for ( j = 0; j <= i; j++)       //将循环条件设置为j<=i是为了屏蔽其他未经计算赋值的其他数组元素（右上三角）
        {
            if(j == 0) a[i][j] = 1;  //保证第一列都为1
            if(j == i) a[i][j] = 1;     //保证每行最后一个元素都为1
            if(j != 0 && i != j)
            {
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}