# 第三章例题
## 3.1
    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
    float f = 64,c;
    c = (5.0/9)*(f - 32);  
    //5/9和5.0/9的区别：5/9认为是两个整型相除，得到的还是整型，5.0/9得到的是浮点型
    printf("f=%f\n c=%f\n",f,c);
    system("pause");
    return 0;
    }
## 3.2
    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
    float p0 = 1000,r1 = 0.0036,r2 = 0.0225,r3 = 0.0198,p1,p2,p3;
    p1 = p0*(1+r1);
    p2 = p0*(1+r2);
    p3 = p0*(1+r3/2)*(1+r3/2);//半年只有一半的年利率
    printf("p1 = %f\n p2 = %f\n p3 = %f\n",p1,p2,p3);
    system("pause");
    return 0;
    }