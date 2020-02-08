#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * */ 
int main()
{
    float score;
    char c;
    printf("Please enter the number:\n");
    scanf("%f",&score);
    while (score>100 || score< 0)
    {       
        printf("The number is out of the scope\nPlease enter again:\n");
        scanf("%f",&score);
    }
    if(score >=90)
    {
        c = 'A';
    }else if(score>=80)
    {
        c = 'B';
    }else if(score>=70)
    {
        c = 'C';
    }else if(score>=60)
    {
        c = 'D';
    }else
    {
        c = 'E';
    }
    printf("The result is %c",c);
    system("pause");
    return 0;
}