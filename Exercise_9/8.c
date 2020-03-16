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
    void insert_node(struct Student *head,struct Student *obj,long n);   //插入节点

    int n;
    struct Student *p1,*p2,*object;
    p1 = creat();
    while(1)
    {
        printf("which node you want to insert:\n");
        scanf("%d",&n);
        object = (struct Student*)malloc(LEN);      //每插入一个新的节点就需要为新的节点重新分配一次内存
        insert_node(p1,object,n);
        print(p1);        
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
    if (n)  //若n为0则表示无需插入节点
    {
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
}