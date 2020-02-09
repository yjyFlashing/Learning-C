#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,sum = 0,temp = 0;
    int i,j;
    printf("Please enter a and n:\n");
    scanf("%d %d",&a,&n);
    for(i = 1;i <= n;i++)
    {
        for ( j = 0; j < i; j++)
        {
            temp = a + temp*10;  
        }
        sum = sum + temp;
        printf("%d\n",temp);
        temp = 0;           //每次重新产生加数后要进行清零
    }
    printf("The summary is %d\n",sum);
    system("pause");
    return 0;
}