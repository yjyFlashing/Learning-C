extern int A;       //引用file1.c中的全局变量

int power(int n)
{
    int i,y = 1;
    for ( i = 1; i <= n; i++)
    {
        y*=A;
    }
    return y;
}