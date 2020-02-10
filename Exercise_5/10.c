#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求一分数序列的前20项之和
 * */
int main()
{
    double fz = 2,fm = 1,sum = 0,temp;
    for (int i = 0; i < 20; i++)
    {
        sum += fz/fm;
        temp = fz;
        fz = fm +fz;
        fm = temp;
    }
    printf("The summary is %16.10lf\n",sum);
    system("pause");
    return 0;
}