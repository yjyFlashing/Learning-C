#include <stdio.h>
#include <stdlib.h>
/**
 * Fibonacci数列:输出40个月兔子的总数(version2)
 * */
int main()
{
    int f1 = 1,f2 = 1;      //使用两个变量即可完成
    int i ;
    for ( i = 1; i <= 20; i++)
    {   
        printf("%12ld %12ld",f1,f2);
        if(i%2==0)  putchar('\n');      //调整视图与排列 
        f1 = f1 + f2;   
        f2 = f2 + f1;
    }
    system("pause");
    return 0;
}
