#include <stdio.h>

void fun(int x)
{
    if (x > 0)
    {
        fun(--x);
        printf("%d\t", x);
        fun(--x);
    }
}

void main()
{
    system("cls");
    int a = 4;
    fun(4);
}