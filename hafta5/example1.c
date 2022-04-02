#include <stdio.h>

void a(int *p)
{
    printf("%d\n", *p); // garbage value gelmeli
}

void main()
{
    system("cls");
    int i = 10;
    int *p = &i;
    a(++p);
}