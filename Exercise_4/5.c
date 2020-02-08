#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M 1000

/**
 * 任意<1000的数字，求平方根后，以整数形式输出（与答案不同，答案太片面了）
 * */
int main()
{

    double num;
    printf("Please enter the number:\n");
    scanf("%lf",&num);
    while(num >= M)     //直到输入正确为止K
    {
        printf("The number is not required,please enter again:\n");
        scanf("%lf",&num);
    }
    num = sqrt(num);
    //printf("The integer part is %d\n",num);     //error
    printf("%lf's integer part is %d\n",num,(int)num);    //right
    system("pause");
    return 0;
}