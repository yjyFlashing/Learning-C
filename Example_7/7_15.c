#include <stdio.h>
#include <stdlib.h>
/**
 * 若局部变量与全局变量同名，同名变量之间的作用域约束
 * */
int a = 3,b = 5;        //定义全局变量
int main()
{   
    int max(int a,int b);
    int a = 8;
    printf("The maxium is %d\n",max(a,b));
    //说明当全局变量与局部变量重名时，在局部变量的作用范围内，局部变量有效，全局变量被屏蔽，此时全局变量不起作用
    //说明此时变量的作用域遵循“就近原则”，就近定义的变量，其有相对更加强的作用 
    system("pause");
    return 0;
}

int max(int a,int b)
{
    int c;
    c = a>b?a:b;
    return c;
}