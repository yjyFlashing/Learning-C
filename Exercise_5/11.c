#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *  球反弹（注意看清题意）
 * */
int main()
{
    double h_down = 100,h_up = 0,path = 0;
    for (int i = 0; i < 10; i++)
    {
        h_up = h_down/2;
        path = path + h_down + h_up;
        h_down = h_up;
    }
    printf("The total distance is %lf\nThe 10 times up is %lf\n",path - h_up,h_up);     //题目中问的是第10次落地时共经过多少米，因此要减去最后一次的反弹高度
    system("pause");
    return 0;
}