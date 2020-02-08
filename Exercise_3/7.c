/**
 * 此编译器默认char为signed char
 * */
#include <stdio.h>
#include <stdlib.h>

#define Pi 3.1415926

int main()
{
    float r,h,l,s,s_ball,v_ball,v_volume;
    printf("Please input r and h:");
    scanf("%f %f",&r,&h);
    l = 2*Pi*r;
    s = Pi*r*r;
    s_ball = 4*Pi*r*r;
    v_ball = (3.0/4.0)*Pi*r*r*r;    //注意3.0/4.0的表示方法，直接用3/4算出来是0。00
    v_volume = s * h;
    printf("l = %6.2f\ns = %6.2f\ns_ball = %6.2f\nv_ball = %6.2f\nv_volume = %6.2f\n",l,s,s_ball,v_ball,v_volume); 
    system("pause");
    return 0;
}