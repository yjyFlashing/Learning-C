#include <stdio.h>
#include <stdlib.h>
/**
 * 递归法计算勒让德多项式
 * */
int main()
{
    double P_function(int n,double x);

    int n_level;
    double x_data;
    
    puts("Please enter n and x:");
    scanf("%d %lf",&n_level,&x_data);
    printf("The result is %6.2lf\n",P_function(n_level,x_data));
    system("pause");
    return 0;
}

double P_function(int n,double x)
{
    double res;

    if (n == 0)     //特殊情况
    {
        return 1;
    }else if(n == 1)    //回溯转折点
    {
        return x;
    }else
    {
        res = ((2*n-1)*x-P_function(n-1,x)-(n-1)*P_function(n-2,x))/n;      //书上这里错了
        return res;
    } 
}