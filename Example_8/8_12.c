#include <stdio.h>
#include <stdlib.h>
/**
 * 有一个3*4的二维数组，要求使用指向元素的指针将数组中的元素输出(指向具体元素的地址进行输出)
 * */
int main()
{
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;
    for ( p = a[0]; p  < a[0] + 12; p++)
    {
        if((p - a[0])%4 == 0)
            printf("\n");
        printf("%4d",*p);
        
    }
    system("pause");
    return 0;
}