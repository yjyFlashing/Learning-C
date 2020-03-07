#include <stdio.h>
#include <stdlib.h>
/**
 * 二重指针输出整型数组
 * */
int main()
{
    int a[5] = {1,3,5,7,9};
    int *num[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};      //寻址再寻址，一层一层拨开你的心
    int **p;
    p = num;
    for (int i = 0; i < 5; i++)
    {
        printf("%5d",**(p+i));
    }
    printf("\n");
    system("pause");
    return 0;
}