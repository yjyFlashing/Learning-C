#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    a = 10000/3.0;
    printf("%f\n",a);       //float只能保证6位有效数字，double可以保证15位有效数字
    system("pause");
    return 0;
}