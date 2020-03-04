#include <stdio.h>
#include <stdlib.h>
/**
 * 定义一个函数实现copystring的功能
 * */
int main()
{
    void copy_str(char *src,char *dst);

    char a[] = "I am a teacher";
    char b[] = "You are a student";
    copy_str(a,b);
    printf("string a is %s\n",a);
    printf("string b is %s\n",b);
    system("pause");
    return 0;
}

void copy_str(char *src,char *dst)
{
    while(*dst++ = *src++);   //'\0'的ASCII码是0，逻辑值为假,这个方法有点秀
}