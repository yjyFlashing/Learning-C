#include <stdio.h>
#include <stdlib.h>
/**
 * 根据例8.25,找出其中有不及格的学程的学生与学生号
 * */
int main()
{
    float *search(float (*p)[4],int n);
    int i,j;
    float *row;
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    for (i = 0; i < 3; i++)
    {
        row = search(score,i);
        if(row != NULL) 
        {
            printf("No.%d:",i+1);
            for ( j = 0; j < 4; j++)
            {
                printf("%6.2f",*(row+j));
            }        
            printf("\n");
        }
    }
    system("pause");
    return 0;
}

//有返回值的函数，无论返回值是数值还是指针，都应当有确切的返回值
float *search(float (*p)[4],int n)
{
    int j;
    for ( j = 0; j < 4; j++)
    {
        if(*(*(p+n)+j) < 60)
        {
            return *(p+n);     //返回行首地址
            break;
        }
    }
    return NULL;        //这里要记得返回NULL，否则会有警告
}