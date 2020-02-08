#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,sum = 0;
    while (i<=100)
    {
        sum = sum + i;
        i++;
    }
    printf("The summary is %d\n",sum);
    system("pause");
    return 0;
}