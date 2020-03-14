#include <stdio.h>
#include <stdlib.h>
/**
 * 输出链表中的数据
 * */
#define LEN sizeof(struct Student)  //获取一个结构体类型的所占用的内存大小

struct Student{
    long num;
    float score;
    struct Student *next;
};

int main()
{
    struct Student* creat(void);     //创建链表
    void print(struct Student *point);

    struct Student *p;
    p = creat();
    print(p);
    system("pause");
    return 0;
}

struct Student* creat(void)     //创建链表
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

void print(struct Student *head)
{
    struct Student *point;
    point = head;
    while(point != NULL)
    {
        printf("%d %5.1f\n",point->num,point->score);   
        point = point->next;
    }
}