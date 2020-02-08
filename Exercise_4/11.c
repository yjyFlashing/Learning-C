#include <stdio.h>
#include <stdlib.h>
/**
 * 对四个数进行从小到大的排序(遍历)
 * */ 
int main()
{
    int x1,x2,x3,x4,temp;
    printf("Please enter four numbers:\n");
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x1>x2)
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if(x1>x3)
    {
        temp = x1;
        x1 = x3;
        x3 = temp;
    }
    if(x1>x4)
    {
        temp = x1;
        x1 = x4;
        x4 = temp;
    }
    if(x2>x3)
    {
        temp = x2;
        x2 = x3;
        x3 =temp;
    }
    if(x2>x4)
    {
        temp = x2;
        x2 = x4;
        x4 = temp;
    }
    if(x3>x4)
    {
        temp = x3;
        x3 = x4;
        x4 = temp;
    }
    printf("%d %d %d %d",x1,x2,x3,x4);
    system("pause");
    return 0;
}