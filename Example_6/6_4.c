#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 实现3*2矩阵的转置
 * */
int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}},b[3][2];
    int i,j;
    printf("The matrix A is:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%5d",a[i][j]);
            b[j][i] = a[i][j];      //矩阵转置之间下标相反
        }
        printf("\n");
    }
    printf("The matrix B is:\n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}