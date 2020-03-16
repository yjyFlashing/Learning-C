#include <stdio.h>
#include <stdlib.h>
/**
 * 删除链表中的指定节点
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
    struct Student* delete_node(struct Student *head,long n);   //删除指定位置节点
    int n;
    struct Student *p1,*p2;

    p1 = creat();
    while(1)
    {
        printf("which node you want to delete:\n");
        scanf("%d",&n);
        p2 = delete_node(p1,n);
        p1 = p2;
        print(p2);        
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
    return head;
}