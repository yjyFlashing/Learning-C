#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 统计字符串中的整数
 * */
int main()
{
    void Output_number_in_string(char*,int*);
    char str[100];
    int number[100];
    printf("Please enter a string:\n");
    gets(str);
    Output_number_in_string(str,number);
    system("pause");
    return 0;
}

int num_counter(char *addr)  //检索连续数字的位数
{
    int num = 0;
    while(*addr >= '0' && *addr <= '9')
    {
        num++;
        addr++;
    }
    return num;
}

int convert(char *addr,int n)    //进行数字字符与多位数之间的转换
{
    int i;
    int sum = 0;
    int number;
    for (i = n-1; i >= 0; i--)
    {
        number = *addr - '0';
        sum += number*pow(10,i);
        addr++;
    }
    return sum;
}

void Output_number_in_string(char *str,int *buffer)
{
    int i = 0,num = 0,digit_number = 0;
    while (*(str+i) != '\0')
    {
        num = num_counter(str+i);
        if(num != 0)
        {
            //MARK注意：buffer++不能用，buffer++会导致原始的首地址移动了，不利于后面的输出，这个问题出现不止一次
            *(buffer+digit_number) = convert(str+i,num);        
            digit_number++;
            i = i+num;
        }else
        {
            i++;
        }
        num = 0;
    }
    printf("%d numbers in string are :\n",digit_number);
    for (i = 0; i < digit_number; i++)
    {
        printf("%d\n",*(buffer+i));
    }
    
}