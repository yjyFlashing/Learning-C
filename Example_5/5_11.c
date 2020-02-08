#include <stdio.h>
#include <stdlib.h>
/**
 * 字符加密
 * */
int main()
{
    char c;
    while ((c = getchar())!='\n')
    {
        if((c >= 'A'&& c <= 'Z') ||(c >= 'a'&& c <= 'z') )      // &&的优先级高于||的优先级,因此可以不用括号
        {
            if((c >= 'W'&& c <= 'Z')||(c >= 'w'&&c <='z')) c -= 22;
            else c += 4;
        }
        putchar(c);  
    }
    system("pause");
    return 0;
}
