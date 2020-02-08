#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 对不大于五位数的正整数进行正，逆序排序，逆序更加简单
 * */ 
int fun1(int);
void fun2(int,int);
void fun3(int,int);

int main()
{
    int num,length;
    printf("Please enter a number:\n");
    scanf("%d",&num);
    while (num >= 100000 || num <0)       //确保数字不多于五位，且为正整数
    {
        printf("The number is out of the scope\n");
        scanf("%d",&num);
    }

    length = fun1(num);    
    printf("The figure of number is %d\n",length);
    printf("The postive order:\n");     //按正序输出
    fun2(num,length);
    printf("The backward order:\n");    //按逆序输出
    fun3(num,length);
    system("pause");
    return 0;
}

int fun1(int n)    //求数字位数
{
    int result = 0;
    if (n>9999)
    {
        return 5;
    }else if(n>999)
    {
        return 4;
    }else if(n>99)
    {
        return 3;
    }else if(n>9)
    {
        return 2;
    }else{
        return 1;
    }
}

void fun2(int num,int len)   //分别输出每一位数字(正序)
{
    int temp,n;
    for(int i = 0;i < len ;i++)
    {
        temp = num/pow(10,len-(i+1));
        printf("%d",temp);
        num = num - temp*pow(10,len-(i+1));
    }
    printf("\n");
}

void fun3(int num,int len)      //分别输出每一位数字(逆序)
{
    int temp,n;
    for(int i = 0;i < len;i++)
    {
        temp = num %10; //得到最低位
        printf("%d",temp);
        num = (num - temp)/10;
    }
    printf("\n");
}