#include <stdio.h>
#include <stdlib.h>
/**
 * 职工管理系统设计
 * */
//TODO
int main()
{
    char em[10][100];
    system("pause");
    return 0;
}


void Input_employee(char data[][100])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter the information of the students:\n");      //使用空格进行区分
        gets(data[i]);
    }
}

void Sort_employee(char data[][100])
{

    
}