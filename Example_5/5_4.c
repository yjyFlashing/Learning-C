#include <stdio.h>
#include <stdlib.h>
/**
 * 没用break
 * */
#define scope 100000

int main()
{
    float amount = 0,total = 0,average = 0;
    int num = 0;
    while (total<=scope)
    {
        printf("Please enter the amount of you denation:\n");
        scanf("%f",&amount);
        total += amount;
        num++;
    }
    average = total / num;
    printf("The result:\nTotal:%7.2f\nNumber:%d\nAverage:%7.2f\n",total,num,average);
    system("pause");
    return 0;
}