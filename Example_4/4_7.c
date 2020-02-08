#include <stdio.h>
#include <stdlib.h>
/**
 * 分支执行用于输出的子函数
 * */
void action1(int,int);
void action2(int,int);

int main()
{
    char ch;
    int x = 10,y = 30;
    printf("Please input the character:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'A':                //一个case只能对应一个值一种情况，一定要是（常量）具体的数值或字符
        action1(x,y);       //两数相加
        break;
    case 'b':
    case 'B':
        action2(x,y);       //两数相乘
        break;
    default:putchar('\a');      //发出警告
        break;
    }
    system("pause");
    return 0;
}

void action1(int a,int b)
{
    printf("x + y = %d",a+b);
}

void action2(int a,int b)
{
    printf("x*y = %d",a*b);
}