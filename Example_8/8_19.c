#include <stdio.h>
#include <stdlib.h>
/**
 * 用指针变量来处理例8.18的问题
 * */
int main()
{
    char a[] = "I am a student";
    char b[20],*p1,*p2;
    p1 = a;     //a的首元素地址
    p2 = b;     //b的首元素地址
    for(;*p1 != '\0';p1++,p2++)
    {
        *p2 = *p1;      //将p1所指向的值赋值给p2所指向的值
    }
    *p2 = '\0';
    printf("string a is %s\n",a);
    printf("string b is %s\n",b);
    system("pause");
    return 0;
}