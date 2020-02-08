#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double r = 0.1;    //年增长率，教材与学习辅导的年增长率不同
    double p;       //未来与现在相比的倍数
    int n;      //year
    printf("Please input the year:\n");
    scanf("%d",&n);
    p = pow(1+r,n);     //pow（）用于计算n次方
    printf("The increased percentage is :%f",p);
    system("pause");
    return 0;
}