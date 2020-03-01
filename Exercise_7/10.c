#include <stdio.h>
#include <stdlib.h>
/**
 * 输出字符串中最长的单词
 * */
int main()
{
    void Find_longest(char str_org[],char str_res[]);

    char str1[100],str2[50];
    printf("Please enter a string:\n");
    gets(str1);
    Find_longest(str1,str2);
    printf("The original string:\n");
    puts(str1);
    printf("The longest word:\n");
    puts(str2);
    system("pause");
    return 0;
}

/**
 * 将最长的单词复制到另一个字符串中
 * */
void Copy_longest(int end_addr,int max_len,char str1[],char str2[])     
{
    int i,j;
    //字符起点计算length = end - start +1 => start = end - length + 1
    for ( i = (end_addr - max_len + 1),j = 0; i < end_addr; i++,j++)        
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
}

/**
 * 找出一个字符串中最长单词
 * */
void Find_longest(char str_org[],char str_res[])
{
    int i = 0,max_len = 0,len = 0,end;
    while(str_org[i] != '\0')
    {
        if(str_org[i] != ' ')
        {
            len++;      //计算每个单词的长度
        }else       //空格即为单词的结束符
        {
            if (max_len < len)      //找出最长的长度
            {
                max_len = len;
                len = 0;
                end = i;     //记录最长字符串的终点strorg[i]此时为空格，所以要减一
            }
        }
        i++;
    }
    if (max_len < len)          //防止最长的也是最后一个单词，因此需要再比较一遍
    {
        max_len = len;
        len = 0;
        end = i;     //记录最长字符串的终点
    }
    Copy_longest(end,max_len,str_org,str_res);
}