/**
 * 此程序对应学习辅导中的程序3
 * */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned char c1,c2;
    //signed char c1,c2;   unsigned char和signed char 输出的结果相同
    int i1 = 289,i2 = 330;
    c1 = i1;
    c2 = i2;
    printf("The char type is:%c %c",c1,c2);     //字符型输出
    printf("The integer type is:%d %d",c1,c2);      //十进制整数型输出
    system("pause");
    return 0;
}
