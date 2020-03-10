#include <stdio.h>
#include <stdlib.h>
/**
 * 将最小的数与第一个数互换，最大的数与最后一个数互换
 * 注：不要忽略了特殊情况
 * */
int main()
{
    void Input_10numbers(int*);
    void sort(int*);
    void Output_10numbers(int*);
    int a[10];
    Input_10numbers(a);
    sort(a);
    Output_10numbers(a);
    system("pause");
    return 0;
}

void Input_10numbers(int *str)
{
    printf("Please enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",str+i);
    }
}
    
void sort(int *str)
{
    void swap(int*,int*);

    int *max_addr = str;
    int *min_addr = str;
    for(int i = 0;i < 10;i++)
    {
        if(*max_addr < *(str+i))
            max_addr = str + i;
        if (*min_addr > *(str + i))
            min_addr = str + i;
    }
    swap(min_addr,str);     //最小值交换
    if(max_addr == str)     //特殊情况：最大值原本就在第一个元素
    {   
        max_addr = min_addr;
        swap(max_addr,str+9);
    }else       //最大值不在第一个元素
    {
        swap(max_addr,str+9);
    }
}

void swap(int *str1,int *str2)
{
    int temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void Output_10numbers(int *str)
{
    printf("The recent order is :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%5d",*(str+i));
    }
    printf("\n");
}