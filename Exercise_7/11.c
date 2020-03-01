#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 使用冒泡法，将10个字符按照由小到大排列
 * */
#define LEN 100     //最大范围
int main()
{
    void bubble_sort(char str[]);

    char str[LEN];
    printf("Please enter a string:\n");
    gets(str);
    bubble_sort(str);
    printf("The sorting result is:\n");
    puts(str);
    system("pause");
    return 0;
}

void bubble_sort(char str[])
{
    int i,j,temp;
    for (i = 0; i < strlen(str) - 1; i++)       //MARK: 保证第一轮结束后最大的数是最后一个元素
    {
        for ( j = 0; j < strlen(str) - 1 - i; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}