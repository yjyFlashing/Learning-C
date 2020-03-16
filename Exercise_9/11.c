#include <stdio.h>
#include <stdlib.h>
/**
 * 删除两个链表中的相同元素
 * */
struct Student
{
    long num;
    char name[10];
    struct Student *next;
};

#define LEN sizeof(struct Student)

int main()
{
    struct Student* creat(void);     //创建链表
    struct Student* Compare(struct Student* a,struct Student* b);       //对比并删除相同元素
    void print(struct Student *head);    //输出链表

    struct Student *a,*b,*c;
    printf("Please enter list a:\n");
    a = creat();
    printf("Please enter list b:\n");
    b = creat();
    c = Compare(a,b);
    print(c);
    system("pause");
    return 0;
}

struct Student* creat(void)     //创建链表
{
    struct Student *p1,*p2,*head;
    p2 = p1 = (struct Student*)malloc(LEN);     //一开始使得p2和p1指向同一块区域，p2一定要为其分配内存空间
    printf("Please enter student information\n");
    scanf("%d %s",&p1->num,p1->name);
    if(p1->num == 0) return NULL;
    head = p2;
    while (p1->num != 0)    //程序约定的规则
    {
        //以下几句的顺序不能变
        p2->next = p1;
        p2 = p1;    //改变当前指向
        p1 = (struct Student*)malloc(LEN);      //为新的节点分配空间
        printf("Please enter student information\n");
        scanf("%d %s",&p1->num,p1->name);
    }
    p2->next = NULL;        //设置表尾
    return head;
}

struct Student* Compare(struct Student* a,struct Student* b)
{
    struct Student* delete_node(struct Student *head,long n);   //用于比较过程中删除节点
    struct Student *p1 = a,*p2 = b,*head = a;
    do{
        do
        {
            if (p1->num == p2->num)
            {
                head = delete_node(head,p1->num);     //新的表头
            }
            p2 = p2->next;
        } while (p2 != NULL);
        p2 = b;     //重新设置p2
        p1 = p1->next;
    }while(p1 != NULL);
    return head;
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

void print(struct Student *head)    //输出链表
{
    struct Student *point;
    point = head;
    while(point != NULL)
    {
        printf("%d %s\n",point->num,point->name);   
        point = point->next;
    }
}