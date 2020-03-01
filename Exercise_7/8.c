#include <stdio.h>
#include <stdlib.h>
/**
 * 四位数转四个ASCII码输出
 * */
int main()
{
    void Output_char(int num);
    int num;
    printf("Please enter four number:\n");
    scanf("%d",&num);
    Output_char(num);
    system("pause");
    return 0;
}

void Output_char(int num)
{
    int ge,shi,bai,qian;
    qian = num/1000;
    bai = (num%1000)/100;
    shi = (num%100)/10;
    ge = num%10;
    printf("%d %d %d %d",qian,bai,shi,ge);
}