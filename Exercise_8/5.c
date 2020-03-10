#include <stdio.h>
#include <stdlib.h>
/**
 * 围圈问题
 * */
int main()
{
    void link_order(int*,int);
    void print_last_one(int*,int);

    int num,*ring;
    printf("Please enter the populations:\n");
    scanf("%d",&num);
    ring = (int *)malloc(num * sizeof(int));
    link_order(ring,num);       //赋予初始编号
    print_last_one(ring,num);
    free(ring);
    system("pause");
    return 0;
}

void link_order(int *str,int num)
{
    int i;
    for(i = 0;i < num;i++)
    {   
        *(str + i) = i+1;
    }
}

void print_last_one(int *str,int num)       //返回最后一个的原始编号
{
    int quit_num = 0;       //已经退出的人数
    int counter = 0;        //报数计数器
    int i = 0;
    while (quit_num < num-1)    //这个循环判断条件要注意
    {
        if(*(str + i) != 0) 
        {
            counter++;
            if(counter == 3) 
            {
                *(str+i) = 0;
                quit_num++;
                counter = 0;
            }
        }
        i++;
        if(i == num) i = 0;     //这样才可以实现环形
    }
    while (*str == 0)
    {
        str++;
    }
    printf("The last one is:\n");
    printf("%d\n",*str);
}
