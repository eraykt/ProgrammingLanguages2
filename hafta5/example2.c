#include <stdio.h>

void main()
{
    system("cls");
    char *a[10] = {"hi", "hello", "how"};
    printf("%d\n", sizeof(a)); // 10 * 8
}