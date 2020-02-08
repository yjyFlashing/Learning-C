#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;
    /*(3)
    int c1,c2;
    */
    c1 = 97;
    c2 = 98;
    /*（2）
    c1 = 197;
    c2 = 198;*/
    printf("c1 = %c,c2 = %c\n",c1,c2);
    printf("c1 = %d,c2 = %d\n",c1,c2);
    system("pause");
    return 0;
}