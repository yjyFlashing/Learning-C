#include <stdio.h>
#include <stdlib.h>
/**
 * 求10人成绩中的最大值，最小值和平均值
 * */
float max,min,aver;

int main()
{  
    void max_and_min(float n[]);
    void average(float n[]); 

    float num[10];
    int i;
    printf("Please enter ten people score:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&num[i]);
    }
    max_and_min(num);
    average(num);
    printf("The maxium is %5.2f\n",max);
    printf("The minium is %5.2f\n",min);
    printf("The average is %5.2f\n",aver);
    system("pause");
    return 0;
}

void max_and_min(float n[])
{
    int i;
    max = min = n[0];
    for ( i = 0; i < 10; i++)
    {
        if(max < n[i])    max = n[i];
        if(min > n[i])    min = n[i];
    }
    
}

void average(float n[])
{
    float sum =  0;
    for (int i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    aver = sum/10;
}
