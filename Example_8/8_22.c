#include <stdio.h>
#include <stdlib.h>
/**
 * 使用函数指针调用函数
 * */
int main()
{
    int max(int,int);       //使用指针调用函数，同样也需要函数声明
    int num,num1,num2;
    int (*p)(int,int);     //定义用于指向函数的指针，定义要包含形参的全部类型
    printf("Please enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    p = max;        //指针指向函数的入口地址，且也只能指向入口处
    num = (*p)(num1,num2);      //由于符号优先级的问题，指针变量要用括号括起来
    printf("The maxium is %d\n",num);
    system("pause");
    return 0;
}

int max(int a,int b)
{
    return a > b ? a : b;
}