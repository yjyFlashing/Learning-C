#include <stdio.h>
#include <stdlib.h>
/**
 * FIXME:将两个链表进行合并,并升序排列(排序未完成)
 * */
#define LEN sizeof(struct Student) 

struct Student{
    long num;
    float score;
    struct Student *next;
};

int main()
{
    void print(struct Student *head);
    struct Student* creat(void);
    struct Student* combine(struct Student *list1,struct Student *list2);
    struct Student *l1,*l2,*list;
    printf("Please create the list1 data:\n");
    l1 = creat();
    print(l1);
    printf("Please create the list2 data:\n");
    l2 = creat();
    print(l2);
    printf("The combined list:\n");
    list = combine(l1,l2);
    print(list);
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

void print(struct Student *head)    //输出链表
{
    struct Student *point;
    point = head;
    while(point != NULL)
    {
        printf("%d %5.1f\n",point->num,point->score);   
        point = point->next;
    }
}

struct Student* combine(struct Student *list1,struct Student *list2)
{
    struct Student *head = list1,*p1;
    p1 = list1;
    while(p1->next != NULL)      //找到p1的结尾并记录
    {
        p1 = p1->next;
    }
    p1->next = list2;
    return head;
}