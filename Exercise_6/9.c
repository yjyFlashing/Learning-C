#include <stdio.h>
#include <stdlib.h>
/**
 * 折半查找法查找数组中元素
 * */
#define L 15
int main()
{
    int num[L]={0,1,2,3,4,5,6,7,8,11,12,13,14,15,16};   //FIXME:设置用户自行输入的程序，添加输入大小检测的程序
    int n,scale_l,scale_r,mid;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    if(n == num[0])
    {
        printf("The order is 0\n");
    }else if(n == num[14])
    {
        printf("The order is 14");
    }else       //不包括端点的情况
    {
        scale_l = 0;
        scale_r = 14;
        while (1)
        {
            mid = (scale_l+scale_r)/2;
            if(n > num[mid]) 
            {
                scale_l = mid + 1;
            }else if(n < num[mid])
            {
                scale_r = mid - 1;
            }else 
            {
                printf("The order is %d\n",mid);
                break;
            }
            if(scale_l > scale_r)        //构成不了区间
            {
                printf("The number doesn't exist\n");
                break;
            }
        }  
    }
    system("pause");
    return 0;
}