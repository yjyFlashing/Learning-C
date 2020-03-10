#include <stdio.h>
#include <stdlib.h>
/**
 * 实现环形数组
 * */
#define MAX 1000

int main()
{
    void Input_number(int *array,int num);
    void ring_array(int *array,int move,int num);
    void Output_number(int *a,int num);

    int a[MAX];
    int num,mov;
    printf("How many numbers you want to enter:\n");
    scanf("%d",&num);
    printf("How many space you want to move:\n");
    scanf("%d",&mov);
    printf("Please enter %d numbers:\n",num);
    Input_number(a,num);
    ring_array(a,mov,num);
    Output_number(a,num);
    system("pause");
    return 0;
}

void Input_number(int *array,int num)
{
    int i;
    for ( i = 0; i < num; i++)
    {
        scanf("%d",array+i);
    }
}

void ring_array(int *array,int move,int num)    //move为偏移量
{
    int *r_space,i,j;
    r_space = (int*)malloc(move*sizeof(int));
    for(i = num - move,j = 0; i< num; i++,j++)      //填充替换数组
    {
        *(r_space + j) = *(array + i);
    }
    //数据向后推移
    for ( i = num - move - 1; i >= 0; i--)
    {
        *(array+ i + move) = *(array + i);
    }
    //数据填充
    for (int i = 0; i < move; i++)
    {
        *(array + i) = *(r_space + i);
    }
    free(r_space);
}

void Output_number(int *a,int num)
{
    int i;
    for ( i = 0; i < num; i++)
    {
        printf("%6d",a[i]);
    }
    printf("\n");
}