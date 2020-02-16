#include <stdio.h>
#include <stdlib.h>
/**
 * 求3*3整型矩阵主对角线元素之和
 * */
int main()
{
    int num[3][3];
    int i,j,sum = 0;
    printf("Please enter 9 numbers for the matrix:\n");
    for ( i = 0; i < 3; i++)   //为矩阵输入数据
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum += num[i][i];
    }
    printf("The summary is %d\n",sum);
    system("pause");
    return 0;
}