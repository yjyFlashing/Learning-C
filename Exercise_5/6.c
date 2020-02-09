#include <stdio.h>
#include <stdlib.h>
/**
 * 求阶乘和
 * */
int main()
{
    int n = 1;
    int sum = 0,temp = 1;
    while(n<=20)
    {
        temp = temp*n;
        sum = sum + temp;
        n++;
    }
    printf("%22.15e\n",sum);
    system("pause");
    return 0;
}