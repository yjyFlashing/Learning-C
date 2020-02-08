#include <stdio.h>
#include <stdlib.h>
/**
 * 输出三个数字中最大的数，先排序后输出 
 * */ 
int main()
{
    int a,b,c,temp;
    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c)
    {
        temp = a;
        a = c;
        c = temp; 
    }
    if (b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("The maxium is %d",c);
    system("pause");
    return 0;
}