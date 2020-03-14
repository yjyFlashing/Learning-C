#include <stdio.h>
#include <stdlib.h>
/**
 * 使用结构体输入两个学生的学号，姓名和成绩，输出成绩较高的学生的学号，姓名和成绩
 * */
int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    };
    struct Student student1,student2;       //定义结构体变量时，一定要用struct + 结构体类型名，不可以只用类型名进行定义
    printf("Please enter student1 information:\n");
    scanf("%d %s %f",&student1.num,student1.name,&student1.score);
    printf("Please enter student2 information:\n");
    scanf("%d %s %f",&student2.num,student2.name,&student2.score);
    if (student1.score > student2.score)
    {
        printf("The higher is Student 1:\n");
        printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
    }else
    {
        printf("The higher is Student 2:\n");
        printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
    }
    system("pause");
    return 0;
}