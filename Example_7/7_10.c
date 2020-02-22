#include <stdio.h>
#include <stdlib.h>
/**
 * 求平均值
 * */
int max1(float,float);

int main()
{
    float average(float num[]);

    float a[10],temp;
    int i;
    printf("Please enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f",&a[i]);
    }
    temp = average(a);
    printf("The average is %5.2f\n",temp);
    system("pause");
    return 0;
}

float average(float num[])      //形参数组可以不指定大小，在定义的数据名后加一个空的方括号
{
    float sum = 0;
    for (int i = 0; i < 10 ; i++)
    {
        sum += num[i];
    }
    return sum/10;      //返回平均值
}
