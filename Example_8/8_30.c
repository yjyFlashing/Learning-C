#include <stdio.h>
#include <stdlib.h>
/**
 * 动态配指针的内存空间
 * */
int main()
{
    void *check_60(int *score);
    int *score;
    score = (int *)malloc(5*sizeof(int));      //分配5*4 = 20个字节的空间
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",score+i);        //注：这里不应该使用score++来进行赋值，这样会导致后面输出时无法从正确的地址指向并输出
    }
    printf("They are failed:");
    for (i = 0; i < 5; i++)
    {
        if(check_60(score) != NULL)
        {
            printf("%6d",*score);
        }
        score++;        //这里score的偏移步长是4个字节，按照基类型长度进行偏移
    }
    free(score);    //释放内存
    system("pause");
    return 0;
}

void *check_60(int *score)
{
    if(*score < 60)
    {
        return score;
    }else
    {
        return NULL;
    }
}
