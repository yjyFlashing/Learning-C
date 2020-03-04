#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指向数组的指针作函数参数（逻辑编写程序时，逻辑没有问题）
 * */
int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    average(score[0],12);
    search(score,2);
    system("pause");
    return 0;
}

void average(float *p,int n)        //指向数组元素的指针变量
{
    float sum = 0,i;
    for(i = 0;i < n;i++)
    {
        sum += *p;
        p++;
    }
    printf("Average = %6.2f\n",sum/n);
}

void search(float (*p)[4],int n)   //指向一维数组的指针变量
{
    int row = n/4;      //行数

    printf("The score of No. %d:\n",n);
    for (int i = 0; i < 4; i++)
    {
        printf("%6.2f",*(*(p+n)+i));        //注意下格式化输出时候的符号对应，不要用惯了%d，就粗心错了
    }
}