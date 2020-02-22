#include <stdio.h>
#include <stdlib.h>
/**
 * 用户自定义函数实现求最值
 * */
int max1(int,int);
int max2(int,int);

int main()
{
    int x,y;
    int result;
    printf("Please enter two numbers:\n");
    scanf("%d %d",&x,&y);
    result = max1(x,y);
    printf("The maxium(function1) is %d\n",result);
    result = max2(x,y);
    printf("The maxium(function2) is %d\n",result);
    system("pause");
    return 0;
}

int max1(int a,int b)       //条件表达式实现
{
    int m;
    m = a > b? a : b;
    return m;
}
int max2(int a,int b)      //分支语句实现
{
    if(a > b)
    {
        return a;
    }else{
        return b;
    }
}