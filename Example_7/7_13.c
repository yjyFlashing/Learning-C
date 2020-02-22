#include <stdio.h>
#include <stdlib.h>
/**
 * 求一个3*4矩阵中的元素最大值
 * */
int main()
{  
    void max(int num[][4]);

    int a[3][4];
    int i,j;
    printf("Please enter a matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max(a);
    system("pause");
    return 0;
}

void max(int num[][4])
{
    int max = num[0][0];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(max < num[i][j])
            {
                max = num[i][j];
            }
        }  
    }
    printf("The maxium is %d\n",max);
}

