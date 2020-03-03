#include <stdio.h>
#include <stdlib.h>
/**
 * 输出二维数组任意一行任意一列的元素的值（指向一维数组）
 * */
int main()
{
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4],i,j;        //这种定义数组的方式要注意，这样定义才可以直接引用二维数组
    p = a;
    printf("Please enter row and column:\n");
    scanf("%d %d",&i,&j);
    printf("%d\n",*(*(p+i)+j));
    system("pause");
    return 0;
}