#include <stdio.h>
#include <stdlib.h>
/**
 * 有一个已经排好顺序的数组，要求输入一个数后，按照原来的排序规律将其插入数组中
 * */
int main()
{
    int a[11] = {1,4,6,9,13,16,19,28,40,100};
    int i,j,num,num_temp,temp1,temp2;
    printf("The original array:\n");    //输出原来数组
    for ( i = 0; i < 10; i++)
    {
        printf("%8d",a[i]);
    }
    printf("\n");
    printf("Insert a number:\n");
    scanf("%d",&num);
    a[10] = num;        //先将数字暂存在第11号位置
    for ( i = 0; i < 10; i++)
    {
        if(a[i] < num && a[i+1] > num)      //与书上大同小异
        {
            num_temp = i+1;     //记录插入位置
            temp1 = a[i+1];
            for(j = num_temp;j < 10;j++)    //实现数组内元素的向后推移
            {
                temp2 = a[j+1];
                a[j+1] = temp1;
                temp1 = temp2;
            }
            a[num_temp] = num;
            break;
        }
    }
    printf("The recent array is:\n");   //输出改变后数组
    for (i = 0; i < 11; i++)
    {
        printf("%8d",a[i]);
    }
    system("pause");
    return 0;
}