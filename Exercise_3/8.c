#include <stdio.h>
#include <stdlib.h>

#define Pi 3.1415926

int main()
{
    int c1,c2;
    /**
     * (1)
     * */
    c1 = getchar(); 
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    putchar('\n');
    /**
     * (2)
     * */
    printf("%c's ASCII is %d\n",c1,c1);
    printf("%c's ASCII is %d\n",c2,c2);   
    
    system("pause");
    return 0;
}