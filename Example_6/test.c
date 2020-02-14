#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 本程序用于测试%s格式化输入与输出
 * */
int main()
{
    char c[10];     //若没有进行非零初始化，则一定要设置长度
    printf("Please enter a string:\n");
    /*系统将空格字符作为输入的字符串之间的分隔符。因此，倘若字符串中有使用多个空格字符进行分隔，则实际相当于输入了多个字符串*/
    scanf("%s",c);    
    printf("%s\n",c);
    printf("%o\n",c);   //用于查看数组的起始地址
    system("pause");
    return 0;
}