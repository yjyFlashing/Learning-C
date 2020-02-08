#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,s,area;    
    a = 3.67;
    b = 5.43;
    c = 6.21;
    s = (a+b+c)/2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));     //sqrt()是开根号函数
    printf("s = %f",s);     //输出周长
    printf("area = %f",area);  //输出面积
    system("pause");
    return 0 ;
}