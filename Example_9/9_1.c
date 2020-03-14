#include <stdio.h>
#include <stdlib.h>
/**
 * 结构体变量的初始化和引用
 * */
int main()
{
    struct Student
    {
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }a = {10101,"Li Min",'M',"123 Beijing Road"};
    printf("No. %ld\nname : %s\nsex : %c\naddress : %s\n",a.num,a.name,a.sex,a.addr);
    system("pause");
    return 0;
}