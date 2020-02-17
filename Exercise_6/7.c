#include <stdio.h>
#include <stdlib.h>
/**
 * 输出魔方阵:有数字的排列规律
 * */
int main()
{
    int n,i,j;
    int a[15][15];
    int i_temp,j_temp,i_new,j_new,number = 0;      //i_temp和j_temp用于记录上一个数字的坐标
    printf("Please enter n:\n");
    scanf("%d",&n);     
    while(n%2 == 0)     //注:魔方阵的阶数应当为奇数
    {
        printf("Please enter an odd number\n");
        scanf("%d",&n);
    }
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = 0;            //对数组中的元素进行初始化，防止出现未知的数字
        }
    }
    for (i = 0; i < n*n; i++)
    {
        number++;
        if (number == 1)
        {
            a[0][n/2] = number;       //将1放置在第一行的中间一列
            i_temp = 0;
            j_temp = n/2;
        }else
        {
            i_new = i_temp - 1;     //普通情况处理
            j_new = j_temp + 1;
            if(i_temp == 0)     //处理行边界溢出
            {
                i_new = n-1; 
                j_new = j_temp + 1;
            }
            if(j_temp == n-1)   //处理列边界溢出
            {
                j_new = 0; 
                i_new = i_temp-1;  
            }
            if(a[i_new][j_new] != 0 || (i_temp == 0 && j_temp == n-1)) //处理位置占用与特殊位置
            {
                i_new = i_temp + 1;     //放置在占位或者特殊位置的下方
                j_new = j_temp;
            }
            a[i_new][j_new] = number;
            i_temp = i_new;
            j_temp = j_new;
        }
    }
    printf("The result is:\n");
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}