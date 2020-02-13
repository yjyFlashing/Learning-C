#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求出3*4矩阵中最大的元素，并输出行列号
 * */
int main()
{
    int a[3][4] = {{1,2,3,4},{9,8,7,6},{-10,10,5,2}};
    int max,h,l,i,j;
    max = a[0][0];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                h = i;
                l = j;
            }
        }
    }
    printf("The maxium is %d\nIt is at ( %d,%d )",max,h,l);
    system("pause");
    return 0;
}