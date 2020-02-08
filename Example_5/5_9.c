#include <stdio.h>
#include <stdlib.h>
/**
 * 判断素数(质数)
 * */
int main()
{
    int n,i;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    for(i = 2;i <= n-1;i++)
    {
        if(n%i == 0) break;
    }
    if(i<n) printf("Not prime integer\n");
    else printf("The number is a prime integer\n");
    system("pause");
    return 0;
}
