#include <stdio.h>
#include <stdlib.h>
/**
 * 建立简单的静态链表(节点都在程序中有所定义，不是临时开辟的，使用结束后也不能进行释放)
 * */
struct Student
{
    int num;
    float score;
    struct Student *next;
};
int main()
{
    struct Student a,b,c,*head,*p;
    a.num = 10101; a.score = 89.5;
    b.num = 10103; b.score = 90;
    c.num = 10107; c.score = 85;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;      //表尾
    p = head;
    do{
        printf("%d %5.1f\n",p->num,p->score);
        p = p->next;        //指向下一个结点
    }while(p != NULL);
    system("pause");
    return 0;
}