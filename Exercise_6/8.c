#include <stdio.h>
#include <stdlib.h>
/**
 * 寻找全正数矩阵的鞍点(我卡了很久)
 * */
int main()
{
    int a[4][5];
    int i,j,n,max,i_temp,j_temp;
    int flag = 0;       //flag用于统计max大于同列中元素的次数
    printf("Please enter the matrix:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < 4;i++)
    {
        max = a[i][0];
        for ( j = 0; j < 5; j++)
        {
            if(max < a[i][j])        //找出每行中最大的元素
            {
                max = a[i][j];
                i_temp = i;
                j_temp = j;
            }
        }
        for( n = 0;n < 4;n++)       //比较同列不同行的元素
        {
            if(max <= a[n][j_temp]) flag++;        //max不是每列最小，则不是鞍点
        }
        if(flag == 4)   break;      //全部元素都小于max
        else flag = 0;  //某些元素大于max
    }
    if (flag == 4)  
    {
        printf("The horizon is [%2d,%2d] = %2d\n",i_temp,j_temp,a[i_temp][j_temp]);
    }else
    {
        printf("The matrix hasn't target\n");
    }
    system("pause");
    return 0;
}