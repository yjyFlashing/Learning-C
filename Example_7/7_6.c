#include <stdio.h>
#include <stdlib.h>
/**
 *  函数的递归调用
 * */
int age(int);

int main()
{
    int num,year;
    printf("Please enter the order of the person:\n");
    scanf("%d",&num);
    year = age(num);
    printf("The N0.%d 's year is %d\n",num,year);
    system("pause");
    return 0;
}

/**
 * 年龄递推函数
 * */
int age(int n)
{
    int year;
    if(n == 1)      //用于结束递归调用的条件
    {
        year = 10;
    }else{
        year = age(n-1)+2;
    }
    return year;
}
