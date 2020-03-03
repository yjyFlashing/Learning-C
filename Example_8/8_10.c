#include <stdio.h>
#include <stdlib.h>
/**
 * 用指针方法对10个整数按照由大到小顺序进行排序
 * */
int main()
{
    void input(int *num);
    void output(int *num,char *str);
    void sort_bubble(int *num);     //使用选择排序法进行排序

    int a[10];
    char str1[] = {"The original order:"};
    char str2[] = {"The recent order:"};
    input(a);
    output(a,str1);
    sort_bubble(a);
    output(a,str2);
    system("pause");
    return 0;
}

void input(int *num)
{
    printf("Please enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",num++);
    }
}

void output(int *num,char *str)
{
    puts(str);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d",*num++);
    }
    printf("\n");
}

void sort_bubble(int *num)     //使用选择法进行排序
{
    int i,j,min_temp;
    for(i = 0;i < 9;i++)
    {
        for(j = i+1;j < 10;j++)
        {
            //注：想借助指针变量的传递，改变数组中元素时，一定要记得检查是否真的改变了数组中的元素，即是否真的操作了数组的存储数据的地址
            if(*(num+i) < *(num+j))         
            {
                min_temp = *(num+i);
                *(num+i) = *(num+j);
                *(num+j) = min_temp;
            }
        }
    }
}
