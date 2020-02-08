#include <stdio.h>
#include <stdlib.h>

/**
 * 使用break和continue分别对循环进行不同的控制
 * */

int main()
{
    int i,j,n = 0;
    int mod;
    printf("Please enter the figure  model(1 or 2):\n");
    scanf("%d",&mod);
    for ( i = 1; i <= 4; i++)       //控制行
        for(j = 1;j<=5;j++,n++)     //控制列
        {
            if(n%5==0) printf("\n");        //余数的计算：0%5得0，因此会有一个换行，1%5得1，不足5以此类推
            if (mod == 1)
            {
                if(i == 3&& j == 1) break;      //终止整个内循环，整个i=3情况都会没有
            }
            if(mod == 2)
            {
                if(i == 3&& j == 1) continue;   //结束本次循环，i = 3且j=1的情况没有
            }
            printf("%d\t",i*j);
        }
    printf("\n");
    system("pause");
    return 0;
}
