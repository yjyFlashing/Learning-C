#include <stdio.h>
#include <stdlib.h>
/**
 *使用if语句实现梯度式计算提成
 * */ 
int main()
{
    double I,award,bon1,bon2,bon4,bon6,bon10;
    printf("Please enter the profit of the person:\n");
    scanf("%lf",&I);
    bon1 = 100000*0.1;
    bon2 = bon1 + 100000*0.075;
    bon4 = bon2 + 100000*0.05;
    bon6 = bon4 + 100000*0.03;
    bon10 = bon6 + 400000*0.015;
    if(I<=100000)
    {
        award = I*0.1;
    }else if(I<=200000)
    {
        award = bon1+(I-100000)*0.075;
    }else if(I<=400000)
    {
        award = bon2+(I-200000)*0.05;
    }else if(I<=600000)
    {
        award = bon4+(I-400000)*0.03;
    }else if(I<=1000000)
    {
        award = bon6+(I-600000)*0.015;
    }else
    {
        award = bon10+(I-1000000)*0.01;
    }
    printf("The award is %10.2lf",award);
    system("pause");
    return 0;
}