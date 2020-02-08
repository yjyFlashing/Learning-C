#include <stdio.h>
#include <stdlib.h>
/**
 * 本程序来源于书本P124的一个解释，并对其进行实验，测试C语言I/O缓冲区的存在
 * 当输入输出遇到换行符时才执行真正的操作，其余时候输入的字符先存放在缓冲区中，
 * 按下换行符才执行输出，将之前输入进入缓冲区的内容一并输出
 * */
int main()
{
    char c;
    /**
     * test1
     * getchar()函数的执行就是采用了行缓冲。第一次调用getchar()函数会让程序使用者（用户）输入一行字符并直至按下回车键 函数才返回。
     * 此时用户输入的字符和回车符都存放在行缓冲区。再次调用getchar()函数，会逐步输出行缓冲区的内容
     * */
    for(;(c = getchar())!='\n';)            //注意输出的内容
    printf("%c",c);
    /**
     * test2
     * */
    scanf("%c",&c);
    for (;c != '\n';)
    {
        printf("%c",c);
        scanf("%c",&c);
    }
    /**
     * test3
     * */
    while (1)
    {
        c = getchar();
        putchar(c);
    }
           
    system("pause");
    return 0;
}