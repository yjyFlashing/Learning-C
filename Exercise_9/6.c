#include <stdio.h>
#include <stdlib.h>
/**
 * 链表实现1，2，3报数问题
 * 使用动态链表实现
 * 本程序中Link_init()是错误示范，Link_init2()是正确示范
 * */
#define LEN sizeof(struct Link)

struct Link{
    int num;    //原始编号
    struct Link *next;      //下一节点
};

int main()
{
    struct Link*p;
    struct Link* Link_init(void);        //ERROR动态链表初始化
    struct Link* Link_init2(void);      //RIGHT!!!
    void Remain_order(struct Link* head);   //输出最后剩下的人的序号
    struct Link *head;
    head = Link_init2();
    Remain_order(head);
    system("pause");
    return 0;
}

struct Link* Link_init(void)        //ERROR动态循环链表初始化
{
    struct Link *p1,*p2,*head;
    head = p2 =(struct Link*)malloc(LEN);    //为其动态分配节点内存
    for (int i = 0; i < 13; i++)
    {
        p1 = (struct Link*)malloc(LEN);    //MARK:这样会设置空表尾，使得空表尾的下一个指向才是head,因此会导致无法正常输出
        p2->next = p1;
        p2->num = i+1;    //分配编号
        p2 = p1;
    }
    p2->next = head;        //设置循环表尾
    return head;        //返回数据表头
}

struct Link* Link_init2(void)
{
    struct Link *p1,*p2,*head;
    head = p2  = (struct Link*)malloc(LEN);    //为其动态分配节点内存
    for (int i = 0; i < 13; i++)
    {
        p2->num = i+1;
        p1 = (struct Link*)malloc(LEN);    //p1向前动态分配节点内存
        if((i+1) != 13)                     //判断是否为最后一个(防止设置了空表尾)
        {
            p2->next = p1;
            p2 = p1;
        }else
        {
            p2->next = head;        //设置循环表尾
        }
    }
    return head;
}

void Remain_order(struct Link* head)
{
    int n = 0,zero_counter = 0;
    struct Link *p;
    p = head;
    while(zero_counter < 12)
    {
        if (p->num != 0)
        {
            n++;
            if(n == 3)      //逢3置0
            {
                n = 0;
                printf("%3d",p->num);   //输出淘汰编号
                p->num = 0;
                zero_counter++;
            }
        }
        p = p->next;
    }
    printf("\n");
    p = head;
    for (int i = 0; i < 13; i++)
    {
        if(p->num != 0) printf("The last one is %d\n",p->num);
        p = p->next;        
    }

}
