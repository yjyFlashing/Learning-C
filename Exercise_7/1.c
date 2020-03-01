#include <stdio.h>
#include <stdlib.h>
/**
 * 调用函数求出两个整数的最大公因数和最小公倍数
 * */
int common_factor(int a,int b);
int common_multipe(int a,int b,int cf);

int main()
{
    int num1,num2,cf;
    printf("Please enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    cf = common_factor(num1,num2);
    printf("The biggest common factor is %d\n",cf);
    printf("The smallest common multipe is %d\n",common_multipe(num1,num2,cf));
    system("pause");
    return 0;
}

int common_factor(int a,int b)      //计算最大公因数
{
    int temp,r;
    if(a > b)       //调整大小
    {
        temp = a;
        a = b;
        b = temp;
    }
    while( a != 0) //辗转相除法：上一次的余数会成为下一次的分母，上一次的分母会成为下一次的分子
    {
        r = b%a;
        b = a;      //注意这两行的位置
        a = r; 
    }
    return b;
}

int common_multipe(int a,int b,int cf)      //计算最小公倍数
{
    return a*b/cf;
}