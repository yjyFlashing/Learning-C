#include <stdio.h>
#include <stdlib.h>
/**
 * 将n个学生的成绩按照高低顺序输出
 * */
int main()
{
    struct Student{
        int num;
        char name[20];
        float score;
    }student[5];
    struct Student temp;        //结构体变量之间可以通过变量名相互直接赋值
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter No. %d student information:\n",i+1);
        scanf("%d %s %f",&student[i].num,student[i].name,&student[i].score);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (student[i].score < student[j].score)
            {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%6.2f %d %s\n",student[i].score,student[i].num,student[i].name);
    }
    system("pause");
    return 0;
}