#include <stdio.h>
#include <stdlib.h>
/**
 * 统计字符串中的字母，数字，空格和其他字符
 * */
int num_len = 0,aph_len = 0,space_len = 0,oth_len = 0;

int main()
{
    void Figure_factor(char str[]);
    char str[100];
    printf("Please enter a string:\n");
    gets(str);
    Figure_factor(str);
    printf("The figure number is %d\n",num_len);
    printf("The alphabet number is %d\n",aph_len);
    printf("The space number is %d\n",space_len);
    printf("The other is %d\n",oth_len);
    system("pause");
    return 0;
}

void Figure_factor(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a'&& str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            aph_len++;
        }else if (str[i] >= '0' && str[i] <= '9')
        {
            num_len++;
        }else if (str[i] == ' ')
        {
            space_len++;
        }else
        {
            oth_len++;
        }
        i++;
    }
}