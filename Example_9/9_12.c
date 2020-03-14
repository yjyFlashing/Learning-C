#include <stdio.h>
#include <stdlib.h>
/**
 * 使用枚举类型解决五色球取球问题
 * */    
enum Color {red,yellow,blue,white,black};

int main()
{
    void print_color(enum Color ball);

    int i,j,n,counter = 1;
    enum Color ball1,ball2,ball3;
    for ( i = red; i <= black;i++)
    {       
        /**
         * 注：在gcc中，若i为enum则，i不能进行算术运算，因此可将其设置为整型，用于偏移，再强制转型来实现枚举类型的元素偏移
         * 而VC++中可以直接使用enum来进行算术运算
         * */ 
        ball1 = (enum Color)i;          
        for ( j = red; j <= black;j++)
        {
            if(j != ball1)
            {
                ball2 = (enum Color)j;
                for ( n = red; n <= black; n++)
                {
                    if (n != ball1 && n != ball2)
                    {
                        ball3 = (enum Color)n;
                        printf("%d  ",counter++);
                        print_color(ball1);//输出第一个球的颜色
                        print_color(ball2); //输出第二个球的颜色
                        print_color(ball3);     //
                        printf("\n");
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}

void print_color(enum Color ball)        //输出球的颜色
{
    switch (ball)
    {
    case red:
        printf("red  ");
        break;
    case yellow:
        printf("yellow  ");
        break;
    case blue :
        printf("blue  ");
        break;
    case white:
        printf("white  ");
        break;
    case black:
        printf("black  ");
        break;
    }
}