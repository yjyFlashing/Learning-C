#include <stdio.h>
#include <stdlib.h>
/**
 * Better!!
 * */
int main()
{
    int a,n,i = 1,sum = 0,tn = 0;
    printf("Enter a and n:\n");
    scanf("%d %d",&a,&n);
    while (i<=n)
    {
        tn = tn + a; 
        sum = sum + tn;
        a = a*10;
        i++;            //使用++i也可以,循环次数一致
    }
    printf("The loop times:%d\n",i);
    printf("Summary is %d\n",sum);
    system("pause");
    return 0;
}