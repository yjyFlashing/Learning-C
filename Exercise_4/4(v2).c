#include <stdio.h>
#include <stdlib.h>
/**
 * 输出三个数字中最大的数,使用逻辑运算符进行判断 
 * */ 
int main()
{
    int a,b,c,temp,max;
    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    temp = (a>b)? a:b;
    max = (temp > c)?temp:c;
    printf("The maxium is %d",max);
    system("pause");
    return 0;
}