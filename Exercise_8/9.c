#include <stdio.h>
#include <stdlib.h>
/**
 * 将3*3矩阵转置(指向一维数组实现)
 * 书上是指向数组中元素实现的
 * */
int main()
{
    void Input(int (*p)[3]);
    void transform(int (*p)[3]);
    void Output(int (*p)[3]);

    int num[3][3];
    Input(num);
    transform(num);
    Output(num);
    system("pause");
    return 0;
}

void Input(int (*p)[3])
{
    printf("Please enter a matrix:\n");
    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",*(p+i)+j);
        }   
    }
}

void transform(int (*p)[3])     //面向一维数组
{
    int temp;
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = i; j < 3; j++)        //转置：j = i用于控制只操作一半的数量
        {
            temp = *(*(p+i)+j);
            *(*(p+i)+j) = *(*(p+j)+i);
            *(*(p+j)+i) = temp;
        }
    }
}

void Output(int (*p)[3])
{
    printf("The transformed matrix:\n");
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
        printf("\n");
    }
}