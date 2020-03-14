#include <stdio.h>
#include <stdlib.h>
/**
 * 有n个结构体变量，内含学号，姓名和3门课程的成绩，要求输出平均成绩最高的学生的信息
 * */
#define N 3
struct Student{
    int num;
    char name[20];
    float score[3];
    float average;
};
int main()
{
    void input(struct Student *person);
    struct Student max1(struct Student *person);
    void print(struct Student person);
    struct Student max2(struct Student p[]);

    struct Student stu[N];
    struct Student max_person1,max_person2;

    input(stu);
    printf("The method 1 finish it:\n");
    max_person1 = max1(stu);
    print(max_person1);
    printf("The method 2 finish it:\n");
    max_person2 = max2(stu);
    print(max_person2);
    system("pause");
    return 0;
}

void input(struct Student *person)
{
    int i,j;
    float sum = 0;
    for ( i = 0; i < N ; i++)
    {
        printf("Please enter the information of person %d\n",i+1);
        scanf("%d %s %f %f %f",&((person+i)->num),
        &((person+i)->name),
        &((person+i)->score[0]),
        &((person+i)->score[1]),
        &((person+i)->score[2]));
        for ( j = 0; j < 3; j++)        //计算平均值
        {
            sum += (person+i)->score[j];        //BUG:这里vscode不知道为什么不能自动补全成员变量
        }
        (person+i)->average = sum/3;
        sum = 0;
    }
}

struct Student max1(struct Student *person)     //排序实现
{
    int i,j;
    struct Student temp;
    for ( i = 0; i < N; i++)
    {
        for ( j = i+1; j < N; j++)
        {
            if ((person+i)->average > (person+j)->average)
            {
                temp = *(person+i);
                *(person+i) = *(person +j);
                *(person+j) = temp;   
            }
        }
    }
    return person[N - 1];       //返回最大的学生
} 

struct Student max2(struct Student p[])     //记录最大值位置实现
{
    int i_temp = 0;
    for (int i = 0; i < N; i++)
    {
        if (p[i].average > p[i_temp].average)
        {
            i_temp = i;
        }
    }
    return p[i_temp];
}
void print(struct Student person)
{
    printf("The highest student is:\n");
    printf("number:%d\nname: %s\nscore: %6.2f%6.2f%6.2f\naverage: %6.2f\n",
    person.num,
    person.name,
    person.score[0],
    person.score[1],
    person.score[2],
    person.average);
}