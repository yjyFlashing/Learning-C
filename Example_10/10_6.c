#include <stdio.h>
#include <stdlib.h>
/**
 * 实现文件的随机读写
 * */
struct Student
{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[10];

int main()
{
    int i;
    FILE *fp;
    if((fp = fopen("stu.dat","rb")) == NULL)
    {
        printf("No this file\n");
        exit(0);
    }
    for ( i = 0; i < 10; i = i+2)
    {
        fseek(fp,i*sizeof(struct Student),0);
        fread(&stud[i],sizeof(struct Student),1,fp);
        printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
    }
    fclose(fp);
    system("pause");
    return 0;
}

