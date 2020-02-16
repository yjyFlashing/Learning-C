#include <stdio.h>
#include <stdlib.h>
/**
 * 选择排序法：将10个整数进行由小到大的排序
 * */
int main()
{
    int a[10];
    int i,j,temp;
    printf("Please enter ten numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 9; i++)    //最多进行九轮比较
    {
        for ( j = i+1; j <= 10 ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}