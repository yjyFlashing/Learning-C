#include <stdio.h>
#include <stdlib.h>
/**
 * 在上一题的基础上，查找有一门以上课程不及格的学生，并输出其全部成绩
 * */
int main()
{
    void Find_under_60(float (*p)[4]);
    float score[3][4] = {{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    Find_under_60(score);
    system("pause");
    return 0;
}

void Find_under_60(float (*p)[4])
{
    int i,line = 1;       
    float (*p_end)[4];
    p_end = p + 3;
    for(;p < p_end;p++,line++)      //地址偏移
    {
        for (i = 0; i < 4; i++)
        {
            if (*(*p+i) < 60 )      //只要有不及格就输出
            {
                break;
            }
        }
        if (i < 3)      //异常结束循环,正常结束循环应该是 i = 3
        {
            printf("Student %d:\n",line);
            for (i = 0; i < 4; i++)     //输出这一行的全部成绩
            {
                
                printf("%6.2f",*(*p+i));
            }
        }
        printf("\n");
    }
}

