#include <stdio.h>
#include <stdlib.h>
/**
 * 等级划分成绩
 * */
int main()
{
    char grade;
    printf("Please input the grade:\n");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A': printf("85 to 100\n"); break;
    case 'B': printf("70 to 84\n"); break;
    case 'C': printf("60 to 69");break;
    case 'D': printf("under 60");break;
    default: printf("The data is out of the scope\n");
    }
    system("pause");
    return 0;
}