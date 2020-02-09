#include <stdio.h>
#include <stdlib.h>
/**
 * 求m和n的最大公约数和最小公倍数(辗转相除法)
 * 先求最大公约数，再用最大公约数*最小公倍数=m*n求最小公倍数
 * */
int main()
{
    int  m,n,temp,r,p;
    printf("Please enter m and n:\n");
    scanf("%d %d",&m,&n);
    if (n<m)           //保证m<n，为辗转相除铺垫
    {
        temp = m;
        m = n;
        n = temp;
    }
    p = n * m;
    while (m!=0)    //辗转相除，除到整除为止
    {
        r = n%m;
        n = m;
        m = r;
    }
    printf("The greatest common divisor is %d\n",n);
    printf("The smallest common factor is %d\n",p/n);       //说明最大公约数*最小公倍数=m*n
    system("pause");
    return 0;
}