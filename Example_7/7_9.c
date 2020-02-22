#include <stdio.h>
#include <stdlib.h>
/**
 * 求十个数的最值
 * */

int main()
{   
    int max(int,int);           //函数声明

    int num[10];
    int i,i_temp,temp;
    printf("Please enter ten numbers:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    temp = num[0];
    for (int i = 0; i < 10; i++)
    {
        temp = max(temp,num[i]);
        if(temp == num[i]) i_temp = i;
    }
    printf("The maxium is %d\nThe order is NO.%d\n",num[i_temp],i_temp+1);
    system("pause");
    return 0;
}

int max(int a,int b)
{
    return a > b ? a : b;
}