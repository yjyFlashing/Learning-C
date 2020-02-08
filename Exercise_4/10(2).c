#include <stdio.h>
#include <stdlib.h>
/**
 *使用switch语句实现梯度式提成计算
 * */ 
int main()
{
    double profit,award;
    double bon1,bon2,bon4,bon6,bon10;
    int temp;
    /**
     * 计算低于分段利润
     * */
    bon1 = 100000*0.1;
    bon2 = bon1 + 100000*0.075;
    bon4 = bon2 + 100000*0.05;
    bon6 = bon4 + 100000*0.03;
    bon10 = bon6 + 400000*0.015;
    printf("Please enter the profit:\n");
    scanf("%lf",&profit);
    temp = profit/100000;       //double转int自动完成,表达式结果是double
    /**
     * 计算高于分段利润并求和
     * */
    switch(temp)
    {
        case 0: award = 0.1*profit;     //注意这种使用switch进行分段的方法
                break;
        case 1: award = bon1+(profit-100000)*0.075;
                break;
        case 2: case 3: award = bon2+(profit-200000)*0.05;
                break;
        case 4: case 5: award = bon4+(profit-400000)*0.03;
                break;
        case 6: case 7: case 8: case 9:award = bon6+(profit-600000)*0.015;
                break;
        default: award = bon10+(profit-1000000)*0.01;
                break;
    }
    printf("The award is %10.2lf\n",award);
    system("pause");
    return 0;
}