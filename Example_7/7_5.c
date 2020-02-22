#include <stdio.h>
#include <stdlib.h>
/**
 * 利用函数嵌套调用来进行四数之间的比较
 * */
int max4(int a,int b,int c,int d);
int max2(int a,int b);

int main()
{
    int x1,x2,x3,x4;
    int max;
    printf("Please enter four numbers:\n");
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    max = max4(x1,x2,x3,x4);
    printf("The maxium of four numbers is %d\n",max);
    system("pause");
    return 0;
}

/**
 * 四数比较
 * */
int max4(int a,int b,int c,int d)
{
    int max4;
    max4 = max2(a,b);       
    max4 = max2(max4,c);
    max4 = max2(max4,d);
    return max4;
}

/**
 * 两数比较
 * */
int max2(int a,int b)
{
    return a > b ? a : b;
}