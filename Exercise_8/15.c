#include <stdio.h>
#include <stdlib.h>
/**
 * 学生成绩统计
 * */
int main()
{
    void Input_score(double (*p)[5]);
    double Average(double (*p)[5],int n);
    void Under_60(double (*p)[5]);
    void Average_beyond90(double (*p)[5]);

    double score[4][5];
    Input_score(score);
    printf("The columun 1 average is %6.2lf:\n",Average(score,0));
    Under_60(score);
    Average_beyond90(score);

    system("pause");
    return 0;
}

void Input_score(double (*p)[5])
{
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        printf("Please enter the student %d's score:\n",i+1);
        for ( j = 0; j < 5; j++)
        {
            scanf("%lf",*(p+i)+j);
        }
    }
}

double Average(double (*p)[5],int n)        //求第n列的平均值
{
    double sum = 0;
    int i;
    for ( i = 0; i < 4; i++)
    {
        sum += *(*(p+i)+n);
    }
    return sum/4;    
}

void Under_60(double (*p)[5])
{
    int flag = 0;
    int i,j;
    printf("The failed student:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if( *(*(p+i)+j) < 60)
            {
                flag++;
            }
        }
        if(flag == 2) 
        {
            printf("The N0.%d:",i+1);
            for (int n = 0; n < 5; n++)
            {
                printf("%6.2lf",*(*(p+i)+n));
            }
            printf("\n");
        }
        flag = 0;
    }
}

void Average_beyond90(double (*p)[5])
{
    int i,j;
    int flag = 0;
    double sum = 0,aver = 0;
    printf("The good students:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (*(*(p+i)+j) >= 85)
            {
                flag++;
            }
            sum +=*(*(p+i)+j);
        }
        aver = sum/5;
        if(aver >= 90 || flag == 5)
        {
            printf("The N0.%d:",i+1);
            for (int n = 0; n < 5; n++)
            {
                printf("%6.2lf",*(*(p+i)+n));
            }
            printf("\n");
        }
        aver = sum = 0;
        flag = 0;
    }
}