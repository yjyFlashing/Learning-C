#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i<=100);
    
    printf("The summary is %d\n",sum);
    system("pause");
    return 0;
}