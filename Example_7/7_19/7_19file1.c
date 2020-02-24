#include <stdio.h>
#include <stdlib.h>

/**
 * 给定b的值，输入a和m求a*b和a的m次方
 * FIXME:使用vscode进行编程时，需要跨文件，多文件调试时要修改task.json(与C语言语法无关)
 * 使用extern 进行跨文件扩展变量定义域
 * 注：能扩展的前提是这个变量是全局变量
 * */
int A;      //全局变量
int main()
{
    int power(int n);       //说明两个源文件之间可以通过声明直接调用
    int b = 3,c,d,m;
    printf("Enter the number a and its power m:\n");
    scanf("%d %d",&A,&m);
    c = A*b;
    printf("%d * %d = %d\n",A,b,c);
    d = power(m);
    printf("%d * * %d = %d\n",A,m,d);
    system("pause");
    return 0;
}


