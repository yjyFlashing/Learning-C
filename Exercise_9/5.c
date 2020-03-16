#include <stdio.h>
#include <stdlib.h>
/**
 * 输出学生成绩等内容
 * */
struct Student{
    int num;
    char name[10];
    float score[3];
    float aver;
};

int main()
{
    void input_info(struct Student *stu);
    void print_info(struct Student *stu,int max);
    int max_and_average(struct Student *stu);

    struct Student stu[10];
    int max_num = 0;
    input_info(stu);
    max_num = max_and_average(stu);
    print_info(stu,max_num);
    system("pause");
    return 0;
}

void input_info(struct Student *stu)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter N0.%d student's information:\n",i+1);
        scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    }
}

int max_and_average(struct Student *stu)        //计算平均分并获得最高平均分的编号
{
    int i,max = 0;
    float sum = 0;
    for ( i = 0; i < 10; i++)
    {   
        sum = (stu+i)->score[0] + (stu+i)->score[1] + (stu+i)->score[2];
        (stu+i)->aver = sum/3;
        sum = 0;
        if (stu[max].aver < stu[i].aver)
        {
            max = i;
        }
    }
    return max;
}

void print_info(struct Student *stu,int max)
{
    //输出最高平均分
    printf("The highest person is:\n");
    printf("%d %s %6.1f %6.1f %6.1f %6.1f\n",stu[max].num,stu[max].name,stu[max].score[0],stu[max].score[1],stu[max].score[2],stu[max].aver);
    //输出全部信息
    printf("Their information:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d %s %6.1f %6.1f %6.1f %6.1f\n",stu->num,stu->name,stu->score[0],stu->score[1],stu->score[2],stu->aver);
        stu++;
    }
}