#include <stdio.h>
#include <stdlib.h>
/**
 * 整合链表的基本功能
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
    void print(struct Student *point);      //输出链表
    void insert_node(struct Student *head,struct Student *obj,long n);   //插入节点
    struct Student* delete_node(struct Student *head,long n);   //删除节点

    long n1,n2;
    struct Student *p1,*p2,*object;     //p1用于输出插入后的链表元素，p2用于输出删除后的链表元素
    p1 = creat();
    while(1)
    {
        //插入节点
        printf("which node you want to insert:\n");
        scanf("%d",&n1);
        object = (struct Student*)malloc(LEN);      //每插入一个新的节点就需要为新的节点重新分配一次内存
        insert_node(p1,object,n1);  //n1不等于链表中的元素则无作用
        print(p1);
        //删除节点
        printf("which node you want to delete:\n");
        scanf("%d",&n2);
        p2 = delete_node(p1,n2);    //n2不等于链表中的元素则无作用
        if(p2 != NULL)
        {
            print(p2);
            p1 = p2;            
        }
    }
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

void insert_node(struct Student *head,struct Student *obj,long n)    //指定位置后方插入节点
{
    struct Student *p = head,*temp;
    printf("Please enter a new node:\n");
    scanf("%d %f",&obj->num,&obj->score);
    while (1)
    {
        if (p->num == n)
        {
            temp = p->next;
            p->next = obj;
            obj->next = temp;
            break;
        }
        p = p->next;
    }
}

struct Student* delete_node(struct Student *head,long n)        //删除节点
{
    struct Student *p = head;
    struct Student *temp = p;        //记录上一个的节点
    while (temp->next != NULL)          //链表中的节点与下一节点在每一步中的地址为什么一定要判断清楚
    {      
        if(n == p->num) //查询到了应当删除的节点
        {
            if (p == head)  //需要删除的是第一个节点
            {
                return p->next;
            }else   //需要删除的不是下一个节点
            {
                temp->next = p->next;       //跳过当前节点
                break;
            }
        }
        temp = p; 
        p = p->next;
    }
    if(p == NULL) 
    {
        printf("No this number\n");
        return NULL;      //查遍表都没有此元素
    }
    return head;
}