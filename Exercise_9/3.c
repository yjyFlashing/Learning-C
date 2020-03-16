#include <stdio.h>
#include <stdlib.h>
/**
 * 打印学生成绩
 * */
struct Student{
    int num;
    char name[20];
    float score[3];
};

int main()
{
    void print_info(struct Student *stu);
    struct Student stu[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter N0.%d student's information:\n",i+1);
        scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    }
    print_info(stu);
    system("pause");
    return 0;
}

void print_info(struct Student *stu)
{
    printf("Their information:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d %s %6.1f %6.1f %6.1f\n",stu->num,stu->name,stu->score[0],stu->score[1],stu->score[2]);
        stu++;
    }
}