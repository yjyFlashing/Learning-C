#include <stdio.h>
#include <stdlib.h>
/**
 * 输入3个整数，按照由小到大的顺序输出
 * */
int main()
{
    void exchange(int*,int*,int*);

    int a,b,c;
    int *p1,*p2,*p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("Please enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    exchange(p1,p2,p3);
    printf("%d %d %d",a,b,c);
    system("pause");
    return 0;
}

void exchange(int *n1,int *n2,int *n3)
{
    void swap(int *,int *);
    if(*n1 > *n2)   swap(n1,n2);
    if(*n1 > *n3)   swap(n1,n3);
    if(*n2 > *n3)   swap(n2,n3);
}

void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}