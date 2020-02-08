#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求100至200之间的全部素数
 * */
int prime_num(int);

int main()
{
    int n = 0;      //n控制换行
    for(int i = 101;i <= 200;i = i+2)      //偶数不是素数，因此不用考虑偶数，尽量减少循环次数 
    {
        if(prime_num(i))  
        {
            printf("%8d",i); 
            n++;
        }
        if (n%10 == 0)
        {
            putchar('\n');
        }
    }
    system("pause");
    return 0;
}

int prime_num(int n)
{
    int k,i;
    k = sqrt(n);
    for (i = 2; i <= k ; i++)
    {
        if(n%i == 0) break;
    }
    if(i <= k) return 0;        //Not
    else return 1;      //Yes 
}
