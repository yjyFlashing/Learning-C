#include <stdio.h>
#include <stdlib.h>
/**
 * 求三项求和运算之和
 * */
int main()
{
    double temp = 0,sum = 0,k = 1;
    while(k <= 100)
    {
        temp += k;
        k++;
    }
    sum += temp;
    temp = 0;
    k = 1;
    while (k <= 50)
    {
        temp += k*k;
        k++;
    }
    sum += temp;
    temp = 0;
    k = 1;
    while (k <= 10)
    {
        temp += 1/k;        //注意：这里k应当被设置为double,否则这一步的temp永远为0
        k++;
    }
    sum += temp;
    printf("%15.6lf\n",sum);
    system("pause");
    return 0;
}