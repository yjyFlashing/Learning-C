#include <stdio.h>
#include <stdlib.h>
/**
 * 编写一个函数new，对n对n个字符开辟连续的存储空间
 * free用来释放内存空间
 * 大致描述开辟存储区的原理
 * */
#define MAXSIZE 1000
char newbuf[MAXSIZE];
char *p = newbuf;       //p作为空间结束指针，一开始未分配时，与起始位置一致

int main()
{
    
    system("pause");
    return 0;
}

char* new(int n)
{
    if (p + n <= newbuf + MAXSIZE)
    {
        p += n;         //p指向下一次分配的内存空间的起始位置
        return p - n;
    }else
    {
        return NULL;
    }
}

void free(char *head)
{
    if (head >= newbuf && head <= newbuf + MAXSIZE)
    {
        p = head;
    }
}
