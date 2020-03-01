#include <stdio.h>
#include <stdlib.h>
/**
 * 对3*3二维整形数组进行转置
 * */
int a[3][3];
int main()
{
    void Enter_matrix(int num[][3]);
    void matrix_transposition(int num[][3]);
    void Output_matrix(int num[][3]);
    Enter_matrix(a);
    matrix_transposition(a);
    Output_matrix(a);
    system("pause");
    return 0;
}

void Enter_matrix(int num[][3])
{
    printf("Please enter a matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3;j++)  
        {
            scanf("%d",&num[i][j]);
        }
    }
}

void matrix_transposition(int num[][3])
{
    int temp;
    printf("The matrix changed is:\n");
    for (int i = 0; i < 3; i++)     //注：不能9个数都参与运算，否则相当于没有变
    {
        for (int j = i+1; j < 3; j++)   //仅利用上三角变换即可
        {
             temp = num[i][j];
             num[i][j] = num[j][i];
             num[j][i] = temp; 
        }   
    }
}

void Output_matrix(int num[][3])
{
    printf("The result is:\n");
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3;j++)  
        {
            printf("%3d",num[i][j]);
        }
        printf("\n");
    }
}