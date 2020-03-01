#include <stdio.h>
#include <stdlib.h>
/**
 * 结合数组，函数实现16进制转10进制
 * */

//FIXME简单版（利用c语言的规则）
int main()
{
    int a;
    printf("Please enter a hex number:\n");
    scanf("%x",&a);
    printf("%d",a);
    system("pause");
    return 0;
}
