#include <stdio.h>
#include <stdlib.h>
/**
 * 递归法将任意位数整数转换为字符串
 * 递归调用可以在一些情况中代替循环
 * (书上题意表达有些歧义)
 * */
int main()
{
    void convert(int number);
     
    int num;
    printf("Please enter an integer:\n");
    scanf("%d",&num);
    convert(num);
    system("pause");
    return 0;
}
/**
 * 转换完直接输出
 * */
void convert(int number)
{
    if(number/10 != 0)      //回溯转折点：利用数据是否整除为0判断数据位数
    {
        convert(number/10);    
    }
    putchar(number%10 + '0');       //注意：递归时，输出从最底层的元素输出
    putchar(' ');
}

