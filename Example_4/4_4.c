#include <stdio.h>
#include <stdlib.h>
/**
 * 实现字母大写转小写
 * */
int main()
{
    char ch1,ch2;
    printf("Please input two characters:\n");
    scanf("%c %c",&ch1,&ch2);
    /***法一***/
    ch1 = (ch1 >= 'A'&&ch1 <= 'Z') ? ch1 + 32:ch1;
    putchar(ch1);
    printf("%c",ch1);
    /***法二***/
    (ch2 >= 'A'&& ch2 <= 'Z')? putchar(ch2+32):putchar(ch2); 
    system("pause");
    return 0;
}