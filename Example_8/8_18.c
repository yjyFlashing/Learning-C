#include <stdio.h>
#include <stdlib.h>
/**
 * 将字符串a复制为字符串b，然后输出字符串b(两个字符串要在内存中单独占有空间)
 * */
int main()
{
    char a[] = "I am a student";
    char b[50];
    int i; 
    for (i = 0; a[i] != '\0' ; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("string a is %s\n",a);
    printf("string b is %s\n",b);
    system("pause");
    return 0;
}