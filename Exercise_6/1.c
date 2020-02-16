#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 利用筛选法求100之内的素数，挖空即置0
 * */
int main()
{
    int num[101],i,j,n = 0;       //将数组长度设置为101，有利于后面的筛选和输出
    for (i = 1; i < 101; i++)       //筛选法要求先具有数据样本
    {
        num[i] = i;
    }
    num[1] = 0;       //先将第一元素挖掉(1不是素数)
    for ( i = 2; i < sqrt(100); i++)    //控制除数
    {
        for ( j = i+1; j <= 100 ; j++)  //控制被除数
        {
            if (num[i] != 0 && num[j] != 0) //对未被挖空的元素进行验证
            {
                if (num[j]%num[i] == 0) //进行验证：说明处于后方的数能被一个非1非本身且处于前方的数整除，那这个数一定不是素数
                {
                    num[j] = 0;
                }
            }
            
        }
        
    }
    for(i = 2;i < 101;i++)
    {
        if (num[i] != 0)
        {
            printf("%5d",num[i]);
            n++;
        }
        if(n % 10 == 0) printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}