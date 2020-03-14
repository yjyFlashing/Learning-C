#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 通过指向结构体变量的指针变量输出结构体变量中的成员信息
 * */
int main()
{
    struct Student{
        int num;
        char name[20];
        char sex;
        float score;
    };
    struct Student stu_1;
    struct Student *p;      //指针的基类型必须与其指向的变量的基类型相同
    p = &stu_1;
    stu_1.num = 10101;
    strcpy(stu_1.name,"Li Ming");
    stu_1.sex = 'M';
    stu_1.score = 98.5;

    printf("name: %s\nnumber: %d\nsex: %c\nscore :%6.2f\n",(*p).name,(*p).num,(*p).sex,(*p).score);

    system("pause");
    return 0;
}