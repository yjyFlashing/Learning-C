#include <stdio.h>
#include <stdlib.h>

/**
 * 证明利用extern在一个文件内部扩展变量的作用域（都是向上扩展）
 * */
int main()
{
    int max();
    extern int A,B,C;       //使用extern扩展后的变量作用域：由此往下
    printf("Please enter three integer numbers:\n");
    scanf("%d %d %d",&A,&B,&C);
    printf("max is %d\n",max());
    system("pause");
    return 0;
}

int A,B,C;      //变量原定义位置，其作用域：由此往下

int max()
{
    int m;
    m = A>B?A:B;
    if(C>m) m=C;
    return m;
}
