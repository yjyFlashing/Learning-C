#include <stdio.h>
#include <stdlib.h>
/**
 * 二进制向文件读写相关数据
 * */
#define LEN 10
struct Student
{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[LEN];

void save()
{
    FILE *fp;
    int i;
    if((fp = fopen("file1.dat","wb")) == NULL)      //创建新文件
    {
        printf("ERROR\n");
    }
    for ( i = 0; i < LEN; i++)
    {
        if (fwrite(&stud[i],sizeof(struct Student),1,fp) != 1)       //写入文件
        {
            printf("ERROR");
        }
    }
    fclose(fp);
}

void read()
{
    FILE *fp;
    int i;
    if((fp = fopen("file1.dat","rb")) == NULL)      //读取二进制文件
    {
        printf("ERROR\n");
    }
    for(i = 0;i < LEN;i++)
    {
        fread(&stud[i],sizeof(struct Student),1,fp);        //读取二进制文件中的数据到数组中
        printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
    }
    fclose(fp);     //一定要记得保存
}

int main()
{
    printf("Please enter:\n");
    for (int i = 0; i < LEN; i++)
    {
        scanf("%s %d %d %s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
    }
    //存储为二进制文件
    save();
    //从二进制文件中读取数据
    read();
    system("pause");
    return 0;
}
