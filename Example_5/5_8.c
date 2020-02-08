#include <stdio.h>
#include <stdlib.h>
/**
 * Fibonacci数列:输出40个月兔子的总数
 * */
int main()
{
    int f1 = 1,f2 = 1,num;
    for (int i = 0; i <= 39;i++)
    {
        if(i == 0) printf("%12d\n",f1);
        if(i == 1) printf("%12d\n",f2);
        if(i > 1) 
        {
            num = f1 + f2;
            printf("%12ld\n",num);
            f1 = f2;
            f2 = num;
        }
    }
    system("pause");
    return 0;
}
