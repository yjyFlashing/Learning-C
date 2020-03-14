#include <stdio.h>
#include <stdlib.h>
/**
 * 共用体的使用
 * */
struct 
{
    int num;
    char name[10];
    char sex;
    char job;
    union
    {
        int clas;
        char position[10];
    }category;
}person[2];

int main()
{
    int i;
    for ( i = 0; i < 2; i++)        //输入数据
    {
        printf("Please enter the data of person:\n");
        scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
        if(person[i].job == 's')    //如果此人是学生
        {
            scanf("%d",&person[i].category.clas);
        }
        else if (person[i].job == 't')
        {
            scanf("%s",person[i].category.position);
        }
        else{
            printf("Input error");
        }
    }
    printf("\n");
    printf("No.   name    sex    job    class/position\n");
    for ( i = 0; i < 2; i++)
    {
        if (person[i].job == 's')
        {
            printf("%d   %s   %c   %c   %5d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas);
        }
        if (person[i].job == 't')
        {
            printf("%d   %s   %c   %c   %s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
        }
    }
    system("pause");
    return 0;
}