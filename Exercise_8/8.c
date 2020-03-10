#include <stdio.h>
#include <stdlib.h>
/**
 * 输入一行文字，找出其中大写字母，小写字母，空格，数字以及其他字符各有多少
 * */
int main()
{
    int i = 0,upper_num = 0,lower_num = 0,dig_num = 0,space_num = 0,other = 0;
    char *str = (char*)malloc(100);
    printf("Please enter a string:\n");
    gets(str);
    while (*(str+i) != '\0')
    {
        if(*(str+i) >='A' && *(str+i) <= 'Z')
            upper_num++;
        else if( *(str+i) >= 'a' && *(str+i) <= 'z')
            lower_num++;
        else if(*(str+i) >='0' && *(str+i) <= '9')
            dig_num++;
        else if(*(str+i) == ' ')
            space_num++;
        else
            other++;
        i++;
    }
    free(str);      //要想释放内存，必须保持释放时内存的起始地址与动态分配时获得的起始地址一致
    printf("The number of upper is %d\n",upper_num);
    printf("lower:%d\n",lower_num);
    printf("The number of digit is %d\n",dig_num);
    printf("The number of space is %d\n",space_num);
    printf("The number of others is %d\n",other);
    system("pause");
    return 0;
}