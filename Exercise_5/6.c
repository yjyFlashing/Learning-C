#include <stdio.h>
#include <stdlib.h>
/**
 * 求阶乘和
 * */
int main()
{
    int n = 1;
    double sum = 0,temp = 1;        //sum的定义类型会影响最终结果
    while(n<=20)
    {
        temp = temp*n;
        sum = sum + temp;
        n++;
    }
    printf("%22.15e\n",sum);        //数据过大，使用指数形式进行输出
    system("pause");
    return 0;
}