#include <stdio.h>
#include <stdlib.h>
/**
 * 输入年龄删除全部与对应年龄相符的节点
 * */
#define SIZE sizeof(struct Person)
struct Person
{
    int num;
    char name[10];
    char sex;
    int year;
    struct Person *next;
};

int main()
{
    struct Person* creat_node();
    void print_nodes(struct Person *head);
    void delete_nodes(struct Person *head,int num);

    struct Person *head;
    int age;
    head = creat_node();
    printf("Please enter the age:\n");
    scanf("%d",&age);
    delete_nodes(head,age);
    print_nodes(head);
    system("pause");
    return 0;
}

struct Person* creat_node()
{
    struct Person *head,*p1,*p2;
    head = p1 = p2 = (struct Person*)malloc(SIZE);
    printf("Please enter the information:\n");
    scanf("%d %s %c %d",&p2->num,p2->name,&p2->sex,&p2->year);   //设置第一个起始节点
    if(p2->num == 0) return NULL;
    else{
        do{
            p1 = (struct Person*)malloc(SIZE);  //p1向前开辟空间
            p2->next = p1;  //p2下一节点指向新空间
            p2 = p1;    //p2指向新空间
            printf("Please enter the information:\n");
            scanf("%d %s %c %d",&p2->num,p2->name,&p2->sex,&p2->year);   //输入新空间的内容
        }while(p2->num != 0);
    }
    p2->next = NULL;        //设置表尾
    return head;    //返回起始节点的地址
}

void print_nodes(struct Person *head)
{
    struct Person *p = head;
    if(p != NULL)   //不是空表才进行输出
    {
        do
        {
            printf("%d %s %c %d\n",p->num,p->name,p->sex,p->year);
            p = p->next;
        }while (p->next != NULL); 
    }
}

struct Person* delete_node(struct Person *head,int n)        //删除单个指定节点节点
{
    struct Person *p = head;
    struct Person *temp = p;        //记录上一个的节点
    while (temp->next != NULL)          //链表中的节点与下一节点在每一步中的地址为什么一定要判断清楚
    {      
        if(n == p->year) //查询到了应当删除的节点
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
        return NULL;      //查遍表都没有此元素
    }
    return head;
}

void delete_nodes(struct Person *head,int num)      //删除一个列表中的多个节点
{
    struct Person *p = head ,*temp = head;
    while (1)
    {
        p = delete_node(p,num);
        if(p == NULL) break;
    }
}