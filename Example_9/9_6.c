#include <stdio.h>
#include <stdlib.h>
/**
 * 使用指向结构体数组的指针输出3个学生的信息
 * */
int main()
{
    struct Student{
        int num;
        char name[20];
        char sex;
        int age;
    };
    struct Student stu[3] = {{10101,"Li ming",'M',18},{10102,"Zhang fang",'F',19},{10103,"Wang min",'M',20}};
    struct Student *p;
    p = stu;        //指针定义后一定要有所指向
    for (int i = 0; i < 3; i++)
    {
        printf("%d %s %c %d\n",(p+i)->num,(p+i)->name,(p+i)->sex,(p+i)->age);
    }
    system("pause");
    return 0;
}