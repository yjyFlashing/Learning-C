#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 判断素数（改进版）
 * */
int main()
{
    int i,n,k;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    k = sqrt(n);
    for(i = 2;i <= k;i++)
    {
        if(n%i==0) break;
    }
    if(i<=k) printf("Not the prime number\n");
    else printf("The n prime number\n");            //此时i应当为k+1
    system("pause");
    return 0;
}
