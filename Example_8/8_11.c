#include <stdio.h>
#include <stdlib.h>
/**
 * 输出二维数组的有关数据
 * */
int main()
{
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    printf("%d %d\n",a,*a);           //a指向0行，*a时0行0列元素地址
    printf("%d %d\n",a[0],*(a+0));    //0行0列元素地址
    printf("%d %d\n",&a[0],&a[0][0]);  //0行的首地址和0行0列的地址
    printf("%d %d\n",a[1],a+1);   //1行0列元素地址和第一行首地址
    printf("%d %d\n",&a[1][0],*(a+1)+0);  //1行0列元素的地址
    printf("%d %d\n",a[2],*(a+2));    //2行0列元素的地址
    printf("%d %d\n",&a[2],a+2);    //第二行的首地址
    printf("%d %d\n",a[1][0],*(*(a+1)+0));  //1行0列元素的值
    printf("%d %d\n",*a[2],*(*(a+2)+0));    //2行0列元素的值
    system("pause");
    return 0;
}