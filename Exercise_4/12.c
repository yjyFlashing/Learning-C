#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求塔高
 * */ 
int main()
{
    float x,y;
    float d1,d2,d3,d4;
    printf("Please enter the horizon:\n");
    scanf("%f %f",&x,&y);
    d1 = sqrt((x+2)*(x+2)+(y-2)*(y-2));
    d2 = sqrt((x-2)*(x-2)+(y-2)*(y-2));
    d3 = sqrt((x+2)*(x+2)+(y+2)*(y+2));
    d4 = sqrt((x-2)*(x-2)+(y+2)*(y+2));
    if(d1>1&&d2>1&&d3>1&&d4>1) printf("The height is 0m");
    else printf("The height is 10m");
    system("pause");
    return 0;
}