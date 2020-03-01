#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 对10个数字进行从小到大的排序(冒泡法排序)
 * 关键在于第一轮要找出最大的元素
 * */
int main()
{
    int num[10],temp;
    int i,j;
    printf("Please enter 10 numbers:\n");
    for (i = 0; i < 10; i++)        //输入
    {
        scanf("%d",&num[i]);
    }

    for (i = 0; i < 9; i++)     //10个数则要经过9轮比较
    {
        //第一轮需要比较九次，j以0作为起点，因此应当结束是9-j不是10-j
        for (j = 0; j < 9-i; j++)   //第j轮要进行10-i次两两比较  
        {
            if(num[j]>num[j+1])     //注意内循环变量或者外循环变量的正确对应
            {
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)    //输出
    {
        printf("%5d",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}