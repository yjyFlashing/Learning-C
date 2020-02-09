#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int en_num = 0,sp_num = 0,d_num = 0,ch_num = 0;
    printf("Please enter a string:\n");
    while (c != '\n')
    {
        c = getchar();
        if (c >= 'A' && c <= 'Z'||c >= 'a'&& c <= 'z')      //注意：在ASCII码表中字母的大写和小写并不是接在一起的！！！
        {
            en_num++;
        }else if (c == ' ')     //空格直接进行输入
        {
            sp_num++;
        }else if (c >= '0' && c <= '9')
        {
            d_num++;
        }else                   //若要考虑“其他”情况就应当想到使用 if {}else if{}else或者switch
        {
            ch_num++;
        }
    }
    printf("char:%d\nspace:%d\nnumber:%d\nothers:%d\n",en_num,sp_num,d_num,ch_num);
    system("pause");
    return 0;
}