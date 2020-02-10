#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 输出所有的水仙花数
 * */
int main()
{
    int num = 100,temp;
    int ge,shi,bai;
    while (num <= 999)
    {
        ge = num%10;
        shi = (num/10)%10;
        bai = num/100;
        temp = pow(ge,3) + pow(shi,3) + pow(bai,3);
        if(temp == num) printf("%10d",num);
        num++;
    }
    system("pause");
    return 0;
}