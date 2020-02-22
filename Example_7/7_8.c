#include <stdio.h>
#include <stdlib.h>
/**
 * 汉诺塔问题(重点在于n级任务逐级以相同方法逐级分配)
 * */
void hanoi(int n,char one,char two,char three);
void move(char x,char y);

int main()
{
    int num;
    printf("Please enter the number of disks:\n");
    scanf("%d",&num);
    hanoi(num,'A','B','C');
    system("pause");
    return 0;
}

void hanoi(int n,char one,char two,char three)
{
    if(n == 1)      //转折点
    {
        move(one,three);
    }else
    {
        hanoi(n-1,one,three,two);       //借助C将A中n-1个盘移动至B
        move(one,three);    
        hanoi(n-1,two,one,three);       //借助A将B中的n-1个盘移动至C
    } 
}

void move(char x,char y)          //一次只允许移动一个盘子，因此只需指定起点和终点
{
    printf("%c ---> %c\n",x,y);
}