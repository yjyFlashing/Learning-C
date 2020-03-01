#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 调用函数实现判断素数
 * */
int main()
{
    int sushu(int num);
    int num;
    printf("Please enter an integer:\n");
    scanf("%d",&num);
    if (sushu(num))
    {
        printf("The number is sushu!\n");
    }else
    {
        printf("Not sushu!\n");
    }
    system("pause");
    return 0;
}

int sushu(int num)
{
    int flag = 1;   //flag = 1则为素数
    for (int i = 2; i <= sqrt(num); i++)    //例如25的根号是5，所以终止条件要可以取到5
    {
        if (num%i == 0)
        {
            flag = 0;   //flag=0则不是素数
            break;
        }
    }
    return flag;
}