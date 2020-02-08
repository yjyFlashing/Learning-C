#include <stdio.h>
#include <stdlib.h>
/**
 * 分段函�
 * */ 
int main()
{
    double x,y;
    printf("Please enter a number:\n");
    scanf("%lf",&x);
    if (x<1)
    {
        printf("y = %6.2lf",x);
    }else if(x<10){
        y = 2*x - 1;
        printf("y = %6.2lf",y);
    }else
    {
        y = 3* x - 11;
        printf("y = %6.2lf",y);
    }
    system("pause");
    return 0;
}