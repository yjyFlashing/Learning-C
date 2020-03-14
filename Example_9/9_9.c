#include <stdio.h>
#include <stdlib.h>
/**
 * 建立动态链表
 * 原理：p1为先行指针，p2为当前指针，p1开辟内存空间后，由p2指向，为p2开路
 * */
#define LEN sizeof(struct Student)  //获取一个结构体类型的所占用的内存大小

struct Student
{
    long num;
    float score;
    struct Student *next;
};

int main()
{
    struct Student* creat(void);        //创建动态链表
    struct Student *p;
    p = creat();        //获取表头指针
    printf("num : %d\nscore : %5.1f\n",p->num,p->score);       //输出表头元素
    system("pause");
    return 0;
}

struct Student* creat(void)
{
    struct Student *p1,*p2,*head;
    p2 = p1 = (struct Student*)malloc(LEN);     //一开始使得p2和p1指向同一块区域，p2一定要为其分配内存空间
    printf("Please enter student information\n");
    scanf("%d %f",&p1->num,&p1->score);
    if(p1->num == 0) return NULL;
    head = p2;
    while (p1->num != 0)    //程序约定的规则
    {
        //以下几句的顺序不能变
        p2->next = p1;
        p2 = p1;    //改变当前指向
        p1 = (struct Student*)malloc(LEN);      //为新的节点分配空间
        printf("Please enter student information\n");
        scanf("%d %f",&p1->num,&p1->score);
    }
    p2->next = NULL;        //设置表尾
    return head;
} 