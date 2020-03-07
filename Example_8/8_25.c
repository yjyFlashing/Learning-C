#include <stdio.h>
#include <stdlib.h>
/**
 * a个学生，b们课程，查同学，输出成绩
 * */
int main()
{
    float* search(float (*num)[4],int i);

    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    
    float *addr;
    int i,k;
    printf("Please enter the number of the student:\n");
    scanf("%d",&i);
    printf("The score of N0. %d is :\n",i);
    addr = search(score,i);
    for ( k = 0; k < 4; k++)
    {
        printf("%6.1f",*(addr+k));
    }
    
    system("pause");
    return 0;
}

float* search(float (*num)[4],int i)
{
    return *(num+i);
}