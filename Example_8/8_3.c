#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指针型函数处理，实现输入的两个整数按照大小顺序输出
 *  注意函数传递时的参数传递（此处有笔记，见MARKDOWN文档）
 * */
int main()
{
    void exchange_1(int *p1,int *p2);
    void exchange_2(int *p1,int *p2);

    int a,b;
    int *p1,*p2;
    printf("Please enter a and b:\n");
    scanf("%d %d",&a,&b);
    printf("a = %d,b = %d\n",a,b);
    p1 = &a;
    p2 = &b;
    if(a < b)
    {
        exchange_1(p1,p2);      //交换地址????
    }
    printf("Test2:max = %d,min = %d\n",*p1,*p2);
    if(a < b)
    {
        exchange_2(p1,p2);      //交换地址中的值
    }
    printf("Test3:max = %d,min = %d\n",*p1,*p2);
    system("pause");
    return 0;
}

void exchange_1(int *p1,int *p2)
{
    int *p;
    p = p1;
    p1 = p2;
    p2 = p;
    printf("Test1:max = %d,min = %d\n",*p1,*p2);
}

void exchange_2(int *p1,int *p2)
{
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p; 
}