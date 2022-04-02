#include <stdio.h>

int fun2(int **p)
{
    int b = 8;
    *p = &b;
    printf("%d ", **p);
}

void main()
{
    system("cls");
    int a = 10, *p = &a;
    fun2(&p);
    printf("%d ", *p);
}