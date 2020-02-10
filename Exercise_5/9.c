#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求出1000以内全部的完数：整数n除以m，结果是无余数的整数，那么我们称m就是n的因子
 * */
int main()
{
    int num = 1,sum = 0; 
    while (num <= 1000)
    {
        for (int i = 1; i < num; i++)       //因子求和
        {
            if (num%i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)     //验证完数
        {
            printf("%d its factors are ",num);
            for (int i = 1; i < num; i++)       //按照指定格式输出
            {
                if (num%i == 0)
                {
                    printf("%5d",i);
                }
            }
            printf("\n");
        }
        sum = 0;        //每次验证完sum要进行清零
        num++;
    }
    system("pause");
    return 0;
}