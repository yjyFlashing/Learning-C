#include <stdio.h>
#include <stdlib.h>
/**
 * 求平均值(变长数组)
 * */

int main()
{
    float average(float array[],int n);

    float a1[5] = {98.5,97,91.5,60,55};
    float a2[10] = {67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
    printf("The average1 is%5.2f\n",average(a1,5));
    printf("The average2 is%5.2f\n",average(a2,10));
    system("pause");
    return 0;
}

float average(float array[],int n)
{
    int i;
    float sum = 0;      //sum要与数组元素的数据类型一致
    for ( i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum/n;
}


