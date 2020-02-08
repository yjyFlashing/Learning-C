#include <stdio.h>
#include <stdlib.h>

/**
 * 对while和do while进行比较
 * */
void func1(int);
void func2(int);

int main()
{
    int loop_num;   //循环次数
    printf("Please enter the loop number:\n");
    scanf("%d",&loop_num);
    func1(loop_num);
    func2(loop_num);
    system("pause");0
    return 0;
}



void func1(int num)
{
    int sum = 0;
    while (num <= 10)
    {
        sum = sum + num;
        num++;
    }
    printf("sum = %d\n",sum);
}

void func2(int num)
{
    int sum = 0;
    do{
        sum = sum + num;
        num++;
    }while (num <= 10);
    printf("sum = %d\n",sum);
}