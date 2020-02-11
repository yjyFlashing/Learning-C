#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 乒乓球赛
 * 利用循环来进行X,Y,Z的排列组合，将所有组合进行一一验证
 * */
int main()
{
    char i,j,k;
    for(i = 'X';i <= 'Z';i++)
        for(j = 'X';j <= 'Z';j++)
            if (i != j)     //不会出现队内比赛
            for(k = 'X';k <= 'Z';k++)
                if(i != k && j != k)
                    if(i != 'X' && k != 'X' && k != 'Z' )
                    printf("A--%c\nB--%c\nC--%c\n",i,j,k);
    system("pause");
    return 0;
}