#include <stdio.h>
#include <stdlib.h>
/**
 * if的嵌套结构实现阶跃判断
 * */
int main()
{
    int x,y;
    printf("Please input the needed number:\n");
    scanf("%d",&x);
    if (x>=0)
    {
        if(x == 0) 
        {
            y = 0;
            printf("y = %d",y);
        }
        else
        {
            y = 1;
            printf("y = %d",y);
        }
    }else
    {
        y = -1;
        printf("y = %d",y);
    }
    system("pause");
    return 0;
}