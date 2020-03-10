#include <stdio.h>
#include <stdlib.h>
/**
 * 将n个数按照逆序排列
 * */
int main()
{
    void convert_order(int*,int);

    int n;
    int *str;
    printf("How many numbers you need:\n");
    scanf("%d",&n);
    str = (int *)malloc(n*sizeof(int));
    printf("Please enter %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",str+i);
    }
    convert_order(str,n);
    printf("The recent order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%6d",*(str+i));
    }
    printf("\n");
    system("pause");
    return 0;
}

void convert_order(int *p,int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = *(p+i);
        *(p + i) = *(p + n -1 -i);
        *(p + n - 1 -i) = temp;
    }
}