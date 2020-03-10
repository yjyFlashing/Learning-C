#include <stdio.h>
#include <stdlib.h>
/**
 * 将一个5*5的矩阵中最大的元素放在中心，4个角分别放4个最小的元素（顺序为从左到右，从上到下依次从小到大排放）
 * */
int main()
{
    void Input(int (*p)[5]);
    void change(int (*p)[5]);    //使用轮询来进行实现,记录坐标即可
    void Output(int (*p)[5]);

    int num[5][5];
    Input(num);
    change(num);
    Output(num);
    system("pause");
    return 0;
}

void Input(int (*p)[5])
{
    int i,j;
    printf("Please enter 5*5 matrix:\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
}

void change(int (*p)[5])    //使用轮询来进行实现,记录坐标即可
{
    void swap(int *num1,int *num2);
    int max = **p;    //存储最大值
    int min = **p;     //存储四个最小值
    int  i,j; 
    int max_i = 0,max_j = 0,min_i = 0,min_j = 0;        //一定要赋初值，因为很可能第一个数字就是最大或者最小     
    /**获取最大值和第一个最小值**/
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(max <= *(*(p+i)+j))       //找出最大值
            {
                max_i = i;
                max_j = j;
            }
            if(min >= *(*(p+i)+j))       //找出第一个最小值
            {
                min_i = i;
                min_j = j;
            }
        }    
    }
    swap(*(p+2)+2,*(p+max_i)+max_j);        //最大值放在中心
    swap(*p,*(p+min_i)+min_j);
    /**获取第二个最小值**/
    min = *(*p+1);  //重新赋值为0行1列
    for(i = 0;i < 5;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(i == 0 && j == 0) continue;     //跳过第一个最小值的位置
            if(min >= *(*(p+i)+j))
            {
                min = *(*(p+i)+j);
                min_i = i;
                min_j = j;
            }
        }
    }
    swap(*p+4,*(p+min_i)+min_j);
    /**获取第三个最小值**/
    min = *(*p+1);  
    for(i = 0;i < 5;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(i == 0 && j == 0) continue;     //跳过第一个最小值的位置
            if(i == 0 && j == 4) continue;      //跳过第二个最小值的位置
            if(min > *(*(p+i)+j))
            {
                min = *(*(p+i)+j);
                min_i = i;
                min_j = j;
            }
        }
    }
    swap(*(p+4)+0,*(p+min_i)+min_j);
    /**获取第四个最小值**/
    min = *(*p+1);  //重新赋值为0行1列
    for(i = 0;i < 5;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(i == 0 && j == 0) continue;     //跳过第一个最小值的位置
            if(i == 0 && j == 4) continue;      //跳过第二个最小值的位置
            if(i == 4 && j == 0) continue;      //跳过第三个最小值的位置
            if(min > *(*(p+i)+j))
            {
                min = *(*(p+i)+j);      //易错点：不仅要记录新的坐标，还要更新新的最小值
                min_i = i;
                min_j = j;
            }
        }
    }
    swap(*(p+4)+4,*(p+min_i)+min_j);
}

void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void Output(int (*p)[5])
{
    int i,j;
    printf("The recent matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
        printf("\n");
    }
}







