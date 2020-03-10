#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指向指针的方法将n个整数排
 * 注：书上在使用二重指针时都是通过一个指针数组和一个普通数组来配合实现的
 * */
int main()
{
    void sort(int **p,int n);

    int *num,n,**p;
    int i;
    printf("How many numbers you need:\n");
    scanf("%d",&n);
    num = (int*)malloc(n*sizeof(int));
    printf("Please enter %d numbers:\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",num+i);
    }
    p = &num;
    sort(p,n);
    printf("The new order:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%6d",*(*p+i));   
    }
    printf("\n");
    system("pause");
    return 0;
}

void sort(int **p,int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(*(*p+i) > *(*p+j) )
            {
                temp = *(*p+i);
                *(*p+i) = *(*p+j);
                *(*p+j) = temp;                
            }
        }   
    }
}