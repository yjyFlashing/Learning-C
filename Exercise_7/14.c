#include <stdio.h>
#include <stdlib.h>
/**
 * 学生成绩综合设计
 * */
int main()
{
    void Person_average(float str[][6],int name);      //个人平均分
    void Subject_average(float str[][6],int score);     //各科平均分
    void Max_horizon(float str[][6]);       //最高分数
    float Aver_variance(float str[][6]);    //平均分方差
    void Print_chart(float data[][6]);      //打印图表
    void Input_data(float data[][6]);       //输入数据

    float score[11][6];
    int i;
    float var;
    printf("Score Statistic system\n");    
    //输入数据
    Input_data(score);
    //计算各个学生的平均分
    for (i = 0; i < 10; i++)
    {
        Person_average(score,i);
    }
    //计算每门课的平均分
    for(i = 0; i < 5;i++)       
    {
        Subject_average(score,i);
    }
    //制表
    Print_chart(score);
    //最大得分
    Max_horizon(score);
    //平均分方差
    var = Aver_variance(score);
    printf("The average variance is %6.2f",var);
    system("pause");
    return 0;
}

/**
 * 输入数据
 * */
void Input_data(float data[][6])       //MARK:二维数组作为形参时，使用方式与一维数组作为形参时一样，直接用数组名即可
{
    int i,j;
    for (i = 0; i < 10; i++)
    {
        printf("Please enter the scores of the student %d:\n",i+1);
        for (j = 0 ; j < 5 ; j++)
        {
            scanf("%f",&data[i][j]);
        }
    }
}

/**
 * 打印统计数据图表
 * */
void Print_chart(float data[][6])
{
    int i,j;
    printf(" name      score1    score2    score3    score4    score5    average\n");     
    for ( i = 0; i < 11; i++)
    {
        if(i < 10)
        {
            printf("No. %d ",i+1);
            for ( j = 0; j < 6; j++)
            {
                printf("    %.2f",data[i][j]);
            }              
        }
        if(i == 10)
        {
            printf("average");
            for ( j = 0; j < 6; j++)
            {
                printf("    %.2f",data[i][j]);
            }  
        } 
        printf("\n");
    }
}
/**
 * 个人平均分 
 * */
void Person_average(float str[][6],int name)
{
    int i;
    float sum = 0;
    for ( i = 0; i < 5; i++)
    {
        sum += str[name][i];
    }
    str[name][5] = sum/5;   //将个人平均分放在一行中的最后一个元素
}
/**
 * 各科平均分
 * */
void Subject_average(float str[][6],int score)
{
    int i;
    float sum = 0;
    for ( i = 0; i < 10; i++)
    {
        sum += str[i][score];
    }
    str[10][score] = sum/10;    //将每科平均分放在最下一行
}

/**
 * 求最大值
 * */
void Max_horizon(float str[][6])
{
    int i,j,i_max,j_max;
    float max = str[0][0];
    for(i = 0;i < 10;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(max < str[i][j])
            {
               max = str[i][j]; 
               i_max = i;
               j_max = j;
            }    
        }
    }
    printf("The maxium score is %6.2f score %d  NO.%d\n",max,j_max+1,i_max+1);
}

/**
 * 求平均分方差
 * */
float Aver_variance(float str[][6])
{
    float res;
    float sum1 = 0,sum2 = 0;
    int i,j;
    //平方项求和
    for ( i = 0; i < 10; i++)
    {
        sum1 += str[i][5]*str[i][5];    //个人平均值已经存放在每一行的最后一个元素中
    }
    sum1 = sum1/10;
    //和的平方项
    for ( i = 0; i < 10; i++)
    {
        sum2 += str[i][5];      //个人平均值已经存放在每一行的最后一个元素中
    }
    sum2 = sum2/10;
    sum2 *= sum2;

    return sum1 - sum2;
}