#include <stdio.h>
#include <stdlib.h>
/**
 * 通过指针变量输入输出整形数组a中的元素
 * */
int main()
{
    int a[10];
    int *p = a;
    int i;
    printf("Please enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",p++);        //注：这里一定要是p++，如果时++p指向元素就会发生变化
    }
    p = a;      //数组名即为数组元素a[0]的首地址
    for (i = 0; i < 10; i++)
    {
        printf("%d",*p);
        p++;
    }
    system("pause");
    return 0;
}