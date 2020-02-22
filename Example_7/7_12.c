#include <stdio.h>
#include <stdlib.h>
/**
 * 利用选择法对数据进行排序
 * */

int main()
{   
    void sort_array(int num[],int len);         //声明

    int a[10];      //数组定义一定要指定大小
    printf("Please enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)        //输入原始数据
    {
        
        scanf("%d",&a[i]);
    }
    sort_array(a,10);       //调用排序函数
    for (int i = 0; i < 10; i++)        //输出排序后数据
    {
        printf("%5d",a[i]);
    }
    system("pause");        
    return 0;
}

void sort_array(int num[],int len)  //对数组中元素进行排序
{
    int i,j,temp;
    for(i = 0;i < len - 1;i++)      //10个数共比较9轮
    {
        for(j = i+1;j < len; j++)   //每一轮比较的次数比前一轮都少一次
        {
            if(num[i] > num[j])     //交换数据位置
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    
}

